/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_24D73157539FBFD0__
#define __JUCE_HEADER_24D73157539FBFD0__

//[Headers]     -- You can add your own extra header files here --
#ifndef TOUCHKEYS_NO_GUI

#include "JuceHeader.h"
#include "TouchkeyReleaseAngleMappingFactory.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class TouchkeyReleaseAngleMappingExtendedEditor  : public MappingEditorComponent,
                                                   public TextEditor::Listener,
                                                   public ComboBox::Listener,
                                                   public Button::Listener
{
public:
    //==============================================================================
    TouchkeyReleaseAngleMappingExtendedEditor (TouchkeyReleaseAngleMappingFactory& factory);
    ~TouchkeyReleaseAngleMappingExtendedEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void textEditorTextChanged(TextEditor &editor) {}
    void textEditorReturnKeyPressed(TextEditor &editor);
    void textEditorEscapeKeyPressed(TextEditor &editor);
    void textEditorFocusLost(TextEditor &editor);

    void synchronize();
    String getDescription();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    void intToString(char *st, int value);
    
    String getDescriptionHelper(String baseName);

    TouchkeyReleaseAngleMappingFactory& factory_;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> titleLabel;
    std::unique_ptr<Label> presetLabel;
    std::unique_ptr<ComboBox> presetComboBox;
    std::unique_ptr<Label> presetLabel2;
    std::unique_ptr<TextEditor> windowLengthEditor;
    std::unique_ptr<Label> presetLabel3;
    std::unique_ptr<Label> presetLabel4;
    std::unique_ptr<TextEditor> upMinSpeedEditor;
    std::unique_ptr<Label> presetLabel5;
    std::unique_ptr<TextEditor> upNote1Editor;
    std::unique_ptr<Label> presetLabel6;
    std::unique_ptr<TextEditor> upNote2Editor;
    std::unique_ptr<TextEditor> upNote3Editor;
    std::unique_ptr<Label> presetLabel7;
    std::unique_ptr<TextEditor> upVelocity1Editor;
    std::unique_ptr<TextEditor> upVelocity2Editor;
    std::unique_ptr<TextEditor> upVelocity3Editor;
    std::unique_ptr<Label> presetLabel8;
    std::unique_ptr<TextEditor> downMinSpeedEditor;
    std::unique_ptr<Label> presetLabel9;
    std::unique_ptr<TextEditor> downNote1Editor;
    std::unique_ptr<Label> presetLabel10;
    std::unique_ptr<TextEditor> downNote2Editor;
    std::unique_ptr<TextEditor> downNote3Editor;
    std::unique_ptr<Label> presetLabel11;
    std::unique_ptr<TextEditor> downVelocity1Editor;
    std::unique_ptr<TextEditor> downVelocity2Editor;
    std::unique_ptr<TextEditor> downVelocity3Editor;
    std::unique_ptr<ToggleButton> upEnableButton;
    std::unique_ptr<ToggleButton> downEnableButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TouchkeyReleaseAngleMappingExtendedEditor)
};

//[EndFile] You can add extra defines here...
#endif      // TOUCHKEYS_NO_GUI
//[/EndFile]

#endif   // __JUCE_HEADER_24D73157539FBFD0__
