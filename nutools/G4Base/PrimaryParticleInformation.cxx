////////////////////////////////////////////////////////////////////////
/// \file PrimaryParticleInformation.cxx
//
/// \version $Id: PrimaryParticleInformation.cxx,v 1.5 2012-09-24 15:19:29 brebel Exp $
/// \author  seligman@nevis.columbia.edu, brebel@fnal.gov
////////////////////////////////////////////////////////////////////////
#include "nutools/G4Base/PrimaryParticleInformation.h"
#include "nusimdata/SimulationBase/MCTruth.h"

namespace g4b{

  //-------------------------------------------------
  G4Allocator<PrimaryParticleInformation> PrimaryParticleInformationAllocator;

  //-------------------------------------------------
  void PrimaryParticleInformation::Print() const
  {
    if ( fMCTruth )
      std::cout << *fMCTruth;
  }

}// namespace
