/*******************************************************************************
* File Name: TempData_EEPROM.h
* Version 3.0
*
*  Description:
*   Provides the function definitions for the EEPROM APIs.
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_EEPROM_TempData_EEPROM_H)
#define CY_EEPROM_TempData_EEPROM_H

#include "cydevice_trm.h"
#include "CyFlash.h"

#if !defined(CY_PSOC5LP)
    #error Component EEPROM_v3_0 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void TempData_EEPROM_Enable(void) ;
void TempData_EEPROM_Start(void) ;
void TempData_EEPROM_Stop (void) ;
cystatus TempData_EEPROM_WriteByte(uint8 dataByte, uint16 address) \
                                            ;
uint8 TempData_EEPROM_ReadByte(uint16 address) ;
uint8 TempData_EEPROM_UpdateTemperature(void) ;
cystatus TempData_EEPROM_EraseSector(uint8 sectorNumber) ;
cystatus TempData_EEPROM_Write(const uint8 * rowData, uint8 rowNumber) ;
cystatus TempData_EEPROM_StartWrite(const uint8 * rowData, uint8 rowNumber) \
                                                ;
cystatus TempData_EEPROM_StartErase(uint8 sectorNumber) ;
cystatus TempData_EEPROM_Query(void) ;
cystatus TempData_EEPROM_ByteWritePos(uint8 dataByte, uint8 rowNumber, uint8 byteNumber) \
                                                ;


/****************************************
*           API Constants
****************************************/

#define TempData_EEPROM_EEPROM_SIZE            CYDEV_EE_SIZE
#define TempData_EEPROM_SPC_BYTE_WRITE_SIZE    (0x01u)

#define TempData_EEPROM_SECTORS_NUMBER         (CYDEV_EE_SIZE / CYDEV_EEPROM_SECTOR_SIZE)

#define TempData_EEPROM_AHB_REQ_SHIFT          (0x00u)
#define TempData_EEPROM_AHB_REQ                ((uint8)(0x01u << TempData_EEPROM_AHB_REQ_SHIFT))
#define TempData_EEPROM_AHB_ACK_SHIFT          (0x01u)
#define TempData_EEPROM_AHB_ACK_MASK           ((uint8)(0x01u << TempData_EEPROM_AHB_ACK_SHIFT))


/***************************************
* Registers
***************************************/
#define TempData_EEPROM_SPC_EE_SCR_REG                 (*(reg8 *) CYREG_SPC_EE_SCR)
#define TempData_EEPROM_SPC_EE_SCR_PTR                 ( (reg8 *) CYREG_SPC_EE_SCR)



/***************************************
* The following code is DEPRECATED and
* should not be used in new projects.
***************************************/
#define TempData_EEPROM_ByteWrite                  TempData_EEPROM_ByteWritePos
#define TempData_EEPROM_QueryWrite                 TempData_EEPROM_Query

#endif /* CY_EEPROM_TempData_EEPROM_H */

/* [] END OF FILE */
