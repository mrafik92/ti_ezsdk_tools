/*
 *  Copyright (c) 2012 by Texas Instruments and others.
 *  All rights reserved. This program and the accompanying materials
 *  are made available under the terms of the Eclipse Public License v1.0
 *  which accompanies this distribution, and is available at
 *  http://www.eclipse.org/legal/epl-v10.html
 *
 *  Contributors:
 *      Texas Instruments - initial implementation
 *
 * */

/*
 *  ======== Arctic.xdc ========
 *
 */

/*!
 *  ======== Arctic ========
 *  The Arctic device data sheet module.
 *
 *  This module implements the ICpuDataSheet interface and is 
 *  used by platforms to obtain "data sheet" information about this device.
 */
metaonly module Arctic inherits ti.catalog.ICpuDataSheet
{
    config long cacheSizeL1[string] = [
        ["0k",  0x0000],
        ["4k",  0x1000],
        ["8k",  0x2000],
        ["16k", 0x4000],
        ["32k", 0x8000],
    ];

    config long cacheSizeL2[string] = [
        ["0k",   0x00000],
        ["32k",  0x08000],
        ["64k",  0x10000],
        ["128k", 0x20000],
        ["256k", 0x40000],
        ["512k", 0x80000],
    ];

    readonly config ti.catalog.c6000.ICacheInfo.CacheDesc cacheMap[string] =  [
         ['l1PMode',{desc:"L1P Cache",
                     base: 0xE00000,
                     map : [["0k",0x0000],
                            ["4k",0x1000],
                            ["8k",0x2000],
                            ["16k",0x4000],
                            ["32k",0x8000]],
                     defaultValue: "32k",
                     memorySection: "L1PSRAM"}],
     
                 ['l1DMode',{desc:"L1D Cache",
                     base: 0xF00000,
                     map : [["0k",0x0000],
                            ["4k",0x1000],
                            ["8k",0x2000],
                            ["16k",0x4000],
                            ["32k",0x8000]],
                     defaultValue: "32k",
                     memorySection: "L1DSRAM"}],
                 
         ['l2Mode',{desc:"L2 Cache",
                     base: 0x800000,
                     map : [["0k",0x0000],
                            ["32k",0x8000],
                            ["64k",0x10000],
                            ["128k",0x20000],
                            ["256k",0x40000],
                            ["512k",0x80000]],
                     defaultValue: "0k",
                     memorySection: "IRAM"}], 
    ];

instance:

    override config string   cpuCore        = "C674";
    override config string   isa = "674";
    override config string   cpuCoreRevision = "1.0";

    override config int     minProgUnitSize = 1;
    override config int     minDataUnitSize = 1;    
    override config int     dataWordSize    = 4;

    /*!
     *  ======== memMap ========
     *  The default memory map for this device
     */
    config xdc.platform.IPlatform.Memory memMap[string]  = [
        ["IRAM", {
            comment:    "Internal 512KB L2 RAM/cache memory",
            name:       "IRAM",
            base:       0x00800000,
            len:        0x00080000,
            space:      "code/data",
            access:     "RWX"
        }],

        ["L1PSRAM", {
            comment:    "Internal 32KB L1 program/cache memory",
            name:       "L1PSRAM",
            base:       0x00E00000,
            len:        0x00008000,
            space:      "code",
            access:     "RX"
        }],

        ["L1DSRAM", {
            comment:    "Internal 32KB L1 data/cache memory",
            name:       "L1DSRAM",
            base:       0x00F00000,
            len:        0x00008000,
            space:      "data",
            access:     "RW"
        }],

        ["L3MEM", {
            comment:    "1MB L3 Memory",
            name:       "L3MEM",
            base:       0x40300000,
            len:        0x00100000,
            space:      "code/data",
            access:     "RWX"
        }],

        ["DMEM", {
            comment:    "ARP32 Internal data memory",
            name:       "DMEM",
            base:       0x59020000,
            len:        0x8000,
            space:      "data",
            access:     "RW"
        }],
    ];
};
/*
 *  @(#) ti.catalog.c6000; 1, 0, 0, 0,390; 4-24-2012 14:56:03; /db/ztree/library/trees/platform/platform-n20x/src/
 */

