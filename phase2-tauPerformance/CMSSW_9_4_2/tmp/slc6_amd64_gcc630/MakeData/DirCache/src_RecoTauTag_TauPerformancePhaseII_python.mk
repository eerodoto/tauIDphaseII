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
