/* tng-base-bricklet
 * Copyright (C) 2020 Olaf Lüke <olaf@tinkerforge.com>
 *
 * base.c: Driver for TNG Base 
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

#include "base.h"

#include "configs/config.h"

#include "configs/config_base.h"
#include "bricklib2/os/coop_task.h"
#include "bricklib2/logging/logging.h"
#include "bricklib2/hal/system_timer/system_timer.h"

#include <string.h>

Base base;

volatile bool test = false; // TODO: Remove this when we move from 072 to 070

void base_init(void) {
	memset(&base, 0, sizeof(Base));

	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();

	GPIO_InitTypeDef gpio_out = {
		.Mode  = GPIO_MODE_OUTPUT_PP,
		.Speed = GPIO_SPEED_FREQ_LOW
	};

	gpio_out.Pin = BASE_SW_24_ENABLE_PIN;
	HAL_GPIO_Init(BASE_SW_24_ENABLE_PORT, &gpio_out);

	gpio_out.Pin = BASE_SW_5_ENABLE_PIN;
	HAL_GPIO_Init(BASE_SW_5_ENABLE_PORT, &gpio_out);

	HAL_GPIO_WritePin(BASE_SW_5_ENABLE_PORT, BASE_SW_5_ENABLE_PIN, GPIO_PIN_SET);
	HAL_GPIO_WritePin(BASE_SW_24_ENABLE_PORT, BASE_SW_24_ENABLE_PIN, GPIO_PIN_SET);
}

inline void base_tick(void) {

}
