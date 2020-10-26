/*
  ==============================================================================

    HorizontalDotBlinker.h
    Created: 24 Oct 2020 7:05:04pm
    Author:  Ryota Shimokawara

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class HorizontalDotBlinker : public juce::Component, private juce::Timer
{
public:
    HorizontalDotBlinker();
    ~HorizontalDotBlinker() override;
    
    void paint(juce::Graphics& g) override;
    
    void timerCallback() override;

private:
    int cnt = 0;
    
    /* const params */
    const Colour DOT_COLOUR = Colour(0xDD00FFFF);
    const int DOT_NUM = 3;
    const int CYCLE_SPEED = 10;
    const float DOT_SIZE_RATIO = 1.0f;
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HorizontalDotBlinker)
 };
