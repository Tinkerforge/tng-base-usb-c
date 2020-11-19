/* tng-base-usb-c
 * Copyright (C) 2020 Olaf Lüke <olaf@tinkerforge.com>
 *
 * config_base.h: Configuration TNG BASE USB C
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef CONFIG_BASE_H
#define CONFIG_BASE_H

#define BASE_LED_DEBUG_PIN      GPIO_PIN_3
#define BASE_LED_DEBUG_PORT     GPIOA

#define BASE_SW_24_CUR_PIN      GPIO_PIN_0
#define BASE_SW_24_CUR_PORT     GPIOA
#define BASE_SW_24_ENABLE_PIN   GPIO_PIN_1
#define BASE_SW_24_ENABLE_PORT  GPIOA
#define BASE_SW_5_ENABLE_PIN    GPIO_PIN_2
#define BASE_SW_5_ENABLE_PORT   GPIOB

#endif
