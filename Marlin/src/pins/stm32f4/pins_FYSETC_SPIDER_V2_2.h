/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define BOARD_INFO_NAME "FYSETC SPIDER V22"
#define DEFAULT_MACHINE_NAME BOARD_INFO_NAME

#define TEMP_3_PIN                          PC3
#define TEMP_4_PIN                          PB1
#define TEMP_BED_PIN                        PB0

#define FAN_PIN                             PA13
#define FAN1_PIN                            PA14


// MKS MINI12864
//#define ENABLE_SPI1
//#define FORCE_SOFT_SPI
//#define DOGLCD_A0                EXP1_07_PIN
//#define DOGLCD_CS                EXP1_06_PIN
//#define DOGLCD_SCK               EXP2_02_PIN
//#define DOGLCD_MOSI              EXP2_06_PIN
//#define LCD_BACKLIGHT_PIN             -1
//#define LCD_RESET_PIN                 -1
//#define BTN_EN1                    EXP2_05_PIN
//#define BTN_EN2                    EXP2_03_PIN
//#define BTN_ENC                    EXP1_02_PIN
//#define BEEPER_PIN                 EXP1_01_PIN

#include "pins_FYSETC_SPIDER.h"
