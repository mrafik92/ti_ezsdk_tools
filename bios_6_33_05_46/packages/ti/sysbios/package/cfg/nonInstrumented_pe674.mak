#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.elf.C674{1,0,7.3,1
#
ifeq (,$(MK_NOGENDEPS))
-include package/cfg/nonInstrumented_pe674.oe674.dep
endif

package/cfg/nonInstrumented_pe674.oe674: | .interfaces
package/cfg/nonInstrumented_pe674.oe674: package/cfg/nonInstrumented_pe674.c package/cfg/nonInstrumented_pe674.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle674 $< ...
	$(ti.targets.elf.C674.rootDir)/bin/cl6x -c  -qq -pdsw225 -mo --no_compress -mv6740 --abi=eabi -eo.oe674 -ea.se674  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  --embed_inline_assembly  -Dxdc_cfg__header__='ti/sysbios/package/cfg/nonInstrumented_pe674.h'  -Dxdc_target_name__=C674 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_3_1 -O2  $(XDCINCS) -I$(ti.targets.elf.C674.rootDir)/include -fs=./package/cfg -fr=./package/cfg -fc $<
	$(MKDEP) -a $@.dep -p package/cfg -s oe674 $< -C   -qq -pdsw225 -mo --no_compress -mv6740 --abi=eabi -eo.oe674 -ea.se674  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  --embed_inline_assembly  -Dxdc_cfg__header__='ti/sysbios/package/cfg/nonInstrumented_pe674.h'  -Dxdc_target_name__=C674 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_3_1 -O2  $(XDCINCS) -I$(ti.targets.elf.C674.rootDir)/include -fs=./package/cfg -fr=./package/cfg
	-@$(FIXDEP) $@.dep $@.dep
	
package/cfg/nonInstrumented_pe674.oe674: export C_DIR=
package/cfg/nonInstrumented_pe674.oe674: PATH:=$(ti.targets.elf.C674.rootDir)/bin/:$(PATH)

package/cfg/nonInstrumented_pe674.se674: | .interfaces
package/cfg/nonInstrumented_pe674.se674: package/cfg/nonInstrumented_pe674.c package/cfg/nonInstrumented_pe674.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle674 -n $< ...
	$(ti.targets.elf.C674.rootDir)/bin/cl6x -c -n -s --symdebug:none -qq -pdsw225 -mv6740 --abi=eabi -eo.oe674 -ea.se674  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g   -Dxdc_cfg__header__='ti/sysbios/package/cfg/nonInstrumented_pe674.h'  -Dxdc_target_name__=C674 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_3_1 -O2  $(XDCINCS) -I$(ti.targets.elf.C674.rootDir)/include -fs=./package/cfg -fr=./package/cfg -fc $<
	$(MKDEP) -a $@.dep -p package/cfg -s oe674 $< -C  -n -s --symdebug:none -qq -pdsw225 -mv6740 --abi=eabi -eo.oe674 -ea.se674  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g   -Dxdc_cfg__header__='ti/sysbios/package/cfg/nonInstrumented_pe674.h'  -Dxdc_target_name__=C674 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_3_1 -O2  $(XDCINCS) -I$(ti.targets.elf.C674.rootDir)/include -fs=./package/cfg -fr=./package/cfg
	-@$(FIXDEP) $@.dep $@.dep
	
package/cfg/nonInstrumented_pe674.se674: export C_DIR=
package/cfg/nonInstrumented_pe674.se674: PATH:=$(ti.targets.elf.C674.rootDir)/bin/:$(PATH)

clean,e674 ::
	-$(RM) package/cfg/nonInstrumented_pe674.oe674
	-$(RM) package/cfg/nonInstrumented_pe674.se674

nonInstrumented.pe674: package/cfg/nonInstrumented_pe674.oe674 package/cfg/nonInstrumented_pe674.mak

clean::
	-$(RM) package/cfg/nonInstrumented_pe674.mak
