////////////////////////////////////////////////////////////////////////
// \file    SRShower.cxx
// \brief   An SRShower is a high level shower object.  It knows its
//          direction and length, but does not own its cell hits.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRShower.h"

namespace caf
{

  SRShower::SRShower():
    bestplane(-5),
    bestplane_dEdx(-5.0),
    bestplane_energy(-5.0),
    conversion_gap(-5.0),
    density(-5.0),
    len(-5.0),
    open_angle(-5.0),
    dir(-5.0, -5.0, -5.0),
    start(-5.0, -5.0, -5.0),
    end(-5.0, -5.0, -5.0),
    cosmicDist(-5.f)
  {
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
