# Copyright 2023 NXP
# SPDX-License-Identifier: BSD-3-Clause

add_subdirectory(BaseNXP)
add_subdirectory(Mcu)
add_subdirectory(Rte)
add_subdirectory(ftfc)
add_subdirectory_ifdef(CONFIG_ADC_S32K144_ADC12 Adc)
