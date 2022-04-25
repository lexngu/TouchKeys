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

#ifndef __JUCE_HEADER_AD461861885EB942__
#define __JUCE_HEADER_AD461861885EB942__

//[Headers]     -- You can add your own extra header files here --
#ifndef TOUCHKEYS_NO_GUI

#include "JuceHeader.h"
#include "TouchkeyControlMappingFactory.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class TouchkeyControlMappingExtendedEditor  : public MappingEditorComponent,
                                              public TextEditor::Listener,
                                              public ComboBox::Listener,
                                              public Button::Listener
{
public:
    //==============================================================================
    TouchkeyControlMappingExtendedEditor (TouchkeyControlMappingFactory& factory);
    ~TouchkeyControlMappingExtendedEditor();

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
    String getDescriptionHelper(String baseName);

    TouchkeyControlMappingFactory& factory_;
    bool typeWasAbsolute_;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<TextEditor> inputRangeLowEditor;
    std::unique_ptr<Label> rangeLabel;
    std::unique_ptr<Label> controlLabel;
    std::unique_ptr<ComboBox> controlComboBox;
    std::unique_ptr<Label> controlLabel2;
    std::unique_ptr<ComboBox> parameterComboBox;
    std::unique_ptr<Label> controlLabel3;
    std::unique_ptr<ComboBox> typeComboBox;
    std::unique_ptr<TextEditor> inputRangeHighEditor;
    std::unique_ptr<Label> rangeLabel2;
    std::unique_ptr<Label> rangeLabel3;
    std::unique_ptr<TextEditor> outputRangeLowEditor;
    std::unique_ptr<TextEditor> outputRangeHighEditor;
    std::unique_ptr<Label> rangeLabel4;
    std::unique_ptr<Label> controlLabel4;
    std::unique_ptr<ComboBox> directionComboBox;
    std::unique_ptr<Label> titleLabel;
    std::unique_ptr<Label> rangeLabel5;
    std::unique_ptr<TextEditor> thresholdEditor;
    std::unique_ptr<ToggleButton> cc14BitButton;
    std::unique_ptr<ToggleButton> ignore2FingersButton;
    std::unique_ptr<ToggleButton> ignore3FingersButton;
    std::unique_ptr<Label> controlLabel6;
    std::unique_ptr<ComboBox> outOfRangeComboBox;
    std::unique_ptr<Label> rangeLabel6;
    std::unique_ptr<TextEditor> outputDefaultEditor;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TouchkeyControlMappingExtendedEditor)
};

//[EndFile] You can add extra defines here...
#endif      // TOUCHKEYS_NO_GUI
//[/EndFile]

#endif   // __JUCE_HEADER_AD461861885EB942__
