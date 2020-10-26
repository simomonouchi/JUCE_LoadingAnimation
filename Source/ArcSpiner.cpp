/*
  ==============================================================================

    ArcSpiner.cpp
    Created: 24 Oct 2020 3:04:25pm
    Author:  Ryota Shimokawara

  ==============================================================================
*/

#include "ArcSpiner.h"

ArcSpiner::ArcSpiner()
{
    startTimer(30);
}

ArcSpiner::~ArcSpiner()
{
}

void ArcSpiner::paint(juce::Graphics& g)
{
    float x = getWidth()*CHICK_RATIO/4;
    float y = getHeight()*CHICK_RATIO/4;
    float width = getWidth()*(1-CHICK_RATIO/2);
    float height = getHeight()*(1-CHICK_RATIO/2);
    float thick = getWidth()*CHICK_RATIO/2;
    
    /* draw circle */
    g.setColour(CIRCLE_COLOUR);
    g.drawEllipse(x, y, width, height, thick);
 
    float begin = (float)cnt/(float)CNT_MAX*2.0f*float_Pi;
    float end = ((float)cnt/(float)CNT_MAX+0.3f)*2.0f*float_Pi;
    
    /* draw arc */
    Path p;
    p.addArc(x, y, width, height, begin, end, true);
    g.setColour (ARC_COLOUR);
    g.strokePath(p, PathStrokeType(thick));

    cnt = (cnt+1)%CNT_MAX;
}

void ArcSpiner::timerCallback()
{
    repaint();
}
