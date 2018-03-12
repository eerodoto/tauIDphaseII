// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc630dIsrcdIDataFormatsdIVertexRecodIsrcdIDataFormatsVertexRecodIadIDataFormatsVertexReco_xr

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
#include "src/DataFormats/VertexReco/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR_Dictionary();
   static void pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR_TClassManip(TClass*);
   static void *new_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(void *p = 0);
   static void *newArray_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(Long_t size, void *p);
   static void delete_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(void *p);
   static void deleteArray_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(void *p);
   static void destruct_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>*)
   {
      pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>", "string", 190,
                  typeid(pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>) );
      instance.SetNew(&new_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR);
      instance.SetNewArray(&newArray_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR);
      instance.SetDelete(&delete_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR);
      instance.SetDeleteArray(&deleteArray_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR);
      instance.SetDestructor(&destruct_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR);

      ::ROOT::AddClassAlternate("pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>","pair<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,int>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>*)0x0)->GetClass();
      pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)
   {
      ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >", ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >","edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_Dictionary();
   static void edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)
   {
      ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >", ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 306,
                  typeid(::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >","edm::Ref<std::vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<std::vector<reco::NuclearInteraction>,reco::NuclearInteraction> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)0x0)->GetClass();
      edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::Vertex> >*)
   {
      ::edm::RefProd<vector<reco::Vertex> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::Vertex> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::Vertex> >", ::edm::RefProd<vector<reco::Vertex> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::Vertex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::Vertex> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::Vertex> >","edm::RefProd<std::vector<reco::Vertex> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::Vertex> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::Vertex> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::Vertex> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::Vertex> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR_Dictionary();
   static void edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p);
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p);
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<vector<reco::NuclearInteraction> >*)
   {
      ::edm::RefProd<vector<reco::NuclearInteraction> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<vector<reco::NuclearInteraction> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<vector<reco::NuclearInteraction> >", ::edm::RefProd<vector<reco::NuclearInteraction> >::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<vector<reco::NuclearInteraction> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefProd<vector<reco::NuclearInteraction> >) );
      instance.SetNew(&new_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR);

      ::ROOT::AddClassAlternate("edm::RefProd<vector<reco::NuclearInteraction> >","edm::RefProd<std::vector<reco::NuclearInteraction> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<vector<reco::NuclearInteraction> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<vector<reco::NuclearInteraction> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::NuclearInteraction> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<vector<reco::NuclearInteraction> >*)0x0)->GetClass();
      edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)
   {
      ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >", ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >","edm::RefVector<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)
   {
      ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >", ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 32,
                  typeid(::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >","edm::RefVector<std::vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<std::vector<reco::NuclearInteraction>,reco::NuclearInteraction> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::Vertex> >*)
   {
      ::edm::Wrapper<vector<reco::Vertex> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::Vertex> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::Vertex> >", ::edm::Wrapper<vector<reco::Vertex> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::Vertex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::Vertex> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::Vertex> >","edm::Wrapper<std::vector<reco::Vertex> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::Vertex> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::Vertex> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::Vertex> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::Vertex> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<reco::NuclearInteraction> >*)
   {
      ::edm::Wrapper<vector<reco::NuclearInteraction> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<reco::NuclearInteraction> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<reco::NuclearInteraction> >", ::edm::Wrapper<vector<reco::NuclearInteraction> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<reco::NuclearInteraction> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<vector<reco::NuclearInteraction> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<reco::NuclearInteraction> >","edm::Wrapper<std::vector<reco::NuclearInteraction> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<reco::NuclearInteraction> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<reco::NuclearInteraction> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::NuclearInteraction> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<reco::NuclearInteraction> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >","edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,float,unsigned int> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >*)
   {
      ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >", ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >","edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,int,unsigned int> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >*)
   {
      ::edm::Wrapper<edm::Association<vector<reco::Vertex> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Association<vector<reco::Vertex> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Association<vector<reco::Vertex> > >", ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Association<vector<reco::Vertex> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Wrapper<edm::Association<vector<reco::Vertex> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Association<vector<reco::Vertex> > >","edm::Wrapper<edm::Association<std::vector<reco::Vertex> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Association<vector<reco::Vertex> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR_Dictionary();
   static void edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(void *p);
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Association<vector<reco::Vertex> >*)
   {
      ::edm::Association<vector<reco::Vertex> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Association<vector<reco::Vertex> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Association<vector<reco::Vertex> >", ::edm::Association<vector<reco::Vertex> >::Class_Version(), "DataFormats/Common/interface/Association.h", 18,
                  typeid(::edm::Association<vector<reco::Vertex> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::Association<vector<reco::Vertex> >) );
      instance.SetNew(&new_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR);

      ::ROOT::AddClassAlternate("edm::Association<vector<reco::Vertex> >","edm::Association<std::vector<reco::Vertex> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Association<vector<reco::Vertex> >*)
   {
      return GenerateInitInstanceLocal((::edm::Association<vector<reco::Vertex> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::Association<vector<reco::Vertex> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Association<vector<reco::Vertex> >*)0x0)->GetClass();
      edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >*)
   {
      ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 21,
                  typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >","edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Vertex> >,edm::RefProd<std::vector<reco::Track> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >*)
   {
      ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 21,
                  typeid(::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >","edm::helpers::KeyVal<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,float> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >*)
   {
      ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 21,
                  typeid(::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >","edm::helpers::KeyVal<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,int> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >*)
   {
      ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 21,
                  typeid(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >","edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<std::vector<reco::Vertex> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR_Dictionary();
   static void edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(void *p);
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >*)
   {
      ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >", "DataFormats/Common/interface/AssociationMapHelpers.h", 21,
                  typeid(::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >) );
      instance.SetNew(&new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >","edm::helpers::KeyVal<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,std::vector<std::pair<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,int> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >*)
   {
      return GenerateInitInstanceLocal((::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >*)0x0)->GetClass();
      edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >", ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >","edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,float,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >", ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >","edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,int,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR_Dictionary();
   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(void *p);
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >*)
   {
      ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >", ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >::Class_Version(), "DataFormats/Common/interface/AssociationMap.h", 48,
                  typeid(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >) );
      instance.SetNew(&new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >","edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Track>,std::vector<reco::Vertex>,int,unsigned int> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >*)0x0)->GetClass();
      edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLVertex_Dictionary();
   static void recocLcLVertex_TClassManip(TClass*);
   static void *new_recocLcLVertex(void *p = 0);
   static void *newArray_recocLcLVertex(Long_t size, void *p);
   static void delete_recocLcLVertex(void *p);
   static void deleteArray_recocLcLVertex(void *p);
   static void destruct_recocLcLVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::Vertex*)
   {
      ::reco::Vertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::Vertex));
      static ::ROOT::TGenericClassInfo 
         instance("reco::Vertex", 11, "DataFormats/VertexReco/interface/Vertex.h", 34,
                  typeid(::reco::Vertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLVertex_Dictionary, isa_proxy, 12,
                  sizeof(::reco::Vertex) );
      instance.SetNew(&new_recocLcLVertex);
      instance.SetNewArray(&newArray_recocLcLVertex);
      instance.SetDelete(&delete_recocLcLVertex);
      instance.SetDeleteArray(&deleteArray_recocLcLVertex);
      instance.SetDestructor(&destruct_recocLcLVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::Vertex*)
   {
      return GenerateInitInstanceLocal((::reco::Vertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::Vertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLVertex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::Vertex*)0x0)->GetClass();
      recocLcLVertex_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLVertex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *recocLcLNuclearInteraction_Dictionary();
   static void recocLcLNuclearInteraction_TClassManip(TClass*);
   static void *new_recocLcLNuclearInteraction(void *p = 0);
   static void *newArray_recocLcLNuclearInteraction(Long_t size, void *p);
   static void delete_recocLcLNuclearInteraction(void *p);
   static void deleteArray_recocLcLNuclearInteraction(void *p);
   static void destruct_recocLcLNuclearInteraction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::reco::NuclearInteraction*)
   {
      ::reco::NuclearInteraction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::reco::NuclearInteraction));
      static ::ROOT::TGenericClassInfo 
         instance("reco::NuclearInteraction", 10, "DataFormats/VertexReco/interface/NuclearInteraction.h", 11,
                  typeid(::reco::NuclearInteraction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &recocLcLNuclearInteraction_Dictionary, isa_proxy, 12,
                  sizeof(::reco::NuclearInteraction) );
      instance.SetNew(&new_recocLcLNuclearInteraction);
      instance.SetNewArray(&newArray_recocLcLNuclearInteraction);
      instance.SetDelete(&delete_recocLcLNuclearInteraction);
      instance.SetDeleteArray(&deleteArray_recocLcLNuclearInteraction);
      instance.SetDestructor(&destruct_recocLcLNuclearInteraction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::reco::NuclearInteraction*)
   {
      return GenerateInitInstanceLocal((::reco::NuclearInteraction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::reco::NuclearInteraction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *recocLcLNuclearInteraction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::reco::NuclearInteraction*)0x0)->GetClass();
      recocLcLNuclearInteraction_TClassManip(theClass);
   return theClass;
   }

   static void recocLcLNuclearInteraction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> : new pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>;
   }
   static void *newArray_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>[nElements] : new pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(void *p) {
      delete ((pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>*)p);
   }
   static void deleteArray_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(void *p) {
      delete [] ((pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>*)p);
   }
   static void destruct_pairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgR(void *p) {
      typedef pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> > : new ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >[nElements] : new ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> > : new ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >;
   }
   static void *newArray_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >[nElements] : new ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p) {
      delete ((::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p) {
      typedef ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::Vertex> > : new ::edm::RefProd<vector<reco::Vertex> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::Vertex> >[nElements] : new ::edm::RefProd<vector<reco::Vertex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::Vertex> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::Vertex> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLVertexgRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::Vertex> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::Vertex> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::NuclearInteraction> > : new ::edm::RefProd<vector<reco::NuclearInteraction> >;
   }
   static void *newArray_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<vector<reco::NuclearInteraction> >[nElements] : new ::edm::RefProd<vector<reco::NuclearInteraction> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p) {
      delete ((::edm::RefProd<vector<reco::NuclearInteraction> >*)p);
   }
   static void deleteArray_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p) {
      delete [] ((::edm::RefProd<vector<reco::NuclearInteraction> >*)p);
   }
   static void destruct_edmcLcLRefProdlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p) {
      typedef ::edm::RefProd<vector<reco::NuclearInteraction> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<vector<reco::NuclearInteraction> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> > : new ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >[nElements] : new ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> > : new ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >[nElements] : new ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p) {
      delete ((::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractioncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLNuclearInteractiongRcOrecocLcLNuclearInteractiongRsPgR(void *p) {
      typedef ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::Vertex> > : new ::edm::Wrapper<vector<reco::Vertex> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::Vertex> >[nElements] : new ::edm::Wrapper<vector<reco::Vertex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::Vertex> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::Vertex> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLVertexgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::Vertex> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::Vertex> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::NuclearInteraction> > : new ::edm::Wrapper<vector<reco::NuclearInteraction> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<reco::NuclearInteraction> >[nElements] : new ::edm::Wrapper<vector<reco::NuclearInteraction> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<reco::NuclearInteraction> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<reco::NuclearInteraction> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlErecocLcLNuclearInteractiongRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<reco::NuclearInteraction> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<reco::NuclearInteraction> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > > : new ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >[nElements] : new ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::Vertex> > > : new ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >[nElements] : new ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Association<vector<reco::Vertex> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Association<vector<reco::Vertex> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLAssociationlEvectorlErecocLcLVertexgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Association<vector<reco::Vertex> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Association<vector<reco::Vertex> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::Vertex> > : new ::edm::Association<vector<reco::Vertex> >;
   }
   static void *newArray_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Association<vector<reco::Vertex> >[nElements] : new ::edm::Association<vector<reco::Vertex> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(void *p) {
      delete ((::edm::Association<vector<reco::Vertex> >*)p);
   }
   static void deleteArray_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(void *p) {
      delete [] ((::edm::Association<vector<reco::Vertex> >*)p);
   }
   static void destruct_edmcLcLAssociationlEvectorlErecocLcLVertexgRsPgR(void *p) {
      typedef ::edm::Association<vector<reco::Vertex> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Association<vector<reco::Vertex> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > > : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >[nElements] : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > : new ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >[nElements] : new ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > : new ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >[nElements] : new ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > > : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >[nElements] : new ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLRefProdlEvectorlErecocLcLTrackgRsPgRcOedmcLcLRefProdlEvectorlErecocLcLVertexgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > : new ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >;
   }
   static void *newArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >[nElements] : new ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(void *p) {
      delete ((::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >*)p);
   }
   static void deleteArray_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(void *p) {
      delete [] ((::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >*)p);
   }
   static void destruct_edmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgR(void *p) {
      typedef ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > : new ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOfloatcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > : new ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLVertexgRcOvectorlErecocLcLTrackgRcOintcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> > : new ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >;
   }
   static void *newArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >[nElements] : new ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(void *p) {
      delete ((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >*)p);
   }
   static void deleteArray_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(void *p) {
      delete [] ((::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >*)p);
   }
   static void destruct_edmcLcLAssociationMaplEedmcLcLOneToManyWithQualitylEvectorlErecocLcLTrackgRcOvectorlErecocLcLVertexgRcOintcOunsignedsPintgRsPgR(void *p) {
      typedef ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLVertex(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::Vertex : new ::reco::Vertex;
   }
   static void *newArray_recocLcLVertex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::Vertex[nElements] : new ::reco::Vertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLVertex(void *p) {
      delete ((::reco::Vertex*)p);
   }
   static void deleteArray_recocLcLVertex(void *p) {
      delete [] ((::reco::Vertex*)p);
   }
   static void destruct_recocLcLVertex(void *p) {
      typedef ::reco::Vertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::Vertex

namespace ROOT {
   // Wrappers around operator new
   static void *new_recocLcLNuclearInteraction(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::NuclearInteraction : new ::reco::NuclearInteraction;
   }
   static void *newArray_recocLcLNuclearInteraction(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::reco::NuclearInteraction[nElements] : new ::reco::NuclearInteraction[nElements];
   }
   // Wrapper around operator delete
   static void delete_recocLcLNuclearInteraction(void *p) {
      delete ((::reco::NuclearInteraction*)p);
   }
   static void deleteArray_recocLcLNuclearInteraction(void *p) {
      delete [] ((::reco::NuclearInteraction*)p);
   }
   static void destruct_recocLcLNuclearInteraction(void *p) {
      typedef ::reco::NuclearInteraction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::reco::NuclearInteraction

namespace ROOT {
   static TClass *vectorlErecocLcLVertexgR_Dictionary();
   static void vectorlErecocLcLVertexgR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLVertexgR(void *p = 0);
   static void *newArray_vectorlErecocLcLVertexgR(Long_t size, void *p);
   static void delete_vectorlErecocLcLVertexgR(void *p);
   static void deleteArray_vectorlErecocLcLVertexgR(void *p);
   static void destruct_vectorlErecocLcLVertexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::Vertex>*)
   {
      vector<reco::Vertex> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::Vertex>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::Vertex>", -2, "vector", 214,
                  typeid(vector<reco::Vertex>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLVertexgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::Vertex>) );
      instance.SetNew(&new_vectorlErecocLcLVertexgR);
      instance.SetNewArray(&newArray_vectorlErecocLcLVertexgR);
      instance.SetDelete(&delete_vectorlErecocLcLVertexgR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLVertexgR);
      instance.SetDestructor(&destruct_vectorlErecocLcLVertexgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::Vertex> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::Vertex>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLVertexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::Vertex>*)0x0)->GetClass();
      vectorlErecocLcLVertexgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLVertexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLVertexgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::Vertex> : new vector<reco::Vertex>;
   }
   static void *newArray_vectorlErecocLcLVertexgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::Vertex>[nElements] : new vector<reco::Vertex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLVertexgR(void *p) {
      delete ((vector<reco::Vertex>*)p);
   }
   static void deleteArray_vectorlErecocLcLVertexgR(void *p) {
      delete [] ((vector<reco::Vertex>*)p);
   }
   static void destruct_vectorlErecocLcLVertexgR(void *p) {
      typedef vector<reco::Vertex> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::Vertex>

namespace ROOT {
   static TClass *vectorlErecocLcLNuclearInteractiongR_Dictionary();
   static void vectorlErecocLcLNuclearInteractiongR_TClassManip(TClass*);
   static void *new_vectorlErecocLcLNuclearInteractiongR(void *p = 0);
   static void *newArray_vectorlErecocLcLNuclearInteractiongR(Long_t size, void *p);
   static void delete_vectorlErecocLcLNuclearInteractiongR(void *p);
   static void deleteArray_vectorlErecocLcLNuclearInteractiongR(void *p);
   static void destruct_vectorlErecocLcLNuclearInteractiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<reco::NuclearInteraction>*)
   {
      vector<reco::NuclearInteraction> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<reco::NuclearInteraction>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<reco::NuclearInteraction>", -2, "vector", 214,
                  typeid(vector<reco::NuclearInteraction>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlErecocLcLNuclearInteractiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<reco::NuclearInteraction>) );
      instance.SetNew(&new_vectorlErecocLcLNuclearInteractiongR);
      instance.SetNewArray(&newArray_vectorlErecocLcLNuclearInteractiongR);
      instance.SetDelete(&delete_vectorlErecocLcLNuclearInteractiongR);
      instance.SetDeleteArray(&deleteArray_vectorlErecocLcLNuclearInteractiongR);
      instance.SetDestructor(&destruct_vectorlErecocLcLNuclearInteractiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<reco::NuclearInteraction> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<reco::NuclearInteraction>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlErecocLcLNuclearInteractiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<reco::NuclearInteraction>*)0x0)->GetClass();
      vectorlErecocLcLNuclearInteractiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlErecocLcLNuclearInteractiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlErecocLcLNuclearInteractiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::NuclearInteraction> : new vector<reco::NuclearInteraction>;
   }
   static void *newArray_vectorlErecocLcLNuclearInteractiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<reco::NuclearInteraction>[nElements] : new vector<reco::NuclearInteraction>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlErecocLcLNuclearInteractiongR(void *p) {
      delete ((vector<reco::NuclearInteraction>*)p);
   }
   static void deleteArray_vectorlErecocLcLNuclearInteractiongR(void *p) {
      delete [] ((vector<reco::NuclearInteraction>*)p);
   }
   static void destruct_vectorlErecocLcLNuclearInteractiongR(void *p) {
      typedef vector<reco::NuclearInteraction> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<reco::NuclearInteraction>

namespace ROOT {
   static TClass *vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR_Dictionary();
   static void vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(void *p);
   static void destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >*)
   {
      vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >", -2, "vector", 214,
                  typeid(vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >) );
      instance.SetNew(&new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >*)0x0)->GetClass();
      vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > : new vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >;
   }
   static void *newArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >[nElements] : new vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(void *p) {
      delete ((vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >*)p);
   }
   static void deleteArray_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(void *p) {
      delete [] ((vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >*)p);
   }
   static void destruct_vectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgR(void *p) {
      typedef vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> >

namespace ROOT {
   static TClass *maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR_Dictionary();
   static void maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >*)
   {
      map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >", -2, "map", 96,
                  typeid(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >) );
      instance.SetNew(&new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >*)0x0)->GetClass();
      maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > > : new map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >;
   }
   static void *newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >[nElements] : new map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(void *p) {
      delete ((map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(void *p) {
      delete [] ((map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >*)p);
   }
   static void destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOintgRsPgRsPgRsPgR(void *p) {
      typedef map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > > >

namespace ROOT {
   static TClass *maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR_Dictionary();
   static void maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >*)
   {
      map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >", -2, "map", 96,
                  typeid(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >) );
      instance.SetNew(&new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >*)0x0)->GetClass();
      maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > > : new map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >;
   }
   static void *newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >[nElements] : new map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(void *p) {
      delete ((map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(void *p) {
      delete [] ((map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >*)p);
   }
   static void destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOfloatgRsPgRsPgRsPgR(void *p) {
      typedef map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > > >

namespace ROOT {
   static TClass *maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR_Dictionary();
   static void maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >*)
   {
      map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >", -2, "map", 96,
                  typeid(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >) );
      instance.SetNew(&new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >*)0x0)->GetClass();
      maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > > : new map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >;
   }
   static void *newArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >[nElements] : new map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(void *p) {
      delete ((map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >*)p);
   }
   static void deleteArray_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(void *p) {
      delete [] ((map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >*)p);
   }
   static void destruct_maplEunsignedsPintcOedmcLcLhelperscLcLKeyVallEedmcLcLReflEvectorlErecocLcLTrackgRcOrecocLcLTrackcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLTrackgRcOrecocLcLTrackgRsPgRcOvectorlEpairlEedmcLcLReflEvectorlErecocLcLVertexgRcOrecocLcLVertexcOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLVertexgRcOrecocLcLVertexgRsPgRcOintgRsPgRsPgRsPgR(void *p) {
      typedef map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > > >

namespace {
  void TriggerDictionaryInitialization_DataFormatsVertexReco_xr_Impl() {
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
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/tbb/2018/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/xz/5.2.2-oenich/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/zlib-x86_64/1.2.11/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/md5/1.0.0/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/external/tinyxml/2.5.3-fmblme/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc630/lcg/root/6.10.08/include",
"/afs/cern.ch/work/e/eerodoto/phase2-tauPerformance/CMSSW_9_4_2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataFormatsVertexReco_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/VertexReco/interface/Vertex.h")))  Vertex;}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Ref.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Ref.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Ref.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/RefTraits.h")))  __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Ref.h")))  ValueTrait;
}}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/VertexReco/interface/NuclearInteraction.h")))  NuclearInteraction;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/TrackReco/interface/Track.h")))  __attribute__((annotate("$clingAutoload$DataFormats/VertexReco/interface/Vertex.h")))  Track;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsVertexReco_xr dictionary payload"

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
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/RefProd.h"
#include "DataFormats/Common/interface/RefVector.h"

#include "DataFormats/Common/interface/Association.h"
#include "DataFormats/Common/interface/AssociationMap.h"
#include "DataFormats/Common/interface/Handle.h"
#include "DataFormats/Common/interface/OneToManyWithQuality.h"
#include "DataFormats/Common/interface/OneToManyWithQualityGeneric.h"
#include "DataFormats/Common/interface/View.h"

#include "DataFormats/VertexReco/interface/Vertex.h"
#include "DataFormats/VertexReco/interface/NuclearInteraction.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h"

#include <vector>
#include <utility>

namespace DataFormats_VertexReco {
  struct dictionary {
    reco::Vertex rv1;
    std::vector<reco::Vertex> v1;
    edm::Wrapper<std::vector<reco::Vertex> > wc1;
    edm::Ref<std::vector<reco::Vertex> > r1;
    edm::RefProd<std::vector<reco::Vertex> > rp1;
    edm::RefVector<std::vector<reco::Vertex> > rvv1;

    reco::NuclearInteraction nrv1;
    std::vector<reco::NuclearInteraction> nv1;
    edm::Wrapper<std::vector<reco::NuclearInteraction> > nwc1;
    edm::Ref<std::vector<reco::NuclearInteraction> > nr1;
    edm::RefProd<std::vector<reco::NuclearInteraction> > nrp1;
    edm::RefVector<std::vector<reco::NuclearInteraction> > nrvv1;

    edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Vertex> >,edm::RefProd<std::vector<reco::Track> > > am0;
    edm::helpers::KeyVal<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,float> > > amf1;
    edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,float,unsigned int> > amf2;
    edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,float,unsigned int> > > amf3;
    std::map<unsigned int,edm::helpers::KeyVal<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,float> > > > amf4;
    edm::helpers::KeyVal<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,int> > > am1;
    edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,int,unsigned int> > am2;
    edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,int,unsigned int> > > am3;
    std::map<unsigned int,edm::helpers::KeyVal<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,int> > > > am4;

    edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<std::vector<reco::Vertex> > > ma0;
    edm::helpers::KeyVal<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,std::vector<std::pair<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,int> > > ma1;
    edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Track>,std::vector<reco::Vertex>,int,unsigned int> > ma2;

    edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Track>,std::vector<reco::Vertex>,int,unsigned int> > > ma3;
    std::map<unsigned int,edm::helpers::KeyVal<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,std::vector<std::pair<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,int> > > > ma4;
    edm::Wrapper<edm::Association<std::vector<reco::Vertex> > > wasso;
    edm::Association<std::vector<reco::Vertex> >  asso;

    std::vector<std::pair<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,int> > ma5;
    std::pair<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,int> ma6;

  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"edm::Association<std::vector<reco::Vertex> >", payloadCode, "@",
"edm::Association<vector<reco::Vertex> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Track>,std::vector<reco::Vertex>,int,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,float,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,int,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Track>,vector<reco::Vertex>,int,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> >", payloadCode, "@",
"edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> >", payloadCode, "@",
"edm::Ref<std::vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<std::vector<reco::NuclearInteraction>,reco::NuclearInteraction> >", payloadCode, "@",
"edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >", payloadCode, "@",
"edm::Ref<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >", payloadCode, "@",
"edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::NuclearInteraction> >", payloadCode, "@",
"edm::RefProd<std::vector<reco::Vertex> >", payloadCode, "@",
"edm::RefProd<vector<reco::NuclearInteraction> >", payloadCode, "@",
"edm::RefProd<vector<reco::Vertex> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<std::vector<reco::NuclearInteraction>,reco::NuclearInteraction> >", payloadCode, "@",
"edm::RefVector<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >", payloadCode, "@",
"edm::RefVector<vector<reco::NuclearInteraction>,reco::NuclearInteraction,edm::refhelper::FindUsingAdvance<vector<reco::NuclearInteraction>,reco::NuclearInteraction> >", payloadCode, "@",
"edm::RefVector<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >", payloadCode, "@",
"edm::Wrapper<edm::Association<std::vector<reco::Vertex> > >", payloadCode, "@",
"edm::Wrapper<edm::Association<vector<reco::Vertex> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,float,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<std::vector<reco::Vertex>,std::vector<reco::Track>,int,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,float,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<edm::AssociationMap<edm::OneToManyWithQuality<vector<reco::Vertex>,vector<reco::Track>,int,unsigned int> > >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::NuclearInteraction> >", payloadCode, "@",
"edm::Wrapper<std::vector<reco::Vertex> >", payloadCode, "@",
"edm::Wrapper<vector<reco::NuclearInteraction> >", payloadCode, "@",
"edm::Wrapper<vector<reco::Vertex> >", payloadCode, "@",
"edm::helpers::KeyVal<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,std::vector<std::pair<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,int> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,float> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::Ref<std::vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<std::vector<reco::Vertex>,reco::Vertex> >,std::vector<std::pair<edm::Ref<std::vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<std::vector<reco::Track>,reco::Track> >,int> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,vector<pair<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,int> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,float> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::Ref<vector<reco::Vertex>,reco::Vertex,edm::refhelper::FindUsingAdvance<vector<reco::Vertex>,reco::Vertex> >,vector<pair<edm::Ref<vector<reco::Track>,reco::Track,edm::refhelper::FindUsingAdvance<vector<reco::Track>,reco::Track> >,int> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Track> >,edm::RefProd<std::vector<reco::Vertex> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<std::vector<reco::Vertex> >,edm::RefProd<std::vector<reco::Track> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<vector<reco::Track> >,edm::RefProd<vector<reco::Vertex> > >", payloadCode, "@",
"edm::helpers::KeyVal<edm::RefProd<vector<reco::Vertex> >,edm::RefProd<vector<reco::Track> > >", payloadCode, "@",
"reco::NuclearInteraction", payloadCode, "@",
"reco::Vertex", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsVertexReco_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsVertexReco_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsVertexReco_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsVertexReco_xr() {
  TriggerDictionaryInitialization_DataFormatsVertexReco_xr_Impl();
}
