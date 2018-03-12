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
