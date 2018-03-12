// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc630dIsrcdIDataFormatsdITauRecodIsrcdIDataFormatsTauRecodIadIDataFormatsTauReco_xr

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"

#include <DataFormats/Common/interface/RefToPtr.h>

// Header files passed as explicit arguments
#include "src/DataFormats/TauReco/src/classes_2.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)
   {
      ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >", ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >","edm::Ref<std::vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTau>,reco::PFTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)
   {
      ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >", ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >","edm::Ref<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)
   {
      ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >", ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >","edm::Ref<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)
   {
      ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >", ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >","edm::Ref<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_Dictionary();
   static void edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)
   {
      ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >", ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >::Class_Version(), "DataFormats/Common/interface/Ref.h", 153,
                  typeid(::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >) );
      instance.SetNew(&new_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >","reco::CaloTauDiscriminatorByIsolationRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)0x0)->GetClass();
      edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_Dictionary();
   static void edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p);
   static void destruct_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)
   {
      ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >", ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >::Class_Version(), "DataFormats/Common/interface/Ref.h", 153,
                  typeid(::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >) );
      instance.SetNew(&new_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >","reco::CaloTauDiscriminatorRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)0x0)->GetClass();
      edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaselErecocLcLPFTaugR_Dictionary();
   static void edmcLcLRefToBaselErecocLcLPFTaugR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaselErecocLcLPFTaugR(void *p = 0);
   static void *newArray_edmcLcLRefToBaselErecocLcLPFTaugR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaselErecocLcLPFTaugR(void *p);
   static void deleteArray_edmcLcLRefToBaselErecocLcLPFTaugR(void *p);
   static void destruct_edmcLcLRefToBaselErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBase<reco::PFTau>*)
   {
      ::edm::RefToBase<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBase<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBase<reco::PFTau>", ::edm::RefToBase<reco::PFTau>::Class_Version(), "DataFormats/Common/interface/RefToBase.h", 65,
                  typeid(::edm::RefToBase<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaselErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBase<reco::PFTau>) );
      instance.SetNew(&new_edmcLcLRefToBaselErecocLcLPFTaugR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaselErecocLcLPFTaugR);
      instance.SetDelete(&delete_edmcLcLRefToBaselErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaselErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaselErecocLcLPFTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBase<reco::PFTau>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBase<reco::PFTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBase<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaselErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBase<reco::PFTau>*)0x0)->GetClass();
      edmcLcLRefToBaselErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaselErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::PFTau> >*)
   {
      ::edm::RefProd<vector<reco::PFTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::PFTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::PFTau> >", ::edm::RefProd<vector<reco::PFTau> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::PFTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::PFTau> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::PFTau> >","edm::RefProd<std::vector<reco::PFTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::PFTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::PFTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::PFTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::PFTau> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::RecoTauPiZero> >*)
   {
      ::edm::RefProd<vector<reco::RecoTauPiZero> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::RecoTauPiZero> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::RecoTauPiZero> >", ::edm::RefProd<vector<reco::RecoTauPiZero> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::RecoTauPiZero> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::RecoTauPiZero> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::RecoTauPiZero> >","edm::RefProd<std::vector<reco::RecoTauPiZero> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::RecoTauPiZero> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::RecoTauPiZero> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::RecoTauPiZero> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::RecoTauPiZero> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >*)
   {
      ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::PFRecoTauChargedHadron> >", ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::PFRecoTauChargedHadron> >","edm::RefProd<std::vector<reco::PFRecoTauChargedHadron> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::PFTauDecayMode> >*)
   {
      ::edm::RefProd<vector<reco::PFTauDecayMode> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::PFTauDecayMode> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::PFTauDecayMode> >", ::edm::RefProd<vector<reco::PFTauDecayMode> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::PFTauDecayMode> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::PFTauDecayMode> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::PFTauDecayMode> >","edm::RefProd<std::vector<reco::PFTauDecayMode> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::PFTauDecayMode> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::PFTauDecayMode> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::PFTauDecayMode> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::PFTauDecayMode> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR_Dictionary();
   static void edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p);
   static void deleteArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p);
   static void destruct_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>*)
   {
      ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<reco::CaloTauDiscriminatorByIsolation>", ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>) );
      instance.SetNew(&new_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR);
      instance.SetDelete(&delete_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR);

      ::ROOT::AddClassAlternate("edm::RefProd<reco::CaloTauDiscriminatorByIsolation>","reco::CaloTauDiscriminatorByIsolationRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>*)0x0)->GetClass();
      edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR_Dictionary();
   static void edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(void *p);
   static void deleteArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(void *p);
   static void destruct_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<reco::CaloTauDiscriminator>*)
   {
      ::edm::RefProd<reco::CaloTauDiscriminator> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<reco::CaloTauDiscriminator>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<reco::CaloTauDiscriminator>", ::edm::RefProd<reco::CaloTauDiscriminator>::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<reco::CaloTauDiscriminator>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<reco::CaloTauDiscriminator>) );
      instance.SetNew(&new_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR);
      instance.SetDelete(&delete_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR);

      ::ROOT::AddClassAlternate("edm::RefProd<reco::CaloTauDiscriminator>","reco::CaloTauDiscriminatorRefProd");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<reco::CaloTauDiscriminator>*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<reco::CaloTauDiscriminator>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<reco::CaloTauDiscriminator>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<reco::CaloTauDiscriminator>*)0x0)->GetClass();
      edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)
   {
      ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >", ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >","edm::RefVector<std::vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTau>,reco::PFTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)
   {
      ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >", ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >","edm::RefVector<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)
   {
      ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >", ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >","edm::RefVector<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)
   {
      ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >", ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >","edm::RefVector<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_Dictionary();
   static void edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)
   {
      ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >", ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >) );
      instance.SetNew(&new_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >","reco::CaloTauDiscriminatorByIsolationRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)0x0)->GetClass();
      edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_Dictionary();
   static void edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)
   {
      ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >", ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >) );
      instance.SetNew(&new_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >","reco::CaloTauDiscriminatorRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)0x0)->GetClass();
      edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaseVectorlErecocLcLPFTaugR_Dictionary();
   static void edmcLcLRefToBaseVectorlErecocLcLPFTaugR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(void *p = 0);
   static void *newArray_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(void *p);
   static void deleteArray_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(void *p);
   static void destruct_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBaseVector<reco::PFTau>*)
   {
      ::edm::RefToBaseVector<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBaseVector<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBaseVector<reco::PFTau>", ::edm::RefToBaseVector<reco::PFTau>::Class_Version(), "DataFormats/Common/interface/RefToBaseVector.h", 27,
                  typeid(::edm::RefToBaseVector<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaseVectorlErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBaseVector<reco::PFTau>) );
      instance.SetNew(&new_edmcLcLRefToBaseVectorlErecocLcLPFTaugR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaseVectorlErecocLcLPFTaugR);
      instance.SetDelete(&delete_edmcLcLRefToBaseVectorlErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaseVectorlErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaseVectorlErecocLcLPFTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBaseVector<reco::PFTau>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBaseVector<reco::PFTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBaseVector<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaseVectorlErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBaseVector<reco::PFTau>*)0x0)->GetClass();
      edmcLcLRefToBaseVectorlErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaseVectorlErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::PFTau> >*)
   {
      ::edm::Wrapper<vector<reco::PFTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::PFTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::PFTau> >", ::edm::Wrapper<vector<reco::PFTau> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::PFTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::PFTau> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::PFTau> >","edm::Wrapper<std::vector<reco::PFTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::PFTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::PFTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::PFTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::PFTau> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >","edm::Wrapper<edm::RefVector<std::vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTau>,reco::PFTau> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >*)
   {
      ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >", ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::PFTauDecayMode> >*)
   {
      ::edm::Wrapper<vector<reco::PFTauDecayMode> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::PFTauDecayMode> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::PFTauDecayMode> >", ::edm::Wrapper<vector<reco::PFTauDecayMode> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::PFTauDecayMode> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::PFTauDecayMode> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::PFTauDecayMode> >","edm::Wrapper<std::vector<reco::PFTauDecayMode> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::PFTauDecayMode> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::PFTauDecayMode> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::PFTauDecayMode> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::PFTauDecayMode> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >*)
   {
      ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >", ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >","edm::Wrapper<edm::Association<std::vector<reco::PFTauDecayMode> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >*)
   {
      ::edm::Wrapper<edm::Association<vector<reco::PFTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Association<vector<reco::PFTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Association<vector<reco::PFTau> > >", ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Association<vector<reco::PFTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::Association<vector<reco::PFTau> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Association<vector<reco::PFTau> > >","edm::Wrapper<edm::Association<std::vector<reco::PFTau> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Association<vector<reco::PFTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::RecoTauPiZero> >*)
   {
      ::edm::Wrapper<vector<reco::RecoTauPiZero> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::RecoTauPiZero> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::RecoTauPiZero> >", ::edm::Wrapper<vector<reco::RecoTauPiZero> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::RecoTauPiZero> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::RecoTauPiZero> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::RecoTauPiZero> >","edm::Wrapper<std::vector<reco::RecoTauPiZero> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::RecoTauPiZero> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::RecoTauPiZero> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::RecoTauPiZero> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::RecoTauPiZero> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >*)
   {
      ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >", ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >","edm::Wrapper<std::vector<reco::PFRecoTauChargedHadron> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR_Dictionary();
   static void edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p);
   static void deleteArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p);
   static void destruct_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>*)
   {
      ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>", ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>) );
      instance.SetNew(&new_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR);
      instance.SetDelete(&delete_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>*)0x0)->GetClass();
      edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR_Dictionary();
   static void edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(void *p);
   static void deleteArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(void *p);
   static void destruct_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<reco::CaloTauDiscriminator>*)
   {
      ::edm::Wrapper<reco::CaloTauDiscriminator> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<reco::CaloTauDiscriminator>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<reco::CaloTauDiscriminator>", ::edm::Wrapper<reco::CaloTauDiscriminator>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<reco::CaloTauDiscriminator>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<reco::CaloTauDiscriminator>) );
      instance.SetNew(&new_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR);
      instance.SetDelete(&delete_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<reco::CaloTauDiscriminator>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<reco::CaloTauDiscriminator>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<reco::CaloTauDiscriminator>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<reco::CaloTauDiscriminator>*)0x0)->GetClass();
      edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR_Dictionary();
   static void edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR_TClassManip(TClass*);
   static void delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR(void *p);
   static void destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::BaseHolder<reco::PFTau>*)
   {
      ::edm::reftobase::BaseHolder<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::BaseHolder<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::BaseHolder<reco::PFTau>", ::edm::reftobase::BaseHolder<reco::PFTau>::Class_Version(), "DataFormats/Common/interface/BaseHolder.h", 28,
                  typeid(::edm::reftobase::BaseHolder<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::BaseHolder<reco::PFTau>) );
      instance.SetDelete(&delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::BaseHolder<reco::PFTau>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::BaseHolder<reco::PFTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::BaseHolder<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::BaseHolder<reco::PFTau>*)0x0)->GetClass();
      edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >","edm::reftobase::Holder<reco::BaseTau,edm::Ref<std::vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTau>,reco::PFTau> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >","edm::reftobase::Holder<reco::PFTau,reco::PFTauRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >*)
   {
      ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >", ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >","edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >*)
   {
      ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >", ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >","edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >*)
   {
      ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >", ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >","edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR_Dictionary();
   static void edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(void *p);
   static void destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::IndirectHolder<reco::PFTau>*)
   {
      ::edm::reftobase::IndirectHolder<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::IndirectHolder<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::IndirectHolder<reco::PFTau>", ::edm::reftobase::IndirectHolder<reco::PFTau>::Class_Version(), "DataFormats/Common/interface/IndirectHolder.h", 24,
                  typeid(::edm::reftobase::IndirectHolder<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::IndirectHolder<reco::PFTau>) );
      instance.SetNew(&new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::IndirectHolder<reco::PFTau>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::IndirectHolder<reco::PFTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::IndirectHolder<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::IndirectHolder<reco::PFTau>*)0x0)->GetClass();
      edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >::Class_Version(), "DataFormats/Common/interface/RefHolder_.h", 20,
                  typeid(::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >","edm::reftobase::RefHolder<reco::PFTauRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR_Dictionary();
   static void edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR_TClassManip(TClass*);
   static void delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR(void *p);
   static void destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::BaseVectorHolder<reco::PFTau>*)
   {
      ::edm::reftobase::BaseVectorHolder<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::BaseVectorHolder<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::BaseVectorHolder<reco::PFTau>", ::edm::reftobase::BaseVectorHolder<reco::PFTau>::Class_Version(), "DataFormats/Common/interface/BaseVectorHolder.h", 13,
                  typeid(::edm::reftobase::BaseVectorHolder<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::BaseVectorHolder<reco::PFTau>) );
      instance.SetDelete(&delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::BaseVectorHolder<reco::PFTau>*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::BaseVectorHolder<reco::PFTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::BaseVectorHolder<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::BaseVectorHolder<reco::PFTau>*)0x0)->GetClass();
      edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefToBaseProdlErecocLcLPFTaugR_Dictionary();
   static void edmcLcLRefToBaseProdlErecocLcLPFTaugR_TClassManip(TClass*);
   static void *new_edmcLcLRefToBaseProdlErecocLcLPFTaugR(void *p = 0);
   static void *newArray_edmcLcLRefToBaseProdlErecocLcLPFTaugR(Long_t size, void *p);
   static void delete_edmcLcLRefToBaseProdlErecocLcLPFTaugR(void *p);
   static void deleteArray_edmcLcLRefToBaseProdlErecocLcLPFTaugR(void *p);
   static void destruct_edmcLcLRefToBaseProdlErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefToBaseProd<reco::PFTau>*)
   {
      ::edm::RefToBaseProd<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefToBaseProd<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefToBaseProd<reco::PFTau>", ::edm::RefToBaseProd<reco::PFTau>::Class_Version(), "DataFormats/Common/interface/RefToBaseProd.h", 29,
                  typeid(::edm::RefToBaseProd<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefToBaseProdlErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefToBaseProd<reco::PFTau>) );
      instance.SetNew(&new_edmcLcLRefToBaseProdlErecocLcLPFTaugR);
      instance.SetNewArray(&newArray_edmcLcLRefToBaseProdlErecocLcLPFTaugR);
      instance.SetDelete(&delete_edmcLcLRefToBaseProdlErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefToBaseProdlErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_edmcLcLRefToBaseProdlErecocLcLPFTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefToBaseProd<reco::PFTau>*)
   {
      return GenerateInitInstanceLocal((::edm::RefToBaseProd<reco::PFTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefToBaseProd<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefToBaseProdlErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefToBaseProd<reco::PFTau>*)0x0)->GetClass();
      edmcLcLRefToBaseProdlErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefToBaseProdlErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary();
   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p = 0);
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t size, void *p);
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>::Class_Version(), "DataFormats/Common/interface/AssociationVector.h", 62,
                  typeid(::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>) );
      instance.SetNew(&new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetNewArray(&newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDelete(&delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDestructor(&destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);

      ::ROOT::AddClassAlternate("edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>","reco::CaloTauDiscriminatorByIsolationBase");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0)->GetClass();
      edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary();
   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p = 0);
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t size, void *p);
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>::Class_Version(), "DataFormats/Common/interface/AssociationVector.h", 62,
                  typeid(::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>) );
      instance.SetNew(&new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetNewArray(&newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDelete(&delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);
      instance.SetDestructor(&destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR);

      ::ROOT::AddClassAlternate("edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>","reco::CaloTauDiscriminatorBase");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)0x0)->GetClass();
      edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLRecoTauPiZero_Dictionary();
   static void recocLcLRecoTauPiZero_TClassManip(TClass*);
   static void *new_recocLcLRecoTauPiZero(void *p = 0);
   static void *newArray_recocLcLRecoTauPiZero(Long_t size, void *p);
   static void delete_recocLcLRecoTauPiZero(void *p);
   static void deleteArray_recocLcLRecoTauPiZero(void *p);
   static void destruct_recocLcLRecoTauPiZero(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::RecoTauPiZero*)
   {
      ::reco::RecoTauPiZero *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::RecoTauPiZero));
      static ::ROOT::TGenericClassInfo 
         instance("reco::RecoTauPiZero", 14, "DataFormats/TauReco/interface/RecoTauPiZero.h", 7,
                  typeid(::reco::RecoTauPiZero), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLRecoTauPiZero_Dictionary, isa_proxy, 12,
                  sizeof(::reco::RecoTauPiZero) );
      instance.SetNew(&new_recocLcLRecoTauPiZero);
      instance.SetNewArray(&newArray_recocLcLRecoTauPiZero);
      instance.SetDelete(&delete_recocLcLRecoTauPiZero);
      instance.SetDeleteArray(&deleteArray_recocLcLRecoTauPiZero);
      instance.SetDestructor(&destruct_recocLcLRecoTauPiZero);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::RecoTauPiZero*)
   {
      return GenerateInitInstanceLocal((::reco::RecoTauPiZero*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::RecoTauPiZero*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLRecoTauPiZero_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::RecoTauPiZero*)0x0)->GetClass();
      recocLcLRecoTauPiZero_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLRecoTauPiZero_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLPFRecoTauChargedHadron_Dictionary();
   static void recocLcLPFRecoTauChargedHadron_TClassManip(TClass*);
   static void *new_recocLcLPFRecoTauChargedHadron(void *p = 0);
   static void *newArray_recocLcLPFRecoTauChargedHadron(Long_t size, void *p);
   static void delete_recocLcLPFRecoTauChargedHadron(void *p);
   static void deleteArray_recocLcLPFRecoTauChargedHadron(void *p);
   static void destruct_recocLcLPFRecoTauChargedHadron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::PFRecoTauChargedHadron*)
   {
      ::reco::PFRecoTauChargedHadron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::PFRecoTauChargedHadron));
      static ::ROOT::TGenericClassInfo 
         instance("reco::PFRecoTauChargedHadron", 14, "DataFormats/TauReco/interface/PFRecoTauChargedHadron.h", 20,
                  typeid(::reco::PFRecoTauChargedHadron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLPFRecoTauChargedHadron_Dictionary, isa_proxy, 12,
                  sizeof(::reco::PFRecoTauChargedHadron) );
      instance.SetNew(&new_recocLcLPFRecoTauChargedHadron);
      instance.SetNewArray(&newArray_recocLcLPFRecoTauChargedHadron);
      instance.SetDelete(&delete_recocLcLPFRecoTauChargedHadron);
      instance.SetDeleteArray(&deleteArray_recocLcLPFRecoTauChargedHadron);
      instance.SetDestructor(&destruct_recocLcLPFRecoTauChargedHadron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::PFRecoTauChargedHadron*)
   {
      return GenerateInitInstanceLocal((::reco::PFRecoTauChargedHadron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::PFRecoTauChargedHadron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLPFRecoTauChargedHadron_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::PFRecoTauChargedHadron*)0x0)->GetClass();
      recocLcLPFRecoTauChargedHadron_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLPFRecoTauChargedHadron_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLPFTau_Dictionary();
   static void recocLcLPFTau_TClassManip(TClass*);
   static void *new_recocLcLPFTau(void *p = 0);
   static void *newArray_recocLcLPFTau(Long_t size, void *p);
   static void delete_recocLcLPFTau(void *p);
   static void deleteArray_recocLcLPFTau(void *p);
   static void destruct_recocLcLPFTau(void *p);

   // Schema evolution read functions
   static void read_recocLcLPFTau_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_leadPFChargedHadrCand_ = oldObj->GetId("leadPFChargedHadrCand_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRef &leadPFChargedHadrCand_;
         recocLcLPFTau_Onfile(reco::PFCandidateRef &onfile_leadPFChargedHadrCand_ ): leadPFChargedHadrCand_(onfile_leadPFChargedHadrCand_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_leadPFChargedHadrCand_ = oldObj->GetClass()->GetDataMemberOffset("leadPFChargedHadrCand_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRef*)(onfile_add+offset_Onfile_recocLcLPFTau_leadPFChargedHadrCand_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_leadPFChargedHadrCand_ = cls->GetDataMemberOffset("leadPFChargedHadrCand_");
      reco::PFCandidatePtr& leadPFChargedHadrCand_ = *(reco::PFCandidatePtr*)(target+offset_leadPFChargedHadrCand_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     leadPFChargedHadrCand_ = edm::refToPtr(onfile.leadPFChargedHadrCand_);
   }
   static void read_recocLcLPFTau_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_leadPFNeutralCand_ = oldObj->GetId("leadPFNeutralCand_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRef &leadPFNeutralCand_;
         recocLcLPFTau_Onfile(reco::PFCandidateRef &onfile_leadPFNeutralCand_ ): leadPFNeutralCand_(onfile_leadPFNeutralCand_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_leadPFNeutralCand_ = oldObj->GetClass()->GetDataMemberOffset("leadPFNeutralCand_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRef*)(onfile_add+offset_Onfile_recocLcLPFTau_leadPFNeutralCand_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_leadPFNeutralCand_ = cls->GetDataMemberOffset("leadPFNeutralCand_");
      reco::PFCandidatePtr& leadPFNeutralCand_ = *(reco::PFCandidatePtr*)(target+offset_leadPFNeutralCand_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     leadPFNeutralCand_ = edm::refToPtr(onfile.leadPFNeutralCand_);
   }
   static void read_recocLcLPFTau_2( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_leadPFCand_ = oldObj->GetId("leadPFCand_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRef &leadPFCand_;
         recocLcLPFTau_Onfile(reco::PFCandidateRef &onfile_leadPFCand_ ): leadPFCand_(onfile_leadPFCand_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_leadPFCand_ = oldObj->GetClass()->GetDataMemberOffset("leadPFCand_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRef*)(onfile_add+offset_Onfile_recocLcLPFTau_leadPFCand_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_leadPFCand_ = cls->GetDataMemberOffset("leadPFCand_");
      reco::PFCandidatePtr& leadPFCand_ = *(reco::PFCandidatePtr*)(target+offset_leadPFCand_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     leadPFCand_ = edm::refToPtr(onfile.leadPFCand_);
   }
   static void read_recocLcLPFTau_3( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_selectedSignalPFCands_ = oldObj->GetId("selectedSignalPFCands_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRefVector &selectedSignalPFCands_;
         recocLcLPFTau_Onfile(reco::PFCandidateRefVector &onfile_selectedSignalPFCands_ ): selectedSignalPFCands_(onfile_selectedSignalPFCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_selectedSignalPFCands_ = oldObj->GetClass()->GetDataMemberOffset("selectedSignalPFCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTau_selectedSignalPFCands_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_selectedSignalPFCands_ = cls->GetDataMemberOffset("selectedSignalPFCands_");
      vector<reco::PFCandidatePtr>& selectedSignalPFCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_selectedSignalPFCands_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
   selectedSignalPFCands_.reserve(onfile.selectedSignalPFCands_.size());
for(auto const& ref : onfile.selectedSignalPFCands_) { 
   selectedSignalPFCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTau_4( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_selectedSignalPFChargedHadrCands_ = oldObj->GetId("selectedSignalPFChargedHadrCands_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRefVector &selectedSignalPFChargedHadrCands_;
         recocLcLPFTau_Onfile(reco::PFCandidateRefVector &onfile_selectedSignalPFChargedHadrCands_ ): selectedSignalPFChargedHadrCands_(onfile_selectedSignalPFChargedHadrCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_selectedSignalPFChargedHadrCands_ = oldObj->GetClass()->GetDataMemberOffset("selectedSignalPFChargedHadrCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTau_selectedSignalPFChargedHadrCands_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_selectedSignalPFChargedHadrCands_ = cls->GetDataMemberOffset("selectedSignalPFChargedHadrCands_");
      vector<reco::PFCandidatePtr>& selectedSignalPFChargedHadrCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_selectedSignalPFChargedHadrCands_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
selectedSignalPFChargedHadrCands_.reserve(onfile.selectedSignalPFChargedHadrCands_.size());
for(auto const& ref : onfile.selectedSignalPFChargedHadrCands_) { 
   selectedSignalPFChargedHadrCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTau_5( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_selectedSignalPFNeutrHadrCands_ = oldObj->GetId("selectedSignalPFNeutrHadrCands_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRefVector &selectedSignalPFNeutrHadrCands_;
         recocLcLPFTau_Onfile(reco::PFCandidateRefVector &onfile_selectedSignalPFNeutrHadrCands_ ): selectedSignalPFNeutrHadrCands_(onfile_selectedSignalPFNeutrHadrCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_selectedSignalPFNeutrHadrCands_ = oldObj->GetClass()->GetDataMemberOffset("selectedSignalPFNeutrHadrCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTau_selectedSignalPFNeutrHadrCands_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_selectedSignalPFNeutrHadrCands_ = cls->GetDataMemberOffset("selectedSignalPFNeutrHadrCands_");
      vector<reco::PFCandidatePtr>& selectedSignalPFNeutrHadrCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_selectedSignalPFNeutrHadrCands_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
selectedSignalPFNeutrHadrCands_.reserve(onfile.selectedSignalPFNeutrHadrCands_.size());
for(auto const& ref : onfile.selectedSignalPFNeutrHadrCands_) { 
   selectedSignalPFNeutrHadrCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTau_6( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_selectedSignalPFGammaCands_ = oldObj->GetId("selectedSignalPFGammaCands_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRefVector &selectedSignalPFGammaCands_;
         recocLcLPFTau_Onfile(reco::PFCandidateRefVector &onfile_selectedSignalPFGammaCands_ ): selectedSignalPFGammaCands_(onfile_selectedSignalPFGammaCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_selectedSignalPFGammaCands_ = oldObj->GetClass()->GetDataMemberOffset("selectedSignalPFGammaCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTau_selectedSignalPFGammaCands_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_selectedSignalPFGammaCands_ = cls->GetDataMemberOffset("selectedSignalPFGammaCands_");
      vector<reco::PFCandidatePtr>& selectedSignalPFGammaCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_selectedSignalPFGammaCands_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
selectedSignalPFGammaCands_.reserve(onfile.selectedSignalPFGammaCands_.size());
for(auto const& ref : onfile.selectedSignalPFGammaCands_) { 
   selectedSignalPFGammaCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTau_7( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_selectedIsolationPFCands_ = oldObj->GetId("selectedIsolationPFCands_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRefVector &selectedIsolationPFCands_;
         recocLcLPFTau_Onfile(reco::PFCandidateRefVector &onfile_selectedIsolationPFCands_ ): selectedIsolationPFCands_(onfile_selectedIsolationPFCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_selectedIsolationPFCands_ = oldObj->GetClass()->GetDataMemberOffset("selectedIsolationPFCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTau_selectedIsolationPFCands_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_selectedIsolationPFCands_ = cls->GetDataMemberOffset("selectedIsolationPFCands_");
      vector<reco::PFCandidatePtr>& selectedIsolationPFCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_selectedIsolationPFCands_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
   selectedIsolationPFCands_.reserve(onfile.selectedIsolationPFCands_.size());
for(auto const& ref : onfile.selectedIsolationPFCands_) { 
   selectedIsolationPFCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTau_8( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_selectedIsolationPFChargedHadrCands_ = oldObj->GetId("selectedIsolationPFChargedHadrCands_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRefVector &selectedIsolationPFChargedHadrCands_;
         recocLcLPFTau_Onfile(reco::PFCandidateRefVector &onfile_selectedIsolationPFChargedHadrCands_ ): selectedIsolationPFChargedHadrCands_(onfile_selectedIsolationPFChargedHadrCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_selectedIsolationPFChargedHadrCands_ = oldObj->GetClass()->GetDataMemberOffset("selectedIsolationPFChargedHadrCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTau_selectedIsolationPFChargedHadrCands_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_selectedIsolationPFChargedHadrCands_ = cls->GetDataMemberOffset("selectedIsolationPFChargedHadrCands_");
      vector<reco::PFCandidatePtr>& selectedIsolationPFChargedHadrCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_selectedIsolationPFChargedHadrCands_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
selectedIsolationPFChargedHadrCands_.reserve(onfile.selectedIsolationPFChargedHadrCands_.size());
for(auto const& ref : onfile.selectedIsolationPFChargedHadrCands_) { 
   selectedIsolationPFChargedHadrCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTau_9( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_selectedIsolationPFNeutrHadrCands_ = oldObj->GetId("selectedIsolationPFNeutrHadrCands_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRefVector &selectedIsolationPFNeutrHadrCands_;
         recocLcLPFTau_Onfile(reco::PFCandidateRefVector &onfile_selectedIsolationPFNeutrHadrCands_ ): selectedIsolationPFNeutrHadrCands_(onfile_selectedIsolationPFNeutrHadrCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_selectedIsolationPFNeutrHadrCands_ = oldObj->GetClass()->GetDataMemberOffset("selectedIsolationPFNeutrHadrCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTau_selectedIsolationPFNeutrHadrCands_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_selectedIsolationPFNeutrHadrCands_ = cls->GetDataMemberOffset("selectedIsolationPFNeutrHadrCands_");
      vector<reco::PFCandidatePtr>& selectedIsolationPFNeutrHadrCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_selectedIsolationPFNeutrHadrCands_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
selectedIsolationPFNeutrHadrCands_.reserve(onfile.selectedIsolationPFNeutrHadrCands_.size());
for(auto const& ref : onfile.selectedIsolationPFNeutrHadrCands_) { 
   selectedIsolationPFNeutrHadrCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTau_10( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_selectedIsolationPFGammaCands_ = oldObj->GetId("selectedIsolationPFGammaCands_");
#endif
      struct recocLcLPFTau_Onfile {
         reco::PFCandidateRefVector &selectedIsolationPFGammaCands_;
         recocLcLPFTau_Onfile(reco::PFCandidateRefVector &onfile_selectedIsolationPFGammaCands_ ): selectedIsolationPFGammaCands_(onfile_selectedIsolationPFGammaCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTau_selectedIsolationPFGammaCands_ = oldObj->GetClass()->GetDataMemberOffset("selectedIsolationPFGammaCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTau_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTau_selectedIsolationPFGammaCands_) );

      static TClassRef cls("reco::PFTau");
      static Long_t offset_selectedIsolationPFGammaCands_ = cls->GetDataMemberOffset("selectedIsolationPFGammaCands_");
      vector<reco::PFCandidatePtr>& selectedIsolationPFGammaCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_selectedIsolationPFGammaCands_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
selectedIsolationPFGammaCands_.reserve(onfile.selectedIsolationPFGammaCands_.size());
for(auto const& ref : onfile.selectedIsolationPFGammaCands_) { 
   selectedIsolationPFGammaCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTau_11( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("reco::PFTau");
      static Long_t offset_signalPiZeroCandidates_ = cls->GetDataMemberOffset("signalPiZeroCandidates_");
      edm::AtomicPtrCache<vector<reco::RecoTauPiZero> >& signalPiZeroCandidates_ = *(edm::AtomicPtrCache<vector<reco::RecoTauPiZero> >*)(target+offset_signalPiZeroCandidates_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
signalPiZeroCandidates_.reset();

   }
   static void read_recocLcLPFTau_12( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("reco::PFTau");
      static Long_t offset_isolationPiZeroCandidates_ = cls->GetDataMemberOffset("isolationPiZeroCandidates_");
      edm::AtomicPtrCache<vector<reco::RecoTauPiZero> >& isolationPiZeroCandidates_ = *(edm::AtomicPtrCache<vector<reco::RecoTauPiZero> >*)(target+offset_isolationPiZeroCandidates_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
isolationPiZeroCandidates_.reset();

   }
   static void read_recocLcLPFTau_13( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("reco::PFTau");
      static Long_t offset_signalTauChargedHadronCandidates_ = cls->GetDataMemberOffset("signalTauChargedHadronCandidates_");
      edm::AtomicPtrCache<vector<reco::PFRecoTauChargedHadron> >& signalTauChargedHadronCandidates_ = *(edm::AtomicPtrCache<vector<reco::PFRecoTauChargedHadron> >*)(target+offset_signalTauChargedHadronCandidates_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     signalTauChargedHadronCandidates_.reset();

   }
   static void read_recocLcLPFTau_14( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("reco::PFTau");
      static Long_t offset_isolationTauChargedHadronCandidates_ = cls->GetDataMemberOffset("isolationTauChargedHadronCandidates_");
      edm::AtomicPtrCache<vector<reco::PFRecoTauChargedHadron> >& isolationTauChargedHadronCandidates_ = *(edm::AtomicPtrCache<vector<reco::PFRecoTauChargedHadron> >*)(target+offset_isolationTauChargedHadronCandidates_);
      reco::PFTau* newObj = (reco::PFTau*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
isolationTauChargedHadronCandidates_.reset();                                              

   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::PFTau*)
   {
      ::reco::PFTau *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::PFTau));
      static ::ROOT::TGenericClassInfo 
         instance("reco::PFTau", 19, "DataFormats/TauReco/interface/PFTau.h", 34,
                  typeid(::reco::PFTau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLPFTau_Dictionary, isa_proxy, 12,
                  sizeof(::reco::PFTau) );
      instance.SetNew(&new_recocLcLPFTau);
      instance.SetNewArray(&newArray_recocLcLPFTau);
      instance.SetDelete(&delete_recocLcLPFTau);
      instance.SetDeleteArray(&deleteArray_recocLcLPFTau);
      instance.SetDestructor(&destruct_recocLcLPFTau);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(15);
      rule = &readrules[0];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "leadPFChargedHadrCand_";
      rule->fSource      = "reco::PFCandidateRef leadPFChargedHadrCand_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_0);
      rule->fCode        = "leadPFChargedHadrCand_ = edm::refToPtr(onfile.leadPFChargedHadrCand_);";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[1];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "leadPFNeutralCand_";
      rule->fSource      = "reco::PFCandidateRef leadPFNeutralCand_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_1);
      rule->fCode        = "leadPFNeutralCand_ = edm::refToPtr(onfile.leadPFNeutralCand_);";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[2];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "leadPFCand_";
      rule->fSource      = "reco::PFCandidateRef leadPFCand_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_2);
      rule->fCode        = "leadPFCand_ = edm::refToPtr(onfile.leadPFCand_);";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[3];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "selectedSignalPFCands_";
      rule->fSource      = "reco::PFCandidateRefVector selectedSignalPFCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_3);
      rule->fCode        = "\n   selectedSignalPFCands_.reserve(onfile.selectedSignalPFCands_.size());\nfor(auto const& ref : onfile.selectedSignalPFCands_) { \n   selectedSignalPFCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[4];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "selectedSignalPFChargedHadrCands_";
      rule->fSource      = "reco::PFCandidateRefVector selectedSignalPFChargedHadrCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_4);
      rule->fCode        = "\nselectedSignalPFChargedHadrCands_.reserve(onfile.selectedSignalPFChargedHadrCands_.size());\nfor(auto const& ref : onfile.selectedSignalPFChargedHadrCands_) { \n   selectedSignalPFChargedHadrCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[5];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "selectedSignalPFNeutrHadrCands_";
      rule->fSource      = "reco::PFCandidateRefVector selectedSignalPFNeutrHadrCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_5);
      rule->fCode        = "\nselectedSignalPFNeutrHadrCands_.reserve(onfile.selectedSignalPFNeutrHadrCands_.size());\nfor(auto const& ref : onfile.selectedSignalPFNeutrHadrCands_) { \n   selectedSignalPFNeutrHadrCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[6];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "selectedSignalPFGammaCands_";
      rule->fSource      = "reco::PFCandidateRefVector selectedSignalPFGammaCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_6);
      rule->fCode        = "\nselectedSignalPFGammaCands_.reserve(onfile.selectedSignalPFGammaCands_.size());\nfor(auto const& ref : onfile.selectedSignalPFGammaCands_) { \n   selectedSignalPFGammaCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[7];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "selectedIsolationPFCands_";
      rule->fSource      = "reco::PFCandidateRefVector selectedIsolationPFCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_7);
      rule->fCode        = "\n   selectedIsolationPFCands_.reserve(onfile.selectedIsolationPFCands_.size());\nfor(auto const& ref : onfile.selectedIsolationPFCands_) { \n   selectedIsolationPFCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[8];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "selectedIsolationPFChargedHadrCands_";
      rule->fSource      = "reco::PFCandidateRefVector selectedIsolationPFChargedHadrCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_8);
      rule->fCode        = "\nselectedIsolationPFChargedHadrCands_.reserve(onfile.selectedIsolationPFChargedHadrCands_.size());\nfor(auto const& ref : onfile.selectedIsolationPFChargedHadrCands_) { \n   selectedIsolationPFChargedHadrCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[9];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "selectedIsolationPFNeutrHadrCands_";
      rule->fSource      = "reco::PFCandidateRefVector selectedIsolationPFNeutrHadrCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_9);
      rule->fCode        = "\nselectedIsolationPFNeutrHadrCands_.reserve(onfile.selectedIsolationPFNeutrHadrCands_.size());\nfor(auto const& ref : onfile.selectedIsolationPFNeutrHadrCands_) { \n   selectedIsolationPFNeutrHadrCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[10];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "selectedIsolationPFGammaCands_";
      rule->fSource      = "reco::PFCandidateRefVector selectedIsolationPFGammaCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_10);
      rule->fCode        = "\nselectedIsolationPFGammaCands_.reserve(onfile.selectedIsolationPFGammaCands_.size());\nfor(auto const& ref : onfile.selectedIsolationPFGammaCands_) { \n   selectedIsolationPFGammaCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-11]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[11];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "signalPiZeroCandidates_";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_11);
      rule->fCode        = "\nsignalPiZeroCandidates_.reset();\n";
      rule->fVersion     = "[1-]";
      rule = &readrules[12];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "isolationPiZeroCandidates_";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_12);
      rule->fCode        = "\nisolationPiZeroCandidates_.reset();\n";
      rule->fVersion     = "[1-]";
      rule = &readrules[13];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "signalTauChargedHadronCandidates_";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_13);
      rule->fCode        = "signalTauChargedHadronCandidates_.reset();\n";
      rule->fVersion     = "[1-]";
      rule = &readrules[14];
      rule->fSourceClass = "reco::PFTau";
      rule->fTarget      = "isolationTauChargedHadronCandidates_";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTau_14);
      rule->fCode        = "\nisolationTauChargedHadronCandidates_.reset();                                              \n";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::PFTau*)
   {
      return GenerateInitInstanceLocal((::reco::PFTau*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::PFTau*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLPFTau_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::PFTau*)0x0)->GetClass();
      recocLcLPFTau_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLPFTau_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLPFTauDecayMode_Dictionary();
   static void recocLcLPFTauDecayMode_TClassManip(TClass*);
   static void *new_recocLcLPFTauDecayMode(void *p = 0);
   static void *newArray_recocLcLPFTauDecayMode(Long_t size, void *p);
   static void delete_recocLcLPFTauDecayMode(void *p);
   static void deleteArray_recocLcLPFTauDecayMode(void *p);
   static void destruct_recocLcLPFTauDecayMode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::PFTauDecayMode*)
   {
      ::reco::PFTauDecayMode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::PFTauDecayMode));
      static ::ROOT::TGenericClassInfo 
         instance("reco::PFTauDecayMode", 13, "DataFormats/TauReco/interface/PFTauDecayMode.h", 28,
                  typeid(::reco::PFTauDecayMode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLPFTauDecayMode_Dictionary, isa_proxy, 12,
                  sizeof(::reco::PFTauDecayMode) );
      instance.SetNew(&new_recocLcLPFTauDecayMode);
      instance.SetNewArray(&newArray_recocLcLPFTauDecayMode);
      instance.SetDelete(&delete_recocLcLPFTauDecayMode);
      instance.SetDeleteArray(&deleteArray_recocLcLPFTauDecayMode);
      instance.SetDestructor(&destruct_recocLcLPFTauDecayMode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::PFTauDecayMode*)
   {
      return GenerateInitInstanceLocal((::reco::PFTauDecayMode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::PFTauDecayMode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLPFTauDecayMode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::PFTauDecayMode*)0x0)->GetClass();
      recocLcLPFTauDecayMode_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLPFTauDecayMode_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLCaloTauDiscriminatorByIsolation_Dictionary();
   static void recocLcLCaloTauDiscriminatorByIsolation_TClassManip(TClass*);
   static void *new_recocLcLCaloTauDiscriminatorByIsolation(void *p = 0);
   static void *newArray_recocLcLCaloTauDiscriminatorByIsolation(Long_t size, void *p);
   static void delete_recocLcLCaloTauDiscriminatorByIsolation(void *p);
   static void deleteArray_recocLcLCaloTauDiscriminatorByIsolation(void *p);
   static void destruct_recocLcLCaloTauDiscriminatorByIsolation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::CaloTauDiscriminatorByIsolation*)
   {
      ::reco::CaloTauDiscriminatorByIsolation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::CaloTauDiscriminatorByIsolation));
      static ::ROOT::TGenericClassInfo 
         instance("reco::CaloTauDiscriminatorByIsolation", 11, "DataFormats/TauReco/interface/CaloTauDiscriminatorByIsolation.h", 12,
                  typeid(::reco::CaloTauDiscriminatorByIsolation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLCaloTauDiscriminatorByIsolation_Dictionary, isa_proxy, 12,
                  sizeof(::reco::CaloTauDiscriminatorByIsolation) );
      instance.SetNew(&new_recocLcLCaloTauDiscriminatorByIsolation);
      instance.SetNewArray(&newArray_recocLcLCaloTauDiscriminatorByIsolation);
      instance.SetDelete(&delete_recocLcLCaloTauDiscriminatorByIsolation);
      instance.SetDeleteArray(&deleteArray_recocLcLCaloTauDiscriminatorByIsolation);
      instance.SetDestructor(&destruct_recocLcLCaloTauDiscriminatorByIsolation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::CaloTauDiscriminatorByIsolation*)
   {
      return GenerateInitInstanceLocal((::reco::CaloTauDiscriminatorByIsolation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::CaloTauDiscriminatorByIsolation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLCaloTauDiscriminatorByIsolation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::CaloTauDiscriminatorByIsolation*)0x0)->GetClass();
      recocLcLCaloTauDiscriminatorByIsolation_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLCaloTauDiscriminatorByIsolation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLCaloTauDiscriminator_Dictionary();
   static void recocLcLCaloTauDiscriminator_TClassManip(TClass*);
   static void *new_recocLcLCaloTauDiscriminator(void *p = 0);
   static void *newArray_recocLcLCaloTauDiscriminator(Long_t size, void *p);
   static void delete_recocLcLCaloTauDiscriminator(void *p);
   static void deleteArray_recocLcLCaloTauDiscriminator(void *p);
   static void destruct_recocLcLCaloTauDiscriminator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::CaloTauDiscriminator*)
   {
      ::reco::CaloTauDiscriminator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::CaloTauDiscriminator));
      static ::ROOT::TGenericClassInfo 
         instance("reco::CaloTauDiscriminator", 11, "DataFormats/TauReco/interface/CaloTauDiscriminator.h", 12,
                  typeid(::reco::CaloTauDiscriminator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLCaloTauDiscriminator_Dictionary, isa_proxy, 12,
                  sizeof(::reco::CaloTauDiscriminator) );
      instance.SetNew(&new_recocLcLCaloTauDiscriminator);
      instance.SetNewArray(&newArray_recocLcLCaloTauDiscriminator);
      instance.SetDelete(&delete_recocLcLCaloTauDiscriminator);
      instance.SetDeleteArray(&deleteArray_recocLcLCaloTauDiscriminator);
      instance.SetDestructor(&destruct_recocLcLCaloTauDiscriminator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::CaloTauDiscriminator*)
   {
      return GenerateInitInstanceLocal((::reco::CaloTauDiscriminator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::CaloTauDiscriminator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLCaloTauDiscriminator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::CaloTauDiscriminator*)0x0)->GetClass();
      recocLcLCaloTauDiscriminator_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLCaloTauDiscriminator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR_Dictionary();
   static void edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(void *p);
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Association<vector<reco::PFTau> >*)
   {
      ::edm::Association<vector<reco::PFTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Association<vector<reco::PFTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Association<vector<reco::PFTau> >", ::edm::Association<vector<reco::PFTau> >::Class_Version(), "DataFormats/Common/interface/Association.h", 18,
                  typeid(::edm::Association<vector<reco::PFTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Association<vector<reco::PFTau> >) );
      instance.SetNew(&new_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Association<vector<reco::PFTau> >","edm::Association<std::vector<reco::PFTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Association<vector<reco::PFTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Association<vector<reco::PFTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Association<vector<reco::PFTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Association<vector<reco::PFTau> >*)0x0)->GetClass();
      edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary();
   static void edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Association<vector<reco::PFTauDecayMode> >*)
   {
      ::edm::Association<vector<reco::PFTauDecayMode> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Association<vector<reco::PFTauDecayMode> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Association<vector<reco::PFTauDecayMode> >", ::edm::Association<vector<reco::PFTauDecayMode> >::Class_Version(), "DataFormats/Common/interface/Association.h", 18,
                  typeid(::edm::Association<vector<reco::PFTauDecayMode> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Association<vector<reco::PFTauDecayMode> >) );
      instance.SetNew(&new_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR);

      ::ROOT::AddClassAlternate("edm::Association<vector<reco::PFTauDecayMode> >","edm::Association<std::vector<reco::PFTauDecayMode> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Association<vector<reco::PFTauDecayMode> >*)
   {
      return GenerateInitInstanceLocal((::edm::Association<vector<reco::PFTauDecayMode> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Association<vector<reco::PFTauDecayMode> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Association<vector<reco::PFTauDecayMode> >*)0x0)->GetClass();
      edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > : new ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >[nElements] : new ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > : new ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >[nElements] : new ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > : new ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >[nElements] : new ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > : new ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >[nElements] : new ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > > : new ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >;
   }
   static void *newArray_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >[nElements] : new ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p) {
      delete ((::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)p);
   }
   static void deleteArray_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)p);
   }
   static void destruct_edmcLcLReflErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p) {
      typedef ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > > : new ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >;
   }
   static void *newArray_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >[nElements] : new ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p) {
      delete ((::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)p);
   }
   static void deleteArray_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p) {
      delete [] ((::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)p);
   }
   static void destruct_edmcLcLReflErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p) {
      typedef ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaselErecocLcLPFTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBase<reco::PFTau> : new ::edm::RefToBase<reco::PFTau>;
   }
   static void *newArray_edmcLcLRefToBaselErecocLcLPFTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBase<reco::PFTau>[nElements] : new ::edm::RefToBase<reco::PFTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaselErecocLcLPFTaugR(void *p) {
      delete ((::edm::RefToBase<reco::PFTau>*)p);
   }
   static void deleteArray_edmcLcLRefToBaselErecocLcLPFTaugR(void *p) {
      delete [] ((::edm::RefToBase<reco::PFTau>*)p);
   }
   static void destruct_edmcLcLRefToBaselErecocLcLPFTaugR(void *p) {
      typedef ::edm::RefToBase<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBase<reco::PFTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::PFTau> > : new ::edm::RefProd<vector<reco::PFTau> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::PFTau> >[nElements] : new ::edm::RefProd<vector<reco::PFTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::PFTau> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::PFTau> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::PFTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::PFTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::RecoTauPiZero> > : new ::edm::RefProd<vector<reco::RecoTauPiZero> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::RecoTauPiZero> >[nElements] : new ::edm::RefProd<vector<reco::RecoTauPiZero> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::RecoTauPiZero> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::RecoTauPiZero> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::RecoTauPiZero> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::RecoTauPiZero> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> > : new ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >[nElements] : new ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::PFRecoTauChargedHadron> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::PFTauDecayMode> > : new ::edm::RefProd<vector<reco::PFTauDecayMode> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::PFTauDecayMode> >[nElements] : new ::edm::RefProd<vector<reco::PFTauDecayMode> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::PFTauDecayMode> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::PFTauDecayMode> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::PFTauDecayMode> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::PFTauDecayMode> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation> : new ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>;
   }
   static void *newArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>[nElements] : new ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p) {
      delete ((::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>*)p);
   }
   static void deleteArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p) {
      delete [] ((::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>*)p);
   }
   static void destruct_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p) {
      typedef ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<reco::CaloTauDiscriminatorByIsolation>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<reco::CaloTauDiscriminator> : new ::edm::RefProd<reco::CaloTauDiscriminator>;
   }
   static void *newArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<reco::CaloTauDiscriminator>[nElements] : new ::edm::RefProd<reco::CaloTauDiscriminator>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(void *p) {
      delete ((::edm::RefProd<reco::CaloTauDiscriminator>*)p);
   }
   static void deleteArray_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(void *p) {
      delete [] ((::edm::RefProd<reco::CaloTauDiscriminator>*)p);
   }
   static void destruct_edmcLcLRefProdlErecocLcLCaloTauDiscriminatorgR(void *p) {
      typedef ::edm::RefProd<reco::CaloTauDiscriminator> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<reco::CaloTauDiscriminator>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > : new ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >[nElements] : new ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > : new ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >[nElements] : new ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > : new ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >[nElements] : new ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > : new ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >[nElements] : new ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > > : new ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >;
   }
   static void *newArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >[nElements] : new ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p) {
      delete ((::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p) {
      delete [] ((::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >*)p);
   }
   static void destruct_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorByIsolationcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOintgRsPgRsPgR(void *p) {
      typedef ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > > : new ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >;
   }
   static void *newArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >[nElements] : new ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p) {
      delete ((::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p) {
      delete [] ((::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >*)p);
   }
   static void destruct_edmcLcLRefVectorlErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRcOedmcLcLrefhelpercLcLFindUsingAdvancelErecocLcLCaloTauDiscriminatorcOpairlEedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOfloatgRsPgRsPgR(void *p) {
      typedef ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseVector<reco::PFTau> : new ::edm::RefToBaseVector<reco::PFTau>;
   }
   static void *newArray_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseVector<reco::PFTau>[nElements] : new ::edm::RefToBaseVector<reco::PFTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(void *p) {
      delete ((::edm::RefToBaseVector<reco::PFTau>*)p);
   }
   static void deleteArray_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(void *p) {
      delete [] ((::edm::RefToBaseVector<reco::PFTau>*)p);
   }
   static void destruct_edmcLcLRefToBaseVectorlErecocLcLPFTaugR(void *p) {
      typedef ::edm::RefToBaseVector<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBaseVector<reco::PFTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::PFTau> > : new ::edm::Wrapper<vector<reco::PFTau> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::PFTau> >[nElements] : new ::edm::Wrapper<vector<reco::PFTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::PFTau> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::PFTau> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::PFTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::PFTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > : new ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements] : new ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> > : new ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >[nElements] : new ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefToBaseVectorlErecocLcLPFTaugRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::PFTauDecayMode> > : new ::edm::Wrapper<vector<reco::PFTauDecayMode> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::PFTauDecayMode> >[nElements] : new ::edm::Wrapper<vector<reco::PFTauDecayMode> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::PFTauDecayMode> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::PFTauDecayMode> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::PFTauDecayMode> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::PFTauDecayMode> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > > : new ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >[nElements] : new ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::PFTau> > > : new ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >[nElements] : new ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Association<vector<reco::PFTau> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Association<vector<reco::PFTau> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Association<vector<reco::PFTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Association<vector<reco::PFTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::RecoTauPiZero> > : new ::edm::Wrapper<vector<reco::RecoTauPiZero> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::RecoTauPiZero> >[nElements] : new ::edm::Wrapper<vector<reco::RecoTauPiZero> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::RecoTauPiZero> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::RecoTauPiZero> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::RecoTauPiZero> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::RecoTauPiZero> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> > : new ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >[nElements] : new ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation> : new ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>;
   }
   static void *newArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>[nElements] : new ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p) {
      delete ((::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>*)p);
   }
   static void deleteArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p) {
      delete [] ((::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>*)p);
   }
   static void destruct_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorByIsolationgR(void *p) {
      typedef ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<reco::CaloTauDiscriminator> : new ::edm::Wrapper<reco::CaloTauDiscriminator>;
   }
   static void *newArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<reco::CaloTauDiscriminator>[nElements] : new ::edm::Wrapper<reco::CaloTauDiscriminator>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(void *p) {
      delete ((::edm::Wrapper<reco::CaloTauDiscriminator>*)p);
   }
   static void deleteArray_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(void *p) {
      delete [] ((::edm::Wrapper<reco::CaloTauDiscriminator>*)p);
   }
   static void destruct_edmcLcLWrapperlErecocLcLCaloTauDiscriminatorgR(void *p) {
      typedef ::edm::Wrapper<reco::CaloTauDiscriminator> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<reco::CaloTauDiscriminator>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR(void *p) {
      delete ((::edm::reftobase::BaseHolder<reco::PFTau>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR(void *p) {
      delete [] ((::edm::reftobase::BaseHolder<reco::PFTau>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLBaseHolderlErecocLcLPFTaugR(void *p) {
      typedef ::edm::reftobase::BaseHolder<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::BaseHolder<reco::PFTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > : new ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements] : new ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > : new ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements] : new ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLPFTaucOedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > > : new ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >[nElements] : new ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositeCandidatecOedmcLcLReflEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauDecayModegRcOrecocLcLPFTauDecayModegRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > > : new ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >[nElements] : new ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoTauPiZerogRcOrecocLcLRecoTauPiZerogRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > > : new ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >[nElements] : new ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCompositePtrCandidatecOedmcLcLReflEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFRecoTauChargedHadrongRcOrecocLcLPFRecoTauChargedHadrongRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::IndirectHolder<reco::PFTau> : new ::edm::reftobase::IndirectHolder<reco::PFTau>;
   }
   static void *newArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::IndirectHolder<reco::PFTau>[nElements] : new ::edm::reftobase::IndirectHolder<reco::PFTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(void *p) {
      delete ((::edm::reftobase::IndirectHolder<reco::PFTau>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(void *p) {
      delete [] ((::edm::reftobase::IndirectHolder<reco::PFTau>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLIndirectHolderlErecocLcLPFTaugR(void *p) {
      typedef ::edm::reftobase::IndirectHolder<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::IndirectHolder<reco::PFTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements] : new ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLRefHolderlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR(void *p) {
      delete ((::edm::reftobase::BaseVectorHolder<reco::PFTau>*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR(void *p) {
      delete [] ((::edm::reftobase::BaseVectorHolder<reco::PFTau>*)p);
   }
   static void destruct_edmcLcLreftobasecLcLBaseVectorHolderlErecocLcLPFTaugR(void *p) {
      typedef ::edm::reftobase::BaseVectorHolder<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::BaseVectorHolder<reco::PFTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefToBaseProdlErecocLcLPFTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseProd<reco::PFTau> : new ::edm::RefToBaseProd<reco::PFTau>;
   }
   static void *newArray_edmcLcLRefToBaseProdlErecocLcLPFTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefToBaseProd<reco::PFTau>[nElements] : new ::edm::RefToBaseProd<reco::PFTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefToBaseProdlErecocLcLPFTaugR(void *p) {
      delete ((::edm::RefToBaseProd<reco::PFTau>*)p);
   }
   static void deleteArray_edmcLcLRefToBaseProdlErecocLcLPFTaugR(void *p) {
      delete [] ((::edm::RefToBaseProd<reco::PFTau>*)p);
   }
   static void destruct_edmcLcLRefToBaseProdlErecocLcLPFTaugR(void *p) {
      typedef ::edm::RefToBaseProd<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefToBaseProd<reco::PFTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> : new ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>;
   }
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements] : new ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete ((::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete [] ((::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEintgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      typedef ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> : new ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>;
   }
   static void *newArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements] : new ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete ((::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void deleteArray_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      delete [] ((::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>*)p);
   }
   static void destruct_edmcLcLAssociationVectorlEedmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgRcOvectorlEfloatgRcOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRcOunsignedsPintcOedmcLcLhelpercLcLAssociationIdenticalKeyReferencegR(void *p) {
      typedef ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLRecoTauPiZero(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoTauPiZero : new ::reco::RecoTauPiZero;
   }
   static void *newArray_recocLcLRecoTauPiZero(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::RecoTauPiZero[nElements] : new ::reco::RecoTauPiZero[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLRecoTauPiZero(void *p) {
      delete ((::reco::RecoTauPiZero*)p);
   }
   static void deleteArray_recocLcLRecoTauPiZero(void *p) {
      delete [] ((::reco::RecoTauPiZero*)p);
   }
   static void destruct_recocLcLRecoTauPiZero(void *p) {
      typedef ::reco::RecoTauPiZero current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::RecoTauPiZero

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLPFRecoTauChargedHadron(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::PFRecoTauChargedHadron : new ::reco::PFRecoTauChargedHadron;
   }
   static void *newArray_recocLcLPFRecoTauChargedHadron(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::PFRecoTauChargedHadron[nElements] : new ::reco::PFRecoTauChargedHadron[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLPFRecoTauChargedHadron(void *p) {
      delete ((::reco::PFRecoTauChargedHadron*)p);
   }
   static void deleteArray_recocLcLPFRecoTauChargedHadron(void *p) {
      delete [] ((::reco::PFRecoTauChargedHadron*)p);
   }
   static void destruct_recocLcLPFRecoTauChargedHadron(void *p) {
      typedef ::reco::PFRecoTauChargedHadron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::PFRecoTauChargedHadron

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLPFTau(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::PFTau : new ::reco::PFTau;
   }
   static void *newArray_recocLcLPFTau(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::PFTau[nElements] : new ::reco::PFTau[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLPFTau(void *p) {
      delete ((::reco::PFTau*)p);
   }
   static void deleteArray_recocLcLPFTau(void *p) {
      delete [] ((::reco::PFTau*)p);
   }
   static void destruct_recocLcLPFTau(void *p) {
      typedef ::reco::PFTau current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::PFTau

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLPFTauDecayMode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::PFTauDecayMode : new ::reco::PFTauDecayMode;
   }
   static void *newArray_recocLcLPFTauDecayMode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::PFTauDecayMode[nElements] : new ::reco::PFTauDecayMode[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLPFTauDecayMode(void *p) {
      delete ((::reco::PFTauDecayMode*)p);
   }
   static void deleteArray_recocLcLPFTauDecayMode(void *p) {
      delete [] ((::reco::PFTauDecayMode*)p);
   }
   static void destruct_recocLcLPFTauDecayMode(void *p) {
      typedef ::reco::PFTauDecayMode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::PFTauDecayMode

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLCaloTauDiscriminatorByIsolation(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloTauDiscriminatorByIsolation : new ::reco::CaloTauDiscriminatorByIsolation;
   }
   static void *newArray_recocLcLCaloTauDiscriminatorByIsolation(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloTauDiscriminatorByIsolation[nElements] : new ::reco::CaloTauDiscriminatorByIsolation[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLCaloTauDiscriminatorByIsolation(void *p) {
      delete ((::reco::CaloTauDiscriminatorByIsolation*)p);
   }
   static void deleteArray_recocLcLCaloTauDiscriminatorByIsolation(void *p) {
      delete [] ((::reco::CaloTauDiscriminatorByIsolation*)p);
   }
   static void destruct_recocLcLCaloTauDiscriminatorByIsolation(void *p) {
      typedef ::reco::CaloTauDiscriminatorByIsolation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::CaloTauDiscriminatorByIsolation

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLCaloTauDiscriminator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloTauDiscriminator : new ::reco::CaloTauDiscriminator;
   }
   static void *newArray_recocLcLCaloTauDiscriminator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloTauDiscriminator[nElements] : new ::reco::CaloTauDiscriminator[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLCaloTauDiscriminator(void *p) {
      delete ((::reco::CaloTauDiscriminator*)p);
   }
   static void deleteArray_recocLcLCaloTauDiscriminator(void *p) {
      delete [] ((::reco::CaloTauDiscriminator*)p);
   }
   static void destruct_recocLcLCaloTauDiscriminator(void *p) {
      typedef ::reco::CaloTauDiscriminator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::CaloTauDiscriminator

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::PFTau> > : new ::edm::Association<vector<reco::PFTau> >;
   }
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::PFTau> >[nElements] : new ::edm::Association<vector<reco::PFTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      delete ((::edm::Association<vector<reco::PFTau> >*)p);
   }
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      delete [] ((::edm::Association<vector<reco::PFTau> >*)p);
   }
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLPFTaugRsPgR(void *p) {
      typedef ::edm::Association<vector<reco::PFTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Association<vector<reco::PFTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::PFTauDecayMode> > : new ::edm::Association<vector<reco::PFTauDecayMode> >;
   }
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::PFTauDecayMode> >[nElements] : new ::edm::Association<vector<reco::PFTauDecayMode> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      delete ((::edm::Association<vector<reco::PFTauDecayMode> >*)p);
   }
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      delete [] ((::edm::Association<vector<reco::PFTauDecayMode> >*)p);
   }
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLPFTauDecayModegRsPgR(void *p) {
      typedef ::edm::Association<vector<reco::PFTauDecayMode> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Association<vector<reco::PFTauDecayMode> >

namespace ROOT {
   static TClass *vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary();
   static void vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);
   static void deleteArray_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);
   static void destruct_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<reco::RecoTauPiZero> >*)
   {
      vector<vector<reco::RecoTauPiZero> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<reco::RecoTauPiZero> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<reco::RecoTauPiZero> >", -2, "vector", 214,
                  typeid(vector<vector<reco::RecoTauPiZero> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<reco::RecoTauPiZero> >) );
      instance.SetNew(&new_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<reco::RecoTauPiZero> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<reco::RecoTauPiZero> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<reco::RecoTauPiZero> >*)0x0)->GetClass();
      vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<reco::RecoTauPiZero> > : new vector<vector<reco::RecoTauPiZero> >;
   }
   static void *newArray_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<reco::RecoTauPiZero> >[nElements] : new vector<vector<reco::RecoTauPiZero> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete ((vector<vector<reco::RecoTauPiZero> >*)p);
   }
   static void deleteArray_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      delete [] ((vector<vector<reco::RecoTauPiZero> >*)p);
   }
   static void destruct_vectorlEvectorlErecocLcLRecoTauPiZerogRsPgR(void *p) {
      typedef vector<vector<reco::RecoTauPiZero> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<reco::RecoTauPiZero> >

namespace ROOT {
   static TClass *vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary();
   static void vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void deleteArray_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);
   static void destruct_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<reco::PFRecoTauChargedHadron> >*)
   {
      vector<vector<reco::PFRecoTauChargedHadron> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<reco::PFRecoTauChargedHadron> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<reco::PFRecoTauChargedHadron> >", -2, "vector", 214,
                  typeid(vector<vector<reco::PFRecoTauChargedHadron> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<reco::PFRecoTauChargedHadron> >) );
      instance.SetNew(&new_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<reco::PFRecoTauChargedHadron> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<reco::PFRecoTauChargedHadron> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<reco::PFRecoTauChargedHadron> >*)0x0)->GetClass();
      vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<reco::PFRecoTauChargedHadron> > : new vector<vector<reco::PFRecoTauChargedHadron> >;
   }
   static void *newArray_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<reco::PFRecoTauChargedHadron> >[nElements] : new vector<vector<reco::PFRecoTauChargedHadron> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete ((vector<vector<reco::PFRecoTauChargedHadron> >*)p);
   }
   static void deleteArray_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      delete [] ((vector<vector<reco::PFRecoTauChargedHadron> >*)p);
   }
   static void destruct_vectorlEvectorlErecocLcLPFRecoTauChargedHadrongRsPgR(void *p) {
      typedef vector<vector<reco::PFRecoTauChargedHadron> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<reco::PFRecoTauChargedHadron> >

namespace ROOT {
   static TClass *vectorlErecocLcLRecoTauPiZerogR_Dictionary();
   static void vectorlErecocLcLRecoTauPiZerogR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLRecoTauPiZerogR(void *p = 0);
   static void *newArray_vectorlErecocLcLRecoTauPiZerogR(Long_t size, void *p);
   static void delete_vectorlErecocLcLRecoTauPiZerogR(void *p);
   static void deleteArray_vectorlErecocLcLRecoTauPiZerogR(void *p);
   static void destruct_vectorlErecocLcLRecoTauPiZerogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::RecoTauPiZero>*)
   {
      vector<reco::RecoTauPiZero> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::RecoTauPiZero>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::RecoTauPiZero>", -2, "vector", 214,
                  typeid(vector<reco::RecoTauPiZero>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLRecoTauPiZerogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::RecoTauPiZero>) );
      instance.SetNew(&new_vectorlErecocLcLRecoTauPiZerogR);
      instance.SetNewArray(&newArray_vectorlErecocLcLRecoTauPiZerogR);
      instance.SetDelete(&delete_vectorlErecocLcLRecoTauPiZerogR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLRecoTauPiZerogR);
      instance.SetDestructor(&destruct_vectorlErecocLcLRecoTauPiZerogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::RecoTauPiZero> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::RecoTauPiZero>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLRecoTauPiZerogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::RecoTauPiZero>*)0x0)->GetClass();
      vectorlErecocLcLRecoTauPiZerogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLRecoTauPiZerogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLRecoTauPiZerogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoTauPiZero> : new vector<reco::RecoTauPiZero>;
   }
   static void *newArray_vectorlErecocLcLRecoTauPiZerogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::RecoTauPiZero>[nElements] : new vector<reco::RecoTauPiZero>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLRecoTauPiZerogR(void *p) {
      delete ((vector<reco::RecoTauPiZero>*)p);
   }
   static void deleteArray_vectorlErecocLcLRecoTauPiZerogR(void *p) {
      delete [] ((vector<reco::RecoTauPiZero>*)p);
   }
   static void destruct_vectorlErecocLcLRecoTauPiZerogR(void *p) {
      typedef vector<reco::RecoTauPiZero> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::RecoTauPiZero>

namespace ROOT {
   static TClass *vectorlErecocLcLPFTauDecayModegR_Dictionary();
   static void vectorlErecocLcLPFTauDecayModegR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLPFTauDecayModegR(void *p = 0);
   static void *newArray_vectorlErecocLcLPFTauDecayModegR(Long_t size, void *p);
   static void delete_vectorlErecocLcLPFTauDecayModegR(void *p);
   static void deleteArray_vectorlErecocLcLPFTauDecayModegR(void *p);
   static void destruct_vectorlErecocLcLPFTauDecayModegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::PFTauDecayMode>*)
   {
      vector<reco::PFTauDecayMode> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::PFTauDecayMode>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::PFTauDecayMode>", -2, "vector", 214,
                  typeid(vector<reco::PFTauDecayMode>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLPFTauDecayModegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::PFTauDecayMode>) );
      instance.SetNew(&new_vectorlErecocLcLPFTauDecayModegR);
      instance.SetNewArray(&newArray_vectorlErecocLcLPFTauDecayModegR);
      instance.SetDelete(&delete_vectorlErecocLcLPFTauDecayModegR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLPFTauDecayModegR);
      instance.SetDestructor(&destruct_vectorlErecocLcLPFTauDecayModegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::PFTauDecayMode> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::PFTauDecayMode>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLPFTauDecayModegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::PFTauDecayMode>*)0x0)->GetClass();
      vectorlErecocLcLPFTauDecayModegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLPFTauDecayModegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLPFTauDecayModegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::PFTauDecayMode> : new vector<reco::PFTauDecayMode>;
   }
   static void *newArray_vectorlErecocLcLPFTauDecayModegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::PFTauDecayMode>[nElements] : new vector<reco::PFTauDecayMode>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLPFTauDecayModegR(void *p) {
      delete ((vector<reco::PFTauDecayMode>*)p);
   }
   static void deleteArray_vectorlErecocLcLPFTauDecayModegR(void *p) {
      delete [] ((vector<reco::PFTauDecayMode>*)p);
   }
   static void destruct_vectorlErecocLcLPFTauDecayModegR(void *p) {
      typedef vector<reco::PFTauDecayMode> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::PFTauDecayMode>

namespace ROOT {
   static TClass *vectorlErecocLcLPFTaugR_Dictionary();
   static void vectorlErecocLcLPFTaugR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLPFTaugR(void *p = 0);
   static void *newArray_vectorlErecocLcLPFTaugR(Long_t size, void *p);
   static void delete_vectorlErecocLcLPFTaugR(void *p);
   static void deleteArray_vectorlErecocLcLPFTaugR(void *p);
   static void destruct_vectorlErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::PFTau>*)
   {
      vector<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::PFTau>", -2, "vector", 214,
                  typeid(vector<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::PFTau>) );
      instance.SetNew(&new_vectorlErecocLcLPFTaugR);
      instance.SetNewArray(&newArray_vectorlErecocLcLPFTaugR);
      instance.SetDelete(&delete_vectorlErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_vectorlErecocLcLPFTaugR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::PFTau> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::PFTau>*)0x0)->GetClass();
      vectorlErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLPFTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::PFTau> : new vector<reco::PFTau>;
   }
   static void *newArray_vectorlErecocLcLPFTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::PFTau>[nElements] : new vector<reco::PFTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLPFTaugR(void *p) {
      delete ((vector<reco::PFTau>*)p);
   }
   static void deleteArray_vectorlErecocLcLPFTaugR(void *p) {
      delete [] ((vector<reco::PFTau>*)p);
   }
   static void destruct_vectorlErecocLcLPFTaugR(void *p) {
      typedef vector<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::PFTau>

namespace ROOT {
   static TClass *vectorlErecocLcLPFRecoTauChargedHadrongR_Dictionary();
   static void vectorlErecocLcLPFRecoTauChargedHadrongR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLPFRecoTauChargedHadrongR(void *p = 0);
   static void *newArray_vectorlErecocLcLPFRecoTauChargedHadrongR(Long_t size, void *p);
   static void delete_vectorlErecocLcLPFRecoTauChargedHadrongR(void *p);
   static void deleteArray_vectorlErecocLcLPFRecoTauChargedHadrongR(void *p);
   static void destruct_vectorlErecocLcLPFRecoTauChargedHadrongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::PFRecoTauChargedHadron>*)
   {
      vector<reco::PFRecoTauChargedHadron> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::PFRecoTauChargedHadron>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::PFRecoTauChargedHadron>", -2, "vector", 214,
                  typeid(vector<reco::PFRecoTauChargedHadron>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLPFRecoTauChargedHadrongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::PFRecoTauChargedHadron>) );
      instance.SetNew(&new_vectorlErecocLcLPFRecoTauChargedHadrongR);
      instance.SetNewArray(&newArray_vectorlErecocLcLPFRecoTauChargedHadrongR);
      instance.SetDelete(&delete_vectorlErecocLcLPFRecoTauChargedHadrongR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLPFRecoTauChargedHadrongR);
      instance.SetDestructor(&destruct_vectorlErecocLcLPFRecoTauChargedHadrongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::PFRecoTauChargedHadron> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::PFRecoTauChargedHadron>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLPFRecoTauChargedHadrongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::PFRecoTauChargedHadron>*)0x0)->GetClass();
      vectorlErecocLcLPFRecoTauChargedHadrongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLPFRecoTauChargedHadrongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLPFRecoTauChargedHadrongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::PFRecoTauChargedHadron> : new vector<reco::PFRecoTauChargedHadron>;
   }
   static void *newArray_vectorlErecocLcLPFRecoTauChargedHadrongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::PFRecoTauChargedHadron>[nElements] : new vector<reco::PFRecoTauChargedHadron>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLPFRecoTauChargedHadrongR(void *p) {
      delete ((vector<reco::PFRecoTauChargedHadron>*)p);
   }
   static void deleteArray_vectorlErecocLcLPFRecoTauChargedHadrongR(void *p) {
      delete [] ((vector<reco::PFRecoTauChargedHadron>*)p);
   }
   static void destruct_vectorlErecocLcLPFRecoTauChargedHadrongR(void *p) {
      typedef vector<reco::PFRecoTauChargedHadron> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::PFRecoTauChargedHadron>

namespace {
  void TriggerDictionaryInitialization_DataFormatsTauReco_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/work/e/eerodoto/phase2-tauPerformance/CMSSW_9_4_2/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/cms/cmssw/CMSSW_9_4_2/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/lcg/root/6.10.08/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/pcre/8.37-oenich/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/boost/1.63.0-fmblme/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/bz2lib/1.0.6/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/clhep/2.3.4.2-fmblme/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/gsl/2.2.1/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/hepmc/2.06.07-oenich/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/tbb/2018/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/cms/vdt/0.3.9/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/xz/5.2.2-oenich/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/zlib-x86_64/1.2.11/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/md5/1.0.0/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/tinyxml/2.5.3-fmblme/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/lcg/root/6.10.08/include",
"/afs/cern.ch/work/e/eerodoto/phase2-tauPerformance/CMSSW_9_4_2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataFormatsTauReco_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/PFTau.h")))  PFTau;}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  ValueTrait;
}}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/RecoTauPiZero.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/PFTau.h")))  RecoTauPiZero;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/PFRecoTauChargedHadron.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/PFTau.h")))  PFRecoTauChargedHadron;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/PFTauDecayMode.h")))  PFTauDecayMode;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/CaloTauDiscriminatorByIsolation.h")))  CaloTauDiscriminatorByIsolation;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/CaloTau.h")))  CaloTau;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/CaloTauDiscriminator.h")))  CaloTauDiscriminator;}
namespace edm{template <class T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefToBase.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  RefToBase;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Ref.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  RefToBaseVector;
}
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/BaseHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  BaseHolder;
}}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/BaseTau.h")))  BaseTau;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/Candidate/interface/CompositeCandidate.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/PFTauTagInfo.h")))  CompositeCandidate;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/Candidate/interface/CompositePtrCandidate.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/BaseTauTagInfo.h")))  CompositePtrCandidate;}
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/IndirectHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  IndirectHolder;
}}
namespace edm{namespace reftobase{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/BaseHolder.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  BaseVectorHolder;
}}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefToBaseProd.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  RefToBaseProd;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsTauReco_xr dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef CMS_DICT_IMPL
  #define CMS_DICT_IMPL 1
#endif
#ifndef _REENTRANT
  #define _REENTRANT 1
#endif
#ifndef GNUSOURCE
  #define GNUSOURCE 1
#endif
#ifndef __STRICT_ANSI__
  #define __STRICT_ANSI__ 1
#endif
#ifndef GNU_GCC
  #define GNU_GCC 1
#endif
#ifndef _GNU_SOURCE
  #define _GNU_SOURCE 1
#endif
#ifndef CMSSW_GIT_HASH
  #define CMSSW_GIT_HASH "CMSSW_9_4_2"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_9_4_2"
#endif
#ifndef TBB_USE_GLIBCXX_VERSION
  #define TBB_USE_GLIBCXX_VERSION 60300
#endif
#ifndef BOOST_SPIRIT_THREADSAFE
  #define BOOST_SPIRIT_THREADSAFE 1
#endif
#ifndef PHOENIX_THREADSAFE
  #define PHOENIX_THREADSAFE 1
#endif
#ifndef CMSSW_REFLEX_DICT
  #define CMSSW_REFLEX_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/AssociationVector.h"
#include "DataFormats/TauReco/interface/BaseTauTagInfo.h"
#include "DataFormats/TauReco/interface/CaloTauTagInfo.h"
#include "DataFormats/TauReco/interface/PFTauTagInfo.h"
#include "DataFormats/TauReco/interface/BaseTau.h"
#include "DataFormats/TauReco/interface/CaloTau.h"
#include "DataFormats/TauReco/interface/PFTau.h"
#include "DataFormats/TauReco/interface/PFTauDecayMode.h"
#include "DataFormats/TauReco/interface/RecoTauPiZero.h"
#include "DataFormats/TauReco/interface/RecoTauPiZeroFwd.h"
#include "DataFormats/TauReco/interface/CaloTauDiscriminatorByIsolation.h"
#include "DataFormats/TauReco/interface/CaloTauDiscriminator.h"
#include "DataFormats/TauReco/interface/CaloTauDiscriminatorAgainstElectron.h"
#include "DataFormats/TauReco/interface/PFTauDiscriminatorByIsolation.h"
#include "DataFormats/TauReco/interface/PFTauDiscriminator.h"
#include "DataFormats/Common/interface/AssociationMap.h"
#include "DataFormats/Common/interface/Association.h"
#include "DataFormats/Common/interface/Ptr.h"
#include "DataFormats/Common/interface/PtrVector.h"
#include "DataFormats/TauReco/interface/JetPiZeroAssociation.h"
#include "DataFormats/TauReco/interface/PFTauDecayModeAssociation.h"
#include "DataFormats/TauReco/interface/L2TauInfoAssociation.h"
#include "DataFormats/TauReco/interface/HLTTau.h"
#include "DataFormats/Common/interface/FwdPtr.h"
#include "DataFormats/Common/interface/RefToPtr.h"
#include "DataFormats/TauReco/interface/PFRecoTauChargedHadron.h"
#include "DataFormats/TauReco/interface/PFRecoTauChargedHadronFwd.h"
#include "DataFormats/TauReco/interface/PFJetChargedHadronAssociation.h"
#include "DataFormats/TauReco/interface/PFTauTransverseImpactParameterAssociation.h"
#include "DataFormats/TauReco/interface/PFTauTransverseImpactParameterFwd.h"
#include "DataFormats/TauReco/interface/PFTau3ProngSummaryFwd.h"
#include "DataFormats/TauReco/interface/PFTau3ProngSummaryAssociation.h"

#include <vector>
#include <map>
#include "TLorentzVector.h"


namespace DataFormats_TauReco {
  struct dictionary2 {
    std::vector<reco::PFTau>                                    pft_v;
    edm::Wrapper<std::vector<reco::PFTau> >                     pft_w;
    edm::Ref<std::vector<reco::PFTau> >                         pft_r;
    edm::RefProd<std::vector<reco::PFTau> >                     pft_rp;
    edm::RefVector<std::vector<reco::PFTau> >                   pft_rv;
    edm::Wrapper<edm::RefVector<std::vector<reco::PFTau> > >         pft_rvw;
    edm::reftobase::Holder<reco::BaseTau,reco::PFTauRef>        pft_rb;

    edm::View<reco::PFTau>  jv;
    edm::RefToBaseProd<reco::PFTau> jrtbp;

    edm::RefToBase<reco::PFTau>  rtbj;
    edm::reftobase::IndirectHolder<reco::PFTau> ihj;
    edm::reftobase::Holder<reco::PFTau, reco::PFTauRef> hcj;
    edm::reftobase::RefHolder<reco::PFTauRef> rhtj;
    edm::RefToBaseVector<reco::PFTau> jrtbv;
    edm::Wrapper<edm::RefToBaseVector<reco::PFTau> > jrtbv_w;
    edm::reftobase::BaseVectorHolder<reco::PFTau> * bvhj_p;    // pointer since it's pure virtual

    std::vector<reco::PFTauDecayMode>                                           pftdm_v;
    edm::Wrapper<std::vector<reco::PFTauDecayMode> >                            pftdm_w;
    edm::Ref<std::vector<reco::PFTauDecayMode> >                                pftdm_r;
    edm::RefProd<std::vector<reco::PFTauDecayMode> >                            pftdm_rp;
    edm::RefVector<std::vector<reco::PFTauDecayMode> >                          pftdm_rv;
    edm::reftobase::Holder<reco::CompositeCandidate,reco::PFTauDecayModeRef>    pftdm_rb;
    edm::Association<std::vector<reco::PFTauDecayMode> >                        pftdm_assoc_v;
    edm::Association<std::vector<reco::PFTau> >                                 pftau_assoc_v; // used for matching
    edm::Wrapper<edm::Association<std::vector<reco::PFTauDecayMode> > >         pftdm_assoc_v_wrapper;
    edm::Wrapper<edm::Association<std::vector<reco::PFTau> > >                  pftau_assoc_v_wrapper;

    std::vector<reco::RecoTauPiZero>                                           recoTauPiZero_v;
    edm::Wrapper<std::vector<reco::RecoTauPiZero> >                            recoTauPiZero_w;
    edm::Ref<std::vector<reco::RecoTauPiZero> >                                recoTauPiZero_r;
    edm::RefProd<std::vector<reco::RecoTauPiZero> >                            recoTauPiZero_rp;
    edm::RefVector<std::vector<reco::RecoTauPiZero> >                          recoTauPiZero_rv;
    edm::reftobase::Holder<reco::CompositePtrCandidate, reco::RecoTauPiZeroRef>    recoTauPiZero_rb;

    std::vector<reco::PFRecoTauChargedHadron>                                           pfrecoTauChH_v;
    edm::Wrapper<std::vector<reco::PFRecoTauChargedHadron> >                            pfrecoTauChH_w;
    edm::Ref<std::vector<reco::PFRecoTauChargedHadron> >                                pfrecoTauChH_r;
    edm::RefProd<std::vector<reco::PFRecoTauChargedHadron> >                            pfrecoTauChH_rp;
    edm::RefVector<std::vector<reco::PFRecoTauChargedHadron> >                          pfrecoTauChH_rv;
    edm::reftobase::Holder<reco::CompositePtrCandidate, reco::PFRecoTauChargedHadronRef>        pfrecoTauChH_rb;


    reco::CaloTauDiscriminatorByIsolationBase                   calotdi_b;
    reco::CaloTauDiscriminatorByIsolation                       calotdi_o;
    reco::CaloTauDiscriminatorByIsolationRef                    calotdi_r;
    reco::CaloTauDiscriminatorByIsolationRefProd                calotdi_rp;
    reco::CaloTauDiscriminatorByIsolationRefVector              calotdi_rv;
    edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>         calotdi_w;

    reco::CaloTauDiscriminatorBase                   calodi_b;
    reco::CaloTauDiscriminator                       calodi_o;
    reco::CaloTauDiscriminatorRef                    calodi_r;
    reco::CaloTauDiscriminatorRefProd                calodi_rp;
    reco::CaloTauDiscriminatorRefVector              calodi_rv;
    edm::Wrapper<reco::CaloTauDiscriminator>         calodi_w;
  };
}




#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"edm::Association<std::vector<reco::PFTau> >", payloadCode, "@",
"edm::Association<std::vector<reco::PFTauDecayMode> >", payloadCode, "@",
"edm::Association<vector<reco::PFTau> >", payloadCode, "@",
"edm::Association<vector<reco::PFTauDecayMode> >", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<float>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", payloadCode, "@",
"edm::AssociationVector<edm::RefProd<vector<reco::CaloTau> >,vector<int>,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,unsigned int,edm::helper::AssociationIdenticalKeyReference>", payloadCode, "@",
"edm::Ref<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >", payloadCode, "@",
"edm::Ref<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >", payloadCode, "@",
"edm::Ref<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >", payloadCode, "@",
"edm::Ref<std::vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTau>,reco::PFTau> >", payloadCode, "@",
"edm::Ref<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >", payloadCode, "@",
"edm::Ref<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >", payloadCode, "@",
"edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >", payloadCode, "@",
"edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >", payloadCode, "@",
"edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >", payloadCode, "@",
"edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >", payloadCode, "@",
"edm::RefProd<reco::CaloTauDiscriminator>", payloadCode, "@",
"edm::RefProd<reco::CaloTauDiscriminatorByIsolation>", payloadCode, "@",
"edm::RefProd<std::vector<reco::PFRecoTauChargedHadron> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::PFTau> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::PFTauDecayMode> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::RecoTauPiZero> >", payloadCode, "@",
"edm::RefProd<vector<reco::PFRecoTauChargedHadron> >", payloadCode, "@",
"edm::RefProd<vector<reco::PFTau> >", payloadCode, "@",
"edm::RefProd<vector<reco::PFTauDecayMode> >", payloadCode, "@",
"edm::RefProd<vector<reco::RecoTauPiZero> >", payloadCode, "@",
"edm::RefToBase<reco::PFTau>", payloadCode, "@",
"edm::RefToBaseProd<reco::PFTau>", payloadCode, "@",
"edm::RefToBaseVector<reco::PFTau>", payloadCode, "@",
"edm::RefVector<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminator,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,float> > >", payloadCode, "@",
"edm::RefVector<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int>,edm::refhelper::FindUsingAdvance<reco::CaloTauDiscriminatorByIsolation,pair<edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >,int> > >", payloadCode, "@",
"edm::RefVector<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTau>,reco::PFTau> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >", payloadCode, "@",
"edm::RefVector<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> >", payloadCode, "@",
"edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> >", payloadCode, "@",
"edm::RefVector<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> >", payloadCode, "@",
"edm::RefVector<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> >", payloadCode, "@",
"edm::Wrapper<edm::Association<std::vector<reco::PFTau> > >", payloadCode, "@",
"edm::Wrapper<edm::Association<std::vector<reco::PFTauDecayMode> > >", payloadCode, "@",
"edm::Wrapper<edm::Association<vector<reco::PFTau> > >", payloadCode, "@",
"edm::Wrapper<edm::Association<vector<reco::PFTauDecayMode> > >", payloadCode, "@",
"edm::Wrapper<edm::RefToBaseVector<reco::PFTau> >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<std::vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTau>,reco::PFTau> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", payloadCode, "@",
"edm::Wrapper<reco::CaloTauDiscriminator>", payloadCode, "@",
"edm::Wrapper<reco::CaloTauDiscriminatorByIsolation>", payloadCode, "@",
"edm::Wrapper<std::vector<reco::PFRecoTauChargedHadron> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::PFTau> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::PFTauDecayMode> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::RecoTauPiZero> >", payloadCode, "@",
"edm::Wrapper<vector<reco::PFRecoTauChargedHadron> >", payloadCode, "@",
"edm::Wrapper<vector<reco::PFTau> >", payloadCode, "@",
"edm::Wrapper<vector<reco::PFTauDecayMode> >", payloadCode, "@",
"edm::Wrapper<vector<reco::RecoTauPiZero> >", payloadCode, "@",
"edm::reftobase::BaseHolder<reco::PFTau>", payloadCode, "@",
"edm::reftobase::BaseVectorHolder<reco::PFTau>", payloadCode, "@",
"edm::reftobase::Holder<reco::BaseTau,edm::Ref<std::vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTau>,reco::PFTau> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::CompositeCandidate,edm::Ref<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode,edm::refhelper::FindUsingAdvance<vector<reco::PFTauDecayMode>,reco::PFTauDecayMode> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<std::vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<std::vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron,edm::refhelper::FindUsingAdvance<vector<reco::PFRecoTauChargedHadron>,reco::PFRecoTauChargedHadron> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::CompositePtrCandidate,edm::Ref<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero,edm::refhelper::FindUsingAdvance<vector<reco::RecoTauPiZero>,reco::RecoTauPiZero> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::PFTau,edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::PFTau,reco::PFTauRef>", payloadCode, "@",
"edm::reftobase::IndirectHolder<reco::PFTau>", payloadCode, "@",
"edm::reftobase::RefHolder<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", payloadCode, "@",
"edm::reftobase::RefHolder<reco::PFTauRef>", payloadCode, "@",
"reco::CaloTauDiscriminator", payloadCode, "@",
"reco::CaloTauDiscriminatorBase", payloadCode, "@",
"reco::CaloTauDiscriminatorByIsolation", payloadCode, "@",
"reco::CaloTauDiscriminatorByIsolationBase", payloadCode, "@",
"reco::CaloTauDiscriminatorByIsolationRef", payloadCode, "@",
"reco::CaloTauDiscriminatorByIsolationRefProd", payloadCode, "@",
"reco::CaloTauDiscriminatorByIsolationRefVector", payloadCode, "@",
"reco::CaloTauDiscriminatorRef", payloadCode, "@",
"reco::CaloTauDiscriminatorRefProd", payloadCode, "@",
"reco::CaloTauDiscriminatorRefVector", payloadCode, "@",
"reco::PFRecoTauChargedHadron", payloadCode, "@",
"reco::PFTau", payloadCode, "@",
"reco::PFTauDecayMode", payloadCode, "@",
"reco::RecoTauPiZero", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsTauReco_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsTauReco_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsTauReco_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsTauReco_xr() {
  TriggerDictionaryInitialization_DataFormatsTauReco_xr_Impl();
}
