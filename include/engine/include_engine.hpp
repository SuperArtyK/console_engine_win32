/*
	ArtyK's Console (Game) Engine. Console engine for apps and games
	Copyright (C) 2021  Artemii Kozhemiak

	https://github.com/SuperArtyK/artyks-engine

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License 3.0 as published
	by the Free Software Foundation.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License 3.0 for more details.

	You should have received a copy of the GNU General Public License 3.0
	along with this program.  If not, see <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

/** @file include/engine/include_all.hpp
 *  This file includes everything this engine has, for less typing.
 *  Don't include this file in the engine header files!
 *
 *  Should not cause everything to break.
 */

#pragma once

//from least to biggest dependencies
#include "engine_flags.hpp"
#include "typedefs.hpp"
#include "trig_lookup.hpp"
#include "global_vars.hpp"
#include "AEFrame.hpp"
#include "AELog.hpp"
#include "func_system.hpp"
#include "func_utils.hpp"
#include "AETimer.hpp"
#include "AEBaseClass.hpp"
#include "AEBeep.hpp"
#include "AEScreen.hpp"
#include "AEKeyboard.hpp"
#include "allheaders.hpp"
