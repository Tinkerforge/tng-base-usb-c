/* tng-base-usb-c
 * Copyright (C) 2020 Olaf Lüke <olaf@tinkerforge.com>
 *
 * main.c: Initialization for TNG Base USB C
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

#include "configs/config.h"

#include "bricklib2/tng/tng.h"
#include "bricklib2/logging/logging.h"

#include "base.h"
#include "usb2517.h"
#include "bricklib2/tng/tng_energy_monitor.h"

int main(void) {
	logging_init();
	logd("Start TNG Base USB C\n\r");

	base_init();
	usb2517_init();
	tng_energy_monitor_init();

	while(true) {
		tng_tick();
		base_tick();
		usb2517_tick();
		tng_energy_monitor_tick();
	}
}
