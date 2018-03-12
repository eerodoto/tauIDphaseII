// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc630dIsrcdIDataFormatsdITauRecodIsrcdIDataFormatsTauRecodIadIDataFormatsTauReco_x1r

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
#include "src/DataFormats/TauReco/src/classes_1.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)
   {
      ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >", ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >","edm::Ref<std::vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)
   {
      ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >", ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >","edm::Ref<std::vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)
   {
      ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >", ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >","edm::Ref<std::vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)
   {
      ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >", ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >","edm::Ref<std::vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTau>,reco::BaseTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)
   {
      ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >", ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >","edm::Ref<std::vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTau>,reco::CaloTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::BaseTauTagInfo> >*)
   {
      ::edm::RefProd<vector<reco::BaseTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::BaseTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::BaseTauTagInfo> >", ::edm::RefProd<vector<reco::BaseTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::BaseTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::BaseTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::BaseTauTagInfo> >","edm::RefProd<std::vector<reco::BaseTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::BaseTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::BaseTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::BaseTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::BaseTauTagInfo> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::CaloTauTagInfo> >*)
   {
      ::edm::RefProd<vector<reco::CaloTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::CaloTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::CaloTauTagInfo> >", ::edm::RefProd<vector<reco::CaloTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::CaloTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::CaloTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::CaloTauTagInfo> >","edm::RefProd<std::vector<reco::CaloTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::CaloTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::CaloTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::CaloTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::CaloTauTagInfo> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::PFTauTagInfo> >*)
   {
      ::edm::RefProd<vector<reco::PFTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::PFTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::PFTauTagInfo> >", ::edm::RefProd<vector<reco::PFTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::PFTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::PFTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::PFTauTagInfo> >","edm::RefProd<std::vector<reco::PFTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::PFTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::PFTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::PFTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::PFTauTagInfo> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::BaseTau> >*)
   {
      ::edm::RefProd<vector<reco::BaseTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::BaseTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::BaseTau> >", ::edm::RefProd<vector<reco::BaseTau> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::BaseTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::BaseTau> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::BaseTau> >","edm::RefProd<std::vector<reco::BaseTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::BaseTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::BaseTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::BaseTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::BaseTau> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::CaloTau> >*)
   {
      ::edm::RefProd<vector<reco::CaloTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::CaloTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::CaloTau> >", ::edm::RefProd<vector<reco::CaloTau> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::CaloTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::CaloTau> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::CaloTau> >","edm::RefProd<std::vector<reco::CaloTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::CaloTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::CaloTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::CaloTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::CaloTau> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)
   {
      ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >", ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >","edm::RefVector<std::vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)
   {
      ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >", ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >","edm::RefVector<std::vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)
   {
      ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >", ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >","edm::RefVector<std::vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)
   {
      ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >", ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >","edm::RefVector<std::vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTau>,reco::BaseTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)
   {
      ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >", ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >","edm::RefVector<std::vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTau>,reco::CaloTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >","edm::Wrapper<edm::AssociationMap<edm::OneToValue<reco::CaloJetCollection,reco::L2TauIsolationInfo,unsigned int> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::BaseTauTagInfo> >*)
   {
      ::edm::Wrapper<vector<reco::BaseTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::BaseTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::BaseTauTagInfo> >", ::edm::Wrapper<vector<reco::BaseTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::BaseTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::BaseTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::BaseTauTagInfo> >","edm::Wrapper<std::vector<reco::BaseTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::BaseTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::BaseTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::BaseTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::BaseTauTagInfo> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::CaloTauTagInfo> >*)
   {
      ::edm::Wrapper<vector<reco::CaloTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::CaloTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::CaloTauTagInfo> >", ::edm::Wrapper<vector<reco::CaloTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::CaloTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::CaloTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::CaloTauTagInfo> >","edm::Wrapper<std::vector<reco::CaloTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::CaloTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::CaloTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::CaloTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::CaloTauTagInfo> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::PFTauTagInfo> >*)
   {
      ::edm::Wrapper<vector<reco::PFTauTagInfo> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::PFTauTagInfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::PFTauTagInfo> >", ::edm::Wrapper<vector<reco::PFTauTagInfo> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::PFTauTagInfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::PFTauTagInfo> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::PFTauTagInfo> >","edm::Wrapper<std::vector<reco::PFTauTagInfo> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::PFTauTagInfo> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::PFTauTagInfo> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::PFTauTagInfo> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::PFTauTagInfo> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::BaseTau> >*)
   {
      ::edm::Wrapper<vector<reco::BaseTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::BaseTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::BaseTau> >", ::edm::Wrapper<vector<reco::BaseTau> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::BaseTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::BaseTau> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::BaseTau> >","edm::Wrapper<std::vector<reco::BaseTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::BaseTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::BaseTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::BaseTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::BaseTau> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::CaloTau> >*)
   {
      ::edm::Wrapper<vector<reco::CaloTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::CaloTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::CaloTau> >", ::edm::Wrapper<vector<reco::CaloTau> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::CaloTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::CaloTau> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::CaloTau> >","edm::Wrapper<std::vector<reco::CaloTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::CaloTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::CaloTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::CaloTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::CaloTau> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTau>,reco::BaseTau> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >*)
   {
      ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >", ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >","edm::reftobase::Holder<reco::BaseTau,edm::Ref<std::vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTau>,reco::CaloTau> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLBaseTauTagInfo_Dictionary();
   static void recocLcLBaseTauTagInfo_TClassManip(TClass*);
   static void *new_recocLcLBaseTauTagInfo(void *p = 0);
   static void *newArray_recocLcLBaseTauTagInfo(Long_t size, void *p);
   static void delete_recocLcLBaseTauTagInfo(void *p);
   static void deleteArray_recocLcLBaseTauTagInfo(void *p);
   static void destruct_recocLcLBaseTauTagInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::BaseTauTagInfo*)
   {
      ::reco::BaseTauTagInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::BaseTauTagInfo));
      static ::ROOT::TGenericClassInfo 
         instance("reco::BaseTauTagInfo", 10, "DataFormats/TauReco/interface/BaseTauTagInfo.h", 17,
                  typeid(::reco::BaseTauTagInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLBaseTauTagInfo_Dictionary, isa_proxy, 12,
                  sizeof(::reco::BaseTauTagInfo) );
      instance.SetNew(&new_recocLcLBaseTauTagInfo);
      instance.SetNewArray(&newArray_recocLcLBaseTauTagInfo);
      instance.SetDelete(&delete_recocLcLBaseTauTagInfo);
      instance.SetDeleteArray(&deleteArray_recocLcLBaseTauTagInfo);
      instance.SetDestructor(&destruct_recocLcLBaseTauTagInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::BaseTauTagInfo*)
   {
      return GenerateInitInstanceLocal((::reco::BaseTauTagInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::BaseTauTagInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLBaseTauTagInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::BaseTauTagInfo*)0x0)->GetClass();
      recocLcLBaseTauTagInfo_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLBaseTauTagInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLCaloTauTagInfo_Dictionary();
   static void recocLcLCaloTauTagInfo_TClassManip(TClass*);
   static void *new_recocLcLCaloTauTagInfo(void *p = 0);
   static void *newArray_recocLcLCaloTauTagInfo(Long_t size, void *p);
   static void delete_recocLcLCaloTauTagInfo(void *p);
   static void deleteArray_recocLcLCaloTauTagInfo(void *p);
   static void destruct_recocLcLCaloTauTagInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::CaloTauTagInfo*)
   {
      ::reco::CaloTauTagInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::CaloTauTagInfo));
      static ::ROOT::TGenericClassInfo 
         instance("reco::CaloTauTagInfo", 12, "DataFormats/TauReco/interface/CaloTauTagInfo.h", 20,
                  typeid(::reco::CaloTauTagInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLCaloTauTagInfo_Dictionary, isa_proxy, 12,
                  sizeof(::reco::CaloTauTagInfo) );
      instance.SetNew(&new_recocLcLCaloTauTagInfo);
      instance.SetNewArray(&newArray_recocLcLCaloTauTagInfo);
      instance.SetDelete(&delete_recocLcLCaloTauTagInfo);
      instance.SetDeleteArray(&deleteArray_recocLcLCaloTauTagInfo);
      instance.SetDestructor(&destruct_recocLcLCaloTauTagInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::CaloTauTagInfo*)
   {
      return GenerateInitInstanceLocal((::reco::CaloTauTagInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::CaloTauTagInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLCaloTauTagInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::CaloTauTagInfo*)0x0)->GetClass();
      recocLcLCaloTauTagInfo_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLCaloTauTagInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLPFTauTagInfo_Dictionary();
   static void recocLcLPFTauTagInfo_TClassManip(TClass*);
   static void *new_recocLcLPFTauTagInfo(void *p = 0);
   static void *newArray_recocLcLPFTauTagInfo(Long_t size, void *p);
   static void delete_recocLcLPFTauTagInfo(void *p);
   static void deleteArray_recocLcLPFTauTagInfo(void *p);
   static void destruct_recocLcLPFTauTagInfo(void *p);

   // Schema evolution read functions
   static void read_recocLcLPFTauTagInfo_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_PFChargedHadrCands_ = oldObj->GetId("PFChargedHadrCands_");
#endif
      struct recocLcLPFTauTagInfo_Onfile {
         reco::PFCandidateRefVector &PFChargedHadrCands_;
         recocLcLPFTauTagInfo_Onfile(reco::PFCandidateRefVector &onfile_PFChargedHadrCands_ ): PFChargedHadrCands_(onfile_PFChargedHadrCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTauTagInfo_PFChargedHadrCands_ = oldObj->GetClass()->GetDataMemberOffset("PFChargedHadrCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTauTagInfo_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTauTagInfo_PFChargedHadrCands_) );

      static TClassRef cls("reco::PFTauTagInfo");
      static Long_t offset_PFChargedHadrCands_ = cls->GetDataMemberOffset("PFChargedHadrCands_");
      vector<reco::PFCandidatePtr>& PFChargedHadrCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_PFChargedHadrCands_);
      reco::PFTauTagInfo* newObj = (reco::PFTauTagInfo*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
   PFChargedHadrCands_.reserve(onfile.PFChargedHadrCands_.size());
for(auto const& ref : onfile.PFChargedHadrCands_) { 
   PFChargedHadrCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTauTagInfo_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_PFNeutrHadrCands_ = oldObj->GetId("PFNeutrHadrCands_");
#endif
      struct recocLcLPFTauTagInfo_Onfile {
         reco::PFCandidateRefVector &PFNeutrHadrCands_;
         recocLcLPFTauTagInfo_Onfile(reco::PFCandidateRefVector &onfile_PFNeutrHadrCands_ ): PFNeutrHadrCands_(onfile_PFNeutrHadrCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTauTagInfo_PFNeutrHadrCands_ = oldObj->GetClass()->GetDataMemberOffset("PFNeutrHadrCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTauTagInfo_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTauTagInfo_PFNeutrHadrCands_) );

      static TClassRef cls("reco::PFTauTagInfo");
      static Long_t offset_PFNeutrHadrCands_ = cls->GetDataMemberOffset("PFNeutrHadrCands_");
      vector<reco::PFCandidatePtr>& PFNeutrHadrCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_PFNeutrHadrCands_);
      reco::PFTauTagInfo* newObj = (reco::PFTauTagInfo*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
   PFNeutrHadrCands_.reserve(onfile.PFNeutrHadrCands_.size());
for(auto const& ref : onfile.PFNeutrHadrCands_) { 
   PFNeutrHadrCands_.push_back(edm::refToPtr(ref));
}

   }
   static void read_recocLcLPFTauTagInfo_2( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_PFGammaCands_ = oldObj->GetId("PFGammaCands_");
#endif
      struct recocLcLPFTauTagInfo_Onfile {
         reco::PFCandidateRefVector &PFGammaCands_;
         recocLcLPFTauTagInfo_Onfile(reco::PFCandidateRefVector &onfile_PFGammaCands_ ): PFGammaCands_(onfile_PFGammaCands_) {}
      };
      static Long_t offset_Onfile_recocLcLPFTauTagInfo_PFGammaCands_ = oldObj->GetClass()->GetDataMemberOffset("PFGammaCands_");
      char *onfile_add = (char*)oldObj->GetObject();
      recocLcLPFTauTagInfo_Onfile onfile(
         *(reco::PFCandidateRefVector*)(onfile_add+offset_Onfile_recocLcLPFTauTagInfo_PFGammaCands_) );

      static TClassRef cls("reco::PFTauTagInfo");
      static Long_t offset_PFGammaCands_ = cls->GetDataMemberOffset("PFGammaCands_");
      vector<reco::PFCandidatePtr>& PFGammaCands_ = *(vector<reco::PFCandidatePtr>*)(target+offset_PFGammaCands_);
      reco::PFTauTagInfo* newObj = (reco::PFTauTagInfo*)target;
      // Supress warning message.
      if (oldObj) {}

      if (newObj) {}

      //--- User's code ---
     
   PFGammaCands_.reserve(onfile.PFGammaCands_.size());
for(auto const& ref : onfile.PFGammaCands_) { 
   PFGammaCands_.push_back(edm::refToPtr(ref));
}

   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::PFTauTagInfo*)
   {
      ::reco::PFTauTagInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::PFTauTagInfo));
      static ::ROOT::TGenericClassInfo 
         instance("reco::PFTauTagInfo", 12, "DataFormats/TauReco/interface/PFTauTagInfo.h", 20,
                  typeid(::reco::PFTauTagInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLPFTauTagInfo_Dictionary, isa_proxy, 12,
                  sizeof(::reco::PFTauTagInfo) );
      instance.SetNew(&new_recocLcLPFTauTagInfo);
      instance.SetNewArray(&newArray_recocLcLPFTauTagInfo);
      instance.SetDelete(&delete_recocLcLPFTauTagInfo);
      instance.SetDeleteArray(&deleteArray_recocLcLPFTauTagInfo);
      instance.SetDestructor(&destruct_recocLcLPFTauTagInfo);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(3);
      rule = &readrules[0];
      rule->fSourceClass = "reco::PFTauTagInfo";
      rule->fTarget      = "PFChargedHadrCands_";
      rule->fSource      = "reco::PFCandidateRefVector PFChargedHadrCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTauTagInfo_0);
      rule->fCode        = "\n   PFChargedHadrCands_.reserve(onfile.PFChargedHadrCands_.size());\nfor(auto const& ref : onfile.PFChargedHadrCands_) { \n   PFChargedHadrCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-10]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[1];
      rule->fSourceClass = "reco::PFTauTagInfo";
      rule->fTarget      = "PFNeutrHadrCands_";
      rule->fSource      = "reco::PFCandidateRefVector PFNeutrHadrCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTauTagInfo_1);
      rule->fCode        = "\n   PFNeutrHadrCands_.reserve(onfile.PFNeutrHadrCands_.size());\nfor(auto const& ref : onfile.PFNeutrHadrCands_) { \n   PFNeutrHadrCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-10]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      rule = &readrules[2];
      rule->fSourceClass = "reco::PFTauTagInfo";
      rule->fTarget      = "PFGammaCands_";
      rule->fSource      = "reco::PFCandidateRefVector PFGammaCands_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_recocLcLPFTauTagInfo_2);
      rule->fCode        = "\n   PFGammaCands_.reserve(onfile.PFGammaCands_.size());\nfor(auto const& ref : onfile.PFGammaCands_) { \n   PFGammaCands_.push_back(edm::refToPtr(ref));\n}\n";
      rule->fVersion     = "[-10]";
      rule->fInclude     = "DataFormats/Common/interface/RefToPtr.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::PFTauTagInfo*)
   {
      return GenerateInitInstanceLocal((::reco::PFTauTagInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::PFTauTagInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLPFTauTagInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::PFTauTagInfo*)0x0)->GetClass();
      recocLcLPFTauTagInfo_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLPFTauTagInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLBaseTau_Dictionary();
   static void recocLcLBaseTau_TClassManip(TClass*);
   static void *new_recocLcLBaseTau(void *p = 0);
   static void *newArray_recocLcLBaseTau(Long_t size, void *p);
   static void delete_recocLcLBaseTau(void *p);
   static void deleteArray_recocLcLBaseTau(void *p);
   static void destruct_recocLcLBaseTau(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::BaseTau*)
   {
      ::reco::BaseTau *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::BaseTau));
      static ::ROOT::TGenericClassInfo 
         instance("reco::BaseTau", 12, "DataFormats/TauReco/interface/BaseTau.h", 19,
                  typeid(::reco::BaseTau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLBaseTau_Dictionary, isa_proxy, 12,
                  sizeof(::reco::BaseTau) );
      instance.SetNew(&new_recocLcLBaseTau);
      instance.SetNewArray(&newArray_recocLcLBaseTau);
      instance.SetDelete(&delete_recocLcLBaseTau);
      instance.SetDeleteArray(&deleteArray_recocLcLBaseTau);
      instance.SetDestructor(&destruct_recocLcLBaseTau);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::BaseTau*)
   {
      return GenerateInitInstanceLocal((::reco::BaseTau*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::BaseTau*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLBaseTau_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::BaseTau*)0x0)->GetClass();
      recocLcLBaseTau_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLBaseTau_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLCaloTau_Dictionary();
   static void recocLcLCaloTau_TClassManip(TClass*);
   static void *new_recocLcLCaloTau(void *p = 0);
   static void *newArray_recocLcLCaloTau(Long_t size, void *p);
   static void delete_recocLcLCaloTau(void *p);
   static void deleteArray_recocLcLCaloTau(void *p);
   static void destruct_recocLcLCaloTau(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::CaloTau*)
   {
      ::reco::CaloTau *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::CaloTau));
      static ::ROOT::TGenericClassInfo 
         instance("reco::CaloTau", 12, "DataFormats/TauReco/interface/CaloTau.h", 19,
                  typeid(::reco::CaloTau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLCaloTau_Dictionary, isa_proxy, 12,
                  sizeof(::reco::CaloTau) );
      instance.SetNew(&new_recocLcLCaloTau);
      instance.SetNewArray(&newArray_recocLcLCaloTau);
      instance.SetDelete(&delete_recocLcLCaloTau);
      instance.SetDeleteArray(&deleteArray_recocLcLCaloTau);
      instance.SetDestructor(&destruct_recocLcLCaloTau);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::CaloTau*)
   {
      return GenerateInitInstanceLocal((::reco::CaloTau*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::CaloTau*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLCaloTau_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::CaloTau*)0x0)->GetClass();
      recocLcLCaloTau_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLCaloTau_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >", ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >","edm::AssociationMap<edm::OneToValue<reco::CaloJetCollection,reco::L2TauIsolationInfo,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLL2TauIsolationInfo_Dictionary();
   static void recocLcLL2TauIsolationInfo_TClassManip(TClass*);
   static void *new_recocLcLL2TauIsolationInfo(void *p = 0);
   static void *newArray_recocLcLL2TauIsolationInfo(Long_t size, void *p);
   static void delete_recocLcLL2TauIsolationInfo(void *p);
   static void deleteArray_recocLcLL2TauIsolationInfo(void *p);
   static void destruct_recocLcLL2TauIsolationInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::L2TauIsolationInfo*)
   {
      ::reco::L2TauIsolationInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::L2TauIsolationInfo));
      static ::ROOT::TGenericClassInfo 
         instance("reco::L2TauIsolationInfo", 10, "DataFormats/TauReco/interface/L2TauIsolationInfo.h", 17,
                  typeid(::reco::L2TauIsolationInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLL2TauIsolationInfo_Dictionary, isa_proxy, 12,
                  sizeof(::reco::L2TauIsolationInfo) );
      instance.SetNew(&new_recocLcLL2TauIsolationInfo);
      instance.SetNewArray(&newArray_recocLcLL2TauIsolationInfo);
      instance.SetDelete(&delete_recocLcLL2TauIsolationInfo);
      instance.SetDeleteArray(&deleteArray_recocLcLL2TauIsolationInfo);
      instance.SetDestructor(&destruct_recocLcLL2TauIsolationInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::L2TauIsolationInfo*)
   {
      return GenerateInitInstanceLocal((::reco::L2TauIsolationInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::L2TauIsolationInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLL2TauIsolationInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::L2TauIsolationInfo*)0x0)->GetClass();
      recocLcLL2TauIsolationInfo_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLL2TauIsolationInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> > : new ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >[nElements] : new ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> > : new ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >[nElements] : new ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> > : new ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >[nElements] : new ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > : new ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >[nElements] : new ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > : new ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >[nElements] : new ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::BaseTauTagInfo> > : new ::edm::RefProd<vector<reco::BaseTauTagInfo> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::BaseTauTagInfo> >[nElements] : new ::edm::RefProd<vector<reco::BaseTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::BaseTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::BaseTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::BaseTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::BaseTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::CaloTauTagInfo> > : new ::edm::RefProd<vector<reco::CaloTauTagInfo> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::CaloTauTagInfo> >[nElements] : new ::edm::RefProd<vector<reco::CaloTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::CaloTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::CaloTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::CaloTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::CaloTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::PFTauTagInfo> > : new ::edm::RefProd<vector<reco::PFTauTagInfo> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::PFTauTagInfo> >[nElements] : new ::edm::RefProd<vector<reco::PFTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::PFTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::PFTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::PFTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::PFTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::BaseTau> > : new ::edm::RefProd<vector<reco::BaseTau> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::BaseTau> >[nElements] : new ::edm::RefProd<vector<reco::BaseTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::BaseTau> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::BaseTau> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLBaseTaugRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::BaseTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::BaseTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::CaloTau> > : new ::edm::RefProd<vector<reco::CaloTau> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::CaloTau> >[nElements] : new ::edm::RefProd<vector<reco::CaloTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::CaloTau> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::CaloTau> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLCaloTaugRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::CaloTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::CaloTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> > : new ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >[nElements] : new ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTauTagInfogRcOrecocLcLBaseTauTagInfogRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> > : new ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >[nElements] : new ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTauTagInfogRcOrecocLcLCaloTauTagInfogRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> > : new ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >[nElements] : new ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfocOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTauTagInfogRcOrecocLcLPFTauTagInfogRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > : new ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >[nElements] : new ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > : new ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >[nElements] : new ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::BaseTauTagInfo> > : new ::edm::Wrapper<vector<reco::BaseTauTagInfo> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::BaseTauTagInfo> >[nElements] : new ::edm::Wrapper<vector<reco::BaseTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::BaseTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::BaseTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLBaseTauTagInfogRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::BaseTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::BaseTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::CaloTauTagInfo> > : new ::edm::Wrapper<vector<reco::CaloTauTagInfo> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::CaloTauTagInfo> >[nElements] : new ::edm::Wrapper<vector<reco::CaloTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::CaloTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::CaloTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLCaloTauTagInfogRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::CaloTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::CaloTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::PFTauTagInfo> > : new ::edm::Wrapper<vector<reco::PFTauTagInfo> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::PFTauTagInfo> >[nElements] : new ::edm::Wrapper<vector<reco::PFTauTagInfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::PFTauTagInfo> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::PFTauTagInfo> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLPFTauTagInfogRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::PFTauTagInfo> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::PFTauTagInfo> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::BaseTau> > : new ::edm::Wrapper<vector<reco::BaseTau> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::BaseTau> >[nElements] : new ::edm::Wrapper<vector<reco::BaseTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::BaseTau> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::BaseTau> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLBaseTaugRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::BaseTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::BaseTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::CaloTau> > : new ::edm::Wrapper<vector<reco::CaloTau> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::CaloTau> >[nElements] : new ::edm::Wrapper<vector<reco::CaloTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::CaloTau> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::CaloTau> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLCaloTaugRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::CaloTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::CaloTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLBaseTaugRcOrecocLcLBaseTaugRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > > : new ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >[nElements] : new ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLBaseTaucOedmcLcLReflEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLCaloTaugRcOrecocLcLCaloTaugRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLBaseTauTagInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::BaseTauTagInfo : new ::reco::BaseTauTagInfo;
   }
   static void *newArray_recocLcLBaseTauTagInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::BaseTauTagInfo[nElements] : new ::reco::BaseTauTagInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLBaseTauTagInfo(void *p) {
      delete ((::reco::BaseTauTagInfo*)p);
   }
   static void deleteArray_recocLcLBaseTauTagInfo(void *p) {
      delete [] ((::reco::BaseTauTagInfo*)p);
   }
   static void destruct_recocLcLBaseTauTagInfo(void *p) {
      typedef ::reco::BaseTauTagInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::BaseTauTagInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLCaloTauTagInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloTauTagInfo : new ::reco::CaloTauTagInfo;
   }
   static void *newArray_recocLcLCaloTauTagInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloTauTagInfo[nElements] : new ::reco::CaloTauTagInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLCaloTauTagInfo(void *p) {
      delete ((::reco::CaloTauTagInfo*)p);
   }
   static void deleteArray_recocLcLCaloTauTagInfo(void *p) {
      delete [] ((::reco::CaloTauTagInfo*)p);
   }
   static void destruct_recocLcLCaloTauTagInfo(void *p) {
      typedef ::reco::CaloTauTagInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::CaloTauTagInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLPFTauTagInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::PFTauTagInfo : new ::reco::PFTauTagInfo;
   }
   static void *newArray_recocLcLPFTauTagInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::PFTauTagInfo[nElements] : new ::reco::PFTauTagInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLPFTauTagInfo(void *p) {
      delete ((::reco::PFTauTagInfo*)p);
   }
   static void deleteArray_recocLcLPFTauTagInfo(void *p) {
      delete [] ((::reco::PFTauTagInfo*)p);
   }
   static void destruct_recocLcLPFTauTagInfo(void *p) {
      typedef ::reco::PFTauTagInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::PFTauTagInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLBaseTau(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::BaseTau : new ::reco::BaseTau;
   }
   static void *newArray_recocLcLBaseTau(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::BaseTau[nElements] : new ::reco::BaseTau[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLBaseTau(void *p) {
      delete ((::reco::BaseTau*)p);
   }
   static void deleteArray_recocLcLBaseTau(void *p) {
      delete [] ((::reco::BaseTau*)p);
   }
   static void destruct_recocLcLBaseTau(void *p) {
      typedef ::reco::BaseTau current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::BaseTau

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLCaloTau(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloTau : new ::reco::CaloTau;
   }
   static void *newArray_recocLcLCaloTau(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::CaloTau[nElements] : new ::reco::CaloTau[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLCaloTau(void *p) {
      delete ((::reco::CaloTau*)p);
   }
   static void deleteArray_recocLcLCaloTau(void *p) {
      delete [] ((::reco::CaloTau*)p);
   }
   static void destruct_recocLcLCaloTau(void *p) {
      typedef ::reco::CaloTau current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::CaloTau

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > : new ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToValuelEvectorlErecocLcLCaloJetgRcOrecocLcLL2TauIsolationInfocOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLL2TauIsolationInfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::L2TauIsolationInfo : new ::reco::L2TauIsolationInfo;
   }
   static void *newArray_recocLcLL2TauIsolationInfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::L2TauIsolationInfo[nElements] : new ::reco::L2TauIsolationInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLL2TauIsolationInfo(void *p) {
      delete ((::reco::L2TauIsolationInfo*)p);
   }
   static void deleteArray_recocLcLL2TauIsolationInfo(void *p) {
      delete [] ((::reco::L2TauIsolationInfo*)p);
   }
   static void destruct_recocLcLL2TauIsolationInfo(void *p) {
      typedef ::reco::L2TauIsolationInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::L2TauIsolationInfo

namespace ROOT {
   static TClass *vectorlErecocLcLPFTauTagInfogR_Dictionary();
   static void vectorlErecocLcLPFTauTagInfogR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLPFTauTagInfogR(void *p = 0);
   static void *newArray_vectorlErecocLcLPFTauTagInfogR(Long_t size, void *p);
   static void delete_vectorlErecocLcLPFTauTagInfogR(void *p);
   static void deleteArray_vectorlErecocLcLPFTauTagInfogR(void *p);
   static void destruct_vectorlErecocLcLPFTauTagInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::PFTauTagInfo>*)
   {
      vector<reco::PFTauTagInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::PFTauTagInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::PFTauTagInfo>", -2, "vector", 214,
                  typeid(vector<reco::PFTauTagInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLPFTauTagInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::PFTauTagInfo>) );
      instance.SetNew(&new_vectorlErecocLcLPFTauTagInfogR);
      instance.SetNewArray(&newArray_vectorlErecocLcLPFTauTagInfogR);
      instance.SetDelete(&delete_vectorlErecocLcLPFTauTagInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLPFTauTagInfogR);
      instance.SetDestructor(&destruct_vectorlErecocLcLPFTauTagInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::PFTauTagInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::PFTauTagInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLPFTauTagInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::PFTauTagInfo>*)0x0)->GetClass();
      vectorlErecocLcLPFTauTagInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLPFTauTagInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLPFTauTagInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::PFTauTagInfo> : new vector<reco::PFTauTagInfo>;
   }
   static void *newArray_vectorlErecocLcLPFTauTagInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::PFTauTagInfo>[nElements] : new vector<reco::PFTauTagInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLPFTauTagInfogR(void *p) {
      delete ((vector<reco::PFTauTagInfo>*)p);
   }
   static void deleteArray_vectorlErecocLcLPFTauTagInfogR(void *p) {
      delete [] ((vector<reco::PFTauTagInfo>*)p);
   }
   static void destruct_vectorlErecocLcLPFTauTagInfogR(void *p) {
      typedef vector<reco::PFTauTagInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::PFTauTagInfo>

namespace ROOT {
   static TClass *vectorlErecocLcLCaloTauTagInfogR_Dictionary();
   static void vectorlErecocLcLCaloTauTagInfogR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLCaloTauTagInfogR(void *p = 0);
   static void *newArray_vectorlErecocLcLCaloTauTagInfogR(Long_t size, void *p);
   static void delete_vectorlErecocLcLCaloTauTagInfogR(void *p);
   static void deleteArray_vectorlErecocLcLCaloTauTagInfogR(void *p);
   static void destruct_vectorlErecocLcLCaloTauTagInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::CaloTauTagInfo>*)
   {
      vector<reco::CaloTauTagInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::CaloTauTagInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::CaloTauTagInfo>", -2, "vector", 214,
                  typeid(vector<reco::CaloTauTagInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLCaloTauTagInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::CaloTauTagInfo>) );
      instance.SetNew(&new_vectorlErecocLcLCaloTauTagInfogR);
      instance.SetNewArray(&newArray_vectorlErecocLcLCaloTauTagInfogR);
      instance.SetDelete(&delete_vectorlErecocLcLCaloTauTagInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLCaloTauTagInfogR);
      instance.SetDestructor(&destruct_vectorlErecocLcLCaloTauTagInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::CaloTauTagInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::CaloTauTagInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLCaloTauTagInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::CaloTauTagInfo>*)0x0)->GetClass();
      vectorlErecocLcLCaloTauTagInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLCaloTauTagInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLCaloTauTagInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::CaloTauTagInfo> : new vector<reco::CaloTauTagInfo>;
   }
   static void *newArray_vectorlErecocLcLCaloTauTagInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::CaloTauTagInfo>[nElements] : new vector<reco::CaloTauTagInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLCaloTauTagInfogR(void *p) {
      delete ((vector<reco::CaloTauTagInfo>*)p);
   }
   static void deleteArray_vectorlErecocLcLCaloTauTagInfogR(void *p) {
      delete [] ((vector<reco::CaloTauTagInfo>*)p);
   }
   static void destruct_vectorlErecocLcLCaloTauTagInfogR(void *p) {
      typedef vector<reco::CaloTauTagInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::CaloTauTagInfo>

namespace ROOT {
   static TClass *vectorlErecocLcLCaloTaugR_Dictionary();
   static void vectorlErecocLcLCaloTaugR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLCaloTaugR(void *p = 0);
   static void *newArray_vectorlErecocLcLCaloTaugR(Long_t size, void *p);
   static void delete_vectorlErecocLcLCaloTaugR(void *p);
   static void deleteArray_vectorlErecocLcLCaloTaugR(void *p);
   static void destruct_vectorlErecocLcLCaloTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::CaloTau>*)
   {
      vector<reco::CaloTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::CaloTau>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::CaloTau>", -2, "vector", 214,
                  typeid(vector<reco::CaloTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLCaloTaugR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::CaloTau>) );
      instance.SetNew(&new_vectorlErecocLcLCaloTaugR);
      instance.SetNewArray(&newArray_vectorlErecocLcLCaloTaugR);
      instance.SetDelete(&delete_vectorlErecocLcLCaloTaugR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLCaloTaugR);
      instance.SetDestructor(&destruct_vectorlErecocLcLCaloTaugR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::CaloTau> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::CaloTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLCaloTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::CaloTau>*)0x0)->GetClass();
      vectorlErecocLcLCaloTaugR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLCaloTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLCaloTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::CaloTau> : new vector<reco::CaloTau>;
   }
   static void *newArray_vectorlErecocLcLCaloTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::CaloTau>[nElements] : new vector<reco::CaloTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLCaloTaugR(void *p) {
      delete ((vector<reco::CaloTau>*)p);
   }
   static void deleteArray_vectorlErecocLcLCaloTaugR(void *p) {
      delete [] ((vector<reco::CaloTau>*)p);
   }
   static void destruct_vectorlErecocLcLCaloTaugR(void *p) {
      typedef vector<reco::CaloTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::CaloTau>

namespace ROOT {
   static TClass *vectorlErecocLcLBaseTauTagInfogR_Dictionary();
   static void vectorlErecocLcLBaseTauTagInfogR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLBaseTauTagInfogR(void *p = 0);
   static void *newArray_vectorlErecocLcLBaseTauTagInfogR(Long_t size, void *p);
   static void delete_vectorlErecocLcLBaseTauTagInfogR(void *p);
   static void deleteArray_vectorlErecocLcLBaseTauTagInfogR(void *p);
   static void destruct_vectorlErecocLcLBaseTauTagInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::BaseTauTagInfo>*)
   {
      vector<reco::BaseTauTagInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::BaseTauTagInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::BaseTauTagInfo>", -2, "vector", 214,
                  typeid(vector<reco::BaseTauTagInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLBaseTauTagInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::BaseTauTagInfo>) );
      instance.SetNew(&new_vectorlErecocLcLBaseTauTagInfogR);
      instance.SetNewArray(&newArray_vectorlErecocLcLBaseTauTagInfogR);
      instance.SetDelete(&delete_vectorlErecocLcLBaseTauTagInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLBaseTauTagInfogR);
      instance.SetDestructor(&destruct_vectorlErecocLcLBaseTauTagInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::BaseTauTagInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::BaseTauTagInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLBaseTauTagInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::BaseTauTagInfo>*)0x0)->GetClass();
      vectorlErecocLcLBaseTauTagInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLBaseTauTagInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLBaseTauTagInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::BaseTauTagInfo> : new vector<reco::BaseTauTagInfo>;
   }
   static void *newArray_vectorlErecocLcLBaseTauTagInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::BaseTauTagInfo>[nElements] : new vector<reco::BaseTauTagInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLBaseTauTagInfogR(void *p) {
      delete ((vector<reco::BaseTauTagInfo>*)p);
   }
   static void deleteArray_vectorlErecocLcLBaseTauTagInfogR(void *p) {
      delete [] ((vector<reco::BaseTauTagInfo>*)p);
   }
   static void destruct_vectorlErecocLcLBaseTauTagInfogR(void *p) {
      typedef vector<reco::BaseTauTagInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::BaseTauTagInfo>

namespace ROOT {
   static TClass *vectorlErecocLcLBaseTaugR_Dictionary();
   static void vectorlErecocLcLBaseTaugR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLBaseTaugR(void *p = 0);
   static void *newArray_vectorlErecocLcLBaseTaugR(Long_t size, void *p);
   static void delete_vectorlErecocLcLBaseTaugR(void *p);
   static void deleteArray_vectorlErecocLcLBaseTaugR(void *p);
   static void destruct_vectorlErecocLcLBaseTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::BaseTau>*)
   {
      vector<reco::BaseTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::BaseTau>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::BaseTau>", -2, "vector", 214,
                  typeid(vector<reco::BaseTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLBaseTaugR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::BaseTau>) );
      instance.SetNew(&new_vectorlErecocLcLBaseTaugR);
      instance.SetNewArray(&newArray_vectorlErecocLcLBaseTaugR);
      instance.SetDelete(&delete_vectorlErecocLcLBaseTaugR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLBaseTaugR);
      instance.SetDestructor(&destruct_vectorlErecocLcLBaseTaugR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::BaseTau> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::BaseTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLBaseTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::BaseTau>*)0x0)->GetClass();
      vectorlErecocLcLBaseTaugR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLBaseTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLBaseTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::BaseTau> : new vector<reco::BaseTau>;
   }
   static void *newArray_vectorlErecocLcLBaseTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::BaseTau>[nElements] : new vector<reco::BaseTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLBaseTaugR(void *p) {
      delete ((vector<reco::BaseTau>*)p);
   }
   static void deleteArray_vectorlErecocLcLBaseTaugR(void *p) {
      delete [] ((vector<reco::BaseTau>*)p);
   }
   static void destruct_vectorlErecocLcLBaseTaugR(void *p) {
      typedef vector<reco::BaseTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::BaseTau>

namespace ROOT {
   static TClass *maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR_Dictionary();
   static void maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(void *p);
   static void deleteArray_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(void *p);
   static void destruct_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,reco::L2TauIsolationInfo>*)
   {
      map<unsigned int,reco::L2TauIsolationInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,reco::L2TauIsolationInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,reco::L2TauIsolationInfo>", -2, "map", 96,
                  typeid(map<unsigned int,reco::L2TauIsolationInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned int,reco::L2TauIsolationInfo>) );
      instance.SetNew(&new_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR);
      instance.SetDelete(&delete_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,reco::L2TauIsolationInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,reco::L2TauIsolationInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,reco::L2TauIsolationInfo>*)0x0)->GetClass();
      maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,reco::L2TauIsolationInfo> : new map<unsigned int,reco::L2TauIsolationInfo>;
   }
   static void *newArray_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,reco::L2TauIsolationInfo>[nElements] : new map<unsigned int,reco::L2TauIsolationInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(void *p) {
      delete ((map<unsigned int,reco::L2TauIsolationInfo>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(void *p) {
      delete [] ((map<unsigned int,reco::L2TauIsolationInfo>*)p);
   }
   static void destruct_maplEunsignedsPintcOrecocLcLL2TauIsolationInfogR(void *p) {
      typedef map<unsigned int,reco::L2TauIsolationInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,reco::L2TauIsolationInfo>

namespace {
  void TriggerDictionaryInitialization_DataFormatsTauReco_x1r_Impl() {
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
#line 1 "DataFormatsTauReco_x1r dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/BaseTauTagInfo.h")))  BaseTauTagInfo;}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  ValueTrait;
}}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/CaloTauTagInfo.h")))  CaloTauTagInfo;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/PFTauTagInfo.h")))  PFTauTagInfo;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/BaseTau.h")))  BaseTau;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/CaloTau.h")))  CaloTau;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/JetReco/interface/CaloJet.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/BaseTauTagInfo.h")))  CaloJet;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/Candidate/interface/Candidate.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/BaseTauTagInfo.h")))  Candidate;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsTauReco_x1r dictionary payload"

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
  struct dictionary1 {
    reco::L2TauIsolationInfo                                    l2iI;
    reco::L2TauInfoAssociation                                  l2ts;
    edm::Wrapper<reco::L2TauInfoAssociation>                    wl2ts;


    std::vector<reco::BaseTauTagInfo>                           btti_v;
    edm::Wrapper<std::vector<reco::BaseTauTagInfo> >            btti_w;
    edm::Ref<std::vector<reco::BaseTauTagInfo> >                btti_r;
    edm::RefProd<std::vector<reco::BaseTauTagInfo> >            btti_rp;
    edm::RefVector<std::vector<reco::BaseTauTagInfo> >          btti_rv;

    std::vector<reco::CaloTauTagInfo>                           calotti_v;
    edm::Wrapper<std::vector<reco::CaloTauTagInfo> >            calotti_w;
    edm::Ref<std::vector<reco::CaloTauTagInfo> >                calotti_r;
    edm::RefProd<std::vector<reco::CaloTauTagInfo> >            calotti_rp;
    edm::RefVector<std::vector<reco::CaloTauTagInfo> >          calotti_rv;

    std::vector<reco::PFTauTagInfo>                             pftti_v;
    edm::Wrapper<std::vector<reco::PFTauTagInfo> >              pftti_w;
    edm::Ref<std::vector<reco::PFTauTagInfo> >                  pftti_r;
    edm::RefProd<std::vector<reco::PFTauTagInfo> >              pftti_rp;
    edm::RefVector<std::vector<reco::PFTauTagInfo> >            pftti_rv;

    std::vector<reco::BaseTau>                                  bt_v;
    edm::Wrapper<std::vector<reco::BaseTau> >                   bt_w;
    edm::Ref<std::vector<reco::BaseTau> >                       bt_r;
    edm::RefProd<std::vector<reco::BaseTau> >                   bt_rp;
    edm::RefVector<std::vector<reco::BaseTau> >                 bt_rv;
    edm::reftobase::Holder<reco::Candidate,reco::BaseTauRef>    bt_rb;

    std::vector<reco::CaloTau>                                  calot_v;
    edm::Wrapper<std::vector<reco::CaloTau> >                   calot_w;
    edm::Ref<std::vector<reco::CaloTau> >                       calot_r;
    edm::RefProd<std::vector<reco::CaloTau> >                   calot_rp;
    edm::RefVector<std::vector<reco::CaloTau> >                 calot_rv;
    edm::reftobase::Holder<reco::BaseTau,reco::CaloTauRef>      calot_rb;
    edm::RefToBaseVector<reco::CaloTau> calot_rftbv;
    edm::Wrapper<edm::RefToBaseVector<reco::CaloTau> > calot_rftbv_w;


  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"edm::AssociationMap<edm::OneToValue<reco::CaloJetCollection,reco::L2TauIsolationInfo,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> >", payloadCode, "@",
"edm::Ref<std::vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTau>,reco::BaseTau> >", payloadCode, "@",
"edm::Ref<std::vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >", payloadCode, "@",
"edm::Ref<std::vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTau>,reco::CaloTau> >", payloadCode, "@",
"edm::Ref<std::vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >", payloadCode, "@",
"edm::Ref<std::vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >", payloadCode, "@",
"edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >", payloadCode, "@",
"edm::Ref<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >", payloadCode, "@",
"edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >", payloadCode, "@",
"edm::Ref<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >", payloadCode, "@",
"edm::Ref<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::BaseTau> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::BaseTauTagInfo> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::CaloTau> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::CaloTauTagInfo> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::PFTauTagInfo> >", payloadCode, "@",
"edm::RefProd<vector<reco::BaseTau> >", payloadCode, "@",
"edm::RefProd<vector<reco::BaseTauTagInfo> >", payloadCode, "@",
"edm::RefProd<vector<reco::CaloTau> >", payloadCode, "@",
"edm::RefProd<vector<reco::CaloTauTagInfo> >", payloadCode, "@",
"edm::RefProd<vector<reco::PFTauTagInfo> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTau>,reco::BaseTau> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTau>,reco::CaloTau> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<std::vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >", payloadCode, "@",
"edm::RefVector<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> >", payloadCode, "@",
"edm::RefVector<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::BaseTauTagInfo>,reco::BaseTauTagInfo> >", payloadCode, "@",
"edm::RefVector<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> >", payloadCode, "@",
"edm::RefVector<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::CaloTauTagInfo>,reco::CaloTauTagInfo> >", payloadCode, "@",
"edm::RefVector<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo,edm::refhelper::FindUsingAdvance<vector<reco::PFTauTagInfo>,reco::PFTauTagInfo> >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToValue<reco::CaloJetCollection,reco::L2TauIsolationInfo,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToValue<vector<reco::CaloJet>,reco::L2TauIsolationInfo,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::BaseTau> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::BaseTauTagInfo> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::CaloTau> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::CaloTauTagInfo> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::PFTauTagInfo> >", payloadCode, "@",
"edm::Wrapper<vector<reco::BaseTau> >", payloadCode, "@",
"edm::Wrapper<vector<reco::BaseTauTagInfo> >", payloadCode, "@",
"edm::Wrapper<vector<reco::CaloTau> >", payloadCode, "@",
"edm::Wrapper<vector<reco::CaloTauTagInfo> >", payloadCode, "@",
"edm::Wrapper<vector<reco::PFTauTagInfo> >", payloadCode, "@",
"edm::reftobase::Holder<reco::BaseTau,edm::Ref<std::vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<std::vector<reco::CaloTau>,reco::CaloTau> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::BaseTau,edm::Ref<vector<reco::CaloTau>,reco::CaloTau,edm::refhelper::FindUsingAdvance<vector<reco::CaloTau>,reco::CaloTau> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<std::vector<reco::BaseTau>,reco::BaseTau> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<reco::BaseTau>,reco::BaseTau,edm::refhelper::FindUsingAdvance<vector<reco::BaseTau>,reco::BaseTau> > >", payloadCode, "@",
"reco::BaseTau", payloadCode, "@",
"reco::BaseTauTagInfo", payloadCode, "@",
"reco::CaloTau", payloadCode, "@",
"reco::CaloTauTagInfo", payloadCode, "@",
"reco::L2TauIsolationInfo", payloadCode, "@",
"reco::PFTauTagInfo", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsTauReco_x1r",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsTauReco_x1r_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsTauReco_x1r_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsTauReco_x1r() {
  TriggerDictionaryInitialization_DataFormatsTauReco_x1r_Impl();
}
