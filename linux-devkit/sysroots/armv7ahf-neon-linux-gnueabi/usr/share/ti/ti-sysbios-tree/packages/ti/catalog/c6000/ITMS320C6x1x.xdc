/*
 * Copyright (c) 2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ======== ITMS320C6x1x.xdc ========
 *
 */
package ti.catalog.c6000;

/*!
 *  ======== ITMS320C6x1x ========
 *  An interface implemented by all TMS320C6x1x devices.
 *
 *  This interface is defined to factor common data about this family into
 *  a single place; all TMS320C6x1x devices extend this interface.
 */
metaonly interface ITMS320C6x1x inherits ti.catalog.ICpuDataSheet
{
    config long cacheSize[string] = [
    ["SRAM",        0x0000],
        ["1-way cache", 0x4000],
        ["2-way cache", 0x8000],
        ["3-way cache", 0xc000],
        ["4-way cache", 0x10000],
        ["0k",  0x0000],
        ["16k", 0x4000],
        ["32k", 0x8000],
        ["48k", 0xc000],
        ["64k", 0x10000],
    ];

    readonly config ti.catalog.c6000.ICacheInfo.CacheDesc cacheMap[string] =  [
         ['l2Mode',{desc:"L2 Cache",
                     map : [["SRAM",0x0000],
                            ["1-way cache",0x4000],
                            ["2-way cache",0x8000],
                            ["3-way cache",0xc000],
                            ["4-way cache",0x10000]],
                     defaultValue: "4-way cache",
                     memorySection: "IRAM"}]
    ];

instance:
    override config string   cpuCoreRevision = "1.0";

    override config int     minProgUnitSize = 1;
    override config int     minDataUnitSize = 1;
    override config int     dataWordSize    = 4;

    /*!
     *  ======== memMap ========
     *  The default memory map for this device
     */
    config xdc.platform.IPlatform.Memory memMap[string];
}