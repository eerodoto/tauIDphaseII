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
