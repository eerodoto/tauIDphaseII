ALL_SUBSYSTEMS+=RecoTauTag
subdirs_src_RecoTauTag = src_RecoTauTag_RecoTau src_RecoTauTag_TauPerformancePhaseII
ALL_PACKAGES += RecoTauTag/RecoTau
subdirs_src_RecoTauTag_RecoTau := src_RecoTauTag_RecoTau_interface src_RecoTauTag_RecoTau_plugins src_RecoTauTag_RecoTau_python src_RecoTauTag_RecoTau_src src_RecoTauTag_RecoTau_test
ifeq ($(strip $(PyRecoTauTagRecoTau)),)
PyRecoTauTagRecoTau := self/src/RecoTauTag/RecoTau/python
src_RecoTauTag_RecoTau_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoTauTag/RecoTau/python)
PyRecoTauTagRecoTau_files := $(patsubst src/RecoTauTag/RecoTau/python/%,%,$(wildcard $(foreach dir,src/RecoTauTag/RecoTau/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoTauTagRecoTau_LOC_USE := self  
PyRecoTauTagRecoTau_PACKAGE := self/src/RecoTauTag/RecoTau/python
ALL_PRODS += PyRecoTauTagRecoTau
PyRecoTauTagRecoTau_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoTauTagRecoTau,src/RecoTauTag/RecoTau/python,src_RecoTauTag_RecoTau_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoTauTagRecoTau,src/RecoTauTag/RecoTau/python))
endif
ALL_COMMONRULES += src_RecoTauTag_RecoTau_python
src_RecoTauTag_RecoTau_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTauTag_RecoTau_python,src/RecoTauTag/RecoTau/python,PYTHON))
ifeq ($(strip $(rerunMVAIsolationOnMiniAOD)),)
rerunMVAIsolationOnMiniAOD := self/src/RecoTauTag/RecoTau/test
rerunMVAIsolationOnMiniAOD_files := $(patsubst src/RecoTauTag/RecoTau/test/%,%,$(foreach file,rerunMVAIsolationOnMiniAOD.cc,$(eval xfile:=$(wildcard src/RecoTauTag/RecoTau/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoTauTag/RecoTau/test/$(file). Please fix src/RecoTauTag/RecoTau/test/BuildFile.))))
rerunMVAIsolationOnMiniAOD_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTauTag/RecoTau/test/BuildFile
rerunMVAIsolationOnMiniAOD_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/PatCandidates DataFormats/TauReco RecoTauTag/RecoTau PhysicsTools/PatAlgos PhysicsTools/UtilAlgos FWCore/ServiceRegistry clhep root
rerunMVAIsolationOnMiniAOD_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,rerunMVAIsolationOnMiniAOD,rerunMVAIsolationOnMiniAOD,$(SCRAMSTORENAME_LIB),src/RecoTauTag/RecoTau/test))
rerunMVAIsolationOnMiniAOD_PACKAGE := self/src/RecoTauTag/RecoTau/test
ALL_PRODS += rerunMVAIsolationOnMiniAOD
rerunMVAIsolationOnMiniAOD_INIT_FUNC        += $$(eval $$(call Library,rerunMVAIsolationOnMiniAOD,src/RecoTauTag/RecoTau/test,src_RecoTauTag_RecoTau_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
rerunMVAIsolationOnMiniAOD_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,rerunMVAIsolationOnMiniAOD,src/RecoTauTag/RecoTau/test))
endif
ifeq ($(strip $(TestRecoTauTagCombinatoricGenerator)),)
TestRecoTauTagCombinatoricGenerator := self/src/RecoTauTag/RecoTau/test
TestRecoTauTagCombinatoricGenerator_files := $(patsubst src/RecoTauTag/RecoTau/test/%,%,$(foreach file,CombinatoricGenerator_t.cppunit.cc,$(eval xfile:=$(wildcard src/RecoTauTag/RecoTau/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoTauTag/RecoTau/test/$(file). Please fix src/RecoTauTag/RecoTau/test/BuildFile.))))
TestRecoTauTagCombinatoricGenerator_TEST_RUNNER_CMD :=  TestRecoTauTagCombinatoricGenerator 
TestRecoTauTagCombinatoricGenerator_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTauTag/RecoTau/test/BuildFile
TestRecoTauTagCombinatoricGenerator_LOC_USE := self  RecoTauTag/RecoTau cppunit
TestRecoTauTagCombinatoricGenerator_PACKAGE := self/src/RecoTauTag/RecoTau/test
ALL_PRODS += TestRecoTauTagCombinatoricGenerator
TestRecoTauTagCombinatoricGenerator_INIT_FUNC        += $$(eval $$(call Binary,TestRecoTauTagCombinatoricGenerator,src/RecoTauTag/RecoTau/test,src_RecoTauTag_RecoTau_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
TestRecoTauTagCombinatoricGenerator_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,TestRecoTauTagCombinatoricGenerator,src/RecoTauTag/RecoTau/test))
endif
ALL_COMMONRULES += src_RecoTauTag_RecoTau_test
src_RecoTauTag_RecoTau_test_parent := RecoTauTag/RecoTau
src_RecoTauTag_RecoTau_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTauTag_RecoTau_test,src/RecoTauTag/RecoTau/test,TEST))
ALL_PACKAGES += RecoTauTag/TauPerformancePhaseII
subdirs_src_RecoTauTag_TauPerformancePhaseII := src_RecoTauTag_TauPerformancePhaseII_python src_RecoTauTag_TauPerformancePhaseII_test src_RecoTauTag_TauPerformancePhaseII_plugins
ifeq ($(strip $(PyRecoTauTagTauPerformancePhaseII)),)
PyRecoTauTagTauPerformancePhaseII := self/src/RecoTauTag/TauPerformancePhaseII/python
src_RecoTauTag_TauPerformancePhaseII_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoTauTag/TauPerformancePhaseII/python)
PyRecoTauTagTauPerformancePhaseII_files := $(patsubst src/RecoTauTag/TauPerformancePhaseII/python/%,%,$(wildcard $(foreach dir,src/RecoTauTag/TauPerformancePhaseII/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoTauTagTauPerformancePhaseII_LOC_USE := self  
PyRecoTauTagTauPerformancePhaseII_PACKAGE := self/src/RecoTauTag/TauPerformancePhaseII/python
ALL_PRODS += PyRecoTauTagTauPerformancePhaseII
PyRecoTauTagTauPerformancePhaseII_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoTauTagTauPerformancePhaseII,src/RecoTauTag/TauPerformancePhaseII/python,src_RecoTauTag_TauPerformancePhaseII_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoTauTagTauPerformancePhaseII,src/RecoTauTag/TauPerformancePhaseII/python))
endif
ALL_COMMONRULES += src_RecoTauTag_TauPerformancePhaseII_python
src_RecoTauTag_TauPerformancePhaseII_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTauTag_TauPerformancePhaseII_python,src/RecoTauTag/TauPerformancePhaseII/python,PYTHON))
ALL_COMMONRULES += src_RecoTauTag_TauPerformancePhaseII_test
src_RecoTauTag_TauPerformancePhaseII_test_parent := RecoTauTag/TauPerformancePhaseII
src_RecoTauTag_TauPerformancePhaseII_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTauTag_TauPerformancePhaseII_test,src/RecoTauTag/TauPerformancePhaseII/test,TEST))
ALL_SUBSYSTEMS+=DataFormats
subdirs_src_DataFormats = src_DataFormats_PatCandidates src_DataFormats_TauReco src_DataFormats_VertexReco
ALL_PACKAGES += DataFormats/PatCandidates
subdirs_src_DataFormats_PatCandidates := src_DataFormats_PatCandidates_src src_DataFormats_PatCandidates_test
ifeq ($(strip $(testDataFormatsPatCandidates)),)
testDataFormatsPatCandidates := self/src/DataFormats/PatCandidates/test
testDataFormatsPatCandidates_files := $(patsubst src/DataFormats/PatCandidates/test/%,%,$(foreach file,testPackedCandidate.cc testPackedGenParticle.cc testMiniFloat.cpp testlogintpack.cpp testRunner.cpp,$(eval xfile:=$(wildcard src/DataFormats/PatCandidates/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DataFormats/PatCandidates/test/$(file). Please fix src/DataFormats/PatCandidates/test/BuildFile.))))
testDataFormatsPatCandidates_TEST_RUNNER_CMD :=  testDataFormatsPatCandidates 
testDataFormatsPatCandidates_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/PatCandidates/test/BuildFile
testDataFormatsPatCandidates_LOC_USE := self  boost cppunit DataFormats/PatCandidates
testDataFormatsPatCandidates_PACKAGE := self/src/DataFormats/PatCandidates/test
ALL_PRODS += testDataFormatsPatCandidates
testDataFormatsPatCandidates_INIT_FUNC        += $$(eval $$(call Binary,testDataFormatsPatCandidates,src/DataFormats/PatCandidates/test,src_DataFormats_PatCandidates_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testDataFormatsPatCandidates_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testDataFormatsPatCandidates,src/DataFormats/PatCandidates/test))
endif
ifeq ($(strip $(testKinResolutions)),)
testKinResolutions := self/src/DataFormats/PatCandidates/test
testKinResolutions_files := $(patsubst src/DataFormats/PatCandidates/test/%,%,$(foreach file,testKinParametrizations.cc testKinResolutions.cc testRunner.cpp,$(eval xfile:=$(wildcard src/DataFormats/PatCandidates/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DataFormats/PatCandidates/test/$(file). Please fix src/DataFormats/PatCandidates/test/BuildFile.))))
testKinResolutions_TEST_RUNNER_CMD := echo
testKinResolutions_NO_TESTRUN := yes
testKinResolutions_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/PatCandidates/test/BuildFile
testKinResolutions_LOC_USE := self  boost cppunit DataFormats/PatCandidates
testKinResolutions_PACKAGE := self/src/DataFormats/PatCandidates/test
ALL_PRODS += testKinResolutions
testKinResolutions_INIT_FUNC        += $$(eval $$(call Binary,testKinResolutions,src/DataFormats/PatCandidates/test,src_DataFormats_PatCandidates_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testKinResolutions_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testKinResolutions,src/DataFormats/PatCandidates/test))
endif
ALL_COMMONRULES += src_DataFormats_PatCandidates_test
src_DataFormats_PatCandidates_test_parent := DataFormats/PatCandidates
src_DataFormats_PatCandidates_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DataFormats_PatCandidates_test,src/DataFormats/PatCandidates/test,TEST))
ALL_PACKAGES += DataFormats/TauReco
subdirs_src_DataFormats_TauReco := src_DataFormats_TauReco_src
ALL_PACKAGES += DataFormats/VertexReco
subdirs_src_DataFormats_VertexReco := src_DataFormats_VertexReco_src src_DataFormats_VertexReco_test
ifeq ($(strip $(testDataFormatsVertexReco)),)
testDataFormatsVertexReco := self/src/DataFormats/VertexReco/test
testDataFormatsVertexReco_files := $(patsubst src/DataFormats/VertexReco/test/%,%,$(foreach file,testVertex.cc testRunner.cpp,$(eval xfile:=$(wildcard src/DataFormats/VertexReco/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DataFormats/VertexReco/test/$(file). Please fix src/DataFormats/VertexReco/test/BuildFile.))))
testDataFormatsVertexReco_TEST_RUNNER_CMD :=  testDataFormatsVertexReco 
testDataFormatsVertexReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/VertexReco/test/BuildFile
testDataFormatsVertexReco_LOC_USE := self  FWCore/Utilities FWCore/Framework DataFormats/TrackReco clhep FWCore/PluginManager FWCore/ParameterSet Geometry/TrackerGeometryBuilder Geometry/Records DataFormats/VertexReco root cppunit
testDataFormatsVertexReco_PACKAGE := self/src/DataFormats/VertexReco/test
ALL_PRODS += testDataFormatsVertexReco
testDataFormatsVertexReco_INIT_FUNC        += $$(eval $$(call Binary,testDataFormatsVertexReco,src/DataFormats/VertexReco/test,src_DataFormats_VertexReco_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testDataFormatsVertexReco_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testDataFormatsVertexReco,src/DataFormats/VertexReco/test))
endif
ALL_COMMONRULES += src_DataFormats_VertexReco_test
src_DataFormats_VertexReco_test_parent := DataFormats/VertexReco
src_DataFormats_VertexReco_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DataFormats_VertexReco_test,src/DataFormats/VertexReco/test,TEST))
