/**
 * This file is part of libmocha-ipc.
 *
 * Copyright (C) 2012 KB <kbjetdroid@gmail.com>
 *
 * Implemented as per the Mocha AP-CP protocol analysis done by Dominik Marszk
 *
 * libmocha-ipc is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libmocha-ipc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libmocha-ipc.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __DEVICE_JET_AT_H__
#define __DEVICE_JET_AT_H__

/**
 * All the TAPI AT context structures specific to Jet will be defined here
 */
enum TAPI_AT_TYPE
{
	TAPI_AT_SETPHONEFUNC	= 0x9F,
	TAPI_AT_INIT 			= 0xA3,
	TAPI_AT_PB_INITINFO		= 0xA4,
	TAPI_AT_CALLSETUP_RSP	= 0xA5,
};

#endif
