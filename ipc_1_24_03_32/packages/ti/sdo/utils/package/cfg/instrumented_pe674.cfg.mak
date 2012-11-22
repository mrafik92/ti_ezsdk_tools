# invoke SourceDir generated makefile for instrumented.pe674
instrumented.pe674: .libraries,instrumented.pe674
.libraries,instrumented.pe674: package/cfg/instrumented_pe674.xdl
	$(MAKE) -f lib/instrumented_e674//makefile.libs

clean::
	$(MAKE) -f lib/instrumented_e674//makefile.libs clean

