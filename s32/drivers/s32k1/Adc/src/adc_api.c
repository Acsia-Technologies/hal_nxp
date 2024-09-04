/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * NXP Confidential. This software is owned or controlled by NXP and may only be
 * used strictly in accordance with the applicable license terms. By expressly
 * accepting such terms or by downloading, installing, activating and/or
 * otherwise using the software, you are agreeing that you have read, and that
 * you agree to comply with and are bound by, such license terms. If you do not
 * agree to be bound by the applicable license terms, then you may not retain,
 * install, activate or otherwise use the software. The production use license
 * in Section 2.3 is expressly granted for this software.
 */
#include "adc_api.h"
#include "sdk_project_config.h"
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "devassert.h"



/* This example is setup to work by default with EVB. To use it with other
   boards please comment the following line
*/

//#define EVB //User Altered

// #ifdef EVB
// #define ADC_INSTANCE 0UL
// #define ADC_CHN ADC_INPUTCHAN_EXT12
// #define ADC_VREFH 5.0f
// #define ADC_VREFL 0.0f
// #else
#define ADC_INSTANCE 1UL
#define ADC_CHN ADC_INPUTCHAN_EXT0  //User Altered
#define ADC_VREFH 5.0f
#define ADC_VREFL 0.0f
// #endif

#define welcomeStr                                                             \
  "This is an ADC example, it will show you the value converted"               \
  "\r\nfrom ADC1 Input 11 (or ADC0 Input 12 for EVB )\r\n"
#define headerStr "ADC result: "

/* brief: Send a string to user via LPUART
 * param sourceStr: pointer to the array of characters
 *                  that you wish to send.
 * return:          None
 */

/*!
 \brief The main function for the project.
 \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
 */

float fResArray[100] = { 0 };

int adcTest(void) {
  /* Enable the floating point unit */
  // enableFPU();

  /* Write your local variable definition here */
  /* Variables in which we store data from ADC */
  uint16_t adcRawValue;
  uint16_t adcMax = 2714;
  float adcValue;
  static uint8_t ucIter = 0;
  static bool binitFlag = false;


  if (!binitFlag)
  {
      DEV_ASSERT(ADC_0_ChnConfig0.channel == ADC_CHN);
      ADC_DRV_ConfigConverter(ADC_INSTANCE, &ADC_0_ConvConfig0);
      ADC_DRV_AutoCalibration(ADC_INSTANCE);
      binitFlag = true;
  }

  /* Send a welcome message via LPUART */

  /* Infinite loop:
   *  - Trigger a new conversion
   *  - Wait and get the result
   *  - Make the value more user friendly
   *  - Send the data to LPUART
   */

  /* Configure ADC channel and software trigger a conversion */
  ADC_DRV_ConfigChan(ADC_INSTANCE, 0U, &ADC_0_ChnConfig0);
  /* Wait for the conversion to be done */
  ADC_DRV_WaitConvDone(ADC_INSTANCE);
  /* Store the channel result into a local variable */
  ADC_DRV_GetChanResult(ADC_INSTANCE, 0U, &adcRawValue);
  adcValue = ((float)adcRawValue / adcMax) * (ADC_VREFH - ADC_VREFL);

  // fResArray[ucIter++] = adcValue;

  // if(100 == ucIter)
  //   ucIter = 0;
  return adcRawValue;

}
