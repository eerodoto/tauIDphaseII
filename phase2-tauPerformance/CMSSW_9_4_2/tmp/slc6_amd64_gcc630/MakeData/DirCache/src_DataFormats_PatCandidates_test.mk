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
