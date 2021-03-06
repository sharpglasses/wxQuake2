// -*- Mode: C++; tab-width: 4; c-basic-offset: 4; -*-
// @BEGIN_LICENSE
//
// Tamale - Multimedia authoring and playback system
// Copyright 1993-2004 Trustees of Dartmouth College
// 
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//
// @END_LICENSE

//! \file bsptools.cpp
/// Command-line interface to the bsptools program.

#include "precompiled.h"
#include <iostream>
#include "bspfile.h"

/// \mainpage <tt>bsptools</tt> Application
///
/// This application is used to manipulate BSP files in various interesting
/// ways.
///
/// \section overview_sec Overview
///
/// A <tt>*.bsp</tt> file contains information about a single game level.
/// This data is represented by a number of classes, the most important of
/// which are:
///
///  - bsp::level - The level itself.  All other objects can be reached from
///    here.
///  - bsp::entity - Key/value properties for each entity on the level.
///  - bsp::model - BSP models for the level, doors, platforms, triggers, etc.

/// Main entry point for program.
int main(int argc, char **argv) {
	std::cout << "Hello, world!" << std::endl;
	return 0;
}
