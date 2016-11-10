/*******************************************************************************
* File Name: Vhi_2.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Vhi_2.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 Vhi_2__PORT == 15 && ((Vhi_2__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: Vhi_2_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void Vhi_2_Write(uint8 value) 
{
    uint8 staticBits = (Vhi_2_DR & (uint8)(~Vhi_2_MASK));
    Vhi_2_DR = staticBits | ((uint8)(value << Vhi_2_SHIFT) & Vhi_2_MASK);
}


/*******************************************************************************
* Function Name: Vhi_2_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Vhi_2_DM_STRONG     Strong Drive 
*  Vhi_2_DM_OD_HI      Open Drain, Drives High 
*  Vhi_2_DM_OD_LO      Open Drain, Drives Low 
*  Vhi_2_DM_RES_UP     Resistive Pull Up 
*  Vhi_2_DM_RES_DWN    Resistive Pull Down 
*  Vhi_2_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Vhi_2_DM_DIG_HIZ    High Impedance Digital 
*  Vhi_2_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Vhi_2_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Vhi_2_0, mode);
}


/*******************************************************************************
* Function Name: Vhi_2_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Vhi_2_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Vhi_2_Read(void) 
{
    return (Vhi_2_PS & Vhi_2_MASK) >> Vhi_2_SHIFT;
}


/*******************************************************************************
* Function Name: Vhi_2_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Vhi_2_ReadDataReg(void) 
{
    return (Vhi_2_DR & Vhi_2_MASK) >> Vhi_2_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Vhi_2_INTSTAT) 

    /*******************************************************************************
    * Function Name: Vhi_2_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Vhi_2_ClearInterrupt(void) 
    {
        return (Vhi_2_INTSTAT & Vhi_2_MASK) >> Vhi_2_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
