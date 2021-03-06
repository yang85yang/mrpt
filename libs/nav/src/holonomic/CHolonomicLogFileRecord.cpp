/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          http://www.mrpt.org/                          |
   |                                                                        |
   | Copyright (c) 2005-2019, Individual contributors, see AUTHORS file     |
   | See: http://www.mrpt.org/Authors - All rights reserved.                |
   | Released under BSD License. See details in http://www.mrpt.org/License |
   +------------------------------------------------------------------------+ */

#include "nav-precomp.h"  // Precomp header

#include <mrpt/nav/holonomic/CHolonomicLogFileRecord.h>
#include <mrpt/serialization/CArchive.h>

using namespace mrpt;
using namespace mrpt::nav;

IMPLEMENTS_VIRTUAL_SERIALIZABLE(
	CHolonomicLogFileRecord, CSerializable, mrpt::nav)
