# invoke SourceDir generated makefile for nonInstrumented.pem3
nonInstrumented.pem3: .libraries,nonInstrumented.pem3
.libraries,nonInstrumented.pem3: package/cfg/nonInstrumented_pem3.xdl
	$(MAKE) -f lib/nonInstrumented_em3//makefile.libs

clean::
	$(MAKE) -f lib/nonInstrumented_em3//makefile.libs clean

