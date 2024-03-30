/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef GAUDI2_CORESIGHT_H
#define GAUDI2_CORESIGHT_H

enum gaudi2_debug_stm_regs_index {
	GAUDI2_STM_FIRST = 0,
	GAUDI2_STM_DCORE0_TPC0_EML = GAUDI2_STM_FIRST,
	GAUDI2_STM_DCORE0_TPC1_EML,
	GAUDI2_STM_DCORE0_TPC2_EML,
	GAUDI2_STM_DCORE0_TPC3_EML,
	GAUDI2_STM_DCORE0_TPC4_EML,
	GAUDI2_STM_DCORE0_TPC5_EML,
	GAUDI2_STM_DCORE0_TPC6_EML,
	GAUDI2_STM_DCORE1_TPC0_EML,
	GAUDI2_STM_DCORE1_TPC1_EML,
	GAUDI2_STM_DCORE1_TPC2_EML,
	GAUDI2_STM_DCORE1_TPC3_EML,
	GAUDI2_STM_DCORE1_TPC4_EML,
	GAUDI2_STM_DCORE1_TPC5_EML,
	GAUDI2_STM_DCORE2_TPC0_EML,
	GAUDI2_STM_DCORE2_TPC1_EML,
	GAUDI2_STM_DCORE2_TPC2_EML,
	GAUDI2_STM_DCORE2_TPC3_EML,
	GAUDI2_STM_DCORE2_TPC4_EML,
	GAUDI2_STM_DCORE2_TPC5_EML,
	GAUDI2_STM_DCORE3_TPC0_EML,
	GAUDI2_STM_DCORE3_TPC1_EML,
	GAUDI2_STM_DCORE3_TPC2_EML,
	GAUDI2_STM_DCORE3_TPC3_EML,
	GAUDI2_STM_DCORE3_TPC4_EML,
	GAUDI2_STM_DCORE3_TPC5_EML,
	GAUDI2_STM_DCORE0_HMMU0_CS,
	GAUDI2_STM_DCORE0_HMMU1_CS,
	GAUDI2_STM_DCORE0_HMMU2_CS,
	GAUDI2_STM_DCORE0_HMMU3_CS,
	GAUDI2_STM_DCORE0_MME_CTRL,
	GAUDI2_STM_DCORE0_MME_SBTE0,
	GAUDI2_STM_DCORE0_MME_SBTE1,
	GAUDI2_STM_DCORE0_MME_SBTE2,
	GAUDI2_STM_DCORE0_MME_SBTE3,
	GAUDI2_STM_DCORE0_MME_SBTE4,
	GAUDI2_STM_DCORE0_MME_ACC,
	GAUDI2_STM_DCORE0_SM,
	GAUDI2_STM_DCORE0_EDMA0_CS,
	GAUDI2_STM_DCORE0_EDMA1_CS,
	GAUDI2_STM_DCORE0_VDEC0_CS,
	GAUDI2_STM_DCORE0_VDEC1_CS,
	GAUDI2_STM_DCORE1_HMMU0_CS,
	GAUDI2_STM_DCORE1_HMMU1_CS,
	GAUDI2_STM_DCORE1_HMMU2_CS,
	GAUDI2_STM_DCORE1_HMMU3_CS,
	GAUDI2_STM_DCORE1_MME_CTRL,
	GAUDI2_STM_DCORE1_MME_SBTE0,
	GAUDI2_STM_DCORE1_MME_SBTE1,
	GAUDI2_STM_DCORE1_MME_SBTE2,
	GAUDI2_STM_DCORE1_MME_SBTE3,
	GAUDI2_STM_DCORE1_MME_SBTE4,
	GAUDI2_STM_DCORE1_MME_ACC,
	GAUDI2_STM_DCORE1_SM,
	GAUDI2_STM_DCORE1_EDMA0_CS,
	GAUDI2_STM_DCORE1_EDMA1_CS,
	GAUDI2_STM_DCORE1_VDEC0_CS,
	GAUDI2_STM_DCORE1_VDEC1_CS,
	GAUDI2_STM_DCORE2_HMMU0_CS,
	GAUDI2_STM_DCORE2_HMMU1_CS,
	GAUDI2_STM_DCORE2_HMMU2_CS,
	GAUDI2_STM_DCORE2_HMMU3_CS,
	GAUDI2_STM_DCORE2_MME_CTRL,
	GAUDI2_STM_DCORE2_MME_SBTE0,
	GAUDI2_STM_DCORE2_MME_SBTE1,
	GAUDI2_STM_DCORE2_MME_SBTE2,
	GAUDI2_STM_DCORE2_MME_SBTE3,
	GAUDI2_STM_DCORE2_MME_SBTE4,
	GAUDI2_STM_DCORE2_MME_ACC,
	GAUDI2_STM_DCORE2_SM,
	GAUDI2_STM_DCORE2_EDMA0_CS,
	GAUDI2_STM_DCORE2_EDMA1_CS,
	GAUDI2_STM_DCORE2_VDEC0_CS,
	GAUDI2_STM_DCORE2_VDEC1_CS,
	GAUDI2_STM_DCORE3_HMMU0_CS,
	GAUDI2_STM_DCORE3_HMMU1_CS,
	GAUDI2_STM_DCORE3_HMMU2_CS,
	GAUDI2_STM_DCORE3_HMMU3_CS,
	GAUDI2_STM_DCORE3_MME_CTRL,
	GAUDI2_STM_DCORE3_MME_SBTE0,
	GAUDI2_STM_DCORE3_MME_SBTE1,
	GAUDI2_STM_DCORE3_MME_SBTE2,
	GAUDI2_STM_DCORE3_MME_SBTE3,
	GAUDI2_STM_DCORE3_MME_SBTE4,
	GAUDI2_STM_DCORE3_MME_ACC,
	GAUDI2_STM_DCORE3_SM,
	GAUDI2_STM_DCORE3_EDMA0_CS,
	GAUDI2_STM_DCORE3_EDMA1_CS,
	GAUDI2_STM_DCORE3_VDEC0_CS,
	GAUDI2_STM_DCORE3_VDEC1_CS,
	GAUDI2_STM_PCIE,
	GAUDI2_STM_PSOC,
	GAUDI2_STM_PSOC_ARC0_CS,
	GAUDI2_STM_PSOC_ARC1_CS,
	GAUDI2_STM_PDMA0_CS,
	GAUDI2_STM_PDMA1_CS,
	GAUDI2_STM_CPU,
	GAUDI2_STM_PMMU_CS,
	GAUDI2_STM_ROT0_CS,
	GAUDI2_STM_ROT1_CS,
	GAUDI2_STM_ARC_FARM_CS,
	GAUDI2_STM_KDMA_CS,
	GAUDI2_STM_PCIE_VDEC0_CS,
	GAUDI2_STM_PCIE_VDEC1_CS,
	GAUDI2_STM_HBM0_MC0_CS,
	GAUDI2_STM_HBM0_MC1_CS,
	GAUDI2_STM_HBM1_MC0_CS,
	GAUDI2_STM_HBM1_MC1_CS,
	GAUDI2_STM_HBM2_MC0_CS,
	GAUDI2_STM_HBM2_MC1_CS,
	GAUDI2_STM_HBM3_MC0_CS,
	GAUDI2_STM_HBM3_MC1_CS,
	GAUDI2_STM_HBM4_MC0_CS,
	GAUDI2_STM_HBM4_MC1_CS,
	GAUDI2_STM_HBM5_MC0_CS,
	GAUDI2_STM_HBM5_MC1_CS,
	GAUDI2_STM_NIC0_DBG_0,
	GAUDI2_STM_NIC0_DBG_1,
	GAUDI2_STM_NIC1_DBG_0,
	GAUDI2_STM_NIC1_DBG_1,
	GAUDI2_STM_NIC2_DBG_0,
	GAUDI2_STM_NIC2_DBG_1,
	GAUDI2_STM_NIC3_DBG_0,
	GAUDI2_STM_NIC3_DBG_1,
	GAUDI2_STM_NIC4_DBG_0,
	GAUDI2_STM_NIC4_DBG_1,
	GAUDI2_STM_NIC5_DBG_0,
	GAUDI2_STM_NIC5_DBG_1,
	GAUDI2_STM_NIC6_DBG_0,
	GAUDI2_STM_NIC6_DBG_1,
	GAUDI2_STM_NIC7_DBG_0,
	GAUDI2_STM_NIC7_DBG_1,
	GAUDI2_STM_NIC8_DBG_0,
	GAUDI2_STM_NIC8_DBG_1,
	GAUDI2_STM_NIC9_DBG_0,
	GAUDI2_STM_NIC9_DBG_1,
	GAUDI2_STM_NIC10_DBG_0,
	GAUDI2_STM_NIC10_DBG_1,
	GAUDI2_STM_NIC11_DBG_0,
	GAUDI2_STM_NIC11_DBG_1,
	GAUDI2_STM_LAST = GAUDI2_STM_NIC11_DBG_1
};

enum gaudi2_debug_etf_regs_index {
	GAUDI2_ETF_FIRST = 0,
	GAUDI2_ETF_DCORE0_TPC0_EML = GAUDI2_ETF_FIRST,
	GAUDI2_ETF_DCORE0_TPC1_EML,
	GAUDI2_ETF_DCORE0_TPC2_EML,
	GAUDI2_ETF_DCORE0_TPC3_EML,
	GAUDI2_ETF_DCORE0_TPC4_EML,
	GAUDI2_ETF_DCORE0_TPC5_EML,
	GAUDI2_ETF_DCORE0_TPC6_EML,
	GAUDI2_ETF_DCORE1_TPC0_EML,
	GAUDI2_ETF_DCORE1_TPC1_EML,
	GAUDI2_ETF_DCORE1_TPC2_EML,
	GAUDI2_ETF_DCORE1_TPC3_EML,
	GAUDI2_ETF_DCORE1_TPC4_EML,
	GAUDI2_ETF_DCORE1_TPC5_EML,
	GAUDI2_ETF_DCORE2_TPC0_EML,
	GAUDI2_ETF_DCORE2_TPC1_EML,
	GAUDI2_ETF_DCORE2_TPC2_EML,
	GAUDI2_ETF_DCORE2_TPC3_EML,
	GAUDI2_ETF_DCORE2_TPC4_EML,
	GAUDI2_ETF_DCORE2_TPC5_EML,
	GAUDI2_ETF_DCORE3_TPC0_EML,
	GAUDI2_ETF_DCORE3_TPC1_EML,
	GAUDI2_ETF_DCORE3_TPC2_EML,
	GAUDI2_ETF_DCORE3_TPC3_EML,
	GAUDI2_ETF_DCORE3_TPC4_EML,
	GAUDI2_ETF_DCORE3_TPC5_EML,
	GAUDI2_ETF_DCORE0_HMMU0_CS,
	GAUDI2_ETF_DCORE0_HMMU1_CS,
	GAUDI2_ETF_DCORE0_HMMU2_CS,
	GAUDI2_ETF_DCORE0_HMMU3_CS,
	GAUDI2_ETF_DCORE0_MME_CTRL,
	GAUDI2_ETF_DCORE0_MME_SBTE0,
	GAUDI2_ETF_DCORE0_MME_SBTE1,
	GAUDI2_ETF_DCORE0_MME_SBTE2,
	GAUDI2_ETF_DCORE0_MME_SBTE3,
	GAUDI2_ETF_DCORE0_MME_SBTE4,
	GAUDI2_ETF_DCORE0_MME_ACC,
	GAUDI2_ETF_DCORE0_SM,
	GAUDI2_ETF_DCORE0_EDMA0_CS,
	GAUDI2_ETF_DCORE0_EDMA1_CS,
	GAUDI2_ETF_DCORE0_VDEC0_CS,
	GAUDI2_ETF_DCORE0_VDEC1_CS,
	GAUDI2_ETF_DCORE1_HMMU0_CS,
	GAUDI2_ETF_DCORE1_HMMU1_CS,
	GAUDI2_ETF_DCORE1_HMMU2_CS,
	GAUDI2_ETF_DCORE1_HMMU3_CS,
	GAUDI2_ETF_DCORE1_MME_CTRL,
	GAUDI2_ETF_DCORE1_MME_SBTE0,
	GAUDI2_ETF_DCORE1_MME_SBTE1,
	GAUDI2_ETF_DCORE1_MME_SBTE2,
	GAUDI2_ETF_DCORE1_MME_SBTE3,
	GAUDI2_ETF_DCORE1_MME_SBTE4,
	GAUDI2_ETF_DCORE1_MME_ACC,
	GAUDI2_ETF_DCORE1_SM,
	GAUDI2_ETF_DCORE1_EDMA0_CS,
	GAUDI2_ETF_DCORE1_EDMA1_CS,
	GAUDI2_ETF_DCORE1_VDEC0_CS,
	GAUDI2_ETF_DCORE1_VDEC1_CS,
	GAUDI2_ETF_DCORE2_HMMU0_CS,
	GAUDI2_ETF_DCORE2_HMMU1_CS,
	GAUDI2_ETF_DCORE2_HMMU2_CS,
	GAUDI2_ETF_DCORE2_HMMU3_CS,
	GAUDI2_ETF_DCORE2_MME_CTRL,
	GAUDI2_ETF_DCORE2_MME_SBTE0,
	GAUDI2_ETF_DCORE2_MME_SBTE1,
	GAUDI2_ETF_DCORE2_MME_SBTE2,
	GAUDI2_ETF_DCORE2_MME_SBTE3,
	GAUDI2_ETF_DCORE2_MME_SBTE4,
	GAUDI2_ETF_DCORE2_MME_ACC,
	GAUDI2_ETF_DCORE2_SM,
	GAUDI2_ETF_DCORE2_EDMA0_CS,
	GAUDI2_ETF_DCORE2_EDMA1_CS,
	GAUDI2_ETF_DCORE2_VDEC0_CS,
	GAUDI2_ETF_DCORE2_VDEC1_CS,
	GAUDI2_ETF_DCORE3_HMMU0_CS,
	GAUDI2_ETF_DCORE3_HMMU1_CS,
	GAUDI2_ETF_DCORE3_HMMU2_CS,
	GAUDI2_ETF_DCORE3_HMMU3_CS,
	GAUDI2_ETF_DCORE3_MME_CTRL,
	GAUDI2_ETF_DCORE3_MME_SBTE0,
	GAUDI2_ETF_DCORE3_MME_SBTE1,
	GAUDI2_ETF_DCORE3_MME_SBTE2,
	GAUDI2_ETF_DCORE3_MME_SBTE3,
	GAUDI2_ETF_DCORE3_MME_SBTE4,
	GAUDI2_ETF_DCORE3_MME_ACC,
	GAUDI2_ETF_DCORE3_SM,
	GAUDI2_ETF_DCORE3_EDMA0_CS,
	GAUDI2_ETF_DCORE3_EDMA1_CS,
	GAUDI2_ETF_DCORE3_VDEC0_CS,
	GAUDI2_ETF_DCORE3_VDEC1_CS,
	GAUDI2_ETF_PCIE,
	GAUDI2_ETF_PSOC,
	GAUDI2_ETF_PSOC_ARC0_CS,
	GAUDI2_ETF_PSOC_ARC1_CS,
	GAUDI2_ETF_PDMA0_CS,
	GAUDI2_ETF_PDMA1_CS,
	GAUDI2_ETF_CPU_0,
	GAUDI2_ETF_CPU_1,
	GAUDI2_ETF_CPU_TRACE,
	GAUDI2_ETF_PMMU_CS,
	GAUDI2_ETF_ROT0_CS,
	GAUDI2_ETF_ROT1_CS,
	GAUDI2_ETF_ARC_FARM_CS,
	GAUDI2_ETF_KDMA_CS,
	GAUDI2_ETF_PCIE_VDEC0_CS,
	GAUDI2_ETF_PCIE_VDEC1_CS,
	GAUDI2_ETF_HBM0_MC0_CS,
	GAUDI2_ETF_HBM0_MC1_CS,
	GAUDI2_ETF_HBM1_MC0_CS,
	GAUDI2_ETF_HBM1_MC1_CS,
	GAUDI2_ETF_HBM2_MC0_CS,
	GAUDI2_ETF_HBM2_MC1_CS,
	GAUDI2_ETF_HBM3_MC0_CS,
	GAUDI2_ETF_HBM3_MC1_CS,
	GAUDI2_ETF_HBM4_MC0_CS,
	GAUDI2_ETF_HBM4_MC1_CS,
	GAUDI2_ETF_HBM5_MC0_CS,
	GAUDI2_ETF_HBM5_MC1_CS,
	GAUDI2_ETF_NIC0_DBG_0,
	GAUDI2_ETF_NIC0_DBG_1,
	GAUDI2_ETF_NIC1_DBG_0,
	GAUDI2_ETF_NIC1_DBG_1,
	GAUDI2_ETF_NIC2_DBG_0,
	GAUDI2_ETF_NIC2_DBG_1,
	GAUDI2_ETF_NIC3_DBG_0,
	GAUDI2_ETF_NIC3_DBG_1,
	GAUDI2_ETF_NIC4_DBG_0,
	GAUDI2_ETF_NIC4_DBG_1,
	GAUDI2_ETF_NIC5_DBG_0,
	GAUDI2_ETF_NIC5_DBG_1,
	GAUDI2_ETF_NIC6_DBG_0,
	GAUDI2_ETF_NIC6_DBG_1,
	GAUDI2_ETF_NIC7_DBG_0,
	GAUDI2_ETF_NIC7_DBG_1,
	GAUDI2_ETF_NIC8_DBG_0,
	GAUDI2_ETF_NIC8_DBG_1,
	GAUDI2_ETF_NIC9_DBG_0,
	GAUDI2_ETF_NIC9_DBG_1,
	GAUDI2_ETF_NIC10_DBG_0,
	GAUDI2_ETF_NIC10_DBG_1,
	GAUDI2_ETF_NIC11_DBG_0,
	GAUDI2_ETF_NIC11_DBG_1,
	GAUDI2_ETF_LAST = GAUDI2_ETF_NIC11_DBG_1
};

enum gaudi2_debug_funnel_regs_index {
	GAUDI2_FUNNEL_FIRST = 0,
	GAUDI2_FUNNEL_DCORE0_TPC0_EML = GAUDI2_FUNNEL_FIRST,
	GAUDI2_FUNNEL_DCORE0_TPC1_EML,
	GAUDI2_FUNNEL_DCORE0_TPC2_EML,
	GAUDI2_FUNNEL_DCORE0_TPC3_EML,
	GAUDI2_FUNNEL_DCORE0_TPC4_EML,
	GAUDI2_FUNNEL_DCORE0_TPC5_EML,
	GAUDI2_FUNNEL_DCORE0_TPC6_EML,
	GAUDI2_FUNNEL_DCORE1_TPC0_EML,
	GAUDI2_FUNNEL_DCORE1_TPC1_EML,
	GAUDI2_FUNNEL_DCORE1_TPC2_EML,
	GAUDI2_FUNNEL_DCORE1_TPC3_EML,
	GAUDI2_FUNNEL_DCORE1_TPC4_EML,
	GAUDI2_FUNNEL_DCORE1_TPC5_EML,
	GAUDI2_FUNNEL_DCORE2_TPC0_EML,
	GAUDI2_FUNNEL_DCORE2_TPC1_EML,
	GAUDI2_FUNNEL_DCORE2_TPC2_EML,
	GAUDI2_FUNNEL_DCORE2_TPC3_EML,
	GAUDI2_FUNNEL_DCORE2_TPC4_EML,
	GAUDI2_FUNNEL_DCORE2_TPC5_EML,
	GAUDI2_FUNNEL_DCORE3_TPC0_EML,
	GAUDI2_FUNNEL_DCORE3_TPC1_EML,
	GAUDI2_FUNNEL_DCORE3_TPC2_EML,
	GAUDI2_FUNNEL_DCORE3_TPC3_EML,
	GAUDI2_FUNNEL_DCORE3_TPC4_EML,
	GAUDI2_FUNNEL_DCORE3_TPC5_EML,
	GAUDI2_FUNNEL_DCORE0_XFT,
	GAUDI2_FUNNEL_DCORE0_TFT0,
	GAUDI2_FUNNEL_DCORE0_TFT1,
	GAUDI2_FUNNEL_DCORE0_TFT2,
	GAUDI2_FUNNEL_DCORE0_RTR0,
	GAUDI2_FUNNEL_DCORE0_RTR1,
	GAUDI2_FUNNEL_DCORE0_RTR2,
	GAUDI2_FUNNEL_DCORE0_RTR3,
	GAUDI2_FUNNEL_DCORE0_RTR4,
	GAUDI2_FUNNEL_DCORE0_MIF0,
	GAUDI2_FUNNEL_DCORE0_RTR5,
	GAUDI2_FUNNEL_DCORE0_MIF1,
	GAUDI2_FUNNEL_DCORE0_RTR6,
	GAUDI2_FUNNEL_DCORE0_MIF2,
	GAUDI2_FUNNEL_DCORE0_RTR7,
	GAUDI2_FUNNEL_DCORE0_MIF3,
	GAUDI2_FUNNEL_DCORE1_XFT,
	GAUDI2_FUNNEL_DCORE1_TFT0,
	GAUDI2_FUNNEL_DCORE1_TFT1,
	GAUDI2_FUNNEL_DCORE1_TFT2,
	GAUDI2_FUNNEL_DCORE1_RTR0,
	GAUDI2_FUNNEL_DCORE1_MIF0,
	GAUDI2_FUNNEL_DCORE1_RTR1,
	GAUDI2_FUNNEL_DCORE1_MIF1,
	GAUDI2_FUNNEL_DCORE1_RTR2,
	GAUDI2_FUNNEL_DCORE1_MIF2,
	GAUDI2_FUNNEL_DCORE1_RTR3,
	GAUDI2_FUNNEL_DCORE1_MIF3,
	GAUDI2_FUNNEL_DCORE1_RTR4,
	GAUDI2_FUNNEL_DCORE1_RTR5,
	GAUDI2_FUNNEL_DCORE1_RTR6,
	GAUDI2_FUNNEL_DCORE1_RTR7,
	GAUDI2_FUNNEL_DCORE2_XFT,
	GAUDI2_FUNNEL_DCORE2_TFT0,
	GAUDI2_FUNNEL_DCORE2_TFT1,
	GAUDI2_FUNNEL_DCORE2_TFT2,
	GAUDI2_FUNNEL_DCORE2_RTR0,
	GAUDI2_FUNNEL_DCORE2_RTR1,
	GAUDI2_FUNNEL_DCORE2_RTR2,
	GAUDI2_FUNNEL_DCORE2_RTR3,
	GAUDI2_FUNNEL_DCORE2_RTR4,
	GAUDI2_FUNNEL_DCORE2_MIF0,
	GAUDI2_FUNNEL_DCORE2_RTR5,
	GAUDI2_FUNNEL_DCORE2_MIF1,
	GAUDI2_FUNNEL_DCORE2_RTR6,
	GAUDI2_FUNNEL_DCORE2_MIF2,
	GAUDI2_FUNNEL_DCORE2_RTR7,
	GAUDI2_FUNNEL_DCORE2_MIF3,
	GAUDI2_FUNNEL_DCORE3_XFT,
	GAUDI2_FUNNEL_DCORE3_TFT0,
	GAUDI2_FUNNEL_DCORE3_TFT1,
	GAUDI2_FUNNEL_DCORE3_TFT2,
	GAUDI2_FUNNEL_DCORE3_RTR0,
	GAUDI2_FUNNEL_DCORE3_MIF0,
	GAUDI2_FUNNEL_DCORE3_RTR1,
	GAUDI2_FUNNEL_DCORE3_MIF1,
	GAUDI2_FUNNEL_DCORE3_RTR2,
	GAUDI2_FUNNEL_DCORE3_MIF2,
	GAUDI2_FUNNEL_DCORE3_RTR3,
	GAUDI2_FUNNEL_DCORE3_MIF3,
	GAUDI2_FUNNEL_DCORE3_RTR4,
	GAUDI2_FUNNEL_DCORE3_RTR5,
	GAUDI2_FUNNEL_DCORE3_RTR6,
	GAUDI2_FUNNEL_DCORE3_RTR7,
	GAUDI2_FUNNEL_PSOC,
	GAUDI2_FUNNEL_PSOC_ARC0,
	GAUDI2_FUNNEL_PSOC_ARC1,
	GAUDI2_FUNNEL_XDMA,
	GAUDI2_FUNNEL_CPU,
	GAUDI2_FUNNEL_PMMU,
	GAUDI2_FUNNEL_PMMU_DEC,
	GAUDI2_FUNNEL_DCORE0_XBAR_MID,
	GAUDI2_FUNNEL_DCORE0_XBAR_EDGE,
	GAUDI2_FUNNEL_DCORE1_XBAR_MID,
	GAUDI2_FUNNEL_DCORE1_XBAR_EDGE,
	GAUDI2_FUNNEL_DCORE2_XBAR_MID,
	GAUDI2_FUNNEL_DCORE2_XBAR_EDGE,
	GAUDI2_FUNNEL_DCORE3_XBAR_MID,
	GAUDI2_FUNNEL_DCORE3_XBAR_EDGE,
	GAUDI2_FUNNEL_ARC_FARM,
	GAUDI2_FUNNEL_HBM0_MC0,
	GAUDI2_FUNNEL_HBM0_MC1,
	GAUDI2_FUNNEL_HBM1_MC0,
	GAUDI2_FUNNEL_HBM1_MC1,
	GAUDI2_FUNNEL_HBM2_MC0,
	GAUDI2_FUNNEL_HBM2_MC1,
	GAUDI2_FUNNEL_HBM3_MC0,
	GAUDI2_FUNNEL_HBM3_MC1,
	GAUDI2_FUNNEL_HBM4_MC0,
	GAUDI2_FUNNEL_HBM4_MC1,
	GAUDI2_FUNNEL_HBM5_MC0,
	GAUDI2_FUNNEL_HBM5_MC1,
	GAUDI2_FUNNEL_NIC0_DBG_TX,
	GAUDI2_FUNNEL_NIC0_DBG_NCH,
	GAUDI2_FUNNEL_NIC1_DBG_TX,
	GAUDI2_FUNNEL_NIC1_DBG_NCH,
	GAUDI2_FUNNEL_NIC2_DBG_TX,
	GAUDI2_FUNNEL_NIC2_DBG_NCH,
	GAUDI2_FUNNEL_NIC3_DBG_TX,
	GAUDI2_FUNNEL_NIC3_DBG_NCH,
	GAUDI2_FUNNEL_NIC4_DBG_TX,
	GAUDI2_FUNNEL_NIC4_DBG_NCH,
	GAUDI2_FUNNEL_NIC5_DBG_TX,
	GAUDI2_FUNNEL_NIC5_DBG_NCH,
	GAUDI2_FUNNEL_NIC6_DBG_TX,
	GAUDI2_FUNNEL_NIC6_DBG_NCH,
	GAUDI2_FUNNEL_NIC7_DBG_TX,
	GAUDI2_FUNNEL_NIC7_DBG_NCH,
	GAUDI2_FUNNEL_NIC8_DBG_TX,
	GAUDI2_FUNNEL_NIC8_DBG_NCH,
	GAUDI2_FUNNEL_NIC9_DBG_TX,
	GAUDI2_FUNNEL_NIC9_DBG_NCH,
	GAUDI2_FUNNEL_NIC10_DBG_TX,
	GAUDI2_FUNNEL_NIC10_DBG_NCH,
	GAUDI2_FUNNEL_NIC11_DBG_TX,
	GAUDI2_FUNNEL_NIC11_DBG_NCH,
	GAUDI2_FUNNEL_LAST = GAUDI2_FUNNEL_NIC11_DBG_NCH
};

enum gaudi2_debug_bmon_regs_index {
	GAUDI2_BMON_FIRST = 0,
	GAUDI2_BMON_DCORE0_TPC0_EML_0 = GAUDI2_BMON_FIRST,
	GAUDI2_BMON_DCORE0_TPC0_EML_1,
	GAUDI2_BMON_DCORE0_TPC0_EML_2,
	GAUDI2_BMON_DCORE0_TPC0_EML_3,
	GAUDI2_BMON_DCORE0_TPC1_EML_0,
	GAUDI2_BMON_DCORE0_TPC1_EML_1,
	GAUDI2_BMON_DCORE0_TPC1_EML_2,
	GAUDI2_BMON_DCORE0_TPC1_EML_3,
	GAUDI2_BMON_DCORE0_TPC2_EML_0,
	GAUDI2_BMON_DCORE0_TPC2_EML_1,
	GAUDI2_BMON_DCORE0_TPC2_EML_2,
	GAUDI2_BMON_DCORE0_TPC2_EML_3,
	GAUDI2_BMON_DCORE0_TPC3_EML_0,
	GAUDI2_BMON_DCORE0_TPC3_EML_1,
	GAUDI2_BMON_DCORE0_TPC3_EML_2,
	GAUDI2_BMON_DCORE0_TPC3_EML_3,
	GAUDI2_BMON_DCORE0_TPC4_EML_0,
	GAUDI2_BMON_DCORE0_TPC4_EML_1,
	GAUDI2_BMON_DCORE0_TPC4_EML_2,
	GAUDI2_BMON_DCORE0_TPC4_EML_3,
	GAUDI2_BMON_DCORE0_TPC5_EML_0,
	GAUDI2_BMON_DCORE0_TPC5_EML_1,
	GAUDI2_BMON_DCORE0_TPC5_EML_2,
	GAUDI2_BMON_DCORE0_TPC5_EML_3,
	GAUDI2_BMON_DCORE0_TPC6_EML_0,
	GAUDI2_BMON_DCORE0_TPC6_EML_1,
	GAUDI2_BMON_DCORE0_TPC6_EML_2,
	GAUDI2_BMON_DCORE0_TPC6_EML_3,
	GAUDI2_BMON_DCORE1_TPC0_EML_0,
	GAUDI2_BMON_DCORE1_TPC0_EML_1,
	GAUDI2_BMON_DCORE1_TPC0_EML_2,
	GAUDI2_BMON_DCORE1_TPC0_EML_3,
	GAUDI2_BMON_DCORE1_TPC1_EML_0,
	GAUDI2_BMON_DCORE1_TPC1_EML_1,
	GAUDI2_BMON_DCORE1_TPC1_EML_2,
	GAUDI2_BMON_DCORE1_TPC1_EML_3,
	GAUDI2_BMON_DCORE1_TPC2_EML_0,
	GAUDI2_BMON_DCORE1_TPC2_EML_1,
	GAUDI2_BMON_DCORE1_TPC2_EML_2,
	GAUDI2_BMON_DCORE1_TPC2_EML_3,
	GAUDI2_BMON_DCORE1_TPC3_EML_0,
	GAUDI2_BMON_DCORE1_TPC3_EML_1,
	GAUDI2_BMON_DCORE1_TPC3_EML_2,
	GAUDI2_BMON_DCORE1_TPC3_EML_3,
	GAUDI2_BMON_DCORE1_TPC4_EML_0,
	GAUDI2_BMON_DCORE1_TPC4_EML_1,
	GAUDI2_BMON_DCORE1_TPC4_EML_2,
	GAUDI2_BMON_DCORE1_TPC4_EML_3,
	GAUDI2_BMON_DCORE1_TPC5_EML_0,
	GAUDI2_BMON_DCORE1_TPC5_EML_1,
	GAUDI2_BMON_DCORE1_TPC5_EML_2,
	GAUDI2_BMON_DCORE1_TPC5_EML_3,
	GAUDI2_BMON_DCORE2_TPC0_EML_0,
	GAUDI2_BMON_DCORE2_TPC0_EML_1,
	GAUDI2_BMON_DCORE2_TPC0_EML_2,
	GAUDI2_BMON_DCORE2_TPC0_EML_3,
	GAUDI2_BMON_DCORE2_TPC1_EML_0,
	GAUDI2_BMON_DCORE2_TPC1_EML_1,
	GAUDI2_BMON_DCORE2_TPC1_EML_2,
	GAUDI2_BMON_DCORE2_TPC1_EML_3,
	GAUDI2_BMON_DCORE2_TPC2_EML_0,
	GAUDI2_BMON_DCORE2_TPC2_EML_1,
	GAUDI2_BMON_DCORE2_TPC2_EML_2,
	GAUDI2_BMON_DCORE2_TPC2_EML_3,
	GAUDI2_BMON_DCORE2_TPC3_EML_0,
	GAUDI2_BMON_DCORE2_TPC3_EML_1,
	GAUDI2_BMON_DCORE2_TPC3_EML_2,
	GAUDI2_BMON_DCORE2_TPC3_EML_3,
	GAUDI2_BMON_DCORE2_TPC4_EML_0,
	GAUDI2_BMON_DCORE2_TPC4_EML_1,
	GAUDI2_BMON_DCORE2_TPC4_EML_2,
	GAUDI2_BMON_DCORE2_TPC4_EML_3,
	GAUDI2_BMON_DCORE2_TPC5_EML_0,
	GAUDI2_BMON_DCORE2_TPC5_EML_1,
	GAUDI2_BMON_DCORE2_TPC5_EML_2,
	GAUDI2_BMON_DCORE2_TPC5_EML_3,
	GAUDI2_BMON_DCORE3_TPC0_EML_0,
	GAUDI2_BMON_DCORE3_TPC0_EML_1,
	GAUDI2_BMON_DCORE3_TPC0_EML_2,
	GAUDI2_BMON_DCORE3_TPC0_EML_3,
	GAUDI2_BMON_DCORE3_TPC1_EML_0,
	GAUDI2_BMON_DCORE3_TPC1_EML_1,
	GAUDI2_BMON_DCORE3_TPC1_EML_2,
	GAUDI2_BMON_DCORE3_TPC1_EML_3,
	GAUDI2_BMON_DCORE3_TPC2_EML_0,
	GAUDI2_BMON_DCORE3_TPC2_EML_1,
	GAUDI2_BMON_DCORE3_TPC2_EML_2,
	GAUDI2_BMON_DCORE3_TPC2_EML_3,
	GAUDI2_BMON_DCORE3_TPC3_EML_0,
	GAUDI2_BMON_DCORE3_TPC3_EML_1,
	GAUDI2_BMON_DCORE3_TPC3_EML_2,
	GAUDI2_BMON_DCORE3_TPC3_EML_3,
	GAUDI2_BMON_DCORE3_TPC4_EML_0,
	GAUDI2_BMON_DCORE3_TPC4_EML_1,
	GAUDI2_BMON_DCORE3_TPC4_EML_2,
	GAUDI2_BMON_DCORE3_TPC4_EML_3,
	GAUDI2_BMON_DCORE3_TPC5_EML_0,
	GAUDI2_BMON_DCORE3_TPC5_EML_1,
	GAUDI2_BMON_DCORE3_TPC5_EML_2,
	GAUDI2_BMON_DCORE3_TPC5_EML_3,
	GAUDI2_BMON_DCORE0_HMMU0_0,
	GAUDI2_BMON_DCORE0_HMMU0_1,
	GAUDI2_BMON_DCORE0_HMMU0_3,
	GAUDI2_BMON_DCORE0_HMMU0_2,
	GAUDI2_BMON_DCORE0_HMMU0_4,
	GAUDI2_BMON_DCORE0_HMMU1_0,
	GAUDI2_BMON_DCORE0_HMMU1_1,
	GAUDI2_BMON_DCORE0_HMMU1_3,
	GAUDI2_BMON_DCORE0_HMMU1_2,
	GAUDI2_BMON_DCORE0_HMMU1_4,
	GAUDI2_BMON_DCORE0_HMMU2_0,
	GAUDI2_BMON_DCORE0_HMMU2_1,
	GAUDI2_BMON_DCORE0_HMMU2_3,
	GAUDI2_BMON_DCORE0_HMMU2_2,
	GAUDI2_BMON_DCORE0_HMMU2_4,
	GAUDI2_BMON_DCORE0_HMMU3_0,
	GAUDI2_BMON_DCORE0_HMMU3_1,
	GAUDI2_BMON_DCORE0_HMMU3_3,
	GAUDI2_BMON_DCORE0_HMMU3_2,
	GAUDI2_BMON_DCORE0_HMMU3_4,
	GAUDI2_BMON_DCORE0_MME_CTRL_0,
	GAUDI2_BMON_DCORE0_MME_CTRL_1,
	GAUDI2_BMON_DCORE0_MME_CTRL_2,
	GAUDI2_BMON_DCORE0_MME_CTRL_3,
	GAUDI2_BMON_DCORE0_MME_SBTE0_0,
	GAUDI2_BMON_DCORE0_MME_SBTE1_0,
	GAUDI2_BMON_DCORE0_MME_SBTE2_0,
	GAUDI2_BMON_DCORE0_MME_SBTE3_0,
	GAUDI2_BMON_DCORE0_MME_SBTE4_0,
	GAUDI2_BMON_DCORE0_MME_ACC_0,
	GAUDI2_BMON_DCORE0_MME_ACC_1,
	GAUDI2_BMON_DCORE0_SM,
	GAUDI2_BMON_DCORE0_SM_1,
	GAUDI2_BMON_DCORE0_EDMA0_0,
	GAUDI2_BMON_DCORE0_EDMA0_1,
	GAUDI2_BMON_DCORE0_EDMA1_0,
	GAUDI2_BMON_DCORE0_EDMA1_1,
	GAUDI2_BMON_DCORE0_VDEC0_0,
	GAUDI2_BMON_DCORE0_VDEC0_1,
	GAUDI2_BMON_DCORE0_VDEC0_2,
	GAUDI2_BMON_DCORE0_VDEC1_0,
	GAUDI2_BMON_DCORE0_VDEC1_1,
	GAUDI2_BMON_DCORE0_VDEC1_2,
	GAUDI2_BMON_DCORE1_HMMU0_0,
	GAUDI2_BMON_DCORE1_HMMU0_1,
	GAUDI2_BMON_DCORE1_HMMU0_3,
	GAUDI2_BMON_DCORE1_HMMU0_2,
	GAUDI2_BMON_DCORE1_HMMU0_4,
	GAUDI2_BMON_DCORE1_HMMU1_0,
	GAUDI2_BMON_DCORE1_HMMU1_1,
	GAUDI2_BMON_DCORE1_HMMU1_3,
	GAUDI2_BMON_DCORE1_HMMU1_2,
	GAUDI2_BMON_DCORE1_HMMU1_4,
	GAUDI2_BMON_DCORE1_HMMU2_0,
	GAUDI2_BMON_DCORE1_HMMU2_1,
	GAUDI2_BMON_DCORE1_HMMU2_3,
	GAUDI2_BMON_DCORE1_HMMU2_2,
	GAUDI2_BMON_DCORE1_HMMU2_4,
	GAUDI2_BMON_DCORE1_HMMU3_0,
	GAUDI2_BMON_DCORE1_HMMU3_1,
	GAUDI2_BMON_DCORE1_HMMU3_3,
	GAUDI2_BMON_DCORE1_HMMU3_2,
	GAUDI2_BMON_DCORE1_HMMU3_4,
	GAUDI2_BMON_DCORE1_MME_CTRL_0,
	GAUDI2_BMON_DCORE1_MME_CTRL_1,
	GAUDI2_BMON_DCORE1_MME_CTRL_2,
	GAUDI2_BMON_DCORE1_MME_CTRL_3,
	GAUDI2_BMON_DCORE1_MME_SBTE0_0,
	GAUDI2_BMON_DCORE1_MME_SBTE1_0,
	GAUDI2_BMON_DCORE1_MME_SBTE2_0,
	GAUDI2_BMON_DCORE1_MME_SBTE3_0,
	GAUDI2_BMON_DCORE1_MME_SBTE4_0,
	GAUDI2_BMON_DCORE1_MME_ACC_0,
	GAUDI2_BMON_DCORE1_MME_ACC_1,
	GAUDI2_BMON_DCORE1_SM,
	GAUDI2_BMON_DCORE1_SM_1,
	GAUDI2_BMON_DCORE1_EDMA0_0,
	GAUDI2_BMON_DCORE1_EDMA0_1,
	GAUDI2_BMON_DCORE1_EDMA1_0,
	GAUDI2_BMON_DCORE1_EDMA1_1,
	GAUDI2_BMON_DCORE1_VDEC0_0,
	GAUDI2_BMON_DCORE1_VDEC0_1,
	GAUDI2_BMON_DCORE1_VDEC0_2,
	GAUDI2_BMON_DCORE1_VDEC1_0,
	GAUDI2_BMON_DCORE1_VDEC1_1,
	GAUDI2_BMON_DCORE1_VDEC1_2,
	GAUDI2_BMON_DCORE2_HMMU0_0,
	GAUDI2_BMON_DCORE2_HMMU0_1,
	GAUDI2_BMON_DCORE2_HMMU0_3,
	GAUDI2_BMON_DCORE2_HMMU0_2,
	GAUDI2_BMON_DCORE2_HMMU0_4,
	GAUDI2_BMON_DCORE2_HMMU1_0,
	GAUDI2_BMON_DCORE2_HMMU1_1,
	GAUDI2_BMON_DCORE2_HMMU1_3,
	GAUDI2_BMON_DCORE2_HMMU1_2,
	GAUDI2_BMON_DCORE2_HMMU1_4,
	GAUDI2_BMON_DCORE2_HMMU2_0,
	GAUDI2_BMON_DCORE2_HMMU2_1,
	GAUDI2_BMON_DCORE2_HMMU2_3,
	GAUDI2_BMON_DCORE2_HMMU2_2,
	GAUDI2_BMON_DCORE2_HMMU2_4,
	GAUDI2_BMON_DCORE2_HMMU3_0,
	GAUDI2_BMON_DCORE2_HMMU3_1,
	GAUDI2_BMON_DCORE2_HMMU3_3,
	GAUDI2_BMON_DCORE2_HMMU3_2,
	GAUDI2_BMON_DCORE2_HMMU3_4,
	GAUDI2_BMON_DCORE2_MME_CTRL_0,
	GAUDI2_BMON_DCORE2_MME_CTRL_1,
	GAUDI2_BMON_DCORE2_MME_CTRL_2,
	GAUDI2_BMON_DCORE2_MME_CTRL_3,
	GAUDI2_BMON_DCORE2_MME_SBTE0_0,
	GAUDI2_BMON_DCORE2_MME_SBTE1_0,
	GAUDI2_BMON_DCORE2_MME_SBTE2_0,
	GAUDI2_BMON_DCORE2_MME_SBTE3_0,
	GAUDI2_BMON_DCORE2_MME_SBTE4_0,
	GAUDI2_BMON_DCORE2_MME_ACC_0,
	GAUDI2_BMON_DCORE2_MME_ACC_1,
	GAUDI2_BMON_DCORE2_SM,
	GAUDI2_BMON_DCORE2_SM_1,
	GAUDI2_BMON_DCORE2_EDMA0_0,
	GAUDI2_BMON_DCORE2_EDMA0_1,
	GAUDI2_BMON_DCORE2_EDMA1_0,
	GAUDI2_BMON_DCORE2_EDMA1_1,
	GAUDI2_BMON_DCORE2_VDEC0_0,
	GAUDI2_BMON_DCORE2_VDEC0_1,
	GAUDI2_BMON_DCORE2_VDEC0_2,
	GAUDI2_BMON_DCORE2_VDEC1_0,
	GAUDI2_BMON_DCORE2_VDEC1_1,
	GAUDI2_BMON_DCORE2_VDEC1_2,
	GAUDI2_BMON_DCORE3_HMMU0_0,
	GAUDI2_BMON_DCORE3_HMMU0_1,
	GAUDI2_BMON_DCORE3_HMMU0_3,
	GAUDI2_BMON_DCORE3_HMMU0_2,
	GAUDI2_BMON_DCORE3_HMMU0_4,
	GAUDI2_BMON_DCORE3_HMMU1_0,
	GAUDI2_BMON_DCORE3_HMMU1_1,
	GAUDI2_BMON_DCORE3_HMMU1_3,
	GAUDI2_BMON_DCORE3_HMMU1_2,
	GAUDI2_BMON_DCORE3_HMMU1_4,
	GAUDI2_BMON_DCORE3_HMMU2_0,
	GAUDI2_BMON_DCORE3_HMMU2_1,
	GAUDI2_BMON_DCORE3_HMMU2_3,
	GAUDI2_BMON_DCORE3_HMMU2_2,
	GAUDI2_BMON_DCORE3_HMMU2_4,
	GAUDI2_BMON_DCORE3_HMMU3_0,
	GAUDI2_BMON_DCORE3_HMMU3_1,
	GAUDI2_BMON_DCORE3_HMMU3_3,
	GAUDI2_BMON_DCORE3_HMMU3_2,
	GAUDI2_BMON_DCORE3_HMMU3_4,
	GAUDI2_BMON_DCORE3_MME_CTRL_0,
	GAUDI2_BMON_DCORE3_MME_CTRL_1,
	GAUDI2_BMON_DCORE3_MME_CTRL_2,
	GAUDI2_BMON_DCORE3_MME_CTRL_3,
	GAUDI2_BMON_DCORE3_MME_SBTE0_0,
	GAUDI2_BMON_DCORE3_MME_SBTE1_0,
	GAUDI2_BMON_DCORE3_MME_SBTE2_0,
	GAUDI2_BMON_DCORE3_MME_SBTE3_0,
	GAUDI2_BMON_DCORE3_MME_SBTE4_0,
	GAUDI2_BMON_DCORE3_MME_ACC_0,
	GAUDI2_BMON_DCORE3_MME_ACC_1,
	GAUDI2_BMON_DCORE3_SM,
	GAUDI2_BMON_DCORE3_SM_1,
	GAUDI2_BMON_DCORE3_EDMA0_0,
	GAUDI2_BMON_DCORE3_EDMA0_1,
	GAUDI2_BMON_DCORE3_EDMA1_0,
	GAUDI2_BMON_DCORE3_EDMA1_1,
	GAUDI2_BMON_DCORE3_VDEC0_0,
	GAUDI2_BMON_DCORE3_VDEC0_1,
	GAUDI2_BMON_DCORE3_VDEC0_2,
	GAUDI2_BMON_DCORE3_VDEC1_0,
	GAUDI2_BMON_DCORE3_VDEC1_1,
	GAUDI2_BMON_DCORE3_VDEC1_2,
	GAUDI2_BMON_PCIE_MSTR_WR,
	GAUDI2_BMON_PCIE_MSTR_RD,
	GAUDI2_BMON_PCIE_SLV_WR,
	GAUDI2_BMON_PCIE_SLV_RD,
	GAUDI2_BMON_PSOC_ARC0_0,
	GAUDI2_BMON_PSOC_ARC0_1,
	GAUDI2_BMON_PSOC_ARC1_0,
	GAUDI2_BMON_PSOC_ARC1_1,
	GAUDI2_BMON_PDMA0_0,
	GAUDI2_BMON_PDMA0_1,
	GAUDI2_BMON_PDMA1_0,
	GAUDI2_BMON_PDMA1_1,
	GAUDI2_BMON_CPU_WR,
	GAUDI2_BMON_CPU_RD,
	GAUDI2_BMON_PMMU_0,
	GAUDI2_BMON_PMMU_1,
	GAUDI2_BMON_PMMU_2,
	GAUDI2_BMON_PMMU_3,
	GAUDI2_BMON_PMMU_4,
	GAUDI2_BMON_ROT0_0,
	GAUDI2_BMON_ROT0_1,
	GAUDI2_BMON_ROT0_2,
	GAUDI2_BMON_ROT0_3,
	GAUDI2_BMON_ROT1_0,
	GAUDI2_BMON_ROT1_1,
	GAUDI2_BMON_ROT1_2,
	GAUDI2_BMON_ROT1_3,
	GAUDI2_BMON_ARC_FARM_0,
	GAUDI2_BMON_ARC_FARM_1,
	GAUDI2_BMON_ARC_FARM_2,
	GAUDI2_BMON_ARC_FARM_3,
	GAUDI2_BMON_KDMA_0,
	GAUDI2_BMON_KDMA_1,
	GAUDI2_BMON_KDMA_2,
	GAUDI2_BMON_KDMA_3,
	GAUDI2_BMON_PCIE_VDEC0_0,
	GAUDI2_BMON_PCIE_VDEC0_1,
	GAUDI2_BMON_PCIE_VDEC0_2,
	GAUDI2_BMON_PCIE_VDEC1_0,
	GAUDI2_BMON_PCIE_VDEC1_1,
	GAUDI2_BMON_PCIE_VDEC1_2,
	GAUDI2_BMON_NIC0_DBG_0_0,
	GAUDI2_BMON_NIC0_DBG_1_0,
	GAUDI2_BMON_NIC0_DBG_2_0,
	GAUDI2_BMON_NIC0_DBG_0_1,
	GAUDI2_BMON_NIC0_DBG_1_1,
	GAUDI2_BMON_NIC0_DBG_2_1,
	GAUDI2_BMON_NIC1_DBG_0_0,
	GAUDI2_BMON_NIC1_DBG_1_0,
	GAUDI2_BMON_NIC1_DBG_2_0,
	GAUDI2_BMON_NIC1_DBG_0_1,
	GAUDI2_BMON_NIC1_DBG_1_1,
	GAUDI2_BMON_NIC1_DBG_2_1,
	GAUDI2_BMON_NIC2_DBG_0_0,
	GAUDI2_BMON_NIC2_DBG_1_0,
	GAUDI2_BMON_NIC2_DBG_2_0,
	GAUDI2_BMON_NIC2_DBG_0_1,
	GAUDI2_BMON_NIC2_DBG_1_1,
	GAUDI2_BMON_NIC2_DBG_2_1,
	GAUDI2_BMON_NIC3_DBG_0_0,
	GAUDI2_BMON_NIC3_DBG_1_0,
	GAUDI2_BMON_NIC3_DBG_2_0,
	GAUDI2_BMON_NIC3_DBG_0_1,
	GAUDI2_BMON_NIC3_DBG_1_1,
	GAUDI2_BMON_NIC3_DBG_2_1,
	GAUDI2_BMON_NIC4_DBG_0_0,
	GAUDI2_BMON_NIC4_DBG_1_0,
	GAUDI2_BMON_NIC4_DBG_2_0,
	GAUDI2_BMON_NIC4_DBG_0_1,
	GAUDI2_BMON_NIC4_DBG_1_1,
	GAUDI2_BMON_NIC4_DBG_2_1,
	GAUDI2_BMON_NIC5_DBG_0_0,
	GAUDI2_BMON_NIC5_DBG_1_0,
	GAUDI2_BMON_NIC5_DBG_2_0,
	GAUDI2_BMON_NIC5_DBG_0_1,
	GAUDI2_BMON_NIC5_DBG_1_1,
	GAUDI2_BMON_NIC5_DBG_2_1,
	GAUDI2_BMON_NIC6_DBG_0_0,
	GAUDI2_BMON_NIC6_DBG_1_0,
	GAUDI2_BMON_NIC6_DBG_2_0,
	GAUDI2_BMON_NIC6_DBG_0_1,
	GAUDI2_BMON_NIC6_DBG_1_1,
	GAUDI2_BMON_NIC6_DBG_2_1,
	GAUDI2_BMON_NIC7_DBG_0_0,
	GAUDI2_BMON_NIC7_DBG_1_0,
	GAUDI2_BMON_NIC7_DBG_2_0,
	GAUDI2_BMON_NIC7_DBG_0_1,
	GAUDI2_BMON_NIC7_DBG_1_1,
	GAUDI2_BMON_NIC7_DBG_2_1,
	GAUDI2_BMON_NIC8_DBG_0_0,
	GAUDI2_BMON_NIC8_DBG_1_0,
	GAUDI2_BMON_NIC8_DBG_2_0,
	GAUDI2_BMON_NIC8_DBG_0_1,
	GAUDI2_BMON_NIC8_DBG_1_1,
	GAUDI2_BMON_NIC8_DBG_2_1,
	GAUDI2_BMON_NIC9_DBG_0_0,
	GAUDI2_BMON_NIC9_DBG_1_0,
	GAUDI2_BMON_NIC9_DBG_2_0,
	GAUDI2_BMON_NIC9_DBG_0_1,
	GAUDI2_BMON_NIC9_DBG_1_1,
	GAUDI2_BMON_NIC9_DBG_2_1,
	GAUDI2_BMON_NIC10_DBG_0_0,
	GAUDI2_BMON_NIC10_DBG_1_0,
	GAUDI2_BMON_NIC10_DBG_2_0,
	GAUDI2_BMON_NIC10_DBG_0_1,
	GAUDI2_BMON_NIC10_DBG_1_1,
	GAUDI2_BMON_NIC10_DBG_2_1,
	GAUDI2_BMON_NIC11_DBG_0_0,
	GAUDI2_BMON_NIC11_DBG_1_0,
	GAUDI2_BMON_NIC11_DBG_2_0,
	GAUDI2_BMON_NIC11_DBG_0_1,
	GAUDI2_BMON_NIC11_DBG_1_1,
	GAUDI2_BMON_NIC11_DBG_2_1,
	GAUDI2_BMON_LAST = GAUDI2_BMON_NIC11_DBG_2_1
};

enum gaudi2_debug_spmu_regs_index {
	GAUDI2_SPMU_FIRST = 0,
	GAUDI2_SPMU_DCORE0_TPC0_EML = GAUDI2_SPMU_FIRST,
	GAUDI2_SPMU_DCORE0_TPC1_EML,
	GAUDI2_SPMU_DCORE0_TPC2_EML,
	GAUDI2_SPMU_DCORE0_TPC3_EML,
	GAUDI2_SPMU_DCORE0_TPC4_EML,
	GAUDI2_SPMU_DCORE0_TPC5_EML,
	GAUDI2_SPMU_DCORE0_TPC6_EML,
	GAUDI2_SPMU_DCORE1_TPC0_EML,
	GAUDI2_SPMU_DCORE1_TPC1_EML,
	GAUDI2_SPMU_DCORE1_TPC2_EML,
	GAUDI2_SPMU_DCORE1_TPC3_EML,
	GAUDI2_SPMU_DCORE1_TPC4_EML,
	GAUDI2_SPMU_DCORE1_TPC5_EML,
	GAUDI2_SPMU_DCORE2_TPC0_EML,
	GAUDI2_SPMU_DCORE2_TPC1_EML,
	GAUDI2_SPMU_DCORE2_TPC2_EML,
	GAUDI2_SPMU_DCORE2_TPC3_EML,
	GAUDI2_SPMU_DCORE2_TPC4_EML,
	GAUDI2_SPMU_DCORE2_TPC5_EML,
	GAUDI2_SPMU_DCORE3_TPC0_EML,
	GAUDI2_SPMU_DCORE3_TPC1_EML,
	GAUDI2_SPMU_DCORE3_TPC2_EML,
	GAUDI2_SPMU_DCORE3_TPC3_EML,
	GAUDI2_SPMU_DCORE3_TPC4_EML,
	GAUDI2_SPMU_DCORE3_TPC5_EML,
	GAUDI2_SPMU_DCORE0_HMMU0_CS,
	GAUDI2_SPMU_DCORE0_HMMU1_CS,
	GAUDI2_SPMU_DCORE0_HMMU2_CS,
	GAUDI2_SPMU_DCORE0_HMMU3_CS,
	GAUDI2_SPMU_DCORE0_MME_CTRL,
	GAUDI2_SPMU_DCORE0_MME_SBTE0,
	GAUDI2_SPMU_DCORE0_MME_SBTE1,
	GAUDI2_SPMU_DCORE0_MME_SBTE2,
	GAUDI2_SPMU_DCORE0_MME_SBTE3,
	GAUDI2_SPMU_DCORE0_MME_SBTE4,
	GAUDI2_SPMU_DCORE0_MME_ACC,
	GAUDI2_SPMU_DCORE0_SM,
	GAUDI2_SPMU_DCORE0_EDMA0_CS,
	GAUDI2_SPMU_DCORE0_EDMA1_CS,
	GAUDI2_SPMU_DCORE0_VDEC0_CS,
	GAUDI2_SPMU_DCORE0_VDEC1_CS,
	GAUDI2_SPMU_DCORE1_HMMU0_CS,
	GAUDI2_SPMU_DCORE1_HMMU1_CS,
	GAUDI2_SPMU_DCORE1_HMMU2_CS,
	GAUDI2_SPMU_DCORE1_HMMU3_CS,
	GAUDI2_SPMU_DCORE1_MME_CTRL,
	GAUDI2_SPMU_DCORE1_MME_SBTE0,
	GAUDI2_SPMU_DCORE1_MME_SBTE1,
	GAUDI2_SPMU_DCORE1_MME_SBTE2,
	GAUDI2_SPMU_DCORE1_MME_SBTE3,
	GAUDI2_SPMU_DCORE1_MME_SBTE4,
	GAUDI2_SPMU_DCORE1_MME_ACC,
	GAUDI2_SPMU_DCORE1_SM,
	GAUDI2_SPMU_DCORE1_EDMA0_CS,
	GAUDI2_SPMU_DCORE1_EDMA1_CS,
	GAUDI2_SPMU_DCORE1_VDEC0_CS,
	GAUDI2_SPMU_DCORE1_VDEC1_CS,
	GAUDI2_SPMU_DCORE2_HMMU0_CS,
	GAUDI2_SPMU_DCORE2_HMMU1_CS,
	GAUDI2_SPMU_DCORE2_HMMU2_CS,
	GAUDI2_SPMU_DCORE2_HMMU3_CS,
	GAUDI2_SPMU_DCORE2_MME_CTRL,
	GAUDI2_SPMU_DCORE2_MME_SBTE0,
	GAUDI2_SPMU_DCORE2_MME_SBTE1,
	GAUDI2_SPMU_DCORE2_MME_SBTE2,
	GAUDI2_SPMU_DCORE2_MME_SBTE3,
	GAUDI2_SPMU_DCORE2_MME_SBTE4,
	GAUDI2_SPMU_DCORE2_MME_ACC,
	GAUDI2_SPMU_DCORE2_SM,
	GAUDI2_SPMU_DCORE2_EDMA0_CS,
	GAUDI2_SPMU_DCORE2_EDMA1_CS,
	GAUDI2_SPMU_DCORE2_VDEC0_CS,
	GAUDI2_SPMU_DCORE2_VDEC1_CS,
	GAUDI2_SPMU_DCORE3_HMMU0_CS,
	GAUDI2_SPMU_DCORE3_HMMU1_CS,
	GAUDI2_SPMU_DCORE3_HMMU2_CS,
	GAUDI2_SPMU_DCORE3_HMMU3_CS,
	GAUDI2_SPMU_DCORE3_MME_CTRL,
	GAUDI2_SPMU_DCORE3_MME_SBTE0,
	GAUDI2_SPMU_DCORE3_MME_SBTE1,
	GAUDI2_SPMU_DCORE3_MME_SBTE2,
	GAUDI2_SPMU_DCORE3_MME_SBTE3,
	GAUDI2_SPMU_DCORE3_MME_SBTE4,
	GAUDI2_SPMU_DCORE3_MME_ACC,
	GAUDI2_SPMU_DCORE3_SM,
	GAUDI2_SPMU_DCORE3_EDMA0_CS,
	GAUDI2_SPMU_DCORE3_EDMA1_CS,
	GAUDI2_SPMU_DCORE3_VDEC0_CS,
	GAUDI2_SPMU_DCORE3_VDEC1_CS,
	GAUDI2_SPMU_PCIE,
	GAUDI2_SPMU_PSOC_ARC0_CS,
	GAUDI2_SPMU_PSOC_ARC1_CS,
	GAUDI2_SPMU_PDMA0_CS,
	GAUDI2_SPMU_PDMA1_CS,
	GAUDI2_SPMU_PMMU_CS,
	GAUDI2_SPMU_ROT0_CS,
	GAUDI2_SPMU_ROT1_CS,
	GAUDI2_SPMU_ARC_FARM_CS,
	GAUDI2_SPMU_KDMA_CS,
	GAUDI2_SPMU_PCIE_VDEC0_CS,
	GAUDI2_SPMU_PCIE_VDEC1_CS,
	GAUDI2_SPMU_HBM0_MC0_CS,
	GAUDI2_SPMU_HBM0_MC1_CS,
	GAUDI2_SPMU_HBM1_MC0_CS,
	GAUDI2_SPMU_HBM1_MC1_CS,
	GAUDI2_SPMU_HBM2_MC0_CS,
	GAUDI2_SPMU_HBM2_MC1_CS,
	GAUDI2_SPMU_HBM3_MC0_CS,
	GAUDI2_SPMU_HBM3_MC1_CS,
	GAUDI2_SPMU_HBM4_MC0_CS,
	GAUDI2_SPMU_HBM4_MC1_CS,
	GAUDI2_SPMU_HBM5_MC0_CS,
	GAUDI2_SPMU_HBM5_MC1_CS,
	GAUDI2_SPMU_NIC0_DBG_0,
	GAUDI2_SPMU_NIC0_DBG_1,
	GAUDI2_SPMU_NIC1_DBG_0,
	GAUDI2_SPMU_NIC1_DBG_1,
	GAUDI2_SPMU_NIC2_DBG_0,
	GAUDI2_SPMU_NIC2_DBG_1,
	GAUDI2_SPMU_NIC3_DBG_0,
	GAUDI2_SPMU_NIC3_DBG_1,
	GAUDI2_SPMU_NIC4_DBG_0,
	GAUDI2_SPMU_NIC4_DBG_1,
	GAUDI2_SPMU_NIC5_DBG_0,
	GAUDI2_SPMU_NIC5_DBG_1,
	GAUDI2_SPMU_NIC6_DBG_0,
	GAUDI2_SPMU_NIC6_DBG_1,
	GAUDI2_SPMU_NIC7_DBG_0,
	GAUDI2_SPMU_NIC7_DBG_1,
	GAUDI2_SPMU_NIC8_DBG_0,
	GAUDI2_SPMU_NIC8_DBG_1,
	GAUDI2_SPMU_NIC9_DBG_0,
	GAUDI2_SPMU_NIC9_DBG_1,
	GAUDI2_SPMU_NIC10_DBG_0,
	GAUDI2_SPMU_NIC10_DBG_1,
	GAUDI2_SPMU_NIC11_DBG_0,
	GAUDI2_SPMU_NIC11_DBG_1,
	GAUDI2_SPMU_LAST = GAUDI2_SPMU_NIC11_DBG_1
};

#endif /* GAUDI2_CORESIGHT_H */