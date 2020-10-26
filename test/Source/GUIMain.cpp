/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.4

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GUIMain.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUIMain::GUIMain ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    loadingAnimation.reset (new ArcSpiner());
    addAndMakeVisible (loadingAnimation.get());

    loadingAnimation->setBounds (40, 32, 120, 120);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GUIMain::~GUIMain()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    loadingAnimation = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GUIMain::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff323e44));

    {
        int x = 1, y = 4, width = 200, height = 200;
        juce::Colour strokeColour = juce::Colour (0xffeee9fc);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRect (x, y, width, height, 5);

    }

    {
        int x = 9, y = 156, width = 184, height = 30;
        juce::String text (TRANS("Arc Spiner"));
        juce::Colour fillColour = juce::Colours::white;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
        g.drawText (text, x, y, width, height,
                    juce::Justification::centred, true);
    }

    {
        int x = 201, y = 4, width = 200, height = 200;
        juce::Colour strokeColour = juce::Colour (0xffeee9fc);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRect (x, y, width, height, 5);

    }

    {
        int x = 401, y = 4, width = 200, height = 200;
        juce::Colour strokeColour = juce::Colour (0xffeee9fc);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRect (x, y, width, height, 5);

    }

    {
        int x = 1, y = 204, width = 200, height = 200;
        juce::Colour strokeColour = juce::Colour (0xffeee9fc);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRect (x, y, width, height, 5);

    }

    {
        int x = 201, y = 204, width = 200, height = 200;
        juce::Colour strokeColour = juce::Colour (0xffeee9fc);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRect (x, y, width, height, 5);

    }

    {
        int x = 401, y = 204, width = 200, height = 200;
        juce::Colour strokeColour = juce::Colour (0xffeee9fc);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (strokeColour);
        g.drawRect (x, y, width, height, 5);

    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUIMain::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUIMain" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44">
    <RECT pos="1 4 200 200" fill="solid: ffffff" hasStroke="1" stroke="5, mitered, butt"
          strokeColour="solid: ffeee9fc"/>
    <TEXT pos="9 156 184 30" fill="solid: ffffffff" hasStroke="0" text="Arc Spiner"
          fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
          italic="0" justification="36"/>
    <RECT pos="201 4 200 200" fill="solid: ffffff" hasStroke="1" stroke="5, mitered, butt"
          strokeColour="solid: ffeee9fc"/>
    <RECT pos="401 4 200 200" fill="solid: ffffff" hasStroke="1" stroke="5, mitered, butt"
          strokeColour="solid: ffeee9fc"/>
    <RECT pos="1 204 200 200" fill="solid: ffffff" hasStroke="1" stroke="5, mitered, butt"
          strokeColour="solid: ffeee9fc"/>
    <RECT pos="201 204 200 200" fill="solid: ffffff" hasStroke="1" stroke="5, mitered, butt"
          strokeColour="solid: ffeee9fc"/>
    <RECT pos="401 204 200 200" fill="solid: ffffff" hasStroke="1" stroke="5, mitered, butt"
          strokeColour="solid: ffeee9fc"/>
  </BACKGROUND>
  <GENERICCOMPONENT name="" id="b45d9c2a159401ec" memberName="loadingAnimation" virtualName=""
                    explicitFocusOrder="0" pos="40 32 120 120" class="ArcSpiner"
                    params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

