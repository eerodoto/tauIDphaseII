ifeq ($(strip $(RecoTauTagRecoTauPlugins)),)
RecoTauTagRecoTauPlugins := self/src/RecoTauTag/RecoTau/plugins
PLUGINS:=yes
RecoTauTagRecoTauPlugins_files := $(patsubst src/RecoTauTag/RecoTau/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/RecoTauTag/RecoTau/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoTauTag/RecoTau/plugins/$(file). Please fix src/RecoTauTag/RecoTau/plugins/BuildFile.))))
RecoTauTagRecoTauPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTauTag/RecoTau/plugins/BuildFile
RecoTauTagRecoTauPlugins_LOC_USE := self  TrackingTools/Records RecoVertex/KalmanVertexFit CommonTools/CandUtils DataFormats/Candidate DataFormats/MuonReco DataFormats/TrackReco TrackingTools/TransientTrack RecoVertex/VertexPrimitives PhysicsTools/IsolationUtils PhysicsTools/MVAComputer PhysicsTools/MVATrainer FWCore/Framework FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities DataFormats/TauReco DataFormats/WrappedStdDictionaries CommonTools/UtilAlgos CommonTools/CandAlgos PhysicsTools/HepMCCandAlgos RecoTauTag/TauTagTools RecoTauTag/RecoTau DataFormats/JetReco DataFormats/ParticleFlowReco RecoBTag/SecondaryVertex DataFormats/VertexReco CondFormats/EgammaObjects CondFormats/DataRecord CondFormats/EcalObjects Geometry/CaloGeometry Geometry/CaloTopology Geometry/HcalTowerAlgo Geometry/Records MagneticField/Engine MagneticField/Records FastSimulation/BaseParticlePropagator root
RecoTauTagRecoTauPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoTauTagRecoTauPlugins,RecoTauTagRecoTauPlugins,$(SCRAMSTORENAME_LIB),src/RecoTauTag/RecoTau/plugins))
RecoTauTagRecoTauPlugins_PACKAGE := self/src/RecoTauTag/RecoTau/plugins
ALL_PRODS += RecoTauTagRecoTauPlugins
RecoTauTag/RecoTau_forbigobj+=RecoTauTagRecoTauPlugins
RecoTauTagRecoTauPlugins_INIT_FUNC        += $$(eval $$(call Library,RecoTauTagRecoTauPlugins,src/RecoTauTag/RecoTau/plugins,src_RecoTauTag_RecoTau_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoTauTagRecoTauPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoTauTagRecoTauPlugins,src/RecoTauTag/RecoTau/plugins))
endif
ALL_COMMONRULES += src_RecoTauTag_RecoTau_plugins
src_RecoTauTag_RecoTau_plugins_parent := RecoTauTag/RecoTau
src_RecoTauTag_RecoTau_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTauTag_RecoTau_plugins,src/RecoTauTag/RecoTau/plugins,PLUGINS))
ifeq ($(strip $(RecoTauTag/RecoTau)),)
ALL_COMMONRULES += src_RecoTauTag_RecoTau_src
src_RecoTauTag_RecoTau_src_parent := RecoTauTag/RecoTau
src_RecoTauTag_RecoTau_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoTauTag_RecoTau_src,src/RecoTauTag/RecoTau/src,LIBRARY))
RecoTauTagRecoTau := self/RecoTauTag/RecoTau
RecoTauTag/RecoTau := RecoTauTagRecoTau
RecoTauTagRecoTau_files := $(patsubst src/RecoTauTag/RecoTau/src/%,%,$(wildcard $(foreach dir,src/RecoTauTag/RecoTau/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoTauTagRecoTau_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTauTag/RecoTau/BuildFile
RecoTauTagRecoTau_LOC_USE := self  MagneticField/Engine MagneticField/Records CondFormats/EgammaObjects DataFormats/Math DataFormats/TauReco DataFormats/VertexReco DataFormats/PatCandidates DataFormats/ParticleFlowCandidate DataFormats/TrackReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CaloGeometry Geometry/CaloTopology Geometry/Records Geometry/CommonDetUnit TrackingTools/TransientTrack TrackingTools/IPTools RecoTauTag/TauTagTools RecoVertex/KalmanVertexFit RecoVertex/AdaptiveVertexFit RecoParticleFlow/PFClusterTools TrackingTools/TrackAssociator PhysicsTools/JetMCUtils CommonTools/Utils FastSimulation/BaseParticlePropagator FastSimulation/Particle roottmva
RecoTauTagRecoTau_EX_LIB   := RecoTauTagRecoTau
RecoTauTagRecoTau_EX_USE   := $(foreach d,$(RecoTauTagRecoTau_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTauTagRecoTau_PACKAGE := self/src/RecoTauTag/RecoTau/src
ALL_PRODS += RecoTauTagRecoTau
RecoTauTagRecoTau_CLASS := LIBRARY
RecoTauTag/RecoTau_forbigobj+=RecoTauTagRecoTau
RecoTauTagRecoTau_INIT_FUNC        += $$(eval $$(call Library,RecoTauTagRecoTau,src/RecoTauTag/RecoTau/src,src_RecoTauTag_RecoTau_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
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
ifeq ($(strip $(DataFormats/PatCandidates)),)
ALL_COMMONRULES += src_DataFormats_PatCandidates_src
src_DataFormats_PatCandidates_src_parent := DataFormats/PatCandidates
src_DataFormats_PatCandidates_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_PatCandidates_src,src/DataFormats/PatCandidates/src,LIBRARY))
DataFormatsPatCandidates := self/DataFormats/PatCandidates
DataFormats/PatCandidates := DataFormatsPatCandidates
DataFormatsPatCandidates_files := $(patsubst src/DataFormats/PatCandidates/src/%,%,$(wildcard $(foreach dir,src/DataFormats/PatCandidates/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsPatCandidates_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/PatCandidates/BuildFile
DataFormatsPatCandidates_LOC_USE := self  FWCore/Utilities FWCore/Common DataFormats/Common DataFormats/StdDictionaries DataFormats/Candidate DataFormats/MuonReco DataFormats/TauReco DataFormats/JetReco DataFormats/METReco DataFormats/EgammaCandidates DataFormats/ParticleFlowCandidate DataFormats/TrackReco DataFormats/HepMCCandidate DataFormats/BTauReco CondFormats/L1TObjects DataFormats/L1Trigger DataFormats/HLTReco DataFormats/CaloTowers DataFormats/EcalRecHit SimDataFormats/JetMatching boost
DataFormatsPatCandidates_LCGDICTS  := x x1 x2 x3 
DataFormatsPatCandidates_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsPatCandidates,src/DataFormats/PatCandidates/src/classes_other.h src/DataFormats/PatCandidates/src/classes_trigger.h src/DataFormats/PatCandidates/src/classes_user.h src/DataFormats/PatCandidates/src/classes_objects.h,src/DataFormats/PatCandidates/src/classes_def_other.xml src/DataFormats/PatCandidates/src/classes_def_trigger.xml src/DataFormats/PatCandidates/src/classes_def_user.xml src/DataFormats/PatCandidates/src/classes_def_objects.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsPatCandidates_EX_LIB   := DataFormatsPatCandidates
DataFormatsPatCandidates_EX_USE   := $(foreach d,$(DataFormatsPatCandidates_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsPatCandidates_PACKAGE := self/src/DataFormats/PatCandidates/src
ALL_PRODS += DataFormatsPatCandidates
DataFormatsPatCandidates_CLASS := LIBRARY
DataFormats/PatCandidates_forbigobj+=DataFormatsPatCandidates
DataFormatsPatCandidates_INIT_FUNC        += $$(eval $$(call Library,DataFormatsPatCandidates,src/DataFormats/PatCandidates/src,src_DataFormats_PatCandidates_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DataFormats/TauReco)),)
ALL_COMMONRULES += src_DataFormats_TauReco_src
src_DataFormats_TauReco_src_parent := DataFormats/TauReco
src_DataFormats_TauReco_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_TauReco_src,src/DataFormats/TauReco/src,LIBRARY))
DataFormatsTauReco := self/DataFormats/TauReco
DataFormats/TauReco := DataFormatsTauReco
DataFormatsTauReco_files := $(patsubst src/DataFormats/TauReco/src/%,%,$(wildcard $(foreach dir,src/DataFormats/TauReco/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsTauReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/TauReco/BuildFile
DataFormatsTauReco_LOC_USE := self  DataFormats/Common DataFormats/RecoCandidate DataFormats/Candidate DataFormats/Math DataFormats/TrackReco DataFormats/JetReco DataFormats/ParticleFlowCandidate
DataFormatsTauReco_LCGDICTS  := x x1 x2 x3 
DataFormatsTauReco_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsTauReco,src/DataFormats/TauReco/src/classes_2.h src/DataFormats/TauReco/src/classes_1.h src/DataFormats/TauReco/src/classes_3.h src/DataFormats/TauReco/src/classes_hlt.h,src/DataFormats/TauReco/src/classes_def_2.xml src/DataFormats/TauReco/src/classes_def_1.xml src/DataFormats/TauReco/src/classes_def_3.xml src/DataFormats/TauReco/src/classes_def_hlt.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsTauReco_EX_LIB   := DataFormatsTauReco
DataFormatsTauReco_EX_USE   := $(foreach d,$(DataFormatsTauReco_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsTauReco_PACKAGE := self/src/DataFormats/TauReco/src
ALL_PRODS += DataFormatsTauReco
DataFormatsTauReco_CLASS := LIBRARY
DataFormats/TauReco_forbigobj+=DataFormatsTauReco
DataFormatsTauReco_INIT_FUNC        += $$(eval $$(call Library,DataFormatsTauReco,src/DataFormats/TauReco/src,src_DataFormats_TauReco_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DataFormats/VertexReco)),)
ALL_COMMONRULES += src_DataFormats_VertexReco_src
src_DataFormats_VertexReco_src_parent := DataFormats/VertexReco
src_DataFormats_VertexReco_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_VertexReco_src,src/DataFormats/VertexReco/src,LIBRARY))
DataFormatsVertexReco := self/DataFormats/VertexReco
DataFormats/VertexReco := DataFormatsVertexReco
DataFormatsVertexReco_files := $(patsubst src/DataFormats/VertexReco/src/%,%,$(wildcard $(foreach dir,src/DataFormats/VertexReco/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsVertexReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/VertexReco/BuildFile
DataFormatsVertexReco_LOC_USE := self  DataFormats/Common DataFormats/TrackReco FWCore/Utilities
DataFormatsVertexReco_LCGDICTS  := x 
DataFormatsVertexReco_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsVertexReco,src/DataFormats/VertexReco/src/classes.h,src/DataFormats/VertexReco/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsVertexReco_EX_LIB   := DataFormatsVertexReco
DataFormatsVertexReco_EX_USE   := $(foreach d,$(DataFormatsVertexReco_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsVertexReco_PACKAGE := self/src/DataFormats/VertexReco/src
ALL_PRODS += DataFormatsVertexReco
DataFormatsVertexReco_CLASS := LIBRARY
DataFormats/VertexReco_forbigobj+=DataFormatsVertexReco
DataFormatsVertexReco_INIT_FUNC        += $$(eval $$(call Library,DataFormatsVertexReco,src/DataFormats/VertexReco/src,src_DataFormats_VertexReco_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
