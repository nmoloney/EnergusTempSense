/*******************************************************************************
* File Name: Reset_CNT.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Reset_CNT_H) /* Pins Reset_CNT_H */
#define CY_PINS_Reset_CNT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Reset_CNT_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Reset_CNT_Write(uint8 value) ;
void    Reset_CNT_SetDriveMode(uint8 mode) ;
uint8   Reset_CNT_ReadDataReg(void) ;
uint8   Reset_CNT_Read(void) ;
void    Reset_CNT_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   Reset_CNT_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Reset_CNT_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define Reset_CNT_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define Reset_CNT_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define Reset_CNT_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define Reset_CNT_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define Reset_CNT_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define Reset_CNT_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define Reset_CNT_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define Reset_CNT_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Reset_CNT_MASK               Reset_CNT__MASK
#define Reset_CNT_SHIFT              Reset_CNT__SHIFT
#define Reset_CNT_WIDTH              1u

/* Interrupt constants */
#if defined(Reset_CNT__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Reset_CNT_SetInterruptMode() function.
     *  @{
     */
        #define Reset_CNT_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define Reset_CNT_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define Reset_CNT_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define Reset_CNT_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define Reset_CNT_INTR_MASK      (0x01u)
#endif /* (Reset_CNT__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Reset_CNT_PS                     (* (reg8 *) Reset_CNT__PS)
/* Data Register */
#define Reset_CNT_DR                     (* (reg8 *) Reset_CNT__DR)
/* Port Number */
#define Reset_CNT_PRT_NUM                (* (reg8 *) Reset_CNT__PRT) 
/* Connect to Analog Globals */                                                  
#define Reset_CNT_AG                     (* (reg8 *) Reset_CNT__AG)                       
/* Analog MUX bux enable */
#define Reset_CNT_AMUX                   (* (reg8 *) Reset_CNT__AMUX) 
/* Bidirectional Enable */                                                        
#define Reset_CNT_BIE                    (* (reg8 *) Reset_CNT__BIE)
/* Bit-mask for Aliased Register Access */
#define Reset_CNT_BIT_MASK               (* (reg8 *) Reset_CNT__BIT_MASK)
/* Bypass Enable */
#define Reset_CNT_BYP                    (* (reg8 *) Reset_CNT__BYP)
/* Port wide control signals */                                                   
#define Reset_CNT_CTL                    (* (reg8 *) Reset_CNT__CTL)
/* Drive Modes */
#define Reset_CNT_DM0                    (* (reg8 *) Reset_CNT__DM0) 
#define Reset_CNT_DM1                    (* (reg8 *) Reset_CNT__DM1)
#define Reset_CNT_DM2                    (* (reg8 *) Reset_CNT__DM2) 
/* Input Buffer Disable Override */
#define Reset_CNT_INP_DIS                (* (reg8 *) Reset_CNT__INP_DIS)
/* LCD Common or Segment Drive */
#define Reset_CNT_LCD_COM_SEG            (* (reg8 *) Reset_CNT__LCD_COM_SEG)
/* Enable Segment LCD */
#define Reset_CNT_LCD_EN                 (* (reg8 *) Reset_CNT__LCD_EN)
/* Slew Rate Control */
#define Reset_CNT_SLW                    (* (reg8 *) Reset_CNT__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Reset_CNT_PRTDSI__CAPS_SEL       (* (reg8 *) Reset_CNT__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Reset_CNT_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Reset_CNT__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Reset_CNT_PRTDSI__OE_SEL0        (* (reg8 *) Reset_CNT__PRTDSI__OE_SEL0) 
#define Reset_CNT_PRTDSI__OE_SEL1        (* (reg8 *) Reset_CNT__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Reset_CNT_PRTDSI__OUT_SEL0       (* (reg8 *) Reset_CNT__PRTDSI__OUT_SEL0) 
#define Reset_CNT_PRTDSI__OUT_SEL1       (* (reg8 *) Reset_CNT__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Reset_CNT_PRTDSI__SYNC_OUT       (* (reg8 *) Reset_CNT__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Reset_CNT__SIO_CFG)
    #define Reset_CNT_SIO_HYST_EN        (* (reg8 *) Reset_CNT__SIO_HYST_EN)
    #define Reset_CNT_SIO_REG_HIFREQ     (* (reg8 *) Reset_CNT__SIO_REG_HIFREQ)
    #define Reset_CNT_SIO_CFG            (* (reg8 *) Reset_CNT__SIO_CFG)
    #define Reset_CNT_SIO_DIFF           (* (reg8 *) Reset_CNT__SIO_DIFF)
#endif /* (Reset_CNT__SIO_CFG) */

/* Interrupt Registers */
#if defined(Reset_CNT__INTSTAT)
    #define Reset_CNT_INTSTAT             (* (reg8 *) Reset_CNT__INTSTAT)
    #define Reset_CNT_SNAP                (* (reg8 *) Reset_CNT__SNAP)
    
	#define Reset_CNT_0_INTTYPE_REG 		(* (reg8 *) Reset_CNT__0__INTTYPE)
#endif /* (Reset_CNT__INTSTAT) */

#endif /* End Pins Reset_CNT_H */


/* [] END OF FILE */
