.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* UART_BUART */
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B0_UDB03_04_A0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B0_UDB03_04_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B0_UDB03_04_D0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B0_UDB03_04_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B0_UDB03_04_F0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B0_UDB03_04_F1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B0_UDB03_A0_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B0_UDB03_A0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B0_UDB03_A1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B0_UDB03_D0_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B0_UDB03_D0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B0_UDB03_D1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B0_UDB03_F0_F1
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B0_UDB03_F0
.set UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B0_UDB03_F1
.set UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG, CYREG_B0_UDB04_05_A0
.set UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG, CYREG_B0_UDB04_05_A1
.set UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG, CYREG_B0_UDB04_05_D0
.set UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG, CYREG_B0_UDB04_05_D1
.set UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB04_05_ACTL
.set UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG, CYREG_B0_UDB04_05_F0
.set UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG, CYREG_B0_UDB04_05_F1
.set UART_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B0_UDB04_A0_A1
.set UART_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B0_UDB04_A0
.set UART_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B0_UDB04_A1
.set UART_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B0_UDB04_D0_D1
.set UART_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B0_UDB04_D0
.set UART_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B0_UDB04_D1
.set UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B0_UDB04_ACTL
.set UART_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B0_UDB04_F0_F1
.set UART_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B0_UDB04_F0
.set UART_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B0_UDB04_F1
.set UART_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_BUART_sTX_TxSts__0__POS, 0
.set UART_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_BUART_sTX_TxSts__1__POS, 1
.set UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB03_04_ACTL
.set UART_BUART_sTX_TxSts__16BIT_STATUS_REG, CYREG_B0_UDB03_04_ST
.set UART_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_BUART_sTX_TxSts__2__POS, 2
.set UART_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_BUART_sTX_TxSts__3__POS, 3
.set UART_BUART_sTX_TxSts__MASK, 0x0F
.set UART_BUART_sTX_TxSts__MASK_REG, CYREG_B0_UDB03_MSK
.set UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B0_UDB03_ACTL
.set UART_BUART_sTX_TxSts__STATUS_REG, CYREG_B0_UDB03_ST

/* UART_IntClock */
.set UART_IntClock__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set UART_IntClock__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set UART_IntClock__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set UART_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_IntClock__INDEX, 0x01
.set UART_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_IntClock__PM_ACT_MSK, 0x02
.set UART_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_IntClock__PM_STBY_MSK, 0x02

/* Pin_1 */
.set Pin_1__0__INTTYPE, CYREG_PICU0_INTTYPE7
.set Pin_1__0__MASK, 0x80
.set Pin_1__0__PC, CYREG_PRT0_PC7
.set Pin_1__0__PORT, 0
.set Pin_1__0__SHIFT, 7
.set Pin_1__AG, CYREG_PRT0_AG
.set Pin_1__AMUX, CYREG_PRT0_AMUX
.set Pin_1__BIE, CYREG_PRT0_BIE
.set Pin_1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_1__BYP, CYREG_PRT0_BYP
.set Pin_1__CTL, CYREG_PRT0_CTL
.set Pin_1__DM0, CYREG_PRT0_DM0
.set Pin_1__DM1, CYREG_PRT0_DM1
.set Pin_1__DM2, CYREG_PRT0_DM2
.set Pin_1__DR, CYREG_PRT0_DR
.set Pin_1__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_1__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_1__MASK, 0x80
.set Pin_1__PORT, 0
.set Pin_1__PRT, CYREG_PRT0_PRT
.set Pin_1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_1__PS, CYREG_PRT0_PS
.set Pin_1__SHIFT, 7
.set Pin_1__SLW, CYREG_PRT0_SLW

/* Pin_2 */
.set Pin_2__0__INTTYPE, CYREG_PICU0_INTTYPE6
.set Pin_2__0__MASK, 0x40
.set Pin_2__0__PC, CYREG_PRT0_PC6
.set Pin_2__0__PORT, 0
.set Pin_2__0__SHIFT, 6
.set Pin_2__AG, CYREG_PRT0_AG
.set Pin_2__AMUX, CYREG_PRT0_AMUX
.set Pin_2__BIE, CYREG_PRT0_BIE
.set Pin_2__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_2__BYP, CYREG_PRT0_BYP
.set Pin_2__CTL, CYREG_PRT0_CTL
.set Pin_2__DM0, CYREG_PRT0_DM0
.set Pin_2__DM1, CYREG_PRT0_DM1
.set Pin_2__DM2, CYREG_PRT0_DM2
.set Pin_2__DR, CYREG_PRT0_DR
.set Pin_2__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_2__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_2__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_2__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_2__MASK, 0x40
.set Pin_2__PORT, 0
.set Pin_2__PRT, CYREG_PRT0_PRT
.set Pin_2__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_2__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_2__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_2__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_2__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_2__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_2__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_2__PS, CYREG_PRT0_PS
.set Pin_2__SHIFT, 6
.set Pin_2__SLW, CYREG_PRT0_SLW

/* Pin_3 */
.set Pin_3__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set Pin_3__0__MASK, 0x01
.set Pin_3__0__PC, CYREG_PRT0_PC0
.set Pin_3__0__PORT, 0
.set Pin_3__0__SHIFT, 0
.set Pin_3__AG, CYREG_PRT0_AG
.set Pin_3__AMUX, CYREG_PRT0_AMUX
.set Pin_3__BIE, CYREG_PRT0_BIE
.set Pin_3__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Pin_3__BYP, CYREG_PRT0_BYP
.set Pin_3__CTL, CYREG_PRT0_CTL
.set Pin_3__DM0, CYREG_PRT0_DM0
.set Pin_3__DM1, CYREG_PRT0_DM1
.set Pin_3__DM2, CYREG_PRT0_DM2
.set Pin_3__DR, CYREG_PRT0_DR
.set Pin_3__INP_DIS, CYREG_PRT0_INP_DIS
.set Pin_3__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Pin_3__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Pin_3__LCD_EN, CYREG_PRT0_LCD_EN
.set Pin_3__MASK, 0x01
.set Pin_3__PORT, 0
.set Pin_3__PRT, CYREG_PRT0_PRT
.set Pin_3__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Pin_3__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Pin_3__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Pin_3__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Pin_3__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Pin_3__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Pin_3__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Pin_3__PS, CYREG_PRT0_PS
.set Pin_3__SHIFT, 0
.set Pin_3__SLW, CYREG_PRT0_SLW

/* ADC_SAR_Seq_1_bSAR_SEQ */
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB07_08_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB07_08_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB07_08_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB07_08_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB07_08_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_MASK_MASK_REG, CYREG_B0_UDB07_08_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB07_08_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB07_08_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB07_08_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__CONTROL_AUX_CTL_REG, CYREG_B0_UDB07_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__CONTROL_REG, CYREG_B0_UDB07_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__CONTROL_ST_REG, CYREG_B0_UDB07_ST_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__COUNT_REG, CYREG_B0_UDB07_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__COUNT_ST_REG, CYREG_B0_UDB07_ST_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter__PERIOD_REG, CYREG_B0_UDB07_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB07_08_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__16BIT_STATUS_REG, CYREG_B0_UDB07_08_ST
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__MASK_REG, CYREG_B0_UDB07_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B0_UDB07_MSK_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__STATUS_AUX_CTL_REG, CYREG_B0_UDB07_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__STATUS_CNT_REG, CYREG_B0_UDB07_ST_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__STATUS_CONTROL_REG, CYREG_B0_UDB07_ST_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_ChannelCounter_ST__STATUS_REG, CYREG_B0_UDB07_ST
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__0__MASK, 0x01
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__0__POS, 0
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__1__MASK, 0x02
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__1__POS, 1
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB07_08_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB07_08_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB07_08_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB07_08_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB07_08_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_MASK_MASK_REG, CYREG_B1_UDB07_08_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB07_08_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB07_08_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB07_08_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB07_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__CONTROL_REG, CYREG_B1_UDB07_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__CONTROL_ST_REG, CYREG_B1_UDB07_ST_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__COUNT_REG, CYREG_B1_UDB07_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__COUNT_ST_REG, CYREG_B1_UDB07_ST_CTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__MASK, 0x03
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB07_MSK_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB07_MSK_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_CtrlReg__PERIOD_REG, CYREG_B1_UDB07_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_EOCSts__0__MASK, 0x01
.set ADC_SAR_Seq_1_bSAR_SEQ_EOCSts__0__POS, 0
.set ADC_SAR_Seq_1_bSAR_SEQ_EOCSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB04_05_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_EOCSts__16BIT_STATUS_REG, CYREG_B0_UDB04_05_ST
.set ADC_SAR_Seq_1_bSAR_SEQ_EOCSts__MASK, 0x01
.set ADC_SAR_Seq_1_bSAR_SEQ_EOCSts__MASK_REG, CYREG_B0_UDB04_MSK
.set ADC_SAR_Seq_1_bSAR_SEQ_EOCSts__STATUS_AUX_CTL_REG, CYREG_B0_UDB04_ACTL
.set ADC_SAR_Seq_1_bSAR_SEQ_EOCSts__STATUS_REG, CYREG_B0_UDB04_ST

/* ADC_SAR_Seq_1_FinalBuf */
.set ADC_SAR_Seq_1_FinalBuf__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set ADC_SAR_Seq_1_FinalBuf__DRQ_NUMBER, 0
.set ADC_SAR_Seq_1_FinalBuf__NUMBEROF_TDS, 0
.set ADC_SAR_Seq_1_FinalBuf__PRIORITY, 2
.set ADC_SAR_Seq_1_FinalBuf__TERMIN_EN, 0
.set ADC_SAR_Seq_1_FinalBuf__TERMIN_SEL, 0
.set ADC_SAR_Seq_1_FinalBuf__TERMOUT0_EN, 1
.set ADC_SAR_Seq_1_FinalBuf__TERMOUT0_SEL, 0
.set ADC_SAR_Seq_1_FinalBuf__TERMOUT1_EN, 0
.set ADC_SAR_Seq_1_FinalBuf__TERMOUT1_SEL, 0

/* ADC_SAR_Seq_1_IntClock */
.set ADC_SAR_Seq_1_IntClock__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ADC_SAR_Seq_1_IntClock__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ADC_SAR_Seq_1_IntClock__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ADC_SAR_Seq_1_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set ADC_SAR_Seq_1_IntClock__INDEX, 0x00
.set ADC_SAR_Seq_1_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_SAR_Seq_1_IntClock__PM_ACT_MSK, 0x01
.set ADC_SAR_Seq_1_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_SAR_Seq_1_IntClock__PM_STBY_MSK, 0x01

/* ADC_SAR_Seq_1_IRQ */
.set ADC_SAR_Seq_1_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_SAR_Seq_1_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_SAR_Seq_1_IRQ__INTC_MASK, 0x01
.set ADC_SAR_Seq_1_IRQ__INTC_NUMBER, 0
.set ADC_SAR_Seq_1_IRQ__INTC_PRIOR_NUM, 7
.set ADC_SAR_Seq_1_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ADC_SAR_Seq_1_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_SAR_Seq_1_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ADC_SAR_Seq_1_SAR_ADC_SAR */
.set ADC_SAR_Seq_1_SAR_ADC_SAR__CLK, CYREG_SAR1_CLK
.set ADC_SAR_Seq_1_SAR_ADC_SAR__CSR0, CYREG_SAR1_CSR0
.set ADC_SAR_Seq_1_SAR_ADC_SAR__CSR1, CYREG_SAR1_CSR1
.set ADC_SAR_Seq_1_SAR_ADC_SAR__CSR2, CYREG_SAR1_CSR2
.set ADC_SAR_Seq_1_SAR_ADC_SAR__CSR3, CYREG_SAR1_CSR3
.set ADC_SAR_Seq_1_SAR_ADC_SAR__CSR4, CYREG_SAR1_CSR4
.set ADC_SAR_Seq_1_SAR_ADC_SAR__CSR5, CYREG_SAR1_CSR5
.set ADC_SAR_Seq_1_SAR_ADC_SAR__CSR6, CYREG_SAR1_CSR6
.set ADC_SAR_Seq_1_SAR_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set ADC_SAR_Seq_1_SAR_ADC_SAR__PM_ACT_MSK, 0x02
.set ADC_SAR_Seq_1_SAR_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set ADC_SAR_Seq_1_SAR_ADC_SAR__PM_STBY_MSK, 0x02
.set ADC_SAR_Seq_1_SAR_ADC_SAR__SW0, CYREG_SAR1_SW0
.set ADC_SAR_Seq_1_SAR_ADC_SAR__SW2, CYREG_SAR1_SW2
.set ADC_SAR_Seq_1_SAR_ADC_SAR__SW3, CYREG_SAR1_SW3
.set ADC_SAR_Seq_1_SAR_ADC_SAR__SW4, CYREG_SAR1_SW4
.set ADC_SAR_Seq_1_SAR_ADC_SAR__SW6, CYREG_SAR1_SW6
.set ADC_SAR_Seq_1_SAR_ADC_SAR__TR0, CYREG_SAR1_TR0
.set ADC_SAR_Seq_1_SAR_ADC_SAR__WRK0, CYREG_SAR1_WRK0
.set ADC_SAR_Seq_1_SAR_ADC_SAR__WRK1, CYREG_SAR1_WRK1

/* ADC_SAR_Seq_1_SAR_Bypass */
.set ADC_SAR_Seq_1_SAR_Bypass__0__INTTYPE, CYREG_PICU0_INTTYPE2
.set ADC_SAR_Seq_1_SAR_Bypass__0__MASK, 0x04
.set ADC_SAR_Seq_1_SAR_Bypass__0__PC, CYREG_PRT0_PC2
.set ADC_SAR_Seq_1_SAR_Bypass__0__PORT, 0
.set ADC_SAR_Seq_1_SAR_Bypass__0__SHIFT, 2
.set ADC_SAR_Seq_1_SAR_Bypass__AG, CYREG_PRT0_AG
.set ADC_SAR_Seq_1_SAR_Bypass__AMUX, CYREG_PRT0_AMUX
.set ADC_SAR_Seq_1_SAR_Bypass__BIE, CYREG_PRT0_BIE
.set ADC_SAR_Seq_1_SAR_Bypass__BIT_MASK, CYREG_PRT0_BIT_MASK
.set ADC_SAR_Seq_1_SAR_Bypass__BYP, CYREG_PRT0_BYP
.set ADC_SAR_Seq_1_SAR_Bypass__CTL, CYREG_PRT0_CTL
.set ADC_SAR_Seq_1_SAR_Bypass__DM0, CYREG_PRT0_DM0
.set ADC_SAR_Seq_1_SAR_Bypass__DM1, CYREG_PRT0_DM1
.set ADC_SAR_Seq_1_SAR_Bypass__DM2, CYREG_PRT0_DM2
.set ADC_SAR_Seq_1_SAR_Bypass__DR, CYREG_PRT0_DR
.set ADC_SAR_Seq_1_SAR_Bypass__INP_DIS, CYREG_PRT0_INP_DIS
.set ADC_SAR_Seq_1_SAR_Bypass__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set ADC_SAR_Seq_1_SAR_Bypass__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set ADC_SAR_Seq_1_SAR_Bypass__LCD_EN, CYREG_PRT0_LCD_EN
.set ADC_SAR_Seq_1_SAR_Bypass__MASK, 0x04
.set ADC_SAR_Seq_1_SAR_Bypass__PORT, 0
.set ADC_SAR_Seq_1_SAR_Bypass__PRT, CYREG_PRT0_PRT
.set ADC_SAR_Seq_1_SAR_Bypass__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set ADC_SAR_Seq_1_SAR_Bypass__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set ADC_SAR_Seq_1_SAR_Bypass__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set ADC_SAR_Seq_1_SAR_Bypass__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set ADC_SAR_Seq_1_SAR_Bypass__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set ADC_SAR_Seq_1_SAR_Bypass__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set ADC_SAR_Seq_1_SAR_Bypass__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set ADC_SAR_Seq_1_SAR_Bypass__PS, CYREG_PRT0_PS
.set ADC_SAR_Seq_1_SAR_Bypass__SHIFT, 2
.set ADC_SAR_Seq_1_SAR_Bypass__SLW, CYREG_PRT0_SLW

/* ADC_SAR_Seq_1_TempBuf */
.set ADC_SAR_Seq_1_TempBuf__DRQ_CTL, CYREG_IDMUX_DRQ_CTL0
.set ADC_SAR_Seq_1_TempBuf__DRQ_NUMBER, 1
.set ADC_SAR_Seq_1_TempBuf__NUMBEROF_TDS, 0
.set ADC_SAR_Seq_1_TempBuf__PRIORITY, 2
.set ADC_SAR_Seq_1_TempBuf__TERMIN_EN, 0
.set ADC_SAR_Seq_1_TempBuf__TERMIN_SEL, 0
.set ADC_SAR_Seq_1_TempBuf__TERMOUT0_EN, 1
.set ADC_SAR_Seq_1_TempBuf__TERMOUT0_SEL, 1
.set ADC_SAR_Seq_1_TempBuf__TERMOUT1_EN, 0
.set ADC_SAR_Seq_1_TempBuf__TERMOUT1_SEL, 0

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 18
.set CYDEV_CHIP_DIE_PSOC4A, 10
.set CYDEV_CHIP_DIE_PSOC5LP, 17
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 10
.set CYDEV_CHIP_MEMBER_4C, 15
.set CYDEV_CHIP_MEMBER_4D, 6
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 11
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 9
.set CYDEV_CHIP_MEMBER_4I, 14
.set CYDEV_CHIP_MEMBER_4J, 7
.set CYDEV_CHIP_MEMBER_4K, 8
.set CYDEV_CHIP_MEMBER_4L, 13
.set CYDEV_CHIP_MEMBER_4M, 12
.set CYDEV_CHIP_MEMBER_4N, 5
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 17
.set CYDEV_CHIP_MEMBER_5B, 16
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000001
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000003
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
