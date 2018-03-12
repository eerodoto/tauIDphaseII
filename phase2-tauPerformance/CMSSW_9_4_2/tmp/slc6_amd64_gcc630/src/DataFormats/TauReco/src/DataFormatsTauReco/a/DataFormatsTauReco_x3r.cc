// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc630dIsrcdIDataFormatsdITauRecodIsrcdIDataFormatsTauRecodIadIDataFormatsTauReco_x3r

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

// Header files passed as explicit arguments
#include "src/DataFormats/TauReco/src/classes_hlt.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)
   {
      ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >", ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >","edm::Ref<std::vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<std::vector<reco::HLTTau>,reco::HLTTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::HLTTau> >*)
   {
      ::edm::RefProd<vector<reco::HLTTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::HLTTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::HLTTau> >", ::edm::RefProd<vector<reco::HLTTau> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::HLTTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::HLTTau> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::HLTTau> >","edm::RefProd<std::vector<reco::HLTTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::HLTTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::HLTTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::HLTTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::HLTTau> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)
   {
      ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >", ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >","edm::RefVector<std::vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<std::vector<reco::HLTTau>,reco::HLTTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::HLTTau> >*)
   {
      ::edm::Wrapper<vector<reco::HLTTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::HLTTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::HLTTau> >", ::edm::Wrapper<vector<reco::HLTTau> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::HLTTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::HLTTau> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::HLTTau> >","edm::Wrapper<std::vector<reco::HLTTau> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::HLTTau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::HLTTau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::HLTTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::HLTTau> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >*)
   {
      ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >", ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >","edm::Wrapper<std::vector<edm::Ptr<reco::PFTau> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >*)
   {
      ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >", ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >","edm::Wrapper<std::vector<edm::FwdPtr<reco::PFTau> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >*)
   {
      ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >", ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >","edm::Wrapper<std::vector<edm::FwdPtr<reco::BaseTau> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLPtrlErecocLcLBaseTaugR_Dictionary();
   static void edmcLcLPtrlErecocLcLBaseTaugR_TClassManip(TClass*);
   static void *new_edmcLcLPtrlErecocLcLBaseTaugR(void *p = 0);
   static void *newArray_edmcLcLPtrlErecocLcLBaseTaugR(Long_t size, void *p);
   static void delete_edmcLcLPtrlErecocLcLBaseTaugR(void *p);
   static void deleteArray_edmcLcLPtrlErecocLcLBaseTaugR(void *p);
   static void destruct_edmcLcLPtrlErecocLcLBaseTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ptr<reco::BaseTau>*)
   {
      ::edm::Ptr<reco::BaseTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ptr<reco::BaseTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ptr<reco::BaseTau>", ::edm::Ptr<reco::BaseTau>::Class_Version(), "DataFormats/Common/interface/Ptr.h", 40,
                  typeid(::edm::Ptr<reco::BaseTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLPtrlErecocLcLBaseTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ptr<reco::BaseTau>) );
      instance.SetNew(&new_edmcLcLPtrlErecocLcLBaseTaugR);
      instance.SetNewArray(&newArray_edmcLcLPtrlErecocLcLBaseTaugR);
      instance.SetDelete(&delete_edmcLcLPtrlErecocLcLBaseTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLPtrlErecocLcLBaseTaugR);
      instance.SetDestructor(&destruct_edmcLcLPtrlErecocLcLBaseTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ptr<reco::BaseTau>*)
   {
      return GenerateInitInstanceLocal((::edm::Ptr<reco::BaseTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ptr<reco::BaseTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLPtrlErecocLcLBaseTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ptr<reco::BaseTau>*)0x0)->GetClass();
      edmcLcLPtrlErecocLcLBaseTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLPtrlErecocLcLBaseTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLPtrlErecocLcLPFTaugR_Dictionary();
   static void edmcLcLPtrlErecocLcLPFTaugR_TClassManip(TClass*);
   static void *new_edmcLcLPtrlErecocLcLPFTaugR(void *p = 0);
   static void *newArray_edmcLcLPtrlErecocLcLPFTaugR(Long_t size, void *p);
   static void delete_edmcLcLPtrlErecocLcLPFTaugR(void *p);
   static void deleteArray_edmcLcLPtrlErecocLcLPFTaugR(void *p);
   static void destruct_edmcLcLPtrlErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ptr<reco::PFTau>*)
   {
      ::edm::Ptr<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ptr<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ptr<reco::PFTau>", ::edm::Ptr<reco::PFTau>::Class_Version(), "DataFormats/Common/interface/Ptr.h", 40,
                  typeid(::edm::Ptr<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLPtrlErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ptr<reco::PFTau>) );
      instance.SetNew(&new_edmcLcLPtrlErecocLcLPFTaugR);
      instance.SetNewArray(&newArray_edmcLcLPtrlErecocLcLPFTaugR);
      instance.SetDelete(&delete_edmcLcLPtrlErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLPtrlErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_edmcLcLPtrlErecocLcLPFTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ptr<reco::PFTau>*)
   {
      return GenerateInitInstanceLocal((::edm::Ptr<reco::PFTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ptr<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLPtrlErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ptr<reco::PFTau>*)0x0)->GetClass();
      edmcLcLPtrlErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLPtrlErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLPtrVectorlErecocLcLBaseTaugR_Dictionary();
   static void edmcLcLPtrVectorlErecocLcLBaseTaugR_TClassManip(TClass*);
   static void *new_edmcLcLPtrVectorlErecocLcLBaseTaugR(void *p = 0);
   static void *newArray_edmcLcLPtrVectorlErecocLcLBaseTaugR(Long_t size, void *p);
   static void delete_edmcLcLPtrVectorlErecocLcLBaseTaugR(void *p);
   static void deleteArray_edmcLcLPtrVectorlErecocLcLBaseTaugR(void *p);
   static void destruct_edmcLcLPtrVectorlErecocLcLBaseTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::PtrVector<reco::BaseTau>*)
   {
      ::edm::PtrVector<reco::BaseTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::PtrVector<reco::BaseTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::PtrVector<reco::BaseTau>", ::edm::PtrVector<reco::BaseTau>::Class_Version(), "DataFormats/Common/interface/PtrVector.h", 103,
                  typeid(::edm::PtrVector<reco::BaseTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLPtrVectorlErecocLcLBaseTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::PtrVector<reco::BaseTau>) );
      instance.SetNew(&new_edmcLcLPtrVectorlErecocLcLBaseTaugR);
      instance.SetNewArray(&newArray_edmcLcLPtrVectorlErecocLcLBaseTaugR);
      instance.SetDelete(&delete_edmcLcLPtrVectorlErecocLcLBaseTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLPtrVectorlErecocLcLBaseTaugR);
      instance.SetDestructor(&destruct_edmcLcLPtrVectorlErecocLcLBaseTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::PtrVector<reco::BaseTau>*)
   {
      return GenerateInitInstanceLocal((::edm::PtrVector<reco::BaseTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::PtrVector<reco::BaseTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLPtrVectorlErecocLcLBaseTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::PtrVector<reco::BaseTau>*)0x0)->GetClass();
      edmcLcLPtrVectorlErecocLcLBaseTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLPtrVectorlErecocLcLBaseTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLFwdPtrlErecocLcLPFTaugR_Dictionary();
   static void edmcLcLFwdPtrlErecocLcLPFTaugR_TClassManip(TClass*);
   static void *new_edmcLcLFwdPtrlErecocLcLPFTaugR(void *p = 0);
   static void *newArray_edmcLcLFwdPtrlErecocLcLPFTaugR(Long_t size, void *p);
   static void delete_edmcLcLFwdPtrlErecocLcLPFTaugR(void *p);
   static void deleteArray_edmcLcLFwdPtrlErecocLcLPFTaugR(void *p);
   static void destruct_edmcLcLFwdPtrlErecocLcLPFTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::FwdPtr<reco::PFTau>*)
   {
      ::edm::FwdPtr<reco::PFTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::FwdPtr<reco::PFTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::FwdPtr<reco::PFTau>", ::edm::FwdPtr<reco::PFTau>::Class_Version(), "DataFormats/Common/interface/FwdPtr.h", 40,
                  typeid(::edm::FwdPtr<reco::PFTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLFwdPtrlErecocLcLPFTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::FwdPtr<reco::PFTau>) );
      instance.SetNew(&new_edmcLcLFwdPtrlErecocLcLPFTaugR);
      instance.SetNewArray(&newArray_edmcLcLFwdPtrlErecocLcLPFTaugR);
      instance.SetDelete(&delete_edmcLcLFwdPtrlErecocLcLPFTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLFwdPtrlErecocLcLPFTaugR);
      instance.SetDestructor(&destruct_edmcLcLFwdPtrlErecocLcLPFTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::FwdPtr<reco::PFTau>*)
   {
      return GenerateInitInstanceLocal((::edm::FwdPtr<reco::PFTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::FwdPtr<reco::PFTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLFwdPtrlErecocLcLPFTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::FwdPtr<reco::PFTau>*)0x0)->GetClass();
      edmcLcLFwdPtrlErecocLcLPFTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLFwdPtrlErecocLcLPFTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLFwdPtrlErecocLcLBaseTaugR_Dictionary();
   static void edmcLcLFwdPtrlErecocLcLBaseTaugR_TClassManip(TClass*);
   static void *new_edmcLcLFwdPtrlErecocLcLBaseTaugR(void *p = 0);
   static void *newArray_edmcLcLFwdPtrlErecocLcLBaseTaugR(Long_t size, void *p);
   static void delete_edmcLcLFwdPtrlErecocLcLBaseTaugR(void *p);
   static void deleteArray_edmcLcLFwdPtrlErecocLcLBaseTaugR(void *p);
   static void destruct_edmcLcLFwdPtrlErecocLcLBaseTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::FwdPtr<reco::BaseTau>*)
   {
      ::edm::FwdPtr<reco::BaseTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::FwdPtr<reco::BaseTau>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::FwdPtr<reco::BaseTau>", ::edm::FwdPtr<reco::BaseTau>::Class_Version(), "DataFormats/Common/interface/FwdPtr.h", 40,
                  typeid(::edm::FwdPtr<reco::BaseTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLFwdPtrlErecocLcLBaseTaugR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::FwdPtr<reco::BaseTau>) );
      instance.SetNew(&new_edmcLcLFwdPtrlErecocLcLBaseTaugR);
      instance.SetNewArray(&newArray_edmcLcLFwdPtrlErecocLcLBaseTaugR);
      instance.SetDelete(&delete_edmcLcLFwdPtrlErecocLcLBaseTaugR);
      instance.SetDeleteArray(&deleteArray_edmcLcLFwdPtrlErecocLcLBaseTaugR);
      instance.SetDestructor(&destruct_edmcLcLFwdPtrlErecocLcLBaseTaugR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::FwdPtr<reco::BaseTau>*)
   {
      return GenerateInitInstanceLocal((::edm::FwdPtr<reco::BaseTau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::FwdPtr<reco::BaseTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLFwdPtrlErecocLcLBaseTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::FwdPtr<reco::BaseTau>*)0x0)->GetClass();
      edmcLcLFwdPtrlErecocLcLBaseTaugR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLFwdPtrlErecocLcLBaseTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLHLTTau_Dictionary();
   static void recocLcLHLTTau_TClassManip(TClass*);
   static void *new_recocLcLHLTTau(void *p = 0);
   static void *newArray_recocLcLHLTTau(Long_t size, void *p);
   static void delete_recocLcLHLTTau(void *p);
   static void deleteArray_recocLcLHLTTau(void *p);
   static void destruct_recocLcLHLTTau(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::HLTTau*)
   {
      ::reco::HLTTau *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::HLTTau));
      static ::ROOT::TGenericClassInfo 
         instance("reco::HLTTau", 10, "DataFormats/TauReco/interface/HLTTau.h", 16,
                  typeid(::reco::HLTTau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLHLTTau_Dictionary, isa_proxy, 12,
                  sizeof(::reco::HLTTau) );
      instance.SetNew(&new_recocLcLHLTTau);
      instance.SetNewArray(&newArray_recocLcLHLTTau);
      instance.SetDelete(&delete_recocLcLHLTTau);
      instance.SetDeleteArray(&deleteArray_recocLcLHLTTau);
      instance.SetDestructor(&destruct_recocLcLHLTTau);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::HLTTau*)
   {
      return GenerateInitInstanceLocal((::reco::HLTTau*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::HLTTau*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLHLTTau_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::HLTTau*)0x0)->GetClass();
      recocLcLHLTTau_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLHLTTau_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> > : new ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >[nElements] : new ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::HLTTau> > : new ::edm::RefProd<vector<reco::HLTTau> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::HLTTau> >[nElements] : new ::edm::RefProd<vector<reco::HLTTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::HLTTau> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::HLTTau> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLHLTTaugRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::HLTTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::HLTTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> > : new ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >[nElements] : new ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLHLTTaugRcOrecocLcLHLTTaugRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::HLTTau> > : new ::edm::Wrapper<vector<reco::HLTTau> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::HLTTau> >[nElements] : new ::edm::Wrapper<vector<reco::HLTTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::HLTTau> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::HLTTau> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLHLTTaugRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::HLTTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::HLTTau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > > : new ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >[nElements] : new ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLPtrlErecocLcLPFTaugRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > > : new ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >[nElements] : new ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > > : new ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >[nElements] : new ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLPtrlErecocLcLBaseTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ptr<reco::BaseTau> : new ::edm::Ptr<reco::BaseTau>;
   }
   static void *newArray_edmcLcLPtrlErecocLcLBaseTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ptr<reco::BaseTau>[nElements] : new ::edm::Ptr<reco::BaseTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLPtrlErecocLcLBaseTaugR(void *p) {
      delete ((::edm::Ptr<reco::BaseTau>*)p);
   }
   static void deleteArray_edmcLcLPtrlErecocLcLBaseTaugR(void *p) {
      delete [] ((::edm::Ptr<reco::BaseTau>*)p);
   }
   static void destruct_edmcLcLPtrlErecocLcLBaseTaugR(void *p) {
      typedef ::edm::Ptr<reco::BaseTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ptr<reco::BaseTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLPtrlErecocLcLPFTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ptr<reco::PFTau> : new ::edm::Ptr<reco::PFTau>;
   }
   static void *newArray_edmcLcLPtrlErecocLcLPFTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ptr<reco::PFTau>[nElements] : new ::edm::Ptr<reco::PFTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLPtrlErecocLcLPFTaugR(void *p) {
      delete ((::edm::Ptr<reco::PFTau>*)p);
   }
   static void deleteArray_edmcLcLPtrlErecocLcLPFTaugR(void *p) {
      delete [] ((::edm::Ptr<reco::PFTau>*)p);
   }
   static void destruct_edmcLcLPtrlErecocLcLPFTaugR(void *p) {
      typedef ::edm::Ptr<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ptr<reco::PFTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLPtrVectorlErecocLcLBaseTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::PtrVector<reco::BaseTau> : new ::edm::PtrVector<reco::BaseTau>;
   }
   static void *newArray_edmcLcLPtrVectorlErecocLcLBaseTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::PtrVector<reco::BaseTau>[nElements] : new ::edm::PtrVector<reco::BaseTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLPtrVectorlErecocLcLBaseTaugR(void *p) {
      delete ((::edm::PtrVector<reco::BaseTau>*)p);
   }
   static void deleteArray_edmcLcLPtrVectorlErecocLcLBaseTaugR(void *p) {
      delete [] ((::edm::PtrVector<reco::BaseTau>*)p);
   }
   static void destruct_edmcLcLPtrVectorlErecocLcLBaseTaugR(void *p) {
      typedef ::edm::PtrVector<reco::BaseTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::PtrVector<reco::BaseTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLFwdPtrlErecocLcLPFTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::FwdPtr<reco::PFTau> : new ::edm::FwdPtr<reco::PFTau>;
   }
   static void *newArray_edmcLcLFwdPtrlErecocLcLPFTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::FwdPtr<reco::PFTau>[nElements] : new ::edm::FwdPtr<reco::PFTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLFwdPtrlErecocLcLPFTaugR(void *p) {
      delete ((::edm::FwdPtr<reco::PFTau>*)p);
   }
   static void deleteArray_edmcLcLFwdPtrlErecocLcLPFTaugR(void *p) {
      delete [] ((::edm::FwdPtr<reco::PFTau>*)p);
   }
   static void destruct_edmcLcLFwdPtrlErecocLcLPFTaugR(void *p) {
      typedef ::edm::FwdPtr<reco::PFTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::FwdPtr<reco::PFTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLFwdPtrlErecocLcLBaseTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::FwdPtr<reco::BaseTau> : new ::edm::FwdPtr<reco::BaseTau>;
   }
   static void *newArray_edmcLcLFwdPtrlErecocLcLBaseTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::FwdPtr<reco::BaseTau>[nElements] : new ::edm::FwdPtr<reco::BaseTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLFwdPtrlErecocLcLBaseTaugR(void *p) {
      delete ((::edm::FwdPtr<reco::BaseTau>*)p);
   }
   static void deleteArray_edmcLcLFwdPtrlErecocLcLBaseTaugR(void *p) {
      delete [] ((::edm::FwdPtr<reco::BaseTau>*)p);
   }
   static void destruct_edmcLcLFwdPtrlErecocLcLBaseTaugR(void *p) {
      typedef ::edm::FwdPtr<reco::BaseTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::FwdPtr<reco::BaseTau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLHLTTau(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::HLTTau : new ::reco::HLTTau;
   }
   static void *newArray_recocLcLHLTTau(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::HLTTau[nElements] : new ::reco::HLTTau[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLHLTTau(void *p) {
      delete ((::reco::HLTTau*)p);
   }
   static void deleteArray_recocLcLHLTTau(void *p) {
      delete [] ((::reco::HLTTau*)p);
   }
   static void destruct_recocLcLHLTTau(void *p) {
      typedef ::reco::HLTTau current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::HLTTau

namespace ROOT {
   static TClass *vectorlErecocLcLHLTTaugR_Dictionary();
   static void vectorlErecocLcLHLTTaugR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLHLTTaugR(void *p = 0);
   static void *newArray_vectorlErecocLcLHLTTaugR(Long_t size, void *p);
   static void delete_vectorlErecocLcLHLTTaugR(void *p);
   static void deleteArray_vectorlErecocLcLHLTTaugR(void *p);
   static void destruct_vectorlErecocLcLHLTTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::HLTTau>*)
   {
      vector<reco::HLTTau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::HLTTau>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::HLTTau>", -2, "vector", 214,
                  typeid(vector<reco::HLTTau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLHLTTaugR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::HLTTau>) );
      instance.SetNew(&new_vectorlErecocLcLHLTTaugR);
      instance.SetNewArray(&newArray_vectorlErecocLcLHLTTaugR);
      instance.SetDelete(&delete_vectorlErecocLcLHLTTaugR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLHLTTaugR);
      instance.SetDestructor(&destruct_vectorlErecocLcLHLTTaugR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::HLTTau> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::HLTTau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLHLTTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::HLTTau>*)0x0)->GetClass();
      vectorlErecocLcLHLTTaugR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLHLTTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLHLTTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::HLTTau> : new vector<reco::HLTTau>;
   }
   static void *newArray_vectorlErecocLcLHLTTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::HLTTau>[nElements] : new vector<reco::HLTTau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLHLTTaugR(void *p) {
      delete ((vector<reco::HLTTau>*)p);
   }
   static void deleteArray_vectorlErecocLcLHLTTaugR(void *p) {
      delete [] ((vector<reco::HLTTau>*)p);
   }
   static void destruct_vectorlErecocLcLHLTTaugR(void *p) {
      typedef vector<reco::HLTTau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::HLTTau>

namespace ROOT {
   static TClass *vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR_Dictionary();
   static void vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(void *p);
   static void destruct_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ptr<reco::PFTau> >*)
   {
      vector<edm::Ptr<reco::PFTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ptr<reco::PFTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ptr<reco::PFTau> >", -2, "vector", 214,
                  typeid(vector<edm::Ptr<reco::PFTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ptr<reco::PFTau> >) );
      instance.SetNew(&new_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ptr<reco::PFTau> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<edm::Ptr<reco::PFTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ptr<reco::PFTau> >*)0x0)->GetClass();
      vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ptr<reco::PFTau> > : new vector<edm::Ptr<reco::PFTau> >;
   }
   static void *newArray_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ptr<reco::PFTau> >[nElements] : new vector<edm::Ptr<reco::PFTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(void *p) {
      delete ((vector<edm::Ptr<reco::PFTau> >*)p);
   }
   static void deleteArray_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(void *p) {
      delete [] ((vector<edm::Ptr<reco::PFTau> >*)p);
   }
   static void destruct_vectorlEedmcLcLPtrlErecocLcLPFTaugRsPgR(void *p) {
      typedef vector<edm::Ptr<reco::PFTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ptr<reco::PFTau> >

namespace ROOT {
   static TClass *vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR_Dictionary();
   static void vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(void *p);
   static void destruct_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::FwdPtr<reco::PFTau> >*)
   {
      vector<edm::FwdPtr<reco::PFTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::FwdPtr<reco::PFTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::FwdPtr<reco::PFTau> >", -2, "vector", 214,
                  typeid(vector<edm::FwdPtr<reco::PFTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::FwdPtr<reco::PFTau> >) );
      instance.SetNew(&new_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::FwdPtr<reco::PFTau> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<edm::FwdPtr<reco::PFTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::FwdPtr<reco::PFTau> >*)0x0)->GetClass();
      vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::FwdPtr<reco::PFTau> > : new vector<edm::FwdPtr<reco::PFTau> >;
   }
   static void *newArray_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::FwdPtr<reco::PFTau> >[nElements] : new vector<edm::FwdPtr<reco::PFTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(void *p) {
      delete ((vector<edm::FwdPtr<reco::PFTau> >*)p);
   }
   static void deleteArray_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(void *p) {
      delete [] ((vector<edm::FwdPtr<reco::PFTau> >*)p);
   }
   static void destruct_vectorlEedmcLcLFwdPtrlErecocLcLPFTaugRsPgR(void *p) {
      typedef vector<edm::FwdPtr<reco::PFTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::FwdPtr<reco::PFTau> >

namespace ROOT {
   static TClass *vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR_Dictionary();
   static void vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(void *p);
   static void destruct_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::FwdPtr<reco::BaseTau> >*)
   {
      vector<edm::FwdPtr<reco::BaseTau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::FwdPtr<reco::BaseTau> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::FwdPtr<reco::BaseTau> >", -2, "vector", 214,
                  typeid(vector<edm::FwdPtr<reco::BaseTau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::FwdPtr<reco::BaseTau> >) );
      instance.SetNew(&new_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::FwdPtr<reco::BaseTau> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<edm::FwdPtr<reco::BaseTau> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::FwdPtr<reco::BaseTau> >*)0x0)->GetClass();
      vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::FwdPtr<reco::BaseTau> > : new vector<edm::FwdPtr<reco::BaseTau> >;
   }
   static void *newArray_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::FwdPtr<reco::BaseTau> >[nElements] : new vector<edm::FwdPtr<reco::BaseTau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(void *p) {
      delete ((vector<edm::FwdPtr<reco::BaseTau> >*)p);
   }
   static void deleteArray_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(void *p) {
      delete [] ((vector<edm::FwdPtr<reco::BaseTau> >*)p);
   }
   static void destruct_vectorlEedmcLcLFwdPtrlErecocLcLBaseTaugRsPgR(void *p) {
      typedef vector<edm::FwdPtr<reco::BaseTau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::FwdPtr<reco::BaseTau> >

namespace {
  void TriggerDictionaryInitialization_DataFormatsTauReco_x3r_Impl() {
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
#line 1 "DataFormatsTauReco_x3r dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/HLTTau.h")))  HLTTau;}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  ValueTrait;
}}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/PFTau.h")))  PFTau;}
namespace edm{template <class T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  Ptr;
}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/FwdPtr.h")))  __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/BaseTauTagInfo.h")))  FwdPtr;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TauReco/interface/BaseTau.h")))  BaseTau;}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/HolderToVectorTrait_Ptr_specialization.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/AssociationVector.h")))  PtrVector;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsTauReco_x3r dictionary payload"

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

namespace DataFormats_TauReco{
  struct dictionaryhlt {
    //Needed only in HLT-Open
    std::vector<reco::HLTTau>                                  ht_v;
    edm::Wrapper<std::vector<reco::HLTTau> >                   ht_w;
    edm::Ref<std::vector<reco::HLTTau> >                       ht_r;
    edm::RefProd<std::vector<reco::HLTTau> >                   ht_rp;
    edm::RefVector<std::vector<reco::HLTTau> >                 ht_rv;

    edm::Ptr<reco::BaseTau>	 ptr_t;
    edm::PtrVector<reco::BaseTau>	 ptrv_t;

    edm::Ptr<reco::PFTau>     ptr_pft;
    std::vector< edm::Ptr<reco::PFTau> > ptrv_pft;
    edm::Wrapper<std::vector< edm::Ptr<reco::PFTau> > > wptrv_pft;

    edm::FwdPtr<reco::PFTau>     fwdptr_pft;
    std::vector< edm::FwdPtr<reco::PFTau> > fwdptrv_pft;
    edm::Wrapper<std::vector< edm::FwdPtr<reco::PFTau> > > wfwdptrv_pft;

    edm::FwdPtr<reco::BaseTau>     fwdptr_bt;
    std::vector< edm::FwdPtr<reco::BaseTau> > fwdptrv_bt;
    edm::Wrapper<std::vector< edm::FwdPtr<reco::BaseTau> > > wfwdptrv_bt;
  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"edm::FwdPtr<reco::BaseTau>", payloadCode, "@",
"edm::FwdPtr<reco::PFTau>", payloadCode, "@",
"edm::Ptr<reco::BaseTau>", payloadCode, "@",
"edm::Ptr<reco::PFTau>", payloadCode, "@",
"edm::PtrVector<reco::BaseTau>", payloadCode, "@",
"edm::Ref<std::vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<std::vector<reco::HLTTau>,reco::HLTTau> >", payloadCode, "@",
"edm::Ref<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::HLTTau> >", payloadCode, "@",
"edm::RefProd<vector<reco::HLTTau> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<std::vector<reco::HLTTau>,reco::HLTTau> >", payloadCode, "@",
"edm::RefVector<vector<reco::HLTTau>,reco::HLTTau,edm::refhelper::FindUsingAdvance<vector<reco::HLTTau>,reco::HLTTau> >", payloadCode, "@",
"edm::Wrapper<std::vector<edm::FwdPtr<reco::BaseTau> > >", payloadCode, "@",
"edm::Wrapper<std::vector<edm::FwdPtr<reco::PFTau> > >", payloadCode, "@",
"edm::Wrapper<std::vector<edm::Ptr<reco::PFTau> > >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::HLTTau> >", payloadCode, "@",
"edm::Wrapper<vector<edm::FwdPtr<reco::BaseTau> > >", payloadCode, "@",
"edm::Wrapper<vector<edm::FwdPtr<reco::PFTau> > >", payloadCode, "@",
"edm::Wrapper<vector<edm::Ptr<reco::PFTau> > >", payloadCode, "@",
"edm::Wrapper<vector<reco::HLTTau> >", payloadCode, "@",
"reco::HLTTau", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsTauReco_x3r",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsTauReco_x3r_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsTauReco_x3r_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsTauReco_x3r() {
  TriggerDictionaryInitialization_DataFormatsTauReco_x3r_Impl();
}
