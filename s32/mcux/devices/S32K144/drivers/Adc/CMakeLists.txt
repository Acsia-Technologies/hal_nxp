# Copyright 2023 NXP
# SPDX-License-Identifier: BSD-3-Clause

zephyr_include_directories(include)
zephyr_library_sources(src/adc_api.c)
zephyr_library_sources(src/adc_driver.c)
zephyr_library_sources(src/clock_config.c)
zephyr_library_sources(src/peripherals_ADC_0.c)
