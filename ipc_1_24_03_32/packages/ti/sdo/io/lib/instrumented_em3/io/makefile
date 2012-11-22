vpath % /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages/ti/sdo/
vpath %.c /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/

CCOPTS ?= --endian=little -mv7M3 --abi=eabi -q -ms --opt_for_speed=2  --program_level_compile -o3 -g --optimize_with_debug

XDC_ROOT  = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/

IPC_ROOT = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages/ti/sdo/

BUILD_DEFS = 

BIOS_INC  = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages"

SYSBIOS_INC  = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages"

IPC_INC    = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages"

IO_INC    = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages"

UTILS_INC    = -I"/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/packages"

CC = /proj/productization/tools/cgt470/cgt470_4_9_2//bin/cl470 -c $(CCOPTS) -I /proj/productization/tools/cgt470/cgt470_4_9_2//include

ASM = /proj/productization/tools/cgt470/cgt470_4_9_2//bin/cl470 -c $(CCOPTS) -I /proj/productization/tools/cgt470/cgt470_4_9_2//include

AR = /proj/productization/tools/cgt470/cgt470_4_9_2//bin/ar470 rq

DEL = rm -f

define RM
	$(if $(wildcard $1),$(DEL) $1,:)
endef

define ASSEMBLE
	@echo asmem3 $< ...
	@$(ASM) $(BUILD_DEFS) -I "/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/" -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_target_name__=M3 $(IPC_INC) $<
endef


all: io.lib


IO.obj: io/IO.c io/DriverTable.c io/Stream.c io/drivers/IomAdapter.c io/drivers/Generator.c io/converters/DriverAdapter.c io/converters/Transformer.c io/converters/NullConverter.c utils/MultiProc.c utils/List.c utils/NameServerRemoteNull.c utils/NameServer.c makefile
	@-$(call RM, $@)
	@echo clem3 $< ...
	@$(CC) $(BUILD_DEFS) -I "/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages/" -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_target_name__=M3 $(SYSBIOS_INC) $(BIOS_INC) $(IO_INC) \
	$(IPC_INC) $(UTILS_INC) \
	$(IPC_ROOT)io/IO.c \
	$(IPC_ROOT)io/DriverTable.c \
	$(IPC_ROOT)io/Stream.c \
	$(IPC_ROOT)io/drivers/IomAdapter.c \
	$(IPC_ROOT)io/drivers/Generator.c \
	$(IPC_ROOT)io/converters/DriverAdapter.c \
	$(IPC_ROOT)io/converters/Transformer.c \
	$(IPC_ROOT)io/converters/NullConverter.c \
	$(IPC_ROOT)utils/MultiProc.c \
	$(IPC_ROOT)utils/List.c \
	$(IPC_ROOT)utils/NameServerRemoteNull.c \
	$(IPC_ROOT)utils/NameServer.c \

io.lib: IO.obj 
	@echo arem3 $^ ...
	@-$(call RM, $@)
	@$(AR) $@ $^

clean:
	@-$(call RM, io.lib)
	@-$(call RM, IO.obj)
