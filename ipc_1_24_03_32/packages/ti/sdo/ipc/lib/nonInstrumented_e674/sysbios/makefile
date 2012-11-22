vpath % /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages/ti/sysbios/
vpath %.c /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/

CCOPTS    = -mv6740 --abi=eabi -q -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110  --program_level_compile -o3 -g --optimize_with_debug

XDC_ROOT  = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/

BIOS_ROOT = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages/ti/sysbios/

BIOS_DEFS =  -Dti_sysbios_BIOS_swiEnabled__D=TRUE -Dti_sysbios_BIOS_taskEnabled__D=TRUE -Dti_sysbios_BIOS_clockEnabled__D=TRUE -Dti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS -Dti_sysbios_knl_Swi_DISABLE_ALL_HOOKS -Dti_sysbios_knl_Swi_numPriorities__D=16 -Dti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__D=TRUE -Dti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__D=TRUE -Dti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__D=TRUE -Dti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__D=TRUE -Dti_sysbios_knl_Semaphore_supportsEvents__D=FALSE -Dxdc_runtime_Assert_DISABLE_ALL -Dxdc_runtime_Log_DISABLE_ALL -Dti_sysbios_family_c64p_Exception_enableExternalMPC__D=FALSE -Dti_sysbios_family_c64p_Exception_enablePrint__D=TRUE

BIOS_INC  = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages/"

CC = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/bin/cl6x -c $(CCOPTS) -I /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/include
ASM = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/bin/cl6x -c $(CCOPTS) -I /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/include
AR = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/bin/ar6x rq

DEL = rm -f

define RM
	$(if $(wildcard $1),$(DEL) $1,:)
endef

define ASSEMBLE
	@echo asme674 $< ...
	@$(ASM) $(BIOS_DEFS) -I "/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/" -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_target_name__=C674 $(BIOS_INC) $<
endef

all: sysbios.lib

c64p_Hwi_disp_always.obj: family/c64p/Hwi_disp_always.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Hwi_disp_always.obj

c64p_Hwi_asm.obj: family/c64p/Hwi_asm.s62 makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Hwi_asm.obj

c64p_Hwi_asm_switch.obj: family/c64p/Hwi_asm_switch.s62 makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Hwi_asm_switch.obj

c64p_Clobber_asm.obj: family/c64p/Clobber_asm.s62 makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Clobber_asm.obj

c64p_Exception_asm.obj: family/c64p/Exception_asm.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Exception_asm.obj

c64p_MemoryProtect_asm.obj: family/c64p/MemoryProtect_asm.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_MemoryProtect_asm.obj

c62_TaskSupport_asm.obj: family/c62/TaskSupport_asm.s62 makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c62_TaskSupport_asm.obj

timer64_Timer_asm.obj: timers/timer64/Timer_asm.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=timer64_Timer_asm.obj

gptimer_Timer_asm.obj: timers/gptimer/Timer_asm.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=gptimer_Timer_asm.obj

dmtimer_Timer_asm.obj: timers/dmtimer/Timer_asm.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=dmtimer_Timer_asm.obj


BIOS.obj: BIOS.c knl/Clock.c knl/Idle.c knl/Intrinsics.c knl/Swi.c knl/Swi_andn.c knl/Task.c knl/Event.c knl/Semaphore.c knl/Mailbox.c knl/Queue.c heaps/HeapMem.c heaps/HeapBuf.c heaps/HeapNull.c heaps/HeapMultiBuf.c gates/GateHwi.c gates/GateAll.c gates/GateSwi.c gates/GateTask.c gates/GateTest.c gates/GateMutex.c gates/GateMutexPri.c hal/Hwi.c hal/Hwi_stack.c hal/Hwi_startup.c hal/Timer.c hal/TimerNull.c hal/Cache.c hal/CacheNull.c rta/SupportLogger.c utils/Load.c syncs/SyncSem.c syncs/SyncSwi.c syncs/SyncEvent.c xdcruntime/GateThreadSupport.c xdcruntime/GateProcessSupport.c xdcruntime/SemThreadSupport.c xdcruntime/SemProcessSupport.c xdcruntime/ThreadSupport.c xdcruntime/CacheSupport.c io/DEV.c io/GIO.c io/IOM_stub.c misc/Stats.c timers/timer64/Timer.c timers/timer64/TimestampProvider.c timers/dmtimer/Timer.c timers/dmtimer/TimestampProvider.c family/c62/TaskSupport.c family/c62/IntrinsicsSupport.c family/c64p/Hwi.c family/c64p/Hwi_startup.c family/c64p/TimestampProvider.c family/c64p/Exception.c family/c64p/EventCombiner.c family/c64p/Cache.c family/c64p/MemoryProtect.c family/c64p/omap3430/TimerSupport.c family/c64p/omap3430/Wugen.c family/c64p/primus/TimerSupport.c family/c64p/ti81xx/TimerSupport.c family/c674/Power.c makefile
	@-$(call RM, $@)
	@echo cle674 $< ...
	@$(CC) $(BIOS_DEFS) -I "/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/" -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_target_name__=C674 $(BIOS_INC) \
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
	$(BIOS_ROOT)timers/timer64/Timer.c \
	$(BIOS_ROOT)timers/timer64/TimestampProvider.c \
	$(BIOS_ROOT)timers/dmtimer/Timer.c \
	$(BIOS_ROOT)timers/dmtimer/TimestampProvider.c \
	$(BIOS_ROOT)family/c62/TaskSupport.c \
	$(BIOS_ROOT)family/c62/IntrinsicsSupport.c \
	$(BIOS_ROOT)family/c64p/Hwi.c \
	$(BIOS_ROOT)family/c64p/Hwi_startup.c \
	$(BIOS_ROOT)family/c64p/TimestampProvider.c \
	$(BIOS_ROOT)family/c64p/Exception.c \
	$(BIOS_ROOT)family/c64p/EventCombiner.c \
	$(BIOS_ROOT)family/c64p/Cache.c \
	$(BIOS_ROOT)family/c64p/MemoryProtect.c \
	$(BIOS_ROOT)family/c64p/omap3430/TimerSupport.c \
	$(BIOS_ROOT)family/c64p/omap3430/Wugen.c \
	$(BIOS_ROOT)family/c64p/primus/TimerSupport.c \
	$(BIOS_ROOT)family/c64p/ti81xx/TimerSupport.c \
	$(BIOS_ROOT)family/c674/Power.c \

sysbios.lib: BIOS.obj c64p_Hwi_disp_always.obj c64p_Hwi_asm.obj c64p_Hwi_asm_switch.obj c64p_Clobber_asm.obj c64p_Exception_asm.obj c64p_MemoryProtect_asm.obj c62_TaskSupport_asm.obj timer64_Timer_asm.obj gptimer_Timer_asm.obj dmtimer_Timer_asm.obj
	@echo are674 $^ ...
	@-$(call RM, $@)
	@$(AR) $@ $^

clean:
	@-$(call RM, sysbios.lib)
	@-$(call RM, BIOS.obj)
	@-$(call RM, c64p_Hwi_disp_always.obj)
	@-$(call RM, c64p_Hwi_asm.obj)
	@-$(call RM, c64p_Hwi_asm_switch.obj)
	@-$(call RM, c64p_Clobber_asm.obj)
	@-$(call RM, c64p_Exception_asm.obj)
	@-$(call RM, c64p_MemoryProtect_asm.obj)
	@-$(call RM, c62_TaskSupport_asm.obj)
	@-$(call RM, timer64_Timer_asm.obj)
	@-$(call RM, gptimer_Timer_asm.obj)
	@-$(call RM, dmtimer_Timer_asm.obj)

