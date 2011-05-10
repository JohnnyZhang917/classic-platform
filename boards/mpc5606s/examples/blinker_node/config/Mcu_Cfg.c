/*
* Configuration of module: Mcu (Mcu_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       2.0.3
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Mon May 09 21:40:27 CEST 2011
*/


#ifndef MCU_CFG_C_
#define MCU_CFG_C_

#include "Mcu.h"

Mcu_RamSectorSettingConfigType Mcu_RamSectorSettingConfigData[] = {
  {
	.McuRamDefaultValue = 0,
	.McuRamSectionBaseAddress = (uint32) 0,
	.McuRamSectionSize = (uint32) 0xff,
  },
};

Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] =
{
  {
    .McuClockReferencePointFrequency = 8000000UL,
    .Pll1    = 0,
    .Pll2    = 64,
    .Pll3    = 2,
  },
};


const Mcu_ConfigType McuConfigData[] = {
  {
	.McuClockSrcFailureNotification = 0,
	.McuRamSectors = 1,
	.McuClockSettings = 1,
	.McuDefaultClockSettings = 0,
	.McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],
	.McuRamSectorSettingConfig = &Mcu_RamSectorSettingConfigData[0],
  }
};

#endif /*MCU_CFG_C_*/
