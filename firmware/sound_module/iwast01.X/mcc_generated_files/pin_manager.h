/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F18446
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set USER_LED aliases
#define USER_LED_TRIS                 TRISAbits.TRISA2
#define USER_LED_LAT                  LATAbits.LATA2
#define USER_LED_PORT                 PORTAbits.RA2
#define USER_LED_WPU                  WPUAbits.WPUA2
#define USER_LED_OD                   ODCONAbits.ODCA2
#define USER_LED_ANS                  ANSELAbits.ANSA2
#define USER_LED_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define USER_LED_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define USER_LED_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define USER_LED_GetValue()           PORTAbits.RA2
#define USER_LED_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define USER_LED_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define USER_LED_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define USER_LED_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define USER_LED_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define USER_LED_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define USER_LED_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define USER_LED_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISBbits.TRISB5
#define SDA1_LAT                  LATBbits.LATB5
#define SDA1_PORT                 PORTBbits.RB5
#define SDA1_WPU                  WPUBbits.WPUB5
#define SDA1_OD                   ODCONBbits.ODCB5
#define SDA1_ANS                  ANSELBbits.ANSB5
#define SDA1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define SDA1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define SDA1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define SDA1_GetValue()           PORTBbits.RB5
#define SDA1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define SDA1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define SDA1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define SDA1_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define SDA1_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set debugLed aliases
#define debugLed_TRIS                 TRISBbits.TRISB6
#define debugLed_LAT                  LATBbits.LATB6
#define debugLed_PORT                 PORTBbits.RB6
#define debugLed_WPU                  WPUBbits.WPUB6
#define debugLed_OD                   ODCONBbits.ODCB6
#define debugLed_ANS                  ANSELBbits.ANSB6
#define debugLed_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define debugLed_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define debugLed_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define debugLed_GetValue()           PORTBbits.RB6
#define debugLed_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define debugLed_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define debugLed_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define debugLed_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define debugLed_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define debugLed_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define debugLed_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define debugLed_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISBbits.TRISB7
#define SCL1_LAT                  LATBbits.LATB7
#define SCL1_PORT                 PORTBbits.RB7
#define SCL1_WPU                  WPUBbits.WPUB7
#define SCL1_OD                   ODCONBbits.ODCB7
#define SCL1_ANS                  ANSELBbits.ANSB7
#define SCL1_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define SCL1_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define SCL1_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define SCL1_GetValue()           PORTBbits.RB7
#define SCL1_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define SCL1_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define SCL1_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define SCL1_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define SCL1_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set powerMic aliases
#define powerMic_TRIS                 TRISCbits.TRISC0
#define powerMic_LAT                  LATCbits.LATC0
#define powerMic_PORT                 PORTCbits.RC0
#define powerMic_WPU                  WPUCbits.WPUC0
#define powerMic_OD                   ODCONCbits.ODCC0
#define powerMic_ANS                  ANSELCbits.ANSC0
#define powerMic_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define powerMic_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define powerMic_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define powerMic_GetValue()           PORTCbits.RC0
#define powerMic_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define powerMic_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define powerMic_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define powerMic_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define powerMic_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define powerMic_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define powerMic_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define powerMic_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set channel_ANC1 aliases
#define channel_ANC1_TRIS                 TRISCbits.TRISC1
#define channel_ANC1_LAT                  LATCbits.LATC1
#define channel_ANC1_PORT                 PORTCbits.RC1
#define channel_ANC1_WPU                  WPUCbits.WPUC1
#define channel_ANC1_OD                   ODCONCbits.ODCC1
#define channel_ANC1_ANS                  ANSELCbits.ANSC1
#define channel_ANC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define channel_ANC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define channel_ANC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define channel_ANC1_GetValue()           PORTCbits.RC1
#define channel_ANC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define channel_ANC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define channel_ANC1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define channel_ANC1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define channel_ANC1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define channel_ANC1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define channel_ANC1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define channel_ANC1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set USER_BUTTON aliases
#define USER_BUTTON_TRIS                 TRISCbits.TRISC2
#define USER_BUTTON_LAT                  LATCbits.LATC2
#define USER_BUTTON_PORT                 PORTCbits.RC2
#define USER_BUTTON_WPU                  WPUCbits.WPUC2
#define USER_BUTTON_OD                   ODCONCbits.ODCC2
#define USER_BUTTON_ANS                  ANSELCbits.ANSC2
#define USER_BUTTON_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define USER_BUTTON_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define USER_BUTTON_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define USER_BUTTON_GetValue()           PORTCbits.RC2
#define USER_BUTTON_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define USER_BUTTON_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define USER_BUTTON_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define USER_BUTTON_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define USER_BUTTON_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define USER_BUTTON_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define USER_BUTTON_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define USER_BUTTON_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set READY aliases
#define READY_TRIS                 TRISCbits.TRISC7
#define READY_LAT                  LATCbits.LATC7
#define READY_PORT                 PORTCbits.RC7
#define READY_WPU                  WPUCbits.WPUC7
#define READY_OD                   ODCONCbits.ODCC7
#define READY_ANS                  ANSELCbits.ANSC7
#define READY_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define READY_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define READY_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define READY_GetValue()           PORTCbits.RC7
#define READY_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define READY_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define READY_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define READY_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define READY_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define READY_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define READY_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define READY_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF7 pin functionality
 * @Example
    IOCBF7_ISR();
 */
void IOCBF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_InterruptHandler);

*/
extern void (*IOCBF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_DefaultInterruptHandler);

*/
void IOCBF7_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF2 pin functionality
 * @Example
    IOCCF2_ISR();
 */
void IOCCF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_InterruptHandler);

*/
extern void (*IOCCF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);

*/
void IOCCF2_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/