/* ###################################################################
 *      This component module is generated by Processor Expert. Do not modify it.
 *      Filename    : OLED_SPI.c
 *      Project     : HEXIWEAR_RTOS
 *      Processor   : MK64FN1M0VDC12
 *      Component   : fsl_dspi
 *      Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
 *      Repository  : KSDK 1.2.0
 *      Compiler    : GNU C Compiler
 *      Date/Time   : 2016-03-04, 12:30, # CodeGen: 0
 *
 *      Copyright : 1997 - 2015 NXP Semiconductor, Inc.
 *      All Rights Reserved.
 *
 *      Redistribution and use in source and binary forms, with or without modification,
 *      are permitted provided that the following conditions are met:
 *
 *      o Redistributions of source code must retain the above copyright notice, this list
 *        of conditions and the following disclaimer.
 *
 *      o Redistributions in binary form must reproduce the above copyright notice, this
 *        list of conditions and the following disclaimer in the documentation and/or
 *        other materials provided with the distribution.
 *
 *      o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *        contributors may be used to endorse or promote products derived from this
 *        software without specific prior written permission.
 *
 *      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *      ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *      WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *      DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 *      ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *      (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *      LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *      ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *      (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *      SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *      http: www.nxp.com
 *      mail: support@nxp.com
 *  ###################################################################*/
/*!
 *  @file OLED_SPI.c
 *  @version 01.00
 */
/*!
 *   @addtogroup OLED_SPI_module OLED_SPI module documentation
 *   @{
 */

 /** OLED_SPI. */

#include "Events.h"
#include "OLED_SPI.h"

dspi_edma_master_state_t OLED_SPI_MasterState;
edma_software_tcd_t OLED_SPI_dmaTcd __attribute__((aligned (32)));
uint32_t OLED_SPI_calculatedBaudRate = 0;

const dspi_edma_device_t OLED_SPI_BusConfig = {
  .bitsPerSec = 8000000U,
  .dataBusConfig.bitsPerFrame = 8U,
  .dataBusConfig.clkPolarity = kDspiClockPolarity_ActiveLow,
  .dataBusConfig.clkPhase = kDspiClockPhase_SecondEdge,
  .dataBusConfig.direction = kDspiMsbFirst,
};

const dspi_edma_master_user_config_t OLED_SPI_MasterConfig = {
  .whichCtar = kDspiCtar0,
  .isSckContinuous = false,
  .isChipSelectContinuous = false,
  .whichPcs = kDspiPcs0,
  .pcsPolarity = kDspiPcs_ActiveLow,
};


 /** END OLED_SPI. */

/*!
 *  @}
 */
/*
 *  ###################################################################
 *
 *      This file was created by Processor Expert 10.5 [05.21]
 *      for the NXP Kinetis series of microcontrollers.
 *
 *  ###################################################################
 */
