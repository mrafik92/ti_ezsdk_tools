vpath % /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages/ti/sysbios/
vpath %.c /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/

CCOPTS    = --endian=little -mv7M3 --abi=eabi -q -ms --opt_for_speed=2  --program_level_compile -o3 -g --optimize_with_debug

XDC_ROOT  = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/

BIOS_ROOT = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages/ti/sysbios/

BIOS_DEFS =  -Dti_sysbios_BIOS_swiEnabled__D=TRUE -Dti_sysbios_BIOS_taskEnabled__D=TRUE -Dti_sysbios_BIOS_clockEnabled__D=TRUE -Dti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS -Dti_sysbios_knl_Swi_DISABLE_ALL_HOOKS -Dti_sysbios_knl_Swi_numPriorities__D=16 -Dti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__D=TRUE -Dti_sysbios_knl_Semaphore_supportsEvents__D=FALSE -Dxdc_runtime_Assert_DISABLE_ALL -Dxdc_runtime_Log_DISABLE_ALL -Dti_sysbios_family_arm_m3_Hwi_enableException__D=TRUE

BIOS_INC  = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages/"

CC = /proj/productization/tools/cgt470/cgt470_4_9_2//bin/cl470 -c $(CCOPTS) -I /proj/productization/tools/cgt470/cgt470_4_9_2//include
ASM = /proj/productization/tools/cgt470/cgt470_4_9_2//bin/cl470 -c $(CCOPTS) -I /proj/productization/tools/cgt470/cgt470_4_9_2//include
AR = /proj/productization/tools/cgt470/cgt470_4_9_2//bin/ar470 rq

DEL = rm -f

define RM
	$(if $(wildcard $1),$(DEL) $1,:)
endef

define ASSEMBLE
	@echo asmem3 $< ...
	@$(ASM) $(BIOS_DEFS) -I "/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/" -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_target_name__=M3 $(BIOS_INC) $<
endef

all: sysbios.lib

m3_Clobber_asm.obj: family/arm/m3/Clobber_asm.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=m3_Clobber_asm.obj

m3_IntrinsicsSupport_asm.obj: family/arm/m3/IntrinsicsSupport_asm.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=m3_IntrinsicsSupport_asm.obj

m3_TaskSupport_asm.obj: family/arm/m3/TaskSupport_asm.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=m3_TaskSupport_asm.obj

m3_Hwi_asm.obj: family/arm/m3/Hwi_asm.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=m3_Hwi_asm.obj

m3_Hwi_asm_switch.obj: family/arm/m3/Hwi_asm_switch.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=m3_Hwi_asm_switch.obj

ducati_CTM_asm.obj: family/arm/ducati/CTM_asm.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=ducati_CTM_asm.obj

ducati_Core_asm.obj: family/arm/ducati/Core_asm.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=ducati_Core_asm.obj

omap4430_Power_saveCpu.obj: family/arm/ducati/omap4430/Power_saveCpu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=omap4430_Power_saveCpu.obj

omap4430_Power_resumeCpu.obj: family/arm/ducati/omap4430/Power_resumeCpu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=omap4430_Power_resumeCpu.obj

dmtimer_Timer_asm.obj: timers/dmtimer/Timer_asm.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=dmtimer_Timer_asm.obj


BIOS.obj: BIOS.c knl/Clock.c knl/Idle.c knl/Intrinsics.c knl/Swi.c knl/Swi_andn.c knl/Task.c knl/Event.c knl/Semaphore.c knl/Mailbox.c knl/Queue.c heaps/HeapMem.c heaps/HeapBuf.c heaps/HeapNull.c heaps/HeapMultiBuf.c gates/GateHwi.c gates/GateAll.c gates/GateSwi.c gates/GateTask.c gates/GateTest.c gates/GateMutex.c gates/GateMutexPri.c hal/Hwi.c hal/Hwi_stack.c hal/Hwi_startup.c hal/Timer.c hal/TimerNull.c hal/Cache.c hal/CacheNull.c rta/SupportLogger.c utils/Load.c syncs/SyncSem.c syncs/SyncSwi.c syncs/SyncEvent.c xdcruntime/GateThreadSupport.c xdcruntime/GateProcessSupport.c xdcruntime/SemThreadSupport.c xdcruntime/SemProcessSupport.c xdcruntime/ThreadSupport.c xdcruntime/CacheSupport.c io/DEV.c io/GIO.c io/IOM_stub.c misc/Stats.c timers/dmtimer/Timer.c timers/dmtimer/TimestampProvider.c family/arm/m3/Hwi.c family/arm/m3/TaskSupport.c family/arm/m3/Timer.c family/arm/m3/TimestampProvider.c family/arm/lm3/Timer.c family/arm/lm3/TimestampProvider.c family/arm/ducati/Core.c family/arm/ducati/GateDualCore.c family/arm/ducati/Timer.c family/arm/ducati/TimerSupport.c family/arm/ducati/TimestampProvider.c family/arm/ducati/Wugen.c family/arm/ducati/omap4430/Power.c family/arm/ducati/dm8148/IntMux.c family/arm/f28m35x/TimestampProvider.c hal/unicache/Cache.c hal/ammu/AMMU.c makefile
	@-$(call RM, $@)
	@echo clem3 $< ...
	@$(CC) $(BIOS_DEFS) -I "/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/" -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_target_name__=M3 $(BIOS_INC) \
	$(BIOS_ROOT)BIOS.c \
	$(BIOS_ROOT)knl/Clock.c \
	$(BIOS_ROOT)knl/Idle.c \
	$(BIOS_ROOT)knl/Intrinsics.c \
	$(BIOS_ROOT)knl/Swi.c \
	$(BIOS_ROOT)knl/Swi_andn.c \
	$(BIOS_ROOT)knl/Task.c \
	$(BIOS_ROOT)knl/Event.c \
	$(BIOS_ROOT)knl/Semaphore.c \
	$(BIOS_ROOT)knl/Mailbox.c \
	$(BIOS_ROOT)knl/Queue.c \
	$(BIOS_ROOT)heaps/HeapMem.c \
	$(BIOS_ROOT)heaps/HeapBuf.c \
	$(BIOS_ROOT)heaps/HeapNull.c \
	$(BIOS_ROOT)heaps/HeapMultiBuf.c \
	$(BIOS_ROOT)gates/GateHwi.c \
	$(BIOS_ROOT)gates/GateAll.c \
	$(BIOS_ROOT)gates/GateSwi.c \
	$(BIOS_ROOT)gates/GateTask.c \
	$(BIOS_ROOT)gates/GateTest.c \
	$(BIOS_ROOT)gates/GateMutex.c \
	$(BIOS_ROOT)gates/GateMutexPri.c \
	$(BIOS_ROOT)hal/Hwi.c \
	$(BIOS_ROOT)hal/Hwi_stack.c \
	$(BIOS_ROOT)hal/Hwi_startup.c \
	$(BIOS_ROOT)hal/Timer.c \
	$(BIOS_ROOT)hal/TimerNull.c \
	$(BIOS_ROOT)hal/Cache.c \
	$(BIOS_ROOT)hal/CacheNull.c \
	$(BIOS_ROOT)rta/SupportLogger.c \
	$(BIOS_ROOT)utils/Load.c \
	$(BIOS_ROOT)syncs/SyncSem.c \
	$(BIOS_ROOT)syncs/SyncSwi.c \
	$(BIOS_ROOT)syncs/SyncEvent.c \
	$(BIOS_ROOT)xdcruntime/GateThreadSupport.c \
	$(BIOS_ROOT)xdcruntime/GateProcessSupport.c \
	$(BIOS_ROOT)xdcruntime/SemThreadSupport.c \
	$(BIOS_ROOT)xdcruntime/SemProcessSupport.c \
	$(BIOS_ROOT)xdcruntime/ThreadSupport.c \
	$(BIOS_ROOT)xdcruntime/CacheSupport.c \
	$(BIOS_ROOT)io/DEV.c \
	$(BIOS_ROOT)io/GIO.c \
	$(BIOS_ROOT)io/IOM_stub.c \
	$(BIOS_ROOT)misc/Stats.c \
	$(BIOS_ROOT)timers/dmtimer/Timer.c \
	$(BIOS_ROOT)timers/dmtimer/TimestampProvider.c \
	$(BIOS_ROOT)family/arm/m3/Hwi.c \
	$(BIOS_ROOT)family/arm/m3/TaskSupport.c \
	$(BIOS_ROOT)family/arm/m3/Timer.c \
	$(BIOS_ROOT)family/arm/m3/TimestampProvider.c \
	$(BIOS_ROOT)family/arm/lm3/Timer.c \
	$(BIOS_ROOT)family/arm/lm3/TimestampProvider.c \
	$(BIOS_ROOT)family/arm/ducati/Core.c \
	$(BIOS_ROOT)family/arm/ducati/GateDualCore.c \
	$(BIOS_ROOT)family/arm/ducati/Timer.c \
	$(BIOS_ROOT)family/arm/ducati/TimerSupport.c \
	$(BIOS_ROOT)family/arm/ducati/TimestampProvider.c \
	$(BIOS_ROOT)family/arm/ducati/Wugen.c \
	$(BIOS_ROOT)family/arm/ducati/omap4430/Power.c \
	$(BIOS_ROOT)family/arm/ducati/dm8148/IntMux.c \
	$(BIOS_ROOT)family/arm/f28m35x/TimestampProvider.c \
	$(BIOS_ROOT)hal/unicache/Cache.c \
	$(BIOS_ROOT)hal/ammu/AMMU.c \

sysbios.lib: BIOS.obj m3_Clobber_asm.obj m3_IntrinsicsSupport_asm.obj m3_TaskSupport_asm.obj m3_Hwi_asm.obj m3_Hwi_asm_switch.obj ducati_CTM_asm.obj ducati_Core_asm.obj omap4430_Power_saveCpu.obj omap4430_Power_resumeCpu.obj dmtimer_Timer_asm.obj
	@echo arem3 $^ ...
	@-$(call RM, $@)
	@$(AR) $@ $^

clean:
	@-$(call RM, sysbios.lib)
	@-$(call RM, BIOS.obj)
	@-$(call RM, m3_Clobber_asm.obj)
	@-$(call RM, m3_IntrinsicsSupport_asm.obj)
	@-$(call RM, m3_TaskSupport_asm.obj)
	@-$(call RM, m3_Hwi_asm.obj)
	@-$(call RM, m3_Hwi_asm_switch.obj)
	@-$(call RM, ducati_CTM_asm.obj)
	@-$(call RM, ducati_Core_asm.obj)
	@-$(call RM, omap4430_Power_saveCpu.obj)
	@-$(call RM, omap4430_Power_resumeCpu.obj)
	@-$(call RM, dmtimer_Timer_asm.obj)

