#define signal_cxx
#include "signal.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "LumiReweightingStandAlone.h"
#include "ScaleFactor.h"
void signal::Loop()
{

   if (fChain == 0) return;
TH1* mass_fourHist=new TH1D("signal_mmtt","signal_mmtt",40,0,400);
  TH1* mass_fourHist1=new TH1D("signal_mmee","signal_mmee",40,0,400);
  TH1* mass_fourHist2=new TH1D("signal_mmem","signal_mmem",40,0,400);
  TH1* mass_fourHist3=new TH1D("signal_mmet","signal_mmet",40,0,400);
  TH1* mass_fourHist4=new TH1D("signal_mmmm","signal_mmmm",40,0,400);
  TH1* mass_fourHist5=new TH1D("signal_mmmt","signal_mmmt",40,0,400);
  TH1* mass_a1_1=new TH1D("mass_a1_mmee","mass_a1_mmee",15,0,150);
  TH1* mass_a2_1=new TH1D("mass_a2_mmee","mass_a2_mmee",15,0,150);
  TH1* mass_a1_2=new TH1D("mass_a1_mmme","mass_a1_mmme",15,0,150);
  TH1* mass_a2_2=new TH1D("mass_a2_mmme","mass_a2_mmme",15,0,150);
    TH1* mass_a1_3=new TH1D("mass_a1_mmet","mass_a1_mmet",15,0,150);
  TH1* mass_a2_3=new TH1D("mass_a2_mmet","mass_a2_mmet",15,0,150);
    TH1* mass_a1_4=new TH1D("mass_a1_mmmm","mass_a1_mmmm",15,0,150);
  TH1* mass_a2_4=new TH1D("mass_a2_mmmm","mass_a2_mmmm",15,0,150);
  TH1* mass_a1_5=new TH1D("mass_a1_mmmt","mass_a1_mmmt",15,0,150);
  TH1* mass_a2_5=new TH1D("mass_a2_mmmt","mass_a2_mmmt",15,0,150);
    TH1* mass_a1_6=new TH1D("mass_a1_mmtt","mass_a1_mmtt",15,0,150);
  TH1* mass_a2_6=new TH1D("mass_a2_mmtt","mass_a2_mmtt",15,0,150);
    TH1* DR_1=new TH1D("DR_1","DR_1",1,0,100);

   Float_t sigma=1;
      Float_t lamda=12900;
      Float_t nmc=250000;
      Float_t w=sigma*lamda/nmc;
   Int_t neventcount=0;
   Int_t neventcount1=0;
   Int_t neventcount2=0;
   Int_t neventcount3=0;
   Int_t neventcount4=0;
   Int_t neventcount5=0;
   
  reweight::LumiReWeighting* LumiWeights_12;
    LumiWeights_12 = new reweight::LumiReWeighting("MC_Spring16_PU25ns_V1.root", "MyDataPileupHistogram.root", "pileup", "pileup");
 ScaleFactor * myScaleFactor_id = new ScaleFactor();
   myScaleFactor_id->init_ScaleFactor("LeptonEfficiencies/Electron/Run2016BCD/Electron_IdIso0p10_eff.root");
   ScaleFactor * myScaleFactor_id_muon = new ScaleFactor();
   myScaleFactor_id_muon->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BCD/Muon_IdIso0p15_eff.root");
   
   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      if ((channel==1 || channel==3 || channel==6) && (pt_1<10 || pt_2<10)) continue;
      if ((channel==2 || channel==5) && pt_2<10 && pt_3<10) continue;
      if ((channel==1 || channel==2) && pt_4<10) continue;
      if ((channel==1 || channel==3) && pt_3<10) continue;
      if (channel==4 && pt_2<10 && pt_3<10 && pt_4<10) continue;
      if (muiso_1>0.25 || muiso_2>0.25) continue;      
      if (pt_1<20 || pt_2<10) continue;

      if (channel==1){
	 if (q_1*q_2<0 && q_3*q_4<0 && eid90_3==1 && eid90_4==1){
	   if (eiso_3<0.25 && eiso_4<0.25){
	     
	    Float_t pu=LumiWeights_12->weight(npu);
	    Float_t sm1=myScaleFactor_id_muon->get_ScaleFactor(pt_1,eta_1);
            Float_t sm2=myScaleFactor_id_muon->get_ScaleFactor(pt_2,eta_2);
	    Float_t s3=myScaleFactor_id->get_ScaleFactor(pt_3,eta_3);
	    Float_t s4=myScaleFactor_id->get_ScaleFactor(pt_4,eta_4);
	    Float_t w1=w*pu*s3*s4*sm1*sm2;
	    //Float_t  w1=w*pu*s3*s4*sm1*sm2*0.5210084034;
	    neventcount1=neventcount1+1;
	    mass_fourHist1->Fill(m_four,w1);
	    mass_a1_1->Fill(m_pair1,w1);
	    mass_a2_1->Fill(m_pair2,w1);
	       std::cout<< "mmee"
	    <<m_pair2<<std::endl;
	  Float_t MeanValue1=mass_fourHist1->GetMean();
	  Float_t Stdev1=mass_fourHist1->GetStdDev();
	  Float_t Resolution1=Stdev1/MeanValue1;

	  Float_t Deta=(eta_3-eta_4)**2;
	  Float_t Dphi=(phi_3-phi_4)**2;
	     Float_t deltaR_1=sqrt(Deta+Dphi);
	     std::cout<<"Deta="<<Deta<<std::endl;
	     std::cout<<"Dphi="<<Dphi<<std::endl;
	     std::cout<<"deltaR_1="<<deltaR_1<<std::endl;
	     DR_1->Fill(deltaR_1);
	  
	  }
	  }
	  }
       
       elseif (channel==6){
       if (q_1*q_2<0 && q_3*q_4<0 && antimuL_3==1 && antimuL_4==1&& antieleVL_3==1 && antieleVL_4==1) {
	  if  (tauMVAisoL_4==1 && tauMVAisoL_3==1){
	   
	  Float_t pu=LumiWeights_12->weight(npu);
	  Float_t sm1=myScaleFactor_id_muon->get_ScaleFactor(pt_1,eta_1);
          Float_t sm2=myScaleFactor_id_muon->get_ScaleFactor(pt_2,eta_2);
	  Float_t w6=pu*w*0.9*0.9*sm1*sm2;
	  // Float_t w6=pu*w*0.9*0.9*sm1*sm2*0.0323709536;
	  neventcount=neventcount+1;
	  mass_fourHist->Fill(m_four,w6);
	  mass_a1_6->Fill(m_pair1,w6);
	  mass_a2_6->Fill(m_pair2,w6);
	  Float_t MeanValue=mass_fourHist->GetMean();
	  Float_t Stdev=mass_fourHist->GetStdDev();
	  Float_t Resolution=Stdev/MeanValue;
	 }
      }
            }

       
	 else if (channel==2){
	if(q_1*q_2<0 && q_3*q_4<0 && eid90_4==1 && muidL_3==1){
	  if(muiso_3<0.25 && eiso_4<0.25 ){
	    
	  neventcount2=neventcount2+1;
	  Float_t pu=LumiWeights_12->weight(npu);
	  Float_t sm1=myScaleFactor_id_muon->get_ScaleFactor(pt_1,eta_1);
          Float_t sm2=myScaleFactor_id_muon->get_ScaleFactor(pt_2,eta_2);
	  Float_t sm3=myScaleFactor_id_muon->get_ScaleFactor(pt_3,eta_3);
	  Float_t s4=myScaleFactor_id->get_ScaleFactor(pt_4,eta_4);
	  Float_t w2=w*sm1*sm2*sm3*s4*pu;
	  // Float_t w2=w*sm1*sm2*sm3*s4*pu*0.1704035874;
	  mass_fourHist2->Fill(m_four,w2);
	  mass_a1_2->Fill(m_pair1,w2);
          mass_a2_2->Fill(m_pair2,w2);
	     std::cout<< "mmme "
	    <<m_pair2<<std::endl;
	  Float_t MeanValue2=mass_fourHist2->GetMean();
	  Float_t Stdev2=mass_fourHist2->GetStdDev();
	  Float_t Resolution2=Stdev2/MeanValue2;
	   }
	 }
	 }
	 
	 
       else if (channel==3){
	   	      if (q_1*q_2<0 && q_3*q_4<0 && eid90_3==1 && antieleT_4==1 && antimuL_4==1) {
		if (eiso_3<0.25 && tauMVAisoM_4==1){
          neventcount3=neventcount3+1;
	  Float_t pu=LumiWeights_12->weight(npu);
	  Float_t sm1=myScaleFactor_id_muon->get_ScaleFactor(pt_1,eta_1);
          Float_t sm2=myScaleFactor_id_muon->get_ScaleFactor(pt_2,eta_2);
	  Float_t s3=myScaleFactor_id->get_ScaleFactor(pt_3,eta_3);
	  Float_t w3=w*pu*sm1*sm2*s3*0.9;
	  //Float_t w3=w*pu*sm1*sm2*s3*0.9*0.0231660232;
	  mass_fourHist3->Fill(m_four,w3);
	  mass_a1_3->Fill(m_pair1,w3);
	  mass_a2_3->Fill(m_pair2,w3);
	  Float_t MeanValue3=mass_fourHist3->GetMean();
	  Float_t Stdev3=mass_fourHist3->GetStdDev();
	  Float_t Resolution3=Stdev3/MeanValue3;
      }
      }
	}
	 
       else if (channel==4){
	    if (q_1*q_2<0 && q_3*q_4<0 && muidL_3==1 && muidL_4==1){
	   if(muiso_3<0.25 && muiso_4<0.25){
	   Float_t pu=LumiWeights_12->weight(npu);
	  Float_t sm1=myScaleFactor_id_muon->get_ScaleFactor(pt_1,eta_1);
          Float_t sm2=myScaleFactor_id_muon->get_ScaleFactor(pt_2,eta_2);
	  Float_t sm3=myScaleFactor_id_muon->get_ScaleFactor(pt_3,eta_3);
          Float_t sm4=myScaleFactor_id_muon->get_ScaleFactor(pt_4,eta_4);
	  Float_t  w4=w*pu*sm1*sm2*sm3*sm4;
	  //Float_t  w4=w*pu*sm1*sm2*sm3*sm4*0.1162123386;
         neventcount4=neventcount4+1;
	 mass_fourHist4->Fill(m_four,w4);
	 mass_a1_4->Fill(m_pair1,w4);
	 mass_a2_4->Fill(m_pair2,w4);
	  Float_t MeanValue4=mass_fourHist4->GetMean();
	  Float_t Stdev4=mass_fourHist4->GetStdDev();
	  Float_t Resolution4=Stdev4/MeanValue4;
	}
      }
	}
	   
       	 	 else if(channel==5){
         if (q_1*q_2<0 && q_3*q_4<0 && muidL_3==1 && antieleVL_4==1 && antimuT_4==1) {
	   if(muiso_3<0.25 && tauMVAisoM_4==1 ){
          neventcount5=neventcount5+1;
	   Float_t pu=LumiWeights_12->weight(npu);
	  Float_t sm1=myScaleFactor_id_muon->get_ScaleFactor(pt_1,eta_1);
          Float_t sm2=myScaleFactor_id_muon->get_ScaleFactor(pt_2,eta_2);
	  Float_t sm3=myScaleFactor_id_muon->get_ScaleFactor(pt_3,eta_3);
	  Float_t w5=pu*sm1*sm2*sm3*w*0.9;
	    // Float_t w5=pu*sm1*sm2*sm3*w*0.9*0.0633561644;
	  mass_fourHist5->Fill(m_four,w5);
	  mass_a1_5->Fill(m_pair1,w5);
	  mass_a2_5->Fill(m_pair2,w5);
	  Float_t MeanValue5=mass_fourHist5->GetMean();
	  Float_t Stdev5=mass_fourHist5->GetStdDev();
	  Float_t Resolution5=Stdev5/MeanValue5;
	   }
	 }
		 }
   }
   std::cout<< "The number of events left is "
	    <<neventcount<<std::endl;
   std::cout<<"Resolution = "
	    <<Resolution<<std::endl;
   std::cout<<"standard deviation= "
	    <<Stdev<<std::endl;
   std::cout<<"mean value="
	    <<MeanValue<<std::endl;
    std::cout<< "mmee The number of events left is "
	    <<neventcount1<<std::endl;
   std::cout<<"Resolution = "
	    <<Resolution1<<std::endl;
   std::cout<<"standard deviation= "
	    <<Stdev1<<std::endl;
   std::cout<<"mean value="
	    <<MeanValue1<<std::endl;
   std::cout<< "mmem The number of events left is "
	    <<neventcount2<<std::endl;
   std::cout<<"Resolution = "
	    <<Resolution2<<std::endl;
   std::cout<<"standard deviation= "
	    <<Stdev2<<std::endl;
   std::cout<<"mean value="
	    <<MeanValue2<<std::endl;
    std::cout<< "mmet The number of events left is "
	    <<neventcount3<<std::endl;
   std::cout<<"Resolution = "
	    <<Resolution3<<std::endl;
   std::cout<<"standard deviation= "
	    <<Stdev3<<std::endl;
   std::cout<<"mean value="
	    <<MeanValue3<<std::endl;
   std::cout<< "mmmm The number of events left is "
	    <<neventcount4<<std::endl;
   std::cout<<"Resolution = "
	    <<Resolution4<<std::endl;
   std::cout<<"standard deviation= "
	    <<Stdev4<<std::endl;
   std::cout<<"mean value="
	    <<MeanValue4<<std::endl;
    std::cout<< "mmmt The number of events left is "
	    <<neventcount5<<std::endl;
   std::cout<<"Resolution = "
	    <<Resolution5<<std::endl;
   std::cout<<"standard deviation= "
	    <<Stdev5<<std::endl;
   std::cout<<"mean value="
	    <<MeanValue5<<std::endl;
 csignal_6test=new
 TCanvas("signaltest","signaltest",800,600);
 csignal_6test->Divide(1,1);
 csignal_6test->cd(1);
 gStyle->SetOptStat(0);
 DR_1->Draw();
   
    csignal_6b=new
 TCanvas("signal","signal",800,600);
    csignal_6b->Divide(6,3);
 csignal_6b->cd(1);
 gStyle->SetOptStat(0);
 mass_fourHist->Draw();
 mass_fourHist->GetXaxis()->SetTitle("mass m_{mmtt} [GeV]");
   mass_fourHist->GetYaxis()->SetTitle("Events/4");
   mass_fourHist->SetFillColor(kBlue);
   mass_fourHist->SetLineColor(kBlack);
   mass_fourHist->SetMarkerStyle(21);
   mass_fourHist->SetMarkerSize(0.7);
   mass_fourHist->SetFillStyle(3490);
   mass_fourHist->SetTitle("mmtt");
      csignal_6b->cd(2);
   mass_fourHist4->Draw();
   mass_fourHist4->GetXaxis()->SetTitle("mass m_{mmmm} [GeV]");
   mass_fourHist4->GetYaxis()->SetTitle("Events/4");
   mass_fourHist4->SetFillColor(kBlue);
   mass_fourHist4->SetLineColor(kBlack);
   mass_fourHist4->SetMarkerStyle(21);
   mass_fourHist4->SetMarkerSize(0.7);
   mass_fourHist4->SetFillStyle(3490);
   mass_fourHist4->SetTitle("mmmm");
   csignal_6b->cd(3);
   mass_fourHist3->Draw();
   mass_fourHist3->GetXaxis()->SetTitle("mass m_{mmtt} [GeV]");
   mass_fourHist3->GetYaxis()->SetTitle("Events/4");
   mass_fourHist3->SetFillColor(kBlue);
   mass_fourHist3->SetLineColor(kBlack);
   mass_fourHist3->SetMarkerStyle(21);
   mass_fourHist3->SetMarkerSize(0.7);
   mass_fourHist3->SetFillStyle(3490);
   mass_fourHist3->SetTitle("mmet");
   csignal_6b->cd(4);
   mass_fourHist2->Draw();
   mass_fourHist2->GetXaxis()->SetTitle("mass m_{mmem} [GeV]");
   mass_fourHist2->GetYaxis()->SetTitle("Events/4");
   mass_fourHist2->SetFillColor(kBlue);
    mass_fourHist2->SetLineColor(kBlack);
   mass_fourHist2->SetMarkerStyle(21);
   mass_fourHist2->SetMarkerSize(0.7);
   mass_fourHist2->SetFillStyle(3490);
   mass_fourHist2->SetTitle("mmme");
 csignal_6b->cd(5);
   mass_fourHist1->Draw();
   mass_fourHist1->GetXaxis()->SetTitle("mass m_{mmee} [GeV]");
   mass_fourHist1->GetYaxis()->SetTitle("Events/4");
   mass_fourHist1->SetFillColor(kBlue);
     mass_fourHist1->SetLineColor(kBlack);
   mass_fourHist1->SetMarkerStyle(21);
   mass_fourHist1->SetMarkerSize(0.7);
   mass_fourHist1->SetFillStyle(3490);
   mass_fourHist1->SetTitle("mmee");
   csignal_6b->cd(6);
   mass_fourHist5->Draw();
   mass_fourHist5->GetXaxis()->SetTitle("mass m_{mmmt} [GeV]");
   mass_fourHist5->GetYaxis()->SetTitle("Events/4");
   mass_fourHist5->SetFillColor(kBlue);
   mass_fourHist5->SetLineColor(kBlack);
   mass_fourHist5->SetMarkerStyle(21);
   mass_fourHist5->SetMarkerSize(0.7);
   mass_fourHist5->SetFillStyle(3490);
   mass_fourHist5->SetTitle("mmmt");
   csignal_6b->cd(7);
   mass_a1_1->Draw();
   mass_a1_1->GetXaxis()->SetTitle("mass a1_{mmee} [GeV]");
   mass_a1_1->GetYaxis()->SetTitle("Events/4");
   mass_a1_1->SetFillColor(kBlue);
   mass_a1_1->SetLineColor(kBlack);
   mass_a1_1->SetMarkerStyle(21);
   mass_a1_1->SetMarkerSize(0.7);
   mass_a1_1->SetFillStyle(3490);
   mass_a1_1->SetTitle("mass_a1_mmee");
   csignal_6b->cd(8);
   mass_a2_1->Draw();
   mass_a2_1->GetXaxis()->SetTitle("mass a2_{mmee} [GeV]");
   mass_a2_1->GetYaxis()->SetTitle("Events/4");
   mass_a2_1->SetFillColor(kBlue);
   mass_a2_1->SetLineColor(kBlack);
   mass_a2_1->SetMarkerStyle(21);
   mass_a2_1->SetMarkerSize(0.7);
   mass_a2_1->SetFillStyle(3490);
   mass_a2_1->SetTitle("mass_a2_mmee");
      csignal_6b->cd(9);
   mass_a1_2->Draw();
   mass_a1_2->GetXaxis()->SetTitle("mass a1_{mmme} [GeV]");
   mass_a1_2->GetYaxis()->SetTitle("Events/4");
   mass_a1_2->SetFillColor(kBlue);
   mass_a1_2->SetLineColor(kBlack);
   mass_a1_2->SetMarkerStyle(21);
   mass_a1_2->SetMarkerSize(0.7);
   mass_a1_2->SetFillStyle(3490);
   mass_a1_2->SetTitle("mass_a1_mmme");
   csignal_6b->cd(10);
   mass_a2_1->Draw();
   mass_a2_2->GetXaxis()->SetTitle("mass a2_{mmme} [GeV]");
   mass_a2_2->GetYaxis()->SetTitle("Events/4");
   mass_a2_2->SetFillColor(kBlue);
   mass_a2_2->SetLineColor(kBlack);
   mass_a2_2->SetMarkerStyle(21);
   mass_a2_2->SetMarkerSize(0.7);
   mass_a2_2->SetFillStyle(3490);
   mass_a2_2->SetTitle("mass_a2_mmme");
   csignal_6b->cd(11);
   mass_a1_3->Draw();
   mass_a1_3->GetXaxis()->SetTitle("mass a1_{mmet} [GeV]");
   mass_a1_3->GetYaxis()->SetTitle("Events/4");
   mass_a1_3->SetFillColor(kBlue);
   mass_a1_3->SetLineColor(kBlack);
   mass_a1_3->SetMarkerStyle(21);
   mass_a1_3->SetMarkerSize(0.7);
   mass_a1_3->SetFillStyle(3490);
   mass_a1_3->SetTitle("mass_a1_mmet");
   csignal_6b->cd(12);
   mass_a2_3->Draw();
   mass_a2_3->GetXaxis()->SetTitle("mass a2_{mmet} [GeV]");
   mass_a2_3->GetYaxis()->SetTitle("Events/4");
   mass_a2_3->SetFillColor(kBlue);
   mass_a2_3->SetLineColor(kBlack);
   mass_a2_3->SetMarkerStyle(21);
   mass_a2_3->SetMarkerSize(0.7);
   mass_a2_3->SetFillStyle(3490);
   mass_a2_3->SetTitle("mass_a2_mmet");
   csignal_6b->cd(13);
   mass_a1_4->Draw();
   mass_a1_4->GetXaxis()->SetTitle("mass a1_{mmmm} [GeV]");
   mass_a1_4->GetYaxis()->SetTitle("Events/4");
   mass_a1_4->SetFillColor(kBlue);
   mass_a1_4->SetLineColor(kBlack);
   mass_a1_4->SetMarkerStyle(21);
   mass_a1_4->SetMarkerSize(0.7);
   mass_a1_4->SetFillStyle(3490);
   mass_a1_4->SetTitle("mass_a1_mmmm");
   csignal_6b->cd(14);
   mass_a2_4->Draw();
   mass_a2_4->GetXaxis()->SetTitle("mass a2_{mmmm} [GeV]");
   mass_a2_4->GetYaxis()->SetTitle("Events/4");
   mass_a2_4->SetFillColor(kBlue);
   mass_a2_4->SetLineColor(kBlack);
   mass_a2_4->SetMarkerStyle(21);
   mass_a2_4->SetMarkerSize(0.7);
   mass_a2_4->SetFillStyle(3490);
   mass_a2_4->SetTitle("mass_a2_mmmm");
   csignal_6b->cd(15);
   mass_a1_5->Draw();
   mass_a1_5->GetXaxis()->SetTitle("mass a1_{mmmt} [GeV]");
   mass_a1_5->GetYaxis()->SetTitle("Events/4");
   mass_a1_5->SetFillColor(kBlue);
   mass_a1_5->SetLineColor(kBlack);
   mass_a1_5->SetMarkerStyle(21);
   mass_a1_5->SetMarkerSize(0.7);
   mass_a1_5->SetFillStyle(3490);
   mass_a1_5->SetTitle("mass_a1_mmmt");
   csignal_6b->cd(16);
   mass_a2_5->Draw();
   mass_a2_5->GetXaxis()->SetTitle("mass a2_{mmmt} [GeV]");
   mass_a2_5->GetYaxis()->SetTitle("Events/4");
   mass_a2_5->SetFillColor(kBlue);
   mass_a2_5->SetLineColor(kBlack);
   mass_a2_5->SetMarkerStyle(21);
   mass_a2_5->SetMarkerSize(0.7);
   mass_a2_5->SetFillStyle(3490);
   mass_a2_5->SetTitle("mass_a2_mmmt");
   csignal_6b->cd(17);
   mass_a1_6->Draw();
   mass_a1_6->GetXaxis()->SetTitle("mass a1_{mmtt} [GeV]");
   mass_a1_6->GetYaxis()->SetTitle("Events/4");
   mass_a1_6->SetFillColor(kBlue);
   mass_a1_6->SetLineColor(kBlack);
   mass_a1_6->SetMarkerStyle(21);
   mass_a1_6->SetMarkerSize(0.7);
   mass_a1_6->SetFillStyle(3490);
   mass_a1_6->SetTitle("mass_a1_mmtt");
   csignal_6b->cd(18);
   mass_a2_6->Draw();
   mass_a2_6->GetXaxis()->SetTitle("mass a2_{mmtt} [GeV]");
   mass_a2_6->GetYaxis()->SetTitle("Events/4");
   mass_a2_6->SetFillColor(kBlue);
   mass_a2_6->SetLineColor(kBlack);
   mass_a2_6->SetMarkerStyle(21);
   mass_a2_6->SetMarkerSize(0.7);
   mass_a2_6->SetFillStyle(3490);
   mass_a2_6->SetTitle("mass_a2_mmtt");
   TFile* outfile=new TFile("signal.root","RECREATE");
   TList* hList=new TList();
   hList->Add(mass_fourHist);
   hList->Add(mass_fourHist1);
   hList->Add(mass_fourHist2);
   hList->Add(mass_fourHist3);
   hList->Add(mass_fourHist4);
   hList->Add(mass_fourHist5);
   hList->Add(mass_a1_1);
   hList->Add(mass_a2_1);
   hList->Add(mass_a1_2);
   hList->Add(mass_a2_2);
   hList->Add(mass_a1_3);
   hList->Add(mass_a2_3);
   hList->Add(mass_a1_4);
   hList->Add(mass_a2_4);
   hList->Add(mass_a1_5);
   hList->Add(mass_a2_5);
   hList->Add(mass_a1_6);
   hList->Add(mass_a2_6);
   hList->Write();
   outfile->Close();
}
