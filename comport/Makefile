# Makefile for iemnet

lib.name = comport

with-bird=no

class.sources = comport.c

datafiles = \
	comport-help.pd \
	comport-meta.pd \
	comport-stress-test.pd \
	CHANGES.txt \
	LICENSE.txt \
	README.txt \
	$(empty)


ifeq ($(with-bird),yes)
 class.sources += bird/bird.c
 datafiles += bird/bird-help.pd
endif


# This Makefile is based on the Makefile from pd-lib-builder written by
# Katja Vetter. You can get it from:
# https://github.com/pure-data/pd-lib-builder

PDLIBBUILDER_DIR=pd-lib-builder/
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder
