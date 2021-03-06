    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; TX
TX__0__INTTYPE EQU CYREG_PICU12_INTTYPE7
TX__0__MASK EQU 0x80
TX__0__PC EQU CYREG_PRT12_PC7
TX__0__PORT EQU 12
TX__0__SHIFT EQU 7
TX__AG EQU CYREG_PRT12_AG
TX__BIE EQU CYREG_PRT12_BIE
TX__BIT_MASK EQU CYREG_PRT12_BIT_MASK
TX__BYP EQU CYREG_PRT12_BYP
TX__DM0 EQU CYREG_PRT12_DM0
TX__DM1 EQU CYREG_PRT12_DM1
TX__DM2 EQU CYREG_PRT12_DM2
TX__DR EQU CYREG_PRT12_DR
TX__INP_DIS EQU CYREG_PRT12_INP_DIS
TX__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
TX__MASK EQU 0x80
TX__PORT EQU 12
TX__PRT EQU CYREG_PRT12_PRT
TX__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
TX__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
TX__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
TX__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
TX__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
TX__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
TX__PS EQU CYREG_PRT12_PS
TX__SHIFT EQU 7
TX__SIO_CFG EQU CYREG_PRT12_SIO_CFG
TX__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
TX__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
TX__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
TX__SLW EQU CYREG_PRT12_SLW

; ADC_DEC
ADC_DEC__COHER EQU CYREG_DEC_COHER
ADC_DEC__CR EQU CYREG_DEC_CR
ADC_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DEC__PM_ACT_MSK EQU 0x01
ADC_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DEC__PM_STBY_MSK EQU 0x01
ADC_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DEC__SR EQU CYREG_DEC_SR
ADC_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8

; ADC_DSM
ADC_DSM__BUF0 EQU CYREG_DSM0_BUF0
ADC_DSM__BUF1 EQU CYREG_DSM0_BUF1
ADC_DSM__BUF2 EQU CYREG_DSM0_BUF2
ADC_DSM__BUF3 EQU CYREG_DSM0_BUF3
ADC_DSM__CLK EQU CYREG_DSM0_CLK
ADC_DSM__CR0 EQU CYREG_DSM0_CR0
ADC_DSM__CR1 EQU CYREG_DSM0_CR1
ADC_DSM__CR10 EQU CYREG_DSM0_CR10
ADC_DSM__CR11 EQU CYREG_DSM0_CR11
ADC_DSM__CR12 EQU CYREG_DSM0_CR12
ADC_DSM__CR13 EQU CYREG_DSM0_CR13
ADC_DSM__CR14 EQU CYREG_DSM0_CR14
ADC_DSM__CR15 EQU CYREG_DSM0_CR15
ADC_DSM__CR16 EQU CYREG_DSM0_CR16
ADC_DSM__CR17 EQU CYREG_DSM0_CR17
ADC_DSM__CR2 EQU CYREG_DSM0_CR2
ADC_DSM__CR3 EQU CYREG_DSM0_CR3
ADC_DSM__CR4 EQU CYREG_DSM0_CR4
ADC_DSM__CR5 EQU CYREG_DSM0_CR5
ADC_DSM__CR6 EQU CYREG_DSM0_CR6
ADC_DSM__CR7 EQU CYREG_DSM0_CR7
ADC_DSM__CR8 EQU CYREG_DSM0_CR8
ADC_DSM__CR9 EQU CYREG_DSM0_CR9
ADC_DSM__DEM0 EQU CYREG_DSM0_DEM0
ADC_DSM__DEM1 EQU CYREG_DSM0_DEM1
ADC_DSM__MISC EQU CYREG_DSM0_MISC
ADC_DSM__OUT0 EQU CYREG_DSM0_OUT0
ADC_DSM__OUT1 EQU CYREG_DSM0_OUT1
ADC_DSM__REF0 EQU CYREG_DSM0_REF0
ADC_DSM__REF1 EQU CYREG_DSM0_REF1
ADC_DSM__REF2 EQU CYREG_DSM0_REF2
ADC_DSM__REF3 EQU CYREG_DSM0_REF3
ADC_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DSM__SW0 EQU CYREG_DSM0_SW0
ADC_DSM__SW2 EQU CYREG_DSM0_SW2
ADC_DSM__SW3 EQU CYREG_DSM0_SW3
ADC_DSM__SW4 EQU CYREG_DSM0_SW4
ADC_DSM__SW6 EQU CYREG_DSM0_SW6
ADC_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DSM__TST0 EQU CYREG_DSM0_TST0
ADC_DSM__TST1 EQU CYREG_DSM0_TST1

; ADC_Ext_CP_Clk
ADC_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_Ext_CP_Clk__INDEX EQU 0x00
ADC_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_Ext_CP_Clk__PM_STBY_MSK EQU 0x01

; ADC_IRQ
ADC_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_IRQ__INTC_MASK EQU 0x20000000
ADC_IRQ__INTC_NUMBER EQU 29
ADC_IRQ__INTC_PRIOR_NUM EQU 7
ADC_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ADC_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; ADC_theACLK
ADC_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_theACLK__INDEX EQU 0x00
ADC_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_theACLK__PM_ACT_MSK EQU 0x01
ADC_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_theACLK__PM_STBY_MSK EQU 0x01

; Vhi
Vhi__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Vhi__0__MASK EQU 0x01
Vhi__0__PC EQU CYREG_PRT0_PC0
Vhi__0__PORT EQU 0
Vhi__0__SHIFT EQU 0
Vhi__AG EQU CYREG_PRT0_AG
Vhi__AMUX EQU CYREG_PRT0_AMUX
Vhi__BIE EQU CYREG_PRT0_BIE
Vhi__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Vhi__BYP EQU CYREG_PRT0_BYP
Vhi__CTL EQU CYREG_PRT0_CTL
Vhi__DM0 EQU CYREG_PRT0_DM0
Vhi__DM1 EQU CYREG_PRT0_DM1
Vhi__DM2 EQU CYREG_PRT0_DM2
Vhi__DR EQU CYREG_PRT0_DR
Vhi__INP_DIS EQU CYREG_PRT0_INP_DIS
Vhi__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Vhi__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Vhi__LCD_EN EQU CYREG_PRT0_LCD_EN
Vhi__MASK EQU 0x01
Vhi__PORT EQU 0
Vhi__PRT EQU CYREG_PRT0_PRT
Vhi__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Vhi__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Vhi__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Vhi__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Vhi__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Vhi__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Vhi__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Vhi__PS EQU CYREG_PRT0_PS
Vhi__SHIFT EQU 0
Vhi__SLW EQU CYREG_PRT0_SLW

; UART_BUART
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B1_UDB10_11_A0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B1_UDB10_11_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B1_UDB10_11_D0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B1_UDB10_11_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B1_UDB10_11_F0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B1_UDB10_11_F1
UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B1_UDB10_A0_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B1_UDB10_A0
UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B1_UDB10_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B1_UDB10_D0_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B1_UDB10_D0
UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B1_UDB10_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B1_UDB10_F0_F1
UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B1_UDB10_F0
UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B1_UDB10_F1
UART_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB11_A0_A1
UART_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B1_UDB11_A0
UART_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B1_UDB11_A1
UART_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB11_D0_D1
UART_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B1_UDB11_D0
UART_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B1_UDB11_D1
UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
UART_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB11_F0_F1
UART_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B1_UDB11_F0
UART_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B1_UDB11_F1
UART_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_BUART_sTX_TxSts__0__POS EQU 0
UART_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_BUART_sTX_TxSts__1__POS EQU 1
UART_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_BUART_sTX_TxSts__2__POS EQU 2
UART_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_BUART_sTX_TxSts__3__POS EQU 3
UART_BUART_sTX_TxSts__MASK EQU 0x0F
UART_BUART_sTX_TxSts__MASK_REG EQU CYREG_B1_UDB11_MSK
UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB11_ACTL
UART_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B1_UDB11_ST

; UART_IntClock
UART_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
UART_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
UART_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
UART_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_IntClock__INDEX EQU 0x01
UART_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_IntClock__PM_ACT_MSK EQU 0x02
UART_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_IntClock__PM_STBY_MSK EQU 0x02

; Vlow
Vlow__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
Vlow__0__MASK EQU 0x04
Vlow__0__PC EQU CYREG_PRT0_PC2
Vlow__0__PORT EQU 0
Vlow__0__SHIFT EQU 2
Vlow__AG EQU CYREG_PRT0_AG
Vlow__AMUX EQU CYREG_PRT0_AMUX
Vlow__BIE EQU CYREG_PRT0_BIE
Vlow__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Vlow__BYP EQU CYREG_PRT0_BYP
Vlow__CTL EQU CYREG_PRT0_CTL
Vlow__DM0 EQU CYREG_PRT0_DM0
Vlow__DM1 EQU CYREG_PRT0_DM1
Vlow__DM2 EQU CYREG_PRT0_DM2
Vlow__DR EQU CYREG_PRT0_DR
Vlow__INP_DIS EQU CYREG_PRT0_INP_DIS
Vlow__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Vlow__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Vlow__LCD_EN EQU CYREG_PRT0_LCD_EN
Vlow__MASK EQU 0x04
Vlow__PORT EQU 0
Vlow__PRT EQU CYREG_PRT0_PRT
Vlow__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Vlow__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Vlow__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Vlow__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Vlow__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Vlow__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Vlow__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Vlow__PS EQU CYREG_PRT0_PS
Vlow__SHIFT EQU 2
Vlow__SLW EQU CYREG_PRT0_SLW

; Opamp_ABuf
Opamp_ABuf__CR EQU CYREG_OPAMP2_CR
Opamp_ABuf__MX EQU CYREG_OPAMP2_MX
Opamp_ABuf__NPUMP_OPAMP_TR0 EQU CYREG_NPUMP_OPAMP_TR0
Opamp_ABuf__PM_ACT_CFG EQU CYREG_PM_ACT_CFG4
Opamp_ABuf__PM_ACT_MSK EQU 0x04
Opamp_ABuf__PM_STBY_CFG EQU CYREG_PM_STBY_CFG4
Opamp_ABuf__PM_STBY_MSK EQU 0x04
Opamp_ABuf__RSVD EQU CYREG_OPAMP2_RSVD
Opamp_ABuf__SW EQU CYREG_OPAMP2_SW
Opamp_ABuf__TR0 EQU CYREG_OPAMP2_TR0
Opamp_ABuf__TR1 EQU CYREG_OPAMP2_TR1

; VDAC8_viDAC8
VDAC8_viDAC8__CR0 EQU CYREG_DAC0_CR0
VDAC8_viDAC8__CR1 EQU CYREG_DAC0_CR1
VDAC8_viDAC8__D EQU CYREG_DAC0_D
VDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
VDAC8_viDAC8__PM_ACT_MSK EQU 0x01
VDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
VDAC8_viDAC8__PM_STBY_MSK EQU 0x01
VDAC8_viDAC8__STROBE EQU CYREG_DAC0_STROBE
VDAC8_viDAC8__SW0 EQU CYREG_DAC0_SW0
VDAC8_viDAC8__SW2 EQU CYREG_DAC0_SW2
VDAC8_viDAC8__SW3 EQU CYREG_DAC0_SW3
VDAC8_viDAC8__SW4 EQU CYREG_DAC0_SW4
VDAC8_viDAC8__TR EQU CYREG_DAC0_TR
VDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M1
VDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M2
VDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M3
VDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M4
VDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M5
VDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M6
VDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M7
VDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M8
VDAC8_viDAC8__TST EQU CYREG_DAC0_TST

; Vtherm
Vtherm__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Vtherm__0__MASK EQU 0x02
Vtherm__0__PC EQU CYREG_PRT0_PC1
Vtherm__0__PORT EQU 0
Vtherm__0__SHIFT EQU 1
Vtherm__AG EQU CYREG_PRT0_AG
Vtherm__AMUX EQU CYREG_PRT0_AMUX
Vtherm__BIE EQU CYREG_PRT0_BIE
Vtherm__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Vtherm__BYP EQU CYREG_PRT0_BYP
Vtherm__CTL EQU CYREG_PRT0_CTL
Vtherm__DM0 EQU CYREG_PRT0_DM0
Vtherm__DM1 EQU CYREG_PRT0_DM1
Vtherm__DM2 EQU CYREG_PRT0_DM2
Vtherm__DR EQU CYREG_PRT0_DR
Vtherm__INP_DIS EQU CYREG_PRT0_INP_DIS
Vtherm__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Vtherm__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Vtherm__LCD_EN EQU CYREG_PRT0_LCD_EN
Vtherm__MASK EQU 0x02
Vtherm__PORT EQU 0
Vtherm__PRT EQU CYREG_PRT0_PRT
Vtherm__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Vtherm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Vtherm__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Vtherm__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Vtherm__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Vtherm__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Vtherm__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Vtherm__PS EQU CYREG_PRT0_PS
Vtherm__SHIFT EQU 1
Vtherm__SLW EQU CYREG_PRT0_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_DMA EQU 1
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_DMA
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
