/*
 * sdcard.h
 *
 *  Created on: Mar 21, 2023
 *      Author: Kian
 */

#ifndef SRC_SDCARD_H_
#define SRC_SDCARD_H_

#include <stdio.h>
#include <stdlib.h>
#include "xbasic_types.h"
#include "xil_types.h"
#include "ff.h"
#include "xparameters.h"
#include "xstatus.h"
#include "xil_cache.h"
#include "xil_printf.h"

FATFS fatFs;

int SdInitMount();
int SdEjectUnmount();
int ReadBinFile(char *fileName , u32 bufferAddress);
int WriteBinFile(char *fileName, u32 size , u32 bufferAddress);


#endif /* SRC_SDCARD_H_ */
