/*******************************************************************************
* File Name: main.c
*
* Version: 1.20
*
* Description:
*  This example project demonstrates the usage of the EEPROM component. It
*  includes blocking and non-blocking APIs for reading, writing, and erasing the
*  EEPROM memory.
*
********************************************************************************
* Copyright 2012-2015, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/
#include <project.h>

/* Project defines and macro */
#define USED_EEPROM_SECTOR          (1u)
#define RESET_COUNTER_BYTE          ((USED_EEPROM_SECTOR * CYDEV_EEPROM_SECTOR_SIZE) + 0x00)
#define ERASE_COUNTER_BYTE          ((USED_EEPROM_SECTOR * CYDEV_EEPROM_SECTOR_SIZE) + 0x01)

#define LED_ON                      (1u)
#define LED_OFF                     (0u)

#define DEBOUNCE_DELAY_MS           (100u)


/* Function prototypes */
void LCD_PlaceString(uint8 row, uint8 column, char8 const string[]);
void handleLed(void);


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
* The main function performs the following functions:
*  1: Starts the EEPROM
*  2: Initializes the LCD
*  3: Prints a reset counter saved in the EEPROM and increments it
*  4: If a button is pressed, erases the EEPROM array and increments the erase
*     counter.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
int main()
{
    uint8 resetCounter = 0;
    uint8 eraseCounter = 0;
    uint8 eepromBusy = 0;
    
    /* Start EEPROM and Character LCD components */
    LCD_Start();
    EEPROM_Start();
    
    /* Clear LCD */
    LCD_ClearDisplay();

    CyGlobalIntEnable;
    
    /* Print header */
    LCD_PlaceString(0u, 0u, "EEPROM example");

    /* Read from EEPROM counters */
    resetCounter = EEPROM_ReadByte(RESET_COUNTER_BYTE);
    eraseCounter = EEPROM_ReadByte(ERASE_COUNTER_BYTE);
    
    /* Increment and save reset counter */
    resetCounter++;
    
    LED_BUSY_Write(LED_ON);
    EEPROM_WriteByte(resetCounter, RESET_COUNTER_BYTE);
    LED_BUSY_Write(LED_OFF);
    
    /* Print counters to LCD */
    LCD_PlaceString(1u, 0u, "RST=");
    LCD_PrintInt8(resetCounter);
    LCD_PlaceString(1u, 7u, "ERASE=");
    LCD_PrintInt8(eraseCounter);
    
    for(;;)
    {
        /* Erase counter button pressed */
        if((Reset_CNT_Read() == 0u)&&(eepromBusy == 0u))
        {
            /* Debounce erase button */
            CyDelay(DEBOUNCE_DELAY_MS);
            if((Reset_CNT_Read() == 0u)&&(eepromBusy == 0u))
            {
                /*
                Increment erase counter and trigger non-blocking erase for
                EEPROM sector that is being used.
                */
                eraseCounter++;
                EEPROM_StartErase(USED_EEPROM_SECTOR);
                LED_BUSY_Write(LED_ON);
                eepromBusy = 1u;
            }
        }
        
        /* Handle led indication */
        handleLed();
        
        /* Poll erase statue if it was started */
        if (eepromBusy == 1u)
        {
            if (CYRET_SUCCESS == EEPROM_Query())
            {
                /* Save erase counter and print values to LCD */
                EEPROM_WriteByte(eraseCounter, ERASE_COUNTER_BYTE);
                LED_BUSY_Write(LED_OFF);
                LCD_PlaceString(1u, 0u, "RST=");
                LCD_PrintInt8(EEPROM_ReadByte(RESET_COUNTER_BYTE));
                LCD_PlaceString(1u, 7u, "ERASE=");
                LCD_PrintInt8(eraseCounter);
                eepromBusy = 0u;
            }
        }
    }
}


/*******************************************************************************
* Function Name: LCD_PlaceString
********************************************************************************
*
* Summary:
*  Places a string to the specified location on the LCD.
*
* Parameters:
*  row:    The specific row of the LCD module to be written.
*  column: The column of the LCD module to be written
*  string: The pointer to the head of the char8 array to be written to the LCD
*          module
*
* Return:
*  None
*
*******************************************************************************/
void LCD_PlaceString(uint8 row, uint8 column, char8 const string[])
{
    LCD_Position(row, column);
    LCD_PrintString(string);
}


/*******************************************************************************
* Function Name: handleLed
********************************************************************************
*
* Summary:
*  Triggers a LED state each 32767th time that it is called
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void handleLed(void)
{
    static uint16 cnt = 0u;

    if (cnt == 32767)
    {
        LED_Write(~LED_Read());
        cnt = 0u;
    }
    else
    {
        cnt++;
    }
}

/* [] END OF FILE */
