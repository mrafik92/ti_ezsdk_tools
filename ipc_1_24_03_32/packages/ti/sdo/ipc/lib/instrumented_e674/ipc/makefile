vpath % /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages/ti/sdo/
vpath %.c /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/

CCOPTS ?= -mv6740 --abi=eabi -q -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110  --program_level_compile -o3 -g --optimize_with_debug

XDC_ROOT  = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/

IPC_ROOT = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages/ti/sdo/

BUILD_DEFS =  -Dti_sdo_ipc_MessageQ_traceFlag__D=TRUE

BIOS_INC  = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages"

IPC_INC    = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages"

IO_INC    = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages"

UTILS_INC    = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages"

CC = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/bin/cl6x -c $(CCOPTS) -I /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/include

ASM = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/bin/cl6x -c $(CCOPTS) -I /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/include

AR = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1/bin/ar6x rq

DEL = rm -f

define RM
	$(if $(wildcard $1),$(DEL) $1,:)
endef

define ASSEMBLE
	@@echo asme674 $< ...
	@$(ASM) $(BUILD_DEFS) -I "/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/" -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_target_name__=C674 $(IPC_INC) $<
endef

all: ipc.lib

gates_GateAAMonitor_asm.obj: ipc/gates/GateAAMonitor_asm.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=gates_GateAAMonitor_asm.obj


Ipc.obj: ipc/Ipc.c ipc/GateMP.c ipc/ListMP.c ipc/SharedRegion.c ipc/MessageQ.c ipc/Notify.c ipc/gates/GatePeterson.c ipc/gates/GateMPSupportNull.c ipc/heaps/HeapBufMP.c ipc/heaps/HeapMemMP.c ipc/heaps/HeapMultiBufMP.c ipc/notifyDrivers/NotifyDriverCirc.c ipc/notifyDrivers/NotifySetupNull.c ipc/notifyDrivers/NotifyDriverShm.c ipc/nsremote/NameServerRemoteNotify.c ipc/nsremote/NameServerMessageQ.c ipc/transports/TransportShm.c ipc/transports/TransportShmCircSetup.c ipc/transports/TransportShmNotifySetup.c ipc/transports/TransportShmCirc.c ipc/transports/TransportShmNotify.c ipc/transports/TransportShmSetup.c ipc/transports/TransportNullSetup.c utils/MultiProc.c utils/List.c utils/NameServerRemoteNull.c utils/NameServer.c io/DriverTable.c io/Stream.c io/drivers/IomAdapter.c io/drivers/Generator.c io/converters/DriverAdapter.c io/converters/Transformer.c io/converters/NullConverter.c ipc/gates/GateHWSpinlock.c ipc/family/da830/NotifySetup.c ipc/family/da830/NotifyCircSetup.c ipc/family/da830/InterruptDsp.c ipc/family/arctic/NotifySetup.c ipc/family/arctic/NotifyCircSetup.c ipc/family/arctic/InterruptDsp.c ipc/family/ti81xx/NotifySetup.c ipc/family/ti81xx/NotifyCircSetup.c ipc/family/ti81xx/InterruptDsp.c ipc/family/ti81xx/NotifyMbxSetup.c ipc/family/ti81xx/NotifyDriverMbx.c ipc/family/c6a8149/NotifySetup.c ipc/family/c6a8149/NotifyCircSetup.c ipc/family/c6a8149/InterruptDsp.c ipc/family/c6a8149/NotifyMbxSetup.c ipc/family/c6a8149/NotifyDriverMbx.c makefile
	@-$(call RM, $@)
	@echo cle674 $< ...
	@$(CC) $(BUILD_DEFS) -I "/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/" -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_target_name__=C674 $(BIOS_INC) $(IO_INC) \
	$(IPC_INC) $(UTILS_INC) \
	$(IPC_ROOT)ipc/Ipc.c \
	$(IPC_ROOT)ipc/GateMP.c \
	$(IPC_ROOT)ipc/ListMP.c \
	$(IPC_ROOT)ipc/SharedRegion.c \
	$(IPC_ROOT)ipc/MessageQ.c \
	$(IPC_ROOT)ipc/Notify.c \
	$(IPC_ROOT)ipc/gates/GatePeterson.c \
	$(IPC_ROOT)ipc/gates/GateMPSupportNull.c \
	$(IPC_ROOT)ipc/heaps/HeapBufMP.c \
	$(IPC_ROOT)ipc/heaps/HeapMemMP.c \
	$(IPC_ROOT)ipc/heaps/HeapMultiBufMP.c \
	$(IPC_ROOT)ipc/notifyDrivers/NotifyDriverCirc.c \
	$(IPC_ROOT)ipc/notifyDrivers/NotifySetupNull.c \
	$(IPC_ROOT)ipc/notifyDrivers/NotifyDriverShm.c \
	$(IPC_ROOT)ipc/nsremote/NameServerRemoteNotify.c \
	$(IPC_ROOT)ipc/nsremote/NameServerMessageQ.c \
	$(IPC_ROOT)ipc/transports/TransportShm.c \
	$(IPC_ROOT)ipc/transports/TransportShmCircSetup.c \
	$(IPC_ROOT)ipc/transports/TransportShmNotifySetup.c \
	$(IPC_ROOT)ipc/transports/TransportShmCirc.c \
	$(IPC_ROOT)ipc/transports/TransportShmNotify.c \
	$(IPC_ROOT)ipc/transports/TransportShmSetup.c \
	$(IPC_ROOT)ipc/transports/TransportNullSetup.c \
	$(IPC_ROOT)utils/MultiProc.c \
	$(IPC_ROOT)utils/List.c \
	$(IPC_ROOT)utils/NameServerRemoteNull.c \
	$(IPC_ROOT)utils/NameServer.c \
	$(IPC_ROOT)io/DriverTable.c \
	$(IPC_ROOT)io/Stream.c \
	$(IPC_ROOT)io/drivers/IomAdapter.c \
	$(IPC_ROOT)io/drivers/Generator.c \
	$(IPC_ROOT)io/converters/DriverAdapter.c \
	$(IPC_ROOT)io/converters/Transformer.c \
	$(IPC_ROOT)io/converters/NullConverter.c \
	$(IPC_ROOT)ipc/gates/GateHWSpinlock.c \
	$(IPC_ROOT)ipc/family/da830/NotifySetup.c \
	$(IPC_ROOT)ipc/family/da830/NotifyCircSetup.c \
	$(IPC_ROOT)ipc/family/da830/InterruptDsp.c \
	$(IPC_ROOT)ipc/family/arctic/NotifySetup.c \
	$(IPC_ROOT)ipc/family/arctic/NotifyCircSetup.c \
	$(IPC_ROOT)ipc/family/arctic/InterruptDsp.c \
	$(IPC_ROOT)ipc/family/ti81xx/NotifySetup.c \
	$(IPC_ROOT)ipc/family/ti81xx/NotifyCircSetup.c \
	$(IPC_ROOT)ipc/family/ti81xx/InterruptDsp.c \
	$(IPC_ROOT)ipc/family/ti81xx/NotifyMbxSetup.c \
	$(IPC_ROOT)ipc/family/ti81xx/NotifyDriverMbx.c \
	$(IPC_ROOT)ipc/family/c6a8149/NotifySetup.c \
	$(IPC_ROOT)ipc/family/c6a8149/NotifyCircSetup.c \
	$(IPC_ROOT)ipc/family/c6a8149/InterruptDsp.c \
	$(IPC_ROOT)ipc/family/c6a8149/NotifyMbxSetup.c \
	$(IPC_ROOT)ipc/family/c6a8149/NotifyDriverMbx.c \

ipc.lib: Ipc.obj gates_GateAAMonitor_asm.obj
	@echo are674 $^ ...
	@-$(call RM, $@)
	@$(AR) $@ $^

clean:
	@-$(call RM, ipc.lib)
	@-$(call RM, Ipc.obj)
	@-$(call RM, gates_GateAAMonitor_asm.obj)
