#!/bin/sh
#   
#   @file   run_sharedregionapp.sh
#
#   @brief  Script to run the samples
#
#
#   ============================================================================
#
#   Copyright (c) 2008-2012, Texas Instruments Incorporated
#
#   Redistribution and use in source and binary forms, with or without
#   modification, are permitted provided that the following conditions
#   are met:
#   
#   *  Redistributions of source code must retain the above copyright
#      notice, this list of conditions and the following disclaimer.
#   
#   *  Redistributions in binary form must reproduce the above copyright
#      notice, this list of conditions and the following disclaimer in the
#      documentation and/or other materials provided with the distribution.
#   
#   *  Neither the name of Texas Instruments Incorporated nor the names of
#      its contributors may be used to endorse or promote products derived
#      from this software without specific prior written permission.
#   
#   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
#   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
#   THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
#   PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
#   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
#   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
#   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
#   OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
#   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
#   OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
#   EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#   Contact information for paper mail:
#   Texas Instruments
#   Post Office Box 655303
#   Dallas, Texas 75265
#   Contact information: 
#   http://www-k.ext.ti.com/sc/technical-support/product-information-centers.htm?
#   DCMP=TIHomeTracking&HQS=Other+OT+home_d_contact
#   ============================================================================
#   
g="_g"

while [[ $# -gt 0 ]]; do
    sc=1
    if [[ "$1" == "-p" && "$2" == "release" ]]; then
        g=""
        sc=2
    else
        echo "unknown option: $1"
        exit 1
    fi
    shift $sc
done

set -x

$PWD/slaveloader$g startup DSP $PWD/sharedregion_ti81xx_dsp.xe674
$PWD/slaveloader$g startup VIDEO-M3 $PWD/sharedregion_ti81xx_videom3.xem3
$PWD/slaveloader$g startup VPSS-M3 $PWD/sharedregion_ti81xx_vpssm3.xem3
$PWD/sharedRegion$g
$PWD/slaveloader$g shutdown VPSS-M3
$PWD/slaveloader$g shutdown VIDEO-M3
$PWD/slaveloader$g shutdown DSP

$PWD/sharedRegion$g 0x8FD00000 1 DSP $PWD/sharedregion_ti81xx_dsp.xe674
$PWD/sharedRegion$g 0x8FD00000 1 VIDEO-M3 $PWD/sharedregion_ti81xx_videom3.xem3
$PWD/sharedRegion$g 0x8FD00000 2 VIDEO-M3 $PWD/sharedregion_ti81xx_videom3.xem3 VPSS-M3 $PWD/sharedregion_ti81xx_vpssm3.xem3
$PWD/sharedRegion$g 0x8FD00000 2 DSP $PWD/sharedregion_ti81xx_dsp.xe674 VIDEO-M3 $PWD/sharedregion_ti81xx_videom3.xem3
$PWD/sharedRegion$g 0x8FD00000 3 DSP $PWD/sharedregion_ti81xx_dsp.xe674 VIDEO-M3 $PWD/sharedregion_ti81xx_videom3.xem3 VPSS-M3 $PWD/sharedregion_ti81xx_vpssm3.xem3
