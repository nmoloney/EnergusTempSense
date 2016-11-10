/*******************************************************************************
* File Name: LED_BUSY.h  
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

#if !defined(CY_PINS_LED_BUSY_H) /* Pins LED_BUSY_H */
#define CY_PINS_LED_BUSY_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LED_BUSY_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LED_BUSY_Write(uint8 value) ;
void    LED_BUSY_SetDriveMode(uint8 mode) ;
uint8   LED_BUSY_ReadDataReg(void) ;
uint8   LED_BUSY_Read(void) ;
void    LED_BUSY_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   LED_BUSY_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LED_BUSY_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define LED_BUSY_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define LED_BUSY_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define LED_BUSY_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define LED_BUSY_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define LED_BUSY_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define LED_BUSY_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define LED_BUSY_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define LED_BUSY_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LED_BUSY_MASK               LED_BUSY__MASK
#define LED_BUSY_SHIFT              LED_BUSY__SHIFT
#define LED_BUSY_WIDTH              1u

/* Interrupt constants */
#if defined(LED_BUSY__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LED_BUSY_SetInterruptMode() function.
     *  @{
     */
        #define LED_BUSY_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define LED_BUSY_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define LED_BUSY_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define LED_BUSY_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define LED_BUSY_INTR_MASK      (0x01u)
#endif /* (LED_BUSY__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LED_BUSY_PS                     (* (reg8 *) LED_BUSY__PS)
/* Data Register */
#define LED_BUSY_DR                     (* (reg8 *) LED_BUSY__DR)
/* Port Number */
#define LED_BUSY_PRT_NUM                (* (reg8 *) LED_BUSY__PRT) 
/* Connect to Analog Globals */                                                  
#define LED_BUSY_AG                     (* (reg8 *) LED_BUSY__AG)                       
/* Analog MUX bux enable */
#define LED_BUSY_AMUX                   (* (reg8 *) LED_BUSY__AMUX) 
/* Bidirectional Enable */                                                        
#define LED_BUSY_BIE                    (* (reg8 *) LED_BUSY__BIE)
/* Bit-mask for Aliased Register Access */
#define LED_BUSY_BIT_MASK               (* (reg8 *) LED_BUSY__BIT_MASK)
/* Bypass Enable */
#define LED_BUSY_BYP                    (* (reg8 *) LED_BUSY__BYP)
/* Port wide control signals */                                                   
#define LED_BUSY_CTL                    (* (reg8 *) LED_BUSY__CTL)
/* Drive Modes */
#define LED_BUSY_DM0                    (* (reg8 *) LED_BUSY__DM0) 
#define LED_BUSY_DM1                    (* (reg8 *) LED_BUSY__DM1)
#define LED_BUSY_DM2                    (* (reg8 *) LED_BUSY__DM2) 
/* Input Buffer Disable Override */
#define LED_BUSY_INP_DIS                (* (reg8 *) LED_BUSY__INP_DIS)
/* LCD Common or Segment Drive */
#define LED_BUSY_LCD_COM_SEG            (* (reg8 *) LED_BUSY__LCD_COM_SEG)
/* Enable Segment LCD */
#define LED_BUSY_LCD_EN                 (* (reg8 *) LED_BUSY__LCD_EN)
/* Slew Rate Control */
#define LED_BUSY_SLW                    (* (reg8 *) LED_BUSY__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LED_BUSY_PRTDSI__CAPS_SEL       (* (reg8 *) LED_BUSY__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LED_BUSY_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LED_BUSY__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LED_BUSY_PRTDSI__OE_SEL0        (* (reg8 *) LED_BUSY__PRTDSI__OE_SEL0) 
#define LED_BUSY_PRTDSI__OE_SEL1        (* (reg8 *) LED_BUSY__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LED_BUSY_PRTDSI__OUT_SEL0       (* (reg8 *) LED_BUSY__PRTDSI__OUT_SEL0) 
#define LED_BUSY_PRTDSI__OUT_SEL1       (* (reg8 *) LED_BUSY__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LED_BUSY_PRTDSI__SYNC_OUT       (* (reg8 *) LED_BUSY__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LED_BUSY__SIO_CFG)
    #define LED_BUSY_SIO_HYST_EN        (* (reg8 *) LED_BUSY__SIO_HYST_EN)
    #define LED_BUSY_SIO_REG_HIFREQ     (* (reg8 *) LED_BUSY__SIO_REG_HIFREQ)
    #define LED_BUSY_SIO_CFG            (* (reg8 *) LED_BUSY__SIO_CFG)
    #define LED_BUSY_SIO_DIFF           (* (reg8 *) LED_BUSY__SIO_DIFF)
#endif /* (LED_BUSY__SIO_CFG) */

/* Interrupt Registers */
#if defined(LED_BUSY__INTSTAT)
    #define LED_BUSY_INTSTAT             (* (reg8 *) LED_BUSY__INTSTAT)
    #define LED_BUSY_SNAP                (* (reg8 *) LED_BUSY__SNAP)
    
	#define LED_BUSY_0_INTTYPE_REG 		(* (reg8 *) LED_BUSY__0__INTTYPE)
#endif /* (LED_BUSY__INTSTAT) */

#endif /* End Pins LED_BUSY_H */


/* [] END OF FILE */
