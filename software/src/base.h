/* tng-base-usb-c
 * Copyright (C) 2020 Olaf Lüke <olaf@tinkerforge.com>
 *
 * base.h: Driver for TNG BASE USB C
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

#ifndef BASE_H
#define BASE_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {

} Base;

extern Base base;

void base_tick(void);
void base_init(void);
uint8_t base_get_value(void);

#endif