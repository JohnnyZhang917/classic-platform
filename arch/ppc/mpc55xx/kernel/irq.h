/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/








/*
 * irq.h
 *
 * Defines some additional types used for mpc55xx
 *
 *  Created on: Jul 13, 2009
 *      Author: mahi
 */

#ifndef IRQ_H
#define IRQ_H


typedef enum
{
  /* Software interrupts. */
  INTC_SSCIR0_CLR0,		// 0
  INTC_SSCIR0_CLR1,		// 1
  INTC_SSCIR0_CLR2,		// 2
  INTC_SSCIR0_CLR3,		// 3
  INTC_SSCIR0_CLR4,		// 4
  INTC_SSCIR0_CLR5,		// 5
  INTC_SSCIR0_CLR6,		// 6
  INTC_SSCIR0_CLR7,		// 7
  MCM_MSWTIR_SWTIC,		// 8
  MCM_ESR_COMB,			// 9
  /* eDMA */
  EDMA_ERRL_ERR31_0,	// 10
  EDMA_INTL_INT0,		// 11
  EDMA_INTL_INT1,
  EDMA_INTL_INT2,
  EDMA_INTL_INT3,
  EDMA_INTL_INT4,
  EDMA_INTL_INT5,
  EDMA_INTL_INT6,
  EDMA_INTL_INT7,
  EDMA_INTL_INT8,
  EDMA_INTL_INT9,
  EDMA_INTL_INT10,
  EDMA_INTL_INT11,
  EDMA_INTL_INT12,
  EDMA_INTL_INT13,
  EDMA_INTL_INT14,
  EDMA_INTL_INT15,		// 26
#if defined(CFG_MPC5554)||defined(CFG_MPC5567)||defined(CFG_MPC5633)
  EDMA_INTL_INT16,
  EDMA_INTL_INT17,
  EDMA_INTL_INT18,
  EDMA_INTL_INT19,		// 30
  EDMA_INTL_INT20,
  EDMA_INTL_INT21,
  EDMA_INTL_INT22,
  EDMA_INTL_INT23,
  EDMA_INTL_INT24,
  EDMA_INTL_INT25,
  EDMA_INTL_INT26,
  EDMA_INTL_INT27,
  EDMA_INTL_INT28,
  EDMA_INTL_INT29,
  EDMA_INTL_INT30,
  EDMA_INTL_INT31,		// 42
#else
  RESERVED0,
  RESERVED1,
  RESERVED2,
  RESERVED3,			// 30
  RESERVED4,
  RESERVED5,
  RESERVED6,
  RESERVED7,
  RESERVED8,
  RESERVED9,
  RESERVED10,
  RESERVED11,
  RESERVED12,
  RESERVED13,
  RESERVED14,
  RESERVED15,			// 42
#endif

#if defined(CFG_MPC5516)
  /* Semahpore's */
  SEMAPHORE_INT0,		// 43
  SEMAPHORE_INT1,
  RESERVED16,
  CRP_INTERRUPT,
  LVI_INTERRUPT,
  IIC_A_IBSR_IBIF,
  RESERVED17,
#endif
  PLL_SYNSR_LOCF,		// 54-43,  16-50
  PLL_SYNSR_LOLF,		// 54-44,  16-51
  SIU_OSR_OVER,
  /* External interrupts */
  SIU_EISR_EIF0,		// 53
  SIU_EISR_EIF1,
  SIU_EISR_EIF2,
  SIU_EISR_EIF3,
  SIU_EISR_EIF15_4,		// 54-50, 57

  /* eMIOS */
  EMISOS200_FLAG_F0,	// 58
  EMISOS200_FLAG_F1,
  EMISOS200_FLAG_F2,
  EMISOS200_FLAG_F3,
  EMISOS200_FLAG_F4,
  EMISOS200_FLAG_F5,
  EMISOS200_FLAG_F6,
  EMISOS200_FLAG_F7,
  EMISOS200_FLAG_F8,
  EMISOS200_FLAG_F9,
  EMISOS200_FLAG_F10,
  EMISOS200_FLAG_F11,
  EMISOS200_FLAG_F12,
  EMISOS200_FLAG_F13,
  EMISOS200_FLAG_F14,
  EMISOS200_FLAG_F15,	// 73
#if defined(CFG_MPC5516)
  EMISOS200_FLAG_F16,
  EMISOS200_FLAG_F17,
  EMISOS200_FLAG_F18,
  EMISOS200_FLAG_F19,
  EMISOS200_FLAG_F20,
  EMISOS200_FLAG_F21,
  EMISOS200_FLAG_F22,
  EMISOS200_FLAG_F23,	// 16-81
#elif defined(CFG_MPC5554)||defined(CFG_MPC5567)||defined(CFG_MPC5633)
  ETPU_GLOBAL,		// 54-67
  ETPU_A_CIS_0,
  ETPU_A_CIS_1,
  ETPU_A_CIS_2,		// 54-70
  ETPU_A_CIS_3,
  ETPU_A_CIS_4,
  ETPU_A_CIS_5,
  ETPU_A_CIS_6,
  ETPU_A_CIS_7,
  ETPU_A_CIS_8,
  ETPU_A_CIS_9,
  ETPU_A_CIS_10,
  ETPU_A_CIS_11,
  ETPU_A_CIS_12,	// 54-80
  ETPU_A_CIS_13,
  ETPU_A_CIS_14,
  ETPU_A_CIS_15,
  ETPU_A_CIS_16,
  ETPU_A_CIS_17,
  ETPU_A_CIS_18,
  ETPU_A_CIS_19,
  ETPU_A_CIS_20,
  ETPU_A_CIS_21,
  ETPU_A_CIS_22,	// 54-90
  ETPU_A_CIS_23,
  ETPU_A_CIS_24,
  ETPU_A_CIS_25,
  ETPU_A_CIS_26,
  ETPU_A_CIS_27,
  ETPU_A_CIS_28,
  ETPU_A_CIS_29,
  ETPU_A_CIS_30,
  ETPU_A_CIS_31,	// 99
#endif

  /* eQADC */
  EQADC_FISR_OVER,		// 54-100, 16-82
  EQADC_FISR0_NCF0,
  EQADC_FISR0_PF0,
  EQADC_FISR0_EOQF0,
  EQADC_FISR0_CFFF0,
  EQADC_FISR0_RFDF0,
  EQADC_FISR1_NCF1,
  EQADC_FISR1_PF1,
  EQADC_FISR1_EOQF1,
  EQADC_FISR1_CFFF1,
  EQADC_FISR1_RFDF1,	// 110, 92
  EQADC_FISR2_NCF2,
  EQADC_FISR2_PF2,
  EQADC_FISR2_EOQF2,
  EQADC_FISR2_CFFF2,
  EQADC_FISR2_RFDF2,
  EQADC_FISR3_NCF3,
  EQADC_FISR3_PF3,
  EQADC_FISR3_EOQF3,
  EQADC_FISR3_CFFF3,
  EQADC_FISR3_RFDF3,	// 120, 102
  EQADC_FISR4_NCF4,
  EQADC_FISR4_PF4,
  EQADC_FISR4_EOQF4,
  EQADC_FISR4_CFFF4,
  EQADC_FISR4_RFDF4,
  EQADC_FISR5_NCF5,
  EQADC_FISR5_PF5,
  EQADC_FISR5_EOQF5,
  EQADC_FISR5_CFFF5,
  EQADC_FISR5_RFDF5,	// 130, 112

#if defined(CFG_MPC5516)
  /* SCI */
  SCI_A_COMB,		// 16-113
  SCI_B_COMB,
  SCI_C_COMB,
  SCI_D_COMB,
  /* DSPI A,B */
  DSPI_A_ISR_OVER,
  DSPI_A_ISR_EOQF,
  DSPI_A_ISR_TFFF,
  DSPI_A_ISR_TCF,
  DSPI_A_ISR_RFDF,
  DSPI_B_ISR_OVER,	// 16-122
  DSPI_B_ISR_EOQF,
  DSPI_B_ISR_TFFF,
  DSPI_B_ISR_TCF,
  DSPI_B_ISR_RFDF,
#elif defined(CFG_MPC5554)||defined(CFG_MPC5567)||defined(CFG_MPC5633)
  DSPI_B_COMB,		// 54-131
  DSPI_B_ISR_EOQF,
  DSPI_B_ISR_TFFF,
  DSPI_B_ISR_TCF,
  DSPI_B_ISR_RFDF,	// 54-135
  DSPI_C_COMB,
  DSPI_C_ISR_EOQF,
  DSPI_C_ISR_TFFF,
  DSPI_C_ISR_TCF,
  DSPI_C_ISR_RFDF,	// 54-140
  DSPI_D_COMB,
  DSPI_D_ISR_EOQF,
  DSPI_D_ISR_TFFF,
  DSPI_D_ISR_TCF,
  DSPI_D_ISR_RFDF,	// 54-145

  ESCI_A_COMB0,
  RESERVED0,
  RESERVED1,
  ESCI_A_COMB1,
  RESERVED2,
  RESERVED3,		// 54-151
#endif

  /* FlexCAN A */

  FLEXCAN_A_ESR_BOFF_INT, // 54-152, 16-127
  FLEXCAN_A_ESR_ERR_INT,
  RESERVED18,
  FLEXCAN_A_IFLAG1_BUF0I,
  FLEXCAN_A_IFLAG1_BUF1I,
  FLEXCAN_A_IFLAG1_BUF2I,
  FLEXCAN_A_IFLAG1_BUF3I,
  FLEXCAN_A_IFLAG1_BUF4I,
  FLEXCAN_A_IFLAG1_BUF5I,
  FLEXCAN_A_IFLAG1_BUF6I,
  FLEXCAN_A_IFLAG1_BUF7I,
  FLEXCAN_A_IFLAG1_BUF8I,
  FLEXCAN_A_IFLAG1_BUF9I,
  FLEXCAN_A_IFLAG1_BUF10I,
  FLEXCAN_A_IFLAG1_BUF11I,
  FLEXCAN_A_IFLAG1_BUF12I,
  FLEXCAN_A_IFLAG1_BUF13I,
  FLEXCAN_A_IFLAG1_BUF14I,
  FLEXCAN_A_IFLAG1_BUF15I,
  FLEXCAN_A_IFLAG1_BUF31_16I,
  FLEXCAN_A_IFLAG1_BUF63_32I,

#if defined(CFG_MPC5516)
  /* Periodic interrupt timer */
  PIT_PITFLG_RTIF,
  PIT_PITFLG_PIT1,
  PIT_PITFLG_PIT2,
  PIT_PITFLG_PIT3,
  PIT_PITFLG_PIT4,
  PIT_PITFLG_PIT5,
  PIT_PITFLG_PIT6,
  PIT_PITFLG_PIT7,
  PIT_PITFLG_PIT8,

  /* FlexCAN B */
  FLEXCAN_B_ESR_BOFF_INT,
  FLEXCAN_B_ESR_ERR_INT,
  RESERVED19,
  FLEXCAN_B_IFLAG1_BUF0I,
  FLEXCAN_B_IFLAG1_BUF1I,
  FLEXCAN_B_IFLAG1_BUF2I,
  FLEXCAN_B_IFLAG1_BUF3I,
  FLEXCAN_B_IFLAG1_BUF4I,
  FLEXCAN_B_IFLAG1_BUF5I,
  FLEXCAN_B_IFLAG1_BUF6I,
  FLEXCAN_B_IFLAG1_BUF7I,
  FLEXCAN_B_IFLAG1_BUF8I,
  FLEXCAN_B_IFLAG1_BUF9I,
  FLEXCAN_B_IFLAG1_BUF10I,
  FLEXCAN_B_IFLAG1_BUF11I,
  FLEXCAN_B_IFLAG1_BUF12I,
  FLEXCAN_B_IFLAG1_BUF13I,
  FLEXCAN_B_IFLAG1_BUF14I,
  FLEXCAN_B_IFLAG1_BUF15I,
  FLEXCAN_B_IFLAG1_BUF31_16I,
  FLEXCAN_B_IFLAG1_BUF63_32I,
  /* FlexCAN C */
  FLEXCAN_C_ESR_BOFF_INT,
  FLEXCAN_C_ESR_ERR_INT,
  RESERVED20,
  FLEXCAN_C_IFLAG1_BUF0I,
  FLEXCAN_C_IFLAG1_BUF1I,
  FLEXCAN_C_IFLAG1_BUF2I,
  FLEXCAN_C_IFLAG1_BUF3I,
  FLEXCAN_C_IFLAG1_BUF4I,
  FLEXCAN_C_IFLAG1_BUF5I,
  FLEXCAN_C_IFLAG1_BUF6I,
  FLEXCAN_C_IFLAG1_BUF7I,
  FLEXCAN_C_IFLAG1_BUF8I,
  FLEXCAN_C_IFLAG1_BUF9I,
  FLEXCAN_C_IFLAG1_BUF10I,
  FLEXCAN_C_IFLAG1_BUF11I,
  FLEXCAN_C_IFLAG1_BUF12I,
  FLEXCAN_C_IFLAG1_BUF13I,
  FLEXCAN_C_IFLAG1_BUF14I,
  FLEXCAN_C_IFLAG1_BUF15I,
  FLEXCAN_C_IFLAG1_BUF31_16I,
  FLEXCAN_C_IFLAG1_BUF63_32I,
  /* FlexCAN D */
  FLEXCAN_D_ESR_BOFF_INT,
  FLEXCAN_D_ESR_ERR_INT,
  RESERVED21,
  FLEXCAN_D_IFLAG1_BUF0I,
  FLEXCAN_D_IFLAG1_BUF1I,
  FLEXCAN_D_IFLAG1_BUF2I,
  FLEXCAN_D_IFLAG1_BUF3I,
  FLEXCAN_D_IFLAG1_BUF4I,
  FLEXCAN_D_IFLAG1_BUF5I,
  FLEXCAN_D_IFLAG1_BUF6I,
  FLEXCAN_D_IFLAG1_BUF7I,
  FLEXCAN_D_IFLAG1_BUF8I,
  FLEXCAN_D_IFLAG1_BUF9I,
  FLEXCAN_D_IFLAG1_BUF10I,
  FLEXCAN_D_IFLAG1_BUF11I,
  FLEXCAN_D_IFLAG1_BUF12I,
  FLEXCAN_D_IFLAG1_BUF13I,
  FLEXCAN_D_IFLAG1_BUF14I,
  FLEXCAN_D_IFLAG1_BUF15I,
  FLEXCAN_D_IFLAG1_BUF31_16I,
  FLEXCAN_D_IFLAG1_BUF63_32I,
  /* FlexCAN E */
  FLEXCAN_E_ESR_BOFF_INT,
  FLEXCAN_E_ESR_ERR_INT,
  RESERVED22,
  FLEXCAN_E_IFLAG1_BUF0I,
  FLEXCAN_E_IFLAG1_BUF1I,
  FLEXCAN_E_IFLAG1_BUF2I,
  FLEXCAN_E_IFLAG1_BUF3I,
  FLEXCAN_E_IFLAG1_BUF4I,
  FLEXCAN_E_IFLAG1_BUF5I,
  FLEXCAN_E_IFLAG1_BUF6I,
  FLEXCAN_E_IFLAG1_BUF7I,
  FLEXCAN_E_IFLAG1_BUF8I,
  FLEXCAN_E_IFLAG1_BUF9I,
  FLEXCAN_E_IFLAG1_BUF10I,
  FLEXCAN_E_IFLAG1_BUF11I,
  FLEXCAN_E_IFLAG1_BUF12I,
  FLEXCAN_E_IFLAG1_BUF13I,
  FLEXCAN_E_IFLAG1_BUF14I,
  FLEXCAN_E_IFLAG1_BUF15I,
  FLEXCAN_E_IFLAG1_BUF31_16I,
  FLEXCAN_E_IFLAG1_BUF63_32I,
  /* FlexCAN F */
  FLEXCAN_F_ESR_BOFF_INT,
  FLEXCAN_F_ESR_ERR_INT,
  RESERVED23,
  FLEXCAN_F_IFLAG1_BUF0I,
  FLEXCAN_F_IFLAG1_BUF1I,
  FLEXCAN_F_IFLAG1_BUF2I,
  FLEXCAN_F_IFLAG1_BUF3I,
  FLEXCAN_F_IFLAG1_BUF4I,
  FLEXCAN_F_IFLAG1_BUF5I,
  FLEXCAN_F_IFLAG1_BUF6I,
  FLEXCAN_F_IFLAG1_BUF7I,
  FLEXCAN_F_IFLAG1_BUF8I,
  FLEXCAN_F_IFLAG1_BUF9I,
  FLEXCAN_F_IFLAG1_BUF10I,
  FLEXCAN_F_IFLAG1_BUF11I,
  FLEXCAN_F_IFLAG1_BUF12I,
  FLEXCAN_F_IFLAG1_BUF13I,
  FLEXCAN_F_IFLAG1_BUF14I,
  FLEXCAN_F_IFLAG1_BUF15I,
  FLEXCAN_F_IFLAG1_BUF31_16I,
  FLEXCAN_F_IFLAG1_BUF63_32I,
  RESERVED24,
  RESERVED25,
  RESERVED26,
  RESERVED27,
  RESERVED28,
  RESERVED29,
  RESERVED30,
  RESERVED31,
  /* SCI */
  SCI_E_COMB,
  SCI_F_COMB,
  SCI_G_COMB,
  SCI_H_COMB,
  /* DSPI */
  DSPI_C_ISR_OVER,
  DSPI_C_ISR_EOQF,
  DSPI_C_ISR_TFFF,
  DSPI_C_ISR_TCF,
  DSPI_C_ISR_RFDF,
  DSPI_D_ISR_OVER,
  DSPI_D_ISR_EOQF,
  DSPI_D_ISR_TFFF,
  DSPI_D_ISR_TCF,
  DSPI_D_ISR_RFDF,
  /* Flexray */
  FLEXRAY_GLOB,
  FLEXRAY_PRIF,
  FLEXRAY_CHIF,
  FLEXRAY_WUP_IF,
  FLEXRAY_FBNE_F,
  FLEXRAY_FANE_F,
  FLEXRAY_RBIF,
  FLEXRAY_TBIF,
  RESERVED32,
  MLB_SERVICE_REQUEST,
  INTC_NUMBER_OF_INTERRUPTS,
  /* End of INTC interrupts. The vectors below are used to handle exceptions. */
  RESERVED_SPACE_BEFORE_EXCEPTIONS1,
  RESERVED_SPACE_BEFORE_EXCEPTIONS2,
  RESERVED_SPACE_BEFORE_EXCEPTIONS3,
  RESERVED_SPACE_BEFORE_EXCEPTIONS4,
  RESERVED_SPACE_BEFORE_EXCEPTIONS5,
  RESERVED_SPACE_BEFORE_EXCEPTIONS6,
  RESERVED_SPACE_BEFORE_EXCEPTIONS7,
  RESERVED_SPACE_BEFORE_EXCEPTIONS8,
  RESERVED_SPACE_BEFORE_EXCEPTIONS9,
  RESERVED_SPACE_BEFORE_EXCEPTIONS10,
  RESERVED_SPACE_BEFORE_EXCEPTIONS11,
  RESERVED_SPACE_BEFORE_EXCEPTIONS12,
  RESERVED_SPACE_BEFORE_EXCEPTIONS13,
  RESERVED_SPACE_BEFORE_EXCEPTIONS14,
  RESERVED_SPACE_BEFORE_EXCEPTIONS15,
  RESERVED_SPACE_BEFORE_EXCEPTIONS16,
  RESERVED_SPACE_BEFORE_EXCEPTIONS17,
  RESERVED_SPACE_BEFORE_EXCEPTIONS18,
  RESERVED_SPACE_BEFORE_EXCEPTIONS19,
  RESERVED_SPACE_BEFORE_EXCEPTIONS20,
  RESERVED_SPACE_BEFORE_EXCEPTIONS21,
  RESERVED_SPACE_BEFORE_EXCEPTIONS22,
  RESERVED_SPACE_BEFORE_EXCEPTIONS23,
  RESERVED_SPACE_BEFORE_EXCEPTIONS24,
  RESERVED_SPACE_BEFORE_EXCEPTIONS25,
#endif

#if defined(CFG_MPC5554)||defined(CFG_MPC5567)||defined(CFG_MPC5633)
  /* FlexCAN C */
  FLEXCAN_C_ESR_BOFF_INT = 173,
  FLEXCAN_C_ESR_ERR_INT,
  RESERVED20,
  FLEXCAN_C_IFLAG1_BUF0I,
  FLEXCAN_C_IFLAG1_BUF1I,
  FLEXCAN_C_IFLAG1_BUF2I,
  FLEXCAN_C_IFLAG1_BUF3I,
  FLEXCAN_C_IFLAG1_BUF4I,
  FLEXCAN_C_IFLAG1_BUF5I,
  FLEXCAN_C_IFLAG1_BUF6I,
  FLEXCAN_C_IFLAG1_BUF7I,
  FLEXCAN_C_IFLAG1_BUF8I,
  FLEXCAN_C_IFLAG1_BUF9I,
  FLEXCAN_C_IFLAG1_BUF10I,
  FLEXCAN_C_IFLAG1_BUF11I,
  FLEXCAN_C_IFLAG1_BUF12I,
  FLEXCAN_C_IFLAG1_BUF13I,
  FLEXCAN_C_IFLAG1_BUF14I,
  FLEXCAN_C_IFLAG1_BUF15I,
  FLEXCAN_C_IFLAG1_BUF31_16I,
  FLEXCAN_C_IFLAG1_BUF63_32I,

  // ....

  // 275
  DSPI_A_COMB = 275,		// 54-131
  DSPI_A_ISR_EOQF,
  DSPI_A_ISR_TFFF,
  DSPI_A_ISR_TCF,
  DSPI_A_ISR_RFDF,	// 54-135

  /* FlexCAN B */
  FLEXCAN_B_ESR_BOFF_INT = 280,
  FLEXCAN_B_ESR_ERR_INT,
  RESERVED21,
  FLEXCAN_B_IFLAG1_BUF0I,
  FLEXCAN_B_IFLAG1_BUF1I,
  FLEXCAN_B_IFLAG1_BUF2I,
  FLEXCAN_B_IFLAG1_BUF3I,
  FLEXCAN_B_IFLAG1_BUF4I,
  FLEXCAN_B_IFLAG1_BUF5I,
  FLEXCAN_B_IFLAG1_BUF6I,
  FLEXCAN_B_IFLAG1_BUF7I,
  FLEXCAN_B_IFLAG1_BUF8I,
  FLEXCAN_B_IFLAG1_BUF9I,
  FLEXCAN_B_IFLAG1_BUF10I,
  FLEXCAN_B_IFLAG1_BUF11I,
  FLEXCAN_B_IFLAG1_BUF12I,
  FLEXCAN_B_IFLAG1_BUF13I,
  FLEXCAN_B_IFLAG1_BUF14I,
  FLEXCAN_B_IFLAG1_BUF15I,
  FLEXCAN_B_IFLAG1_BUF31_16I,
  FLEXCAN_B_IFLAG1_BUF63_32I,

  /* FlexCAN D */
  FLEXCAN_D_ESR_BOFF_INT = 308,
  FLEXCAN_D_ESR_ERR_INT,
  RESERVED22,
  FLEXCAN_D_IFLAG1_BUF0I,
  FLEXCAN_D_IFLAG1_BUF1I,
  FLEXCAN_D_IFLAG1_BUF2I,
  FLEXCAN_D_IFLAG1_BUF3I,
  FLEXCAN_D_IFLAG1_BUF4I,
  FLEXCAN_D_IFLAG1_BUF5I,
  FLEXCAN_D_IFLAG1_BUF6I,
  FLEXCAN_D_IFLAG1_BUF7I,
  FLEXCAN_D_IFLAG1_BUF8I,
  FLEXCAN_D_IFLAG1_BUF9I,
  FLEXCAN_D_IFLAG1_BUF10I,
  FLEXCAN_D_IFLAG1_BUF11I,
  FLEXCAN_D_IFLAG1_BUF12I,
  FLEXCAN_D_IFLAG1_BUF13I,
  FLEXCAN_D_IFLAG1_BUF14I,
  FLEXCAN_D_IFLAG1_BUF15I,
  FLEXCAN_D_IFLAG1_BUF31_16I,
  FLEXCAN_D_IFLAG1_BUF63_32I,

  /* FlexCAN E */
  FLEXCAN_E_ESR_BOFF_INT = 329,
  FLEXCAN_E_ESR_ERR_INT,
  RESERVED23,
  FLEXCAN_E_IFLAG1_BUF0I,
  FLEXCAN_E_IFLAG1_BUF1I,
  FLEXCAN_E_IFLAG1_BUF2I,
  FLEXCAN_E_IFLAG1_BUF3I,
  FLEXCAN_E_IFLAG1_BUF4I,
  FLEXCAN_E_IFLAG1_BUF5I,
  FLEXCAN_E_IFLAG1_BUF6I,
  FLEXCAN_E_IFLAG1_BUF7I,
  FLEXCAN_E_IFLAG1_BUF8I,
  FLEXCAN_E_IFLAG1_BUF9I,
  FLEXCAN_E_IFLAG1_BUF10I,
  FLEXCAN_E_IFLAG1_BUF11I,
  FLEXCAN_E_IFLAG1_BUF12I,
  FLEXCAN_E_IFLAG1_BUF13I,
  FLEXCAN_E_IFLAG1_BUF14I,
  FLEXCAN_E_IFLAG1_BUF15I,
  FLEXCAN_E_IFLAG1_BUF31_16I,
  FLEXCAN_E_IFLAG1_BUF63_32I,

  INTC_NUMBER_OF_INTERRUPTS,

  DUMMY_DUMMY = 319,

#endif /* defined(CFG_MPC5554)||defined(CFG_MPC5567)||defined(CFG_MPC5633) */

  CRITICAL_INPUT_EXCEPTION,
  MACHINE_CHECK_EXCEPTION,
  DATA_STORAGE_EXCEPTION,
  INSTRUCTION_STORAGE_EXCEPTION,
  EXTERNAL_INTERRUPT,                    /* This is the place where the "normal" interrupts will hit the CPU... */
  ALIGNMENT_EXCEPTION,
  PROGRAM_EXCEPTION,
  FLOATING_POINT_EXCEPTION,
  SYSTEM_CALL_EXCEPTION,
  AUX_EXCEPTION,
  DECREMENTER_EXCEPTION,
  FIXED_INTERVAL_TIMER_EXCEPTION,
  WATCHDOG_TIMER_EXCEPTION,
  DATA_TLB_EXCEPTION,
  INSTRUCTION_TLB_EXCEPTION,
  DEBUG_EXCEPTION,
  NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS,
}IrqType;

typedef enum {
  PERIPHERAL_CLOCK_FLEXCAN_A,
  PERIPHERAL_CLOCK_FLEXCAN_B,
  PERIPHERAL_CLOCK_FLEXCAN_C,
  PERIPHERAL_CLOCK_FLEXCAN_D,
  PERIPHERAL_CLOCK_FLEXCAN_E,
  PERIPHERAL_CLOCK_FLEXCAN_F,
  PERIPHERAL_CLOCK_PIT,
  PERIPHERAL_CLOCK_DSPI_A,
  PERIPHERAL_CLOCK_DSPI_B,
  PERIPHERAL_CLOCK_DSPI_C,
  PERIPHERAL_CLOCK_DSPI_D,
  PERIPHERAL_CLOCK_EMIOS,
  PERIPHERAL_CLOCK_ESCI_A,
  PERIPHERAL_CLOCK_ESCI_B,
  PERIPHERAL_CLOCK_ESCI_C,
  PERIPHERAL_CLOCK_ESCI_D,
  PERIPHERAL_CLOCK_ESCI_E,
  PERIPHERAL_CLOCK_ESCI_F,
  PERIPHERAL_CLOCK_ESCI_G,
  PERIPHERAL_CLOCK_ESCI_H,
  PERIPHERAL_CLOCK_IIC_A,
  PERIPHERAL_CLOCK_MLB,
} McuE_PeriperalClock_t;


#if defined(CFG_MPC5516)
#define CPU_Z1 	0
#define CPU_Z0		1
#endif

typedef enum {
	CPU_CORE0,
	CPU_CORE1,
} Cpu_t;

#define IRQ_INTERRUPT_OFFSET		0

#endif /* IRQ_H_ */
