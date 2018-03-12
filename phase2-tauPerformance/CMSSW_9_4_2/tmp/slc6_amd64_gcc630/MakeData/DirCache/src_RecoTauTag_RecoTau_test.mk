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
