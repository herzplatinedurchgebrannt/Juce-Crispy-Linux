/*
  ==============================================================================

    CrispySaturator.h
    Created: 5 Dec 2019 11:40:41am
    Author:  Spenser Saling

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "cmath"

class CrispySaturator
{
public:
    static float oddSaturate(float sample, float power);
    static float evenSaturate(float sample, float mix, bool smooth);
    
    static float saturateSample(float sample, float oddPower, float evenMix, bool evenSmooth);
    
    static void saturate(AudioSampleBuffer& buffer, int startSample, int numSamples, float oddPower, float evenMix, bool evenSmooth);
    
private:
    
};
