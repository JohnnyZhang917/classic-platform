/*
* Configuration of module: Rte (Rte_Logger.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC5567
*
* Module vendor:           ArcCore
* Generator version:       0.0.13
*
* Generated by Arctic Studio (http://arccore.com) 
*/

/* Rte_Logger.c */
#include <string.h>
#include "Os.h"
#include "Rte_Logger.h"
#include "Rte_Data.h"
#include "Com.h"

extern Rte_CDS_Logger Rte_Inst_Logger;

UInt16 Rte_IRead_LoggerRunnable_Result_result() {
	return Rte_Inst_Logger.LoggerRunnable_Result_result->value;
}

