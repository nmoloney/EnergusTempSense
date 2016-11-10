/*******************************************************************************
* File Name: Vhi_2.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Vhi_2_H) /* Pins Vhi_2_H */
#define CY_PINS_Vhi_2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vhi_2_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vhi_2__PORT == 15 && ((Vhi_2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Vhi_2_Write(uint8 value) ;
void    Vhi_2_SetDriveMode(uint8 mode) ;
uint8   Vhi_2_ReadDataReg(void) ;
uint8   Vhi_2_Read(void) ;
uint8   Vhi_2_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Vhi_2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Vhi_2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Vhi_2_DM_RES_UP          PIN_DM_RES_UP
#define Vhi_2_DM_RES_DWN         PIN_DM_RES_DWN
#define Vhi_2_DM_OD_LO           PIN_DM_OD_LO
#define Vhi_2_DM_OD_HI           PIN_DM_OD_HI
#define Vhi_2_DM_STRONG          PIN_DM_STRONG
#define Vhi_2_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Vhi_2_MASK               Vhi_2__MASK
#define Vhi_2_SHIFT              Vhi_2__SHIFT
#define Vhi_2_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vhi_2_PS                     (* (reg8 *) Vhi_2__PS)
/* Data Register */
#define Vhi_2_DR                     (* (reg8 *) Vhi_2__DR)
/* Port Number */
#define Vhi_2_PRT_NUM                (* (reg8 *) Vhi_2__PRT) 
/* Connect to Analog Globals */                                                  
#define Vhi_2_AG                     (* (reg8 *) Vhi_2__AG)                       
/* Analog MUX bux enable */
#define Vhi_2_AMUX                   (* (reg8 *) Vhi_2__AMUX) 
/* Bidirectional Enable */                                                        
#define Vhi_2_BIE                    (* (reg8 *) Vhi_2__BIE)
/* Bit-mask for Aliased Register Access */
#define Vhi_2_BIT_MASK               (* (reg8 *) Vhi_2__BIT_MASK)
/* Bypass Enable */
#define Vhi_2_BYP                    (* (reg8 *) Vhi_2__BYP)
/* Port wide control signals */                                                   
#define Vhi_2_CTL                    (* (reg8 *) Vhi_2__CTL)
/* Drive Modes */
#define Vhi_2_DM0                    (* (reg8 *) Vhi_2__DM0) 
#define Vhi_2_DM1                    (* (reg8 *) Vhi_2__DM1)
#define Vhi_2_DM2                    (* (reg8 *) Vhi_2__DM2) 
/* Input Buffer Disable Override */
#define Vhi_2_INP_DIS                (* (reg8 *) Vhi_2__INP_DIS)
/* LCD Common or Segment Drive */
#define Vhi_2_LCD_COM_SEG            (* (reg8 *) Vhi_2__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vhi_2_LCD_EN                 (* (reg8 *) Vhi_2__LCD_EN)
/* Slew Rate Control */
#define Vhi_2_SLW                    (* (reg8 *) Vhi_2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vhi_2_PRTDSI__CAPS_SEL       (* (reg8 *) Vhi_2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vhi_2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vhi_2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vhi_2_PRTDSI__OE_SEL0        (* (reg8 *) Vhi_2__PRTDSI__OE_SEL0) 
#define Vhi_2_PRTDSI__OE_SEL1        (* (reg8 *) Vhi_2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vhi_2_PRTDSI__OUT_SEL0       (* (reg8 *) Vhi_2__PRTDSI__OUT_SEL0) 
#define Vhi_2_PRTDSI__OUT_SEL1       (* (reg8 *) Vhi_2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vhi_2_PRTDSI__SYNC_OUT       (* (reg8 *) Vhi_2__PRTDSI__SYNC_OUT) 


#if defined(Vhi_2__INTSTAT)  /* Interrupt Registers */

    #define Vhi_2_INTSTAT                (* (reg8 *) Vhi_2__INTSTAT)
    #define Vhi_2_SNAP                   (* (reg8 *) Vhi_2__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vhi_2_H */


/* [] END OF FILE */
