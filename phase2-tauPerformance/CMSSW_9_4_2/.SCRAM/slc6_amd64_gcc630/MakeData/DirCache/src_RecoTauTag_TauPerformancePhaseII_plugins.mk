ifeq ($(strip $(RecoTauTagTauPerformancePhaseIIAuto)),)
RecoTauTagTauPerformancePhaseIIAuto := self/src/RecoTauTag/TauPerformancePhaseII/plugins
PLUGINS:=yes
RecoTauTagTauPerformancePhaseIIAuto_files := $(patsubst src/RecoTauTag/TauPerformancePhaseII/plugins/%,%,$(wildcard $(foreach dir,src/RecoTauTag/TauPerformancePhaseII/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoTauTagTauPerformancePhaseIIAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTauTag/TauPerformancePhaseII/plugins/BuildFile
RecoTauTagTauPerformancePhaseIIAuto_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/JetReco DataFormats/Math DataFormats/MuonReco DataFormats/Luminosity DataFormats/PatCandidates DataFormats/L1GlobalTrigger FWCore/ServiceRegistry FWCore/MessageService FWCore/Utilities PhysicsTools/PatUtils PhysicsTools/IsolationUtils PhysicsTools/Utilities PhysicsTools/JetMCUtils CommonTools/UtilAlgos JetMETCorrections/Objects HLTrigger/HLTcore MagneticField/Engine TrackingTools/MaterialEffects TrackingTools/GeomPropagators RecoEgamma/EgammaTools Geometry/CaloGeometry RecoVertex/KalmanVertexFit RecoVertex/VertexPrimitives EgammaAnalysis/ElectronTools RecoBTag/BTagTools RecoVertex/KinematicFitPrimitives clhep RecoVertex/AdaptiveVertexFit root
RecoTauTagTauPerformancePhaseIIAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoTauTagTauPerformancePhaseIIAuto,RecoTauTagTauPerformancePhaseIIAuto,$(SCRAMSTORENAME_LIB),src/RecoTauTag/TauPerformancePhaseII/plugins))
RecoTauTagTauPerformancePhaseIIAuto_PACKAGE := self/src/RecoTauTag/TauPerformancePhaseII/plugins
ALL_PRODS += RecoTauTagTauPerformancePhaseIIAuto
RecoTauTag/TauPerformancePhaseII_forbigobj+=RecoTauTagTauPerformancePhaseIIAuto
RecoTauTagTauPerformancePhaseIIAuto_INIT_FUNC        += $$(eval $$(call Library,RecoTauTagTauPerformancePhaseIIAuto,src/RecoTauTag/TauPerformancePhaseII/plugins,src_RecoTauTag_TauPerformancePhaseII_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoTauTagTauPerformancePhaseIIAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoTauTagTauPerformancePhaseIIAuto,src/RecoTauTag/TauPerformancePhaseII/plugins))
endif
ALL_COMMONRULES += src_RecoTauTag_TauPerformancePhaseII_plugins
src_RecoTauTag_TauPerformancePhaseII_plugins_parent := RecoTauTag/TauPerformancePhaseII
src_RecoTauTag_TauPerformancePhaseII_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTauTag_TauPerformancePhaseII_plugins,src/RecoTauTag/TauPerformancePhaseII/plugins,PLUGINS))
