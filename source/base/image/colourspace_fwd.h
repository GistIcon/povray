//******************************************************************************
///
/// @file base/image/colourspace_fwd.h
///
/// Forward declarations related to colour space conversions.
///
/// @copyright
/// @parblock
///
/// Persistence of Vision Ray Tracer ('POV-Ray') version 3.8.
/// Copyright 1991-2019 Persistence of Vision Raytracer Pty. Ltd.
///
/// POV-Ray is free software: you can redistribute it and/or modify
/// it under the terms of the GNU Affero General Public License as
/// published by the Free Software Foundation, either version 3 of the
/// License, or (at your option) any later version.
///
/// POV-Ray is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU Affero General Public License for more details.
///
/// You should have received a copy of the GNU Affero General Public License
/// along with this program.  If not, see <http://www.gnu.org/licenses/>.
///
/// ----------------------------------------------------------------------------
///
/// POV-Ray is based on the popular DKB raytracer version 2.12.
/// DKBTrace was originally written by David K. Buck.
/// DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
///
/// @endparblock
///
//******************************************************************************

#ifndef POVRAY_BASE_COLOURSPACE_FWD_H
#define POVRAY_BASE_COLOURSPACE_FWD_H

// C++ standard header files
#include <memory>

/// @file
/// @note
///     This file should not pull in any POV-Ray header whatsoever.

namespace pov_base
{

class GammaCurve;
typedef std::shared_ptr<GammaCurve> GammaCurvePtr; ///< Class holding a shared reference to a gamma curve.

class SimpleGammaCurve;
typedef std::shared_ptr<SimpleGammaCurve> SimpleGammaCurvePtr; ///< Class holding a shared reference to a simple gamma curve.

enum GammaTypeId : int;

}
// end of namespace pov_base

#endif // POVRAY_BASE_DITHER_FWD_H
