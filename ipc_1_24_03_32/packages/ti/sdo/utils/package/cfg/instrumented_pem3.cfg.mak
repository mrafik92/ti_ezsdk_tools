# invoke SourceDir generated makefile for instrumented.pem3
instrumented.pem3: .libraries,instrumented.pem3
.libraries,instrumented.pem3: package/cfg/instrumented_pem3.xdl
	$(MAKE) -f lib/instrumented_em3//makefile.libs

clean::
	$(MAKE) -f lib/instrumented_em3//makefile.libs clean

