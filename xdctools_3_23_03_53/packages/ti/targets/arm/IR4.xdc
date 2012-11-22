/* 
 *  Copyright (c) 2008 Texas Instruments and others.
 *  All rights reserved. This program and the accompanying materials
 *  are made available under the terms of the Eclipse Public License v1.0
 *  which accompanies this distribution, and is available at
 *  http://www.eclipse.org/legal/epl-v10.html
 * 
 *  Contributors:
 *      Texas Instruments - initial implementation
 * 
 * */

/*!
 *  ======== IR4.xdc ========
 *  Cortex R4 little endian target
 */
metaonly interface IR4 inherits ti.targets.arm.IArm {
    override readonly config string isa         = "v7R";

    override readonly config xdc.bld.ITarget.Module base = ti.targets.arm.Arm9;

    override config string platform   = "ti.platforms.evmTMS570";

    override readonly config xdc.bld.ITarget2.Command lnk = {
        cmd:  "lnk470",
        opts: "--silicon_version=7R4 --strict_compatibility=on"
    };
}
/*
 *  @(#) ti.targets.arm; 2, 0, 1, 0,348; 4-27-2012 17:07:36; /db/ztree/library/trees/xdctargets/xdctargets-f21x/src/ xlibrary

 */

