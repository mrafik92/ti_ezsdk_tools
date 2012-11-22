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
 *  ======== TNETV107X.xdc ========
 *
 */
package ti.catalog.c6000;

/*!
 *  ======== TNETV107X ========
 */
metaonly module TNETV107X inherits ti.catalog.ICpuDataSheet
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
        ["128k", 0x20000]
    ];

   readonly config ti.catalog.c6000.ICacheInfo.CacheDesc cacheMap[string] =  [
        ['l1PMode',
             {desc: "L1P Cache",
              base: 0x11E08000,
              map: [["0k", 0x0000],
                    ["4k", 0x1000],
                    ["8k", 0x2000],
                    ["16k", 0x4000],
                    ["32k", 0x8000]],
              defaultValue: "32k",
              memorySection: "L1PSRAM"}
        ],
         
        ['l1DMode',
            {desc: "L1D Cache",
             base: 0x11F04000,
             map: [["0k", 0x0000],
                   ["4k", 0x1000],
                   ["8k", 0x2000],
                   ["16k", 0x4000],
                   ["32k", 0x8000]],
             defaultValue: "32k",
             memorySection: "L1DSRAM"}
        ],
                     
        ['l2Mode',
            {desc: "L2 Cache",
             base: 0x11800000,
             map: [["0k", 0x0000],
                   ["32k", 0x8000],
                   ["64k", 0x10000],
                   ["128k", 0x20000]],
             defaultValue: "0k",
             memorySection: "L2RAM"}
        ], 

    ];    

instance:
    override config int     minProgUnitSize = 1;
    override config int     minDataUnitSize = 1;    
    override config int     dataWordSize    = 4;

    override config string   cpuCore        = "64x+";
    override config string   isa = "64P";

    config xdc.platform.IPlatform.Memory memMap[string]  = [
        ["L2RAM", {
            comment:    "Internal 128KB L2 memory",
            name:       "L2RAM",
            base:       0x11800000,
            len:        0x00020000,
            space:      "code/data",
            access:     "RWX"
        }],
        
        ["L1PSRAM", {
            comment:    "Internal 32KB L1 program memory",
            name:       "L1PSRAM",
            base:       0x11E08000,
            len:        0x00008000,
            space:      "code",
            access:     "RWX"
        }],

        ["L1DSRAM", {
            comment:    "Internal 80KB L1 data memory",
            name:       "L1DSRAM",
            base:       0x11F04000,
            len:        0x00014000,
            space:      "data",
            access:     "RW"
        }],
    ];
};
/*
 *  @(#) ti.catalog.c6000; 1, 0, 0, 0,390; 4-24-2012 14:56:08; /db/ztree/library/trees/platform/platform-n20x/src/
 */

