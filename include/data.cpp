/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 */

//usb data packets

uint8_t mouse_m908::_data_profile[][16] = {
	{0x02, 0xf3, 0x2c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

uint8_t mouse_m908::_data_settings_1[][16] = {
	{0x02, 0xf5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x3e, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x46, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x49, 0x04, 0x06, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x02, 0x08, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x4f, 0x04, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x51, 0x04, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x02, 0x08, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x57, 0x04, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x59, 0x04, 0x06, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x02, 0x08, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x5f, 0x04, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x61, 0x04, 0x06, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x02, 0x08, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x67, 0x04, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x69, 0x04, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x02, 0x08, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x6f, 0x04, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x32, 0x00, 0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x38, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00}
};

uint8_t mouse_m908::_data_settings_2[64] = {
	0x03, 0xf3, 0x20, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

uint8_t mouse_m908::_data_settings_3[][16] = {
	{0x02, 0xf3, 0x42, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xb2, 0x01, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x62, 0x02, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x12, 0x03, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x44, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x04, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xb4, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x64, 0x02, 0x04, 0x00, 0x00, 0x00, 0x01, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x14, 0x03, 0x04, 0x00, 0x00, 0x00, 0x01, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x4a, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x0a, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xba, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x6a, 0x02, 0x04, 0x00, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x1a, 0x03, 0x04, 0x00, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x50, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x10, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xc0, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x70, 0x02, 0x04, 0x00, 0x00, 0x00, 0x01, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x20, 0x03, 0x04, 0x00, 0x00, 0x00, 0x01, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x56, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x16, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xc6, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x76, 0x02, 0x04, 0x00, 0x00, 0x00, 0x01, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x26, 0x03, 0x04, 0x00, 0x00, 0x00, 0x01, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x5c, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x1c, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xcc, 0x01, 0x04, 0x00, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x7c, 0x02, 0x04, 0x00, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x2c, 0x03, 0x04, 0x00, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x2c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x82, 0x00, 0x04, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x86, 0x00, 0x04, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x8a, 0x00, 0x04, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x8e, 0x00, 0x04, 0x00, 0x00, 0x00, 0x99, 0x81, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x92, 0x00, 0x04, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x96, 0x00, 0x04, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x9a, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x9e, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xa2, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xa6, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xaa, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xae, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xb2, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xb6, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xba, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xbe, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xc2, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xc6, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xda, 0x00, 0x04, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xde, 0x00, 0x04, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x42, 0x01, 0x04, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x46, 0x01, 0x04, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x4a, 0x01, 0x04, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x4e, 0x01, 0x04, 0x00, 0x00, 0x00, 0x99, 0x81, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x52, 0x01, 0x04, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x56, 0x01, 0x04, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x5a, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x5e, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x62, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x66, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x6a, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x6e, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x72, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x76, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x7a, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x7e, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x82, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x86, 0x01, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x9a, 0x01, 0x04, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x9e, 0x01, 0x04, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xf2, 0x01, 0x04, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xf6, 0x01, 0x04, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xfa, 0x01, 0x04, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xfe, 0x01, 0x04, 0x00, 0x00, 0x00, 0x99, 0x81, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x02, 0x02, 0x04, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x06, 0x02, 0x04, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x0a, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x0e, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x12, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x16, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x1a, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x1e, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x22, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x26, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x2a, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x2e, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x32, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x36, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x4a, 0x02, 0x04, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x4e, 0x02, 0x04, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xa2, 0x02, 0x04, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xa6, 0x02, 0x04, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xaa, 0x02, 0x04, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xae, 0x02, 0x04, 0x00, 0x00, 0x00, 0x99, 0x81, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xb2, 0x02, 0x04, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xb6, 0x02, 0x04, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xba, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xbe, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xc2, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xc6, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xca, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xce, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xd2, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xd6, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xda, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xde, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xe2, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xe6, 0x02, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xfa, 0x02, 0x04, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xfe, 0x02, 0x04, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x52, 0x03, 0x04, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x56, 0x03, 0x04, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x5a, 0x03, 0x04, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x5e, 0x03, 0x04, 0x00, 0x00, 0x00, 0x99, 0x81, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x62, 0x03, 0x04, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x66, 0x03, 0x04, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x6a, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x6e, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x72, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x76, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x7a, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x7e, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x82, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x86, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x8a, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x8e, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x92, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x57, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0x96, 0x03, 0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xaa, 0x03, 0x04, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf3, 0xae, 0x03, 0x04, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf1, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x02, 0xf5, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

uint8_t mouse_m908::_data_macros_1[16] = 
	{0x02, 0xf5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

uint8_t mouse_m908::_data_macros_2[256] = {
	0x04, 0xf3, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

uint8_t mouse_m908::_data_macros_3[16] = 
	{0x02, 0xf5, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

uint8_t mouse_m908::_data_macros_codes[15][2] =  {
	{0x78, 0x04},
	{0x40, 0x05},
	{0x08, 0x06},
	{0xd0, 0x06},
	{0x98, 0x07},
	{0x60, 0x08},
	{0x28, 0x09},
	{0xf0, 0x09},
	{0xb8, 0x0a},
	{0x80, 0x0b},
	{0x48, 0x0c},
	{0x10, 0x0d},
	{0xd8, 0x0d},
	{0xa0, 0x0e},
	{0x68, 0x0f} };

uint8_t mouse_m908::_data_macros_repeat[16] = 
	{0x02, 0xf3, 0xa2, 0x00, 0x04, 0x00, 0x00, 0x00, 0x91, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00};
