/*****************************************************************************
* File Name: main.c
*
* Version: 3.0
*
* Description:
*   The main C file for the Temperature measurement with Thermistor project. 
* 
* Note:
* 	The main project includes the ADC and other components required for the
*   temperature measurement. The Thermistor component is a complete firmware component
*   as decribed in the component datahseet and application note
******************************************************************************
* Copyright (C) 2015, Cypress Semiconductor Corporation.
******************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*****************************************************************************/
#include <device.h>
#include "removeOffsetNoise.h"
#include "measurement.h"
#include <stdio.h>
	
int main(void)
{
	/* Voltages across reference resistor and thermistor*/
	int32 iVref, iVtherm;
	
	/* Resistance of Thermistor*/
	uint32 iRes;
	
	/* Temperature value in 100ths of a degree C*/
	int32 iTemp;
    
    /*Decimal Temp*/
    int32 decTemp;
    
    /*Fractional Temp*/
    int32 fracTemp;
	
	/* Dispaly format string */
	char printBuf[16]={'\0'};

	/*Enable global interrupts*/
	CYGlobalIntEnable; 
	
	/*Start all the hardware components required*/
	ADC_Start();
	AMux_Start();
	VDAC8_Start();
	Opamp_Start();
    UART_Start();


	for(;;)
    {

    	/* Measure Voltage Across Thermistor*/
    	iVtherm = MeasureResistorVoltage(AMUX_1_VT); 
		
		/* Measure Voltage Across Reference Resistor*/
    	iVref = MeasureResistorVoltage(AMUX_1_VREF);

	   	/*Calculate the resistance of the Thermistor*/
		iRes = (int32)(((float)iVtherm / iVref) * REFERENCE_RESISTOR);
        
        /* Use the thermistor component API function call to obtain 
        the temperature corresponding to the resistance measured*/	
    	iTemp = Thermistor_GetTemperature(iRes);
        
    	/*Display -- For Debug*/	

    	/*Determine decimal portion of temperature by dividing temperature by 100*/
        decTemp = iTemp/100;
        
        /*Determine fraction portion of temperature by subtracting decimal portion from result*/
        fracTemp = iTemp - (decTemp * 100);
        /*If fractional temperature is negative make it positive*/
        if(fracTemp < 0)
        {
            fracTemp *= -1;
        }
        
        /*format string to print out over UART*/
        sprintf(printBuf, "Temp=%ld.%02ld    ", decTemp, fracTemp); 
		
        /*Print result over UART*/
        UART_PutString(printBuf);
        UART_PutString("\n\r");
        
    }
}

/* [] END OF FILE */
