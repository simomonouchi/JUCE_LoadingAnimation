/*
  ==============================================================================

    ArcSpiner.h
    Created: 24 Oct 2020 3:04:25pm
    Author:  Ryota Shimokawara

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class ArcSpiner : public juce::Component, private juce::Timer
{
public:    
    ArcSpiner();
    ~ArcSpiner() override;
    
    void paint(juce::Graphics& g) override;
    
    void timerCallback() override;

private:
    int cnt = 0;
    
    /* const params */
    const Colour CIRCLE_COLOUR = Colour(0x5500FFFF);
    const Colour ARC_COLOUR = Colour(0xDD00FFFF);
    const float CHICK_RATIO = 0.3f;
    const int CNT_MAX = 30;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ArcSpiner)
 };
