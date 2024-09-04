/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause.
 */

#ifndef _S32K144_FEATURES_H_
#define _S32K144_FEATURES_H_

/* SOC module features */

/* @brief SYSMPU availability on the SoC. */
#define FSL_FEATURE_SOC_SYSMPU_COUNT (1)
/* @brief PORT availability on the SoC. */
#define FSL_FEATURE_SOC_PORT_COUNT (5)
/* @brief GPIO availability on the SoC. */
#define FSL_FEATURE_SOC_GPIO_COUNT (5)
/* @brief LPUART availability on the SoC. */
#define FSL_FEATURE_SOC_LPUART_COUNT (3)
/* @brief LPI2C availability on the SoC. */
#define FSL_FEATURE_SOC_LPI2C_COUNT (1)
/* @brief LPSPI availability on the SoC. */
#define FSL_FEATURE_SOC_LPSPI_COUNT (3)
/* @brief LMEM availability on the SoC. */
#define FSL_FEATURE_SOC_LMEM_COUNT (1)

/* SYSMPU module features */

/* @brief Specifies number of descriptors available. */
#define FSL_FEATURE_SYSMPU_DESCRIPTOR_COUNT (8)
/* @brief Has process identifier support. */
#define FSL_FEATURE_SYSMPU_HAS_PROCESS_IDENTIFIER (1)
/* @brief Total number of MPU slave. */
#define FSL_FEATURE_SYSMPU_SLAVE_COUNT (4)
/* @brief Total number of MPU master. */
#define FSL_FEATURE_SYSMPU_MASTER_COUNT (4)

/* PORT module features */

/* @brief Has control lock (register bit PCR[LK]). */
#define FSL_FEATURE_PORT_HAS_PIN_CONTROL_LOCK (1)
/* @brief Has open drain control (register bit PCR[ODE]). */
#define FSL_FEATURE_PORT_HAS_OPEN_DRAIN (0)
/* @brief Has digital filter (registers DFER, DFCR and DFWR). */
#define FSL_FEATURE_PORT_HAS_DIGITAL_FILTER (1)
/* @brief Has DMA request (register bit field PCR[IRQC] values). */
#define FSL_FEATURE_PORT_HAS_DMA_REQUEST (1)
/* @brief Has pull resistor selection available. */
#define FSL_FEATURE_PORT_HAS_PULL_SELECTION (1)
/* @brief Has pull resistor enable (register bit PCR[PE]). */
#define FSL_FEATURE_PORT_HAS_PULL_ENABLE (1)
/* @brief Has slew rate control (register bit PCR[SRE]). */
#define FSL_FEATURE_PORT_HAS_SLEW_RATE (0)
/* @brief Has passive filter (register bit field PCR[PFE]). */
#define FSL_FEATURE_PORT_HAS_PASSIVE_FILTER (1)
/* @brief Has drive strength control (register bit PCR[DSE]). */
#define FSL_FEATURE_PORT_HAS_DRIVE_STRENGTH (1)
/* @brief Has separate drive strength register (HDRVE). */
#define FSL_FEATURE_PORT_HAS_DRIVE_STRENGTH_REGISTER (0)
/* @brief Has glitch filter (register IOFLT). */
#define FSL_FEATURE_PORT_HAS_GLITCH_FILTER (0)
/* @brief Defines width of PCR[MUX] field. */
#define FSL_FEATURE_PORT_PCR_MUX_WIDTH (3)
/* @brief Has dedicated interrupt vector. */
#define FSL_FEATURE_PORT_HAS_INTERRUPT_VECTOR (1)
/* @brief Has multiple pin IRQ configuration (register GICLR and GICHR). */
#define FSL_FEATURE_PORT_HAS_MULTIPLE_IRQ_CONFIG (1)
/* @brief Defines whether PCR[IRQC] bit-field has flag states. */
#define FSL_FEATURE_PORT_HAS_IRQC_FLAG (0)
/* @brief Defines whether PCR[IRQC] bit-field has trigger states. */
#define FSL_FEATURE_PORT_HAS_IRQC_TRIGGER (0)

/* GPIO module features */

/* @brief Has GPIO attribute checker register (GACR). */
#define FSL_FEATURE_GPIO_HAS_ATTRIBUTE_CHECKER (0)

/* LPUART module features */

// /* @brief Has receive FIFO overflow detection (bit field CFIFO[RXOFE]). */
#define FSL_FEATURE_LPUART_HAS_IRQ_EXTENDED_FUNCTIONS (0)
// /* @brief Has low power features (can be enabled in wait mode via register bit C1[DOZEEN] or CTRL[DOZEEN] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_LOW_POWER_UART_SUPPORT (1)
// /* @brief Has extended data register ED (or extra flags in the DATA register if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_EXTENDED_DATA_REGISTER_FLAGS (0)
// /* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPUART_HAS_FIFO (1)
// /* @brief Has 32-bit register MODIR */
#define FSL_FEATURE_LPUART_HAS_MODIR (1)
// /* @brief Hardware flow control (RTS, CTS) is supported. */
#define FSL_FEATURE_LPUART_HAS_MODEM_SUPPORT (1)
// /* @brief Infrared (modulation) is supported. */
#define FSL_FEATURE_LPUART_HAS_IR_SUPPORT (1)
// /* @brief 2 bits long stop bit is available. */
#define FSL_FEATURE_LPUART_HAS_STOP_BIT_CONFIG_SUPPORT (1)
// /* @brief If 10-bit mode is supported. */
#define FSL_FEATURE_LPUART_HAS_10BIT_DATA_SUPPORT (1)
// /* @brief If 7-bit mode is supported. */
#define FSL_FEATURE_LPUART_HAS_7BIT_DATA_SUPPORT (1)
// /* @brief Baud rate fine adjustment is available. */
#define FSL_FEATURE_LPUART_HAS_BAUD_RATE_FINE_ADJUST_SUPPORT (0)
// /* @brief Baud rate oversampling is available (has bit fields C4[OSR], C5[BOTHEDGE], C5[RESYNCDIS] or BAUD[OSR], BAUD[BOTHEDGE], BAUD[RESYNCDIS] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_BAUD_RATE_OVER_SAMPLING_SUPPORT (1)
// /* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_LPUART_HAS_RX_RESYNC_SUPPORT (1)
// /* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_LPUART_HAS_BOTH_EDGE_SAMPLING_SUPPORT (1)
// /* @brief Peripheral type. */
#define FSL_FEATURE_LPUART_IS_SCI (1)
// /* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPUART_FIFO_SIZEn(x) (4)
// /* @brief Supports two match addresses to filter incoming frames. */
#define FSL_FEATURE_LPUART_HAS_ADDRESS_MATCHING (1)
// /* @brief Has transmitter/receiver DMA enable bits C5[TDMAE]/C5[RDMAE] (or BAUD[TDMAE]/BAUD[RDMAE] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_DMA_ENABLE (1)
// /* @brief Has transmitter/receiver DMA select bits C4[TDMAS]/C4[RDMAS], resp. C5[TDMAS]/C5[RDMAS] if IS_SCI = 0. */
#define FSL_FEATURE_LPUART_HAS_DMA_SELECT (0)
// /* @brief Data character bit order selection is supported (bit field S2[MSBF] or STAT[MSBF] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_BIT_ORDER_SELECT (1)
// /* @brief Has smart card (ISO7816 protocol) support and no improved smart card support. */
#define FSL_FEATURE_LPUART_HAS_SMART_CARD_SUPPORT (0)
// /* @brief Has improved smart card (ISO7816 protocol) support. */
#define FSL_FEATURE_LPUART_HAS_IMPROVED_SMART_CARD_SUPPORT (0)
// /* @brief Has local operation network (CEA709.1-B protocol) support. */
#define FSL_FEATURE_LPUART_HAS_LOCAL_OPERATION_NETWORK_SUPPORT (0)
// /* @brief Has 32-bit registers (BAUD, STAT, CTRL, DATA, MATCH, MODIR) instead of 8-bit (BDH, BDL, C1, S1, D, etc.). */
#define FSL_FEATURE_LPUART_HAS_32BIT_REGISTERS (1)
// /* @brief Lin break detect available (has bit BAUD[LBKDIE]). */
#define FSL_FEATURE_LPUART_HAS_LIN_BREAK_DETECT (1)
// /* @brief UART stops in Wait mode available (has bit C1[UARTSWAI]). */
#define FSL_FEATURE_LPUART_HAS_WAIT_MODE_OPERATION (0)
// /* @brief Has separate DMA RX and TX requests. */
#define FSL_FEATURE_LPUART_HAS_SEPARATE_DMA_RX_TX_REQn(x) (0)
// /* @brief Has separate RX and TX interrupts. */
#define FSL_FEATURE_LPUART_HAS_SEPARATE_RX_TX_IRQ (0)
// /* @brief Has LPAURT_PARAM. */
#define FSL_FEATURE_LPUART_HAS_PARAM (1)
// /* @brief Has LPUART_VERID. */
#define FSL_FEATURE_LPUART_HAS_VERID (1)
// /* @brief Has LPUART_GLOBAL. */
#define FSL_FEATURE_LPUART_HAS_GLOBAL (1)
// /* @brief Has LPUART_PINCFG. */
#define FSL_FEATURE_LPUART_HAS_PINCFG (1)

/* LPI2C module features */

// /* @brief Has separate DMA RX and TX requests. */
#define FSL_FEATURE_LPI2C_HAS_SEPARATE_DMA_RX_TX_REQn(x) (1)
// /* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPI2C_FIFO_SIZEn(x) (4)

/* LPSPI module features */

// /* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPSPI_FIFO_SIZEn(x) (4)
// /* @brief Has separate DMA RX and TX requests. */
#define FSL_FEATURE_LPSPI_HAS_SEPARATE_DMA_RX_TX_REQn(x) (1)
// /* @brief Has CCR1 (related to existence of registers CCR1). */
#define FSL_FEATURE_LPSPI_HAS_CCR1 (0)

/* LMEM module features */

/* @brief Has process identifier support. */
#define FSL_FEATURE_LMEM_HAS_SYSTEMBUS_CACHE (0)
// /* @brief Has L1 cache. */
#define FSL_FEATURE_HAS_L1CACHE (1)
// /* @brief L1 ICACHE line size in byte. */
#define FSL_FEATURE_L1ICACHE_LINESIZE_BYTE (16)
// /* @brief L1 DCACHE line size in byte. */
#define FSL_FEATURE_L1DCACHE_LINESIZE_BYTE (16)


// /* FTM module features */

// /* @brief Number of channels. */
#define FSL_FEATURE_FTM_CHANNEL_COUNTn(x) (8)
// /* @brief Has counter reset by the selected input capture event (register bits C0SC[ICRST], C1SC[ICRST], ...). */
#define FSL_FEATURE_FTM_HAS_COUNTER_RESET_BY_CAPTURE_EVENT (1)
// /* @brief Has extended deadtime value. */
#define FSL_FEATURE_FTM_HAS_EXTENDED_DEADTIME_VALUE (1)
// /* @brief Enable pwm output for the module. */
#define FSL_FEATURE_FTM_HAS_ENABLE_PWM_OUTPUT (1)
// /* @brief Has half-cycle reload for the module. */
#define FSL_FEATURE_FTM_HAS_HALFCYCLE_RELOAD (1)
// /* @brief Has reload interrupt. */
#define FSL_FEATURE_FTM_HAS_RELOAD_INTERRUPT (1)
// /* @brief Has reload initialization trigger. */
#define FSL_FEATURE_FTM_HAS_RELOAD_INITIALIZATION_TRIGGER (1)
// /* @brief Has DMA support, bitfield CnSC[DMA]. */
#define FSL_FEATURE_FTM_HAS_DMA_SUPPORT (1)
// /* @brief If channel 6 is used to generate channel trigger, bitfield EXTTRIG[CH6TRIG]. */
#define FSL_FEATURE_FTM_HAS_CHANNEL6_TRIGGER (1)
// /* @brief If channel 7 is used to generate channel trigger, bitfield EXTTRIG[CH7TRIG]. */
#define FSL_FEATURE_FTM_HAS_CHANNEL7_TRIGGER (1)
// /* @brief If instance has only TPM function. */
#define FSL_FEATURE_FTM_IS_TPM_ONLY_INSTANCEn(x) (0)
// /* @brief Has frequency of the reload opportunities, bitfield CONF[LDFQ]. */
#define FSL_FEATURE_FTM_HAS_CONF_LDFQ_BIT (1)



/* FLEXCAN module features */

/* @brief Message buffer size */
#define FSL_FEATURE_FLEXCAN_HAS_MESSAGE_BUFFER_MAX_NUMBERn(x) \
    (((x) == CAN0) ? (32) : \
    (((x) == CAN1) ? (16) : \
    (((x) == CAN2) ? (16) : (-1))))
// /* @brief Has doze mode support (register bit field MCR[DOZE]). */
#define FSL_FEATURE_FLEXCAN_HAS_DOZE_MODE_SUPPORT (0)
// /* @brief Insatnce has doze mode support (register bit field MCR[DOZE]). */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_DOZE_MODE_SUPPORTn(x) (0)
// /* @brief Has a glitch filter on the receive pin (register bit field MCR[WAKSRC]). */
#define FSL_FEATURE_FLEXCAN_HAS_GLITCH_FILTER (0)
// /* @brief Has extended interrupt mask and flag register (register IMASK2, IFLAG2). */
#define FSL_FEATURE_FLEXCAN_HAS_EXTENDED_FLAG_REGISTER (0)
// /* @brief Instance has extended bit timing register (register CBT). */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_EXTENDED_TIMING_REGISTERn(x) (1)
// /* @brief Has a receive FIFO DMA feature (register bit field MCR[DMA]). */
#define FSL_FEATURE_FLEXCAN_HAS_RX_FIFO_DMA (1)
// /* @brief Instance has a receive FIFO DMA feature (register bit field MCR[DMA]). */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_RX_FIFO_DMAn(x) (1)
// /* @brief Remove CAN Engine Clock Source Selection from unsupported part. */
#define FSL_FEATURE_FLEXCAN_SUPPORT_ENGINE_CLK_SEL_REMOVE (0)
// /* @brief Instance remove CAN Engine Clock Source Selection from unsupported part. */
#define FSL_FEATURE_FLEXCAN_INSTANCE_SUPPORT_ENGINE_CLK_SEL_REMOVEn(x) (0)
// /* @brief Has CAN with Flexible Data rate (CAN FD) protocol. */
#define FSL_FEATURE_FLEXCAN_HAS_FLEXIBLE_DATA_RATE (1)
// /* @brief CAN instance support Flexible Data rate (CAN FD) protocol. */
#define FSL_FEATURE_FLEXCAN_INSTANCE_HAS_FLEXIBLE_DATA_RATEn(x) \
    (((x) == CAN0) ? (1) : \
    (((x) == CAN1) ? (0) : \
    (((x) == CAN2) ? (0) : (0))))
// /* @brief Has memory error control (register MECR). */
#define FSL_FEATURE_FLEXCAN_HAS_MEMORY_ERROR_CONTROL (0)
// /* @brief Has enhanced bit timing register (register EPRS, ENCBT, EDCBT and ETDC). */
#define FSL_FEATURE_FLEXCAN_HAS_ENHANCED_BIT_TIMING_REG (0)
// /* @brief Has Pretended Networking mode support. */
#define FSL_FEATURE_FLEXCAN_HAS_PN_MODE (0)
// /* @brief Has Enhanced Rx FIFO. */
#define FSL_FEATURE_FLEXCAN_HAS_ENHANCED_RX_FIFO (0)
// /* @brief Does not support Supervisor Mode (bitfield MCR[SUPV]. */
#define FSL_FEATURE_FLEXCAN_HAS_NO_SUPV_SUPPORT (0)

// /* WDOG module features */

// /* @brief Watchdog is available. */
#define FSL_FEATURE_WDOG_HAS_WATCHDOG (1)
// /* @brief WDOG_CNT can be 32-bit written. */
#define FSL_FEATURE_WDOG_HAS_32BIT_ACCESS (1)


/*FTFC Controller features Ported from RTD drivers Compatibility yet to verify*/
/* @brief Is of type FTFA. */
#define FEATURE_FLS_IS_FTFA (0u)
/* @brief Is of type FTFC. */
#define FEATURE_FLS_IS_FTFC (1u)
/* @brief Is of type FTFE. */
#define FEATURE_FLS_IS_FTFE (0u)
/* @brief Is of type FTFL. */
#define FEATURE_FLS_IS_FTFL (0u)
/* @brief Is of type FTFM. */
#define FEATURE_FLS_IS_FTFM (0u)
/* @brief Has flags indicating the status of the FlexRAM (register bits FCNFG[EEERDY], FCNFG[RAMRDY] and FCNFG[PFLSH]). */
#define FEATURE_FLS_HAS_FLEX_RAM_FLAGS (1u)
/* @brief Has program flash swapping status flag (register bit FCNFG[SWAP]). */
#define FEATURE_FLS_HAS_PF_SWAPPING_STATUS_FLAG (0u)
/* @brief Has EEPROM region protection (register FEPROT). */
#define FEATURE_FLS_HAS_EEROM_REGION_PROTECTION (1u)
/* @brief Has data flash region protection (register FDPROT). */
#define FEATURE_FLS_HAS_DATA_FLS_REGION_PROTECTION (1u)
/* @brief P-Flash block count. */
#define FEATURE_FLS_PF_BLOCK_COUNT (1u)
/* @brief P-Flash block size. */
#define FEATURE_FLS_PF_BLOCK_SIZE (0x80000U)
/* @brief P-Flash sector size. */
#define FEATURE_FLS_PF_BLOCK_SECTOR_SIZE (4096u)
/* @brief P-Flash write unit size. */
#define FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE (8u)
/* @brief P-Flash block swap feature. */
#define FEATURE_FLS_HAS_PF_BLOCK_SWAP (0u)
/* @brief Has FlexNVM memory. */
#define FEATURE_FLS_HAS_FLEX_NVM (1u)
/* @brief FlexNVM block count. */
#define FEATURE_FLS_DF_BLOCK_COUNT (1u)
/* @brief FlexNVM block size. */
#define FEATURE_FLS_DF_BLOCK_SIZE (65536u)
/* @brief FlexNVM sector size. */
#define FEATURE_FLS_DF_BLOCK_SECTOR_SIZE (2048u)
/* @brief FlexNVM write unit size. */
#define FEATURE_FLS_DF_BLOCK_WRITE_UNIT_SIZE (8u)
/* @brief FlexNVM start address. (Valid only if FlexNVM is available.) */
#define FEATURE_FLS_DF_START_ADDRESS (0x10000000u)
/* @brief Has FlexRAM memory. */
#define FEATURE_FLS_HAS_FLEX_RAM (1u)
/* @brief FlexRAM size. */
#define FEATURE_FLS_FLEX_RAM_SIZE (4096u)
/* @brief FlexRAM start address. (Valid only if FlexRAM is available.) */
#define FEATURE_FLS_FLEX_RAM_START_ADDRESS (0x14000000u)
/* @brief Has 0x00 Read 1s Block command. */
#define FEATURE_FLS_HAS_READ_1S_BLOCK_CMD (1u)
/* @brief Has 0x01 Read 1s Section command. */
#define FEATURE_FLS_HAS_READ_1S_SECTION_CMD (1u)
/* @brief Has 0x02 Program Check command. */
#define FEATURE_FLS_HAS_PROGRAM_CHECK_CMD (1u)
/* @brief Has 0x03 Read Resource command. */
#define FEATURE_FLS_HAS_READ_RESOURCE_CMD (0u)
/* @brief Has 0x06 Program Longword command. */
#define FEATURE_FLS_HAS_PROGRAM_LONGWORD_CMD (0u)
/* @brief Has 0x07 Program Phrase command. */
#define FEATURE_FLS_HAS_PROGRAM_PHRASE_CMD (1u)
/* @brief Has 0x08 Erase Flash Block command. */
#define FEATURE_FLS_HAS_ERASE_BLOCK_CMD (1u)
/* @brief Has 0x09 Erase Flash Sector command. */
#define FEATURE_FLS_HAS_ERASE_SECTOR_CMD (1u)
/* @brief Has 0x0B Program Section command. */
#define FEATURE_FLS_HAS_PROGRAM_SECTION_CMD (1u)
/* @brief Has 0x40 Read 1s All Blocks command. */
#define FEATURE_FLS_HAS_READ_1S_ALL_BLOCKS_CMD (1u)
/* @brief Has 0x41 Read Once command. */
#define FEATURE_FLS_HAS_READ_ONCE_CMD (1u)
/* @brief Has 0x43 Program Once command. */
#define FEATURE_FLS_HAS_PROGRAM_ONCE_CMD (1u)
/* @brief Has 0x44 Erase All Blocks command. */
#define FEATURE_FLS_HAS_ERASE_ALL_CMD (1u)
/* @brief Has 0x45 Verify Backdoor Access Key command. */
#define FEATURE_FLS_HAS_VERIFY_BACKDOOR_ACCESS_KEY_CMD (1u)
/* @brief Has 0x46 Swap Control command. */
#define FEATURE_FLS_HAS_SWAP_CONTROL_CMD (0u)
/* @brief Has 0x49 Erase All Blocks unsecure command. */
#define FEATURE_FLS_HAS_ERASE_ALL_BLOCKS_UNSECURE_CMD (1u)
/* @brief Has 0x80 Program Partition command. */
#define FEATURE_FLS_HAS_PROGRAM_PARTITION_CMD (1u)
/* @brief Has 0x81 Set FlexRAM Function command. */
#define FEATURE_FLS_HAS_SET_FLEXRAM_FUNCTION_CMD (1u)
/* @brief P-Flash Erase/Read 1st all block command address alignment. */
#define FEATURE_FLS_PF_BLOCK_CMD_ADDRESS_ALIGMENT (16u)
/* @brief P-Flash Erase sector command address alignment. */
#define FEATURE_FLS_PF_SECTOR_CMD_ADDRESS_ALIGMENT (16u)
/* @brief P-Flash Program/Verify section command address alignment. */
#define FEATURE_FLS_PF_SECTION_CMD_ADDRESS_ALIGMENT (16u)
/* @brief P-Flash Read resource command address alignment. */
#define FEATURE_FLS_PF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
/* @brief P-Flash Program check command address alignment. */
#define FEATURE_FLS_PF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
/* @brief P-Flash Program check command address alignment. */
#define FEATURE_FLS_PF_SWAP_CONTROL_CMD_ADDRESS_ALIGMENT (0u)
/* @brief FlexNVM Erase/Read 1st all block command address alignment. */
#define FEATURE_FLS_DF_BLOCK_CMD_ADDRESS_ALIGMENT (8u)
/* @brief FlexNVM Erase sector command address alignment. */
#define FEATURE_FLS_DF_SECTOR_CMD_ADDRESS_ALIGMENT (8u)
/* @brief FlexNVM Program/Verify section command address alignment. */
#define FEATURE_FLS_DF_SECTION_CMD_ADDRESS_ALIGMENT (8u)
/* @brief FlexNVM Read resource command address alignment. */
#define FEATURE_FLS_DF_RESOURCE_CMD_ADDRESS_ALIGMENT (8u)
/* @brief FlexNVM Program check command address alignment. */
#define FEATURE_FLS_DF_CHECK_CMD_ADDRESS_ALIGMENT (4u)
/* @brief FlexNVM partition code 0000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_0000 (0x00010000u)
/* @brief FlexNVM partition code 0001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_0001 (0xFFFFFFFFu)
/* @brief FlexNVM partition code 0010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_0010 (0xFFFFFFFFu)
/* @brief FlexNVM partition code 0011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_0011 (0x00008000u)
/* @brief FlexNVM partition code 0100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_0100 (0x00000000u)
/* @brief FlexNVM partition code 0101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_0101 (0xFFFFFFFFu)
/* @brief FlexNVM partition code 0110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_0110 (0xFFFFFFFFu)
/* @brief FlexNVM partition code 0111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_0111 (0xFFFFFFFFu)
/* @brief FlexNVM partition code 1000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_1000 (0x00000000u)
/* @brief FlexNVM partition code 1001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_1001 (0xFFFFFFFFu)
/* @brief FlexNVM partition code 1010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_1010 (0x00004000u)
/* @brief FlexNVM partition code 1011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_1011 (0x00008000u)
/* @brief FlexNVM partition code 1100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_1100 (0x00010000u)
/* @brief FlexNVM partition code 1101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_1101 (0xFFFFFFFFu)
/* @brief FlexNVM partition code 1110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_1110 (0xFFFFFFFFu)
/* @brief FlexNVM partition code 1111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FEATURE_FLS_DF_SIZE_1111 (0x00010000u)
/* @brief Emulated EEPROM size code 0000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_0000 (0xFFFFu)
/* @brief Emulated EEPROM size code 0001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_0001 (0xFFFFu)
/* @brief Emulated EEPROM size code 0010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_0010 (0x1000u)
/* @brief Emulated EEPROM size code 0011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_0011 (0xFFFFu)
/* @brief Emulated EEPROM size code 0100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_0100 (0xFFFFu)
/* @brief Emulated EEPROM size code 0101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_0101 (0xFFFFu)
/* @brief Emulated EEPROM size code 0110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_0110 (0xFFFFu)
/* @brief Emulated EEPROM size code 0111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_0111 (0xFFFFu)
/* @brief Emulated EEPROM size code 1000 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_1000 (0xFFFFu)
/* @brief Emulated EEPROM size code 1001 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_1001 (0xFFFFu)
/* @brief Emulated EEPROM size code 1010 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_1010 (0xFFFFu)
/* @brief Emulated EEPROM size code 1011 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_1011 (0xFFFFu)
/* @brief Emulated EEPROM size code 1100 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_1100 (0xFFFFu)
/* @brief Emulated EEPROM size code 1101 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_1101 (0xFFFFu)
/* @brief Emulated EEPROM size code 1110 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_1110 (0xFFFFu)
/* @brief Emulated EEPROM size code 1111 mapping to emulated EEPROM size in bytes (0xFFFF = reserved). */
#define FEATURE_FLS_EE_SIZE_1111 (0x0000u)
/* @brief Has the detection of uncorrected ECC errors. */
#define FEATURE_FLS_HAS_DETECT_ECC_ERROR (1)
/* @brief Has the interrupt double bit fault detect. */
#define FEATURE_FLS_HAS_INTERRUPT_DOUBLE_BIT_FAULT_IRQ (1)

/*End of FTFC Flash Controller features */


// /* EDMA module features */

// /*
//  * @brief Number of DMA channels (related to number of registers TCD, DCHPRI, bit fields ERQ[ERQn], EEI[EEIn], INT[INTn],
//  * ERR[ERRn], HRS[HRSn] and bit field widths ES[ERRCHN], CEEI[CEEI], SEEI[SEEI], CERQ[CERQ], SERQ[SERQ], CDNE[CDNE],
//  * SSRT[SSRT], CERR[CERR], CINT[CINT], TCDn_CITER_ELINKYES[LINKCH], TCDn_CSR[MAJORLINKCH], TCDn_BITER_ELINKYES[LINKCH]).
//  * (Valid only for eDMA modules.) Note: this is including channels used as offset.
//  */
// #define FSL_FEATURE_EDMA_MODULE_CHANNEL (16)
// /* @brief Total number of DMA channels on all modules. Note: this is including channels used as offset. */
// #define FSL_FEATURE_EDMA_DMAMUX_CHANNELS (16)
// /* @brief Has DMA_Error interrupt vector. */
// #define FSL_FEATURE_EDMA_HAS_ERROR_IRQ (0)
// /* @brief If channel clock controlled independently */
// #define FSL_FEATURE_EDMA_CHANNEL_HAS_OWN_CLOCK_GATE (1)
// /* @brief Has no register bit fields MP_CSR[EBW]. */
// #define FSL_FEATURE_EDMA_HAS_NO_MP_CSR_EBW (1)

// #define FSL_FEATURE_HAVE_DMA_CONTROL_REGISTER_ACCESS_PERMISSION (1)

// /* DMAMUX module features */

// /* @brief Number of DMA channels (related to number of register CHCFGn). */
// #define FSL_FEATURE_DMAMUX_MODULE_CHANNEL (16)
// /* @brief Has the periodic trigger capability for the triggered DMA channel (register bit CHCFG0[TRIG]). */
// #define FSL_FEATURE_DMAMUX_HAS_TRIG (1)
// /* @brief Register CHCFGn width. */
// #define FSL_FEATURE_DMAMUX_CHCFG_REGISTER_WIDTH (8)

// /* @brief Memory map has offset between subsystems. */
// #define FSL_FEATURE_MEMORY_HAS_ADDRESS_OFFSET (1)



/* @brief Number of cores. */
#define NUMBER_OF_CORES (1u)

/* @brief Number of alternative clocks available */
#define NUMBER_OF_ALT_CLOCKS  ADC_CLK_ALT_1


/* ADC module features */

/*! @brief ADC feature flag for extended number of SC1 and R registers,
 * generically named 'alias registers' */
#define FEATURE_ADC_HAS_EXTRA_NUM_REGS                    (0)

/*! @brief ADC feature flag for defining number of external ADC channels.
 * If each ADC instance has different number of external channels, then
 * this define is set with the maximum value. */
#define FEATURE_ADC_MAX_NUM_EXT_CHANS                     (16)
#define FEATURE_ADC_HAS_CHANNEL_2                         (1)
#define FEATURE_ADC_HAS_CHANNEL_8                         (1)
#define ADC_CLOCKS                                        {ADC0_CLK, ADC1_CLK}

/*! @brief ADC number of control channels */
#if FEATURE_ADC_HAS_EXTRA_NUM_REGS
#define ADC_CTRL_CHANS_COUNT                              ADC_aSC1_COUNT
#else
#define ADC_CTRL_CHANS_COUNT                              ADC_SC1_COUNT
#endif /* FEATURE_ADC_HAS_EXTRA_NUM_REGS */

/*! @brief ADC default Sample Time from RM */
#define ADC_DEFAULT_SAMPLE_TIME                           (0x0CU)
/*! @brief ADC default User Gain from RM */
#define ADC_DEFAULT_USER_GAIN                             (0x04U)
/* @brief Max of adc clock frequency */
#define ADC_CLOCK_FREQ_MAX_RUNTIME     (50000000u)
/* @brief Min of adc clock frequency */
#define ADC_CLOCK_FREQ_MIN_RUNTIME     (2000000u)




#endif /* _S32K144_FEATURES_H_ */
