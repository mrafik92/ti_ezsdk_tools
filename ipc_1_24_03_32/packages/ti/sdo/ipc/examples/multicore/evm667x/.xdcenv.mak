#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages
override XDCROOT = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53
override XDCBUILDCFG = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/ipc_1_24_03_32/ipc.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = ti.targets.C28_large="" ti.targets.C28_float="" ti.targets.C64P="" ti.targets.C64P_big_endian="" ti.targets.C64T="" ti.targets.C674="" ti.targets.arm.elf.Arm9="" ti.targets.arm.elf.A8Fnv="" ti.targets.arm.elf.M3="/proj/productization/tools/cgt470/cgt470_4_9_2/" ti.targets.elf.C64P="" ti.targets.elf.C64P_big_endian="" ti.targets.elf.C64T="" ti.targets.elf.C66="" ti.targets.elf.C66_big_endian="" ti.targets.elf.C674="/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/dsp-devkit/cgt6x_7_3_1" ti.targets.msp430.MSP430="" ti.targets.msp430.MSP430X="" ti.targets.msp430.MSP430X_small=""
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = /swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/bios_6_33_05_46/packages;/swcoe/sdk/cm/netra/ti-ezsdk_dm816x-evm_5_05_01_04/component-sources/xdctools_3_23_03_53/packages;../../../../../..
HOSTOS = Linux
endif
