////////////////////////////////////////////////////////////////////////////////////////////////
//
//  decode.h
//
//  Written by: Rob Wyatt
//
//  Decode a mip set back into an array of ARGB8888 textures so they can be displayed
//
////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Pipeline/Image/Image.h"

namespace Helium
{
  ////////////////////////////////////////////////////////////////////////////////////////////////
  class PIPELINE_API DecodeMips
  {
  public:
    DecodeMips(MipSet* mips);
    ~DecodeMips();

  private:
    void Decode(MipSet* mips);

  public:
    u32       m_levels;
    Image*  m_images[MAX_TEXTURE_MIPS];
  };
}