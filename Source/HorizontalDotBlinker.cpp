/*
  ==============================================================================

    HorizontalDotBlinker.cpp
    Created: 24 Oct 2020 7:05:04pm
    Author:  Ryota Shimokawara

  ==============================================================================
*/

#include "HorizontalDotBlinker.h"

HorizontalDotBlinker::HorizontalDotBlinker()
{
    startTimer(30);
}

HorizontalDotBlinker::~HorizontalDotBlinker()
{
}

void HorizontalDotBlinker::paint(juce::Graphics& g)
{

    float dotMaxSize = getWidth()/DOT_NUM*DOT_SIZE_RATIO;
    float xMergin = getWidth()/(DOT_NUM-1)*(1-DOT_SIZE_RATIO);
    float yMergin = (getHeight()-dotMaxSize)/2;
    
    for(int i = 0; i<DOT_NUM; i++)
    {
        if(cnt<i*CYCLE_SPEED || cnt>=(i+2)*CYCLE_SPEED) {
            continue;
        }

        int dotsSizeCnt = cnt - i*CYCLE_SPEED;
        if(dotsSizeCnt>CYCLE_SPEED)
        {
            dotsSizeCnt = CYCLE_SPEED - dotsSizeCnt%CYCLE_SPEED;
        }
           
        float dotSize = (float)dotsSizeCnt/(float)CYCLE_SPEED*dotMaxSize;
    
        g.setColour(DOT_COLOUR);
        g.fillEllipse(
                      i*(xMergin+dotMaxSize) + (dotMaxSize-dotSize)/2,
                      yMergin+(dotMaxSize-dotSize)/2,
                      dotSize,
                      dotSize);
    }
    
    cnt = (cnt+1) % (2*CYCLE_SPEED*DOT_NUM);
}

void HorizontalDotBlinker::timerCallback()
{
    repaint();
}
