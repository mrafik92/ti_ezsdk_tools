# invoke SourceDir generated makefile for nonInstrumented.pe674
nonInstrumented.pe674: .libraries,nonInstrumented.pe674
.libraries,nonInstrumented.pe674: package/cfg/nonInstrumented_pe674.xdl
	$(MAKE) -f lib/nonInstrumented_e674//makefile.libs

clean::
	$(MAKE) -f lib/nonInstrumented_e674//makefile.libs clean

