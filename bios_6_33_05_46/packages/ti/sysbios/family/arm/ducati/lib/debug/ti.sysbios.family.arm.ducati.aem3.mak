#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.arm.elf.M3{1,0,4.9,2
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.oem3: package/package_ti.sysbios.family.arm.ducati.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati/package -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati/package -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati/package -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.sem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.sem3: package/package_ti.sysbios.family.arm.ducati.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati/package -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati/package -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati/package -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.sem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.oem3: Core.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.sem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.sem3: Core.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.sem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core_asm.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core_asm.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core_asm.oem3: Core_asm.sv7M lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) asmem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -qq --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2   $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fa $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C  -qq --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2   $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include 
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core_asm.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core_asm.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/CTM_asm.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/CTM_asm.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/CTM_asm.oem3: CTM_asm.sv7M lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) asmem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -qq --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2   $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fa $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C  -qq --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2   $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include 
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/CTM_asm.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/CTM_asm.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.oem3: GateDualCore.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.sem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.sem3: GateDualCore.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.sem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.oem3: Timer.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.sem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.sem3: Timer.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.sem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.oem3: TimerSupport.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.sem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.sem3: TimerSupport.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.sem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.oem3: TimestampProvider.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.sem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.sem3: TimestampProvider.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.sem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.oem3.dep
endif

package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.oem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.oem3: Wugen.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.oem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.sem3: | .interfaces
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.sem3: Wugen.c lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/cl470 -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/debug/ti.sysbios.family.arm.ducati -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3  -ms -g  -D_DEBUG_=1 -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_debug -Dxdc_bld__vers_1_0_4_9_2 --symdebug:dwarf  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include/rts -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/debug/ti.sysbios.family.arm.ducati -fr=./package/lib/lib/debug/ti.sysbios.family.arm.ducati
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.sem3: export C_DIR=
package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

clean,em3 ::
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core_asm.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/CTM_asm.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.oem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.sem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.sem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.sem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.sem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.sem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.sem3
	-$(RM) package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.sem3

lib/debug/ti.sysbios.family.arm.ducati.aem3: package/lib/lib/debug/ti.sysbios.family.arm.ducati/package/package_ti.sysbios.family.arm.ducati.oem3 package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core.oem3 package/lib/lib/debug/ti.sysbios.family.arm.ducati/Core_asm.oem3 package/lib/lib/debug/ti.sysbios.family.arm.ducati/CTM_asm.oem3 package/lib/lib/debug/ti.sysbios.family.arm.ducati/GateDualCore.oem3 package/lib/lib/debug/ti.sysbios.family.arm.ducati/Timer.oem3 package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimerSupport.oem3 package/lib/lib/debug/ti.sysbios.family.arm.ducati/TimestampProvider.oem3 package/lib/lib/debug/ti.sysbios.family.arm.ducati/Wugen.oem3 lib/debug/ti.sysbios.family.arm.ducati.aem3.mak

clean::
	-$(RM) lib/debug/ti.sysbios.family.arm.ducati.aem3.mak
