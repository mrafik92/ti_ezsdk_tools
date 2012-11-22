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
 *  ======== TMS320C5509.xdc ========
 *
 */
package ti.catalog.c5500;

/*!
 *  ======== TMS320C5509 ========
 *  The C5509 device data sheet module.
 *
 *  This module implements the xdc.platform.ICpuDataSheet interface and is 
 *  used by platforms to obtain "data sheet" information about this device.
 */
metaonly module TMS320C5509 inherits ITMS320C55xx
{
instance:
    override config string   cpuCoreRevision = "1.0";

    /*!
     *  ======== memMap ========
     *  The default memory map for this device
     */
    config xdc.platform.IPlatform.Memory memMap[string]  = [
        ["DARAM", {
            comment: "8 blocks of 8K bytes",
            name: "DARAM",
            base: 0x000000,
            len:  0x010000,
            space: "code/data",
            access: "RWX"
        }],
    
        ["SARAM", {
            comment: "24 blocks of 8K bytes",
            name: "SARAM",
            base: 0x10000,
            len:  0x30000,
            space: "code/data",
            access: "RWX"
        }],
        
        ["ROM", {
            comment: "64K bytes One-Wait-State On-Chip ROM",
            name: "ROM",
            base: 0xff0000,
            len:  0x010000,
            space: "code/data",
            access: "RX"
        }],
    ];
};
/*
 *  @(#) ti.catalog.c5500; 1, 0, 0, 0,390; 4-24-2012 14:56:01; /db/ztree/library/trees/platform/platform-n20x/src/
 */

