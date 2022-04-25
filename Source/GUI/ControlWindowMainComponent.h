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

#ifndef __JUCE_HEADER_FD693E32C8291DFA__
#define __JUCE_HEADER_FD693E32C8291DFA__

//[Headers]     -- You can add your own extra header files here --
#ifndef TOUCHKEYS_NO_GUI

#include "JuceHeader.h"
#include "../MainApplicationController.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ControlWindowMainComponent  : public Component,
                                    public TextEditor::Listener,
                                    public ComboBox::Listener,
                                    public Button::Listener
{
public:
    //==============================================================================
    ControlWindowMainComponent ();
    ~ControlWindowMainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setMainApplicationController(MainApplicationController *controller) {
        // Attach the user interface to the controller and vice-versa
        controller_ = controller;
        lastControllerUpdateDeviceCount_ = controller_->devicesShouldUpdate();
        updateInputDeviceList();
    }

    // TextEditor listener methods
    void textEditorTextChanged(TextEditor &editor) {}
    void textEditorReturnKeyPressed(TextEditor &editor);
    void textEditorEscapeKeyPressed(TextEditor &editor);
    void textEditorFocusLost(TextEditor &editor);

    void synchronize();

    // Return the currently selected TouchKeys string
    String currentTouchkeysSelectedPath();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    enum {
        // Offsets between Juce UI IDs and positions in vector
        kMidiInputDeviceComboBoxOffset = 3,
        kTouchkeysComponentComboBoxOffset = 1,
        kTouchkeysMaxOctave = 6
    };

    void updateInputDeviceList();
    void updateOscHostPort();
    void updateKeyboardSegments();

    MainApplicationController *controller_; // Pointer to the main application controller
    std::vector<int> midiInputDeviceIDs_;
    int lastSelectedMidiInputID_;
    int lastSelectedMidiAuxInputID_;
    int lastSegmentUniqueIdentifier_;

    int lastControllerUpdateDeviceCount_;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<GroupComponent> midiInputGroupComponent;
    std::unique_ptr<ComboBox> midiInputDeviceComboBox;
    std::unique_ptr<Label> label;
    std::unique_ptr<GroupComponent> groupComponent;
    std::unique_ptr<Label> label2;
    std::unique_ptr<ComboBox> touchkeyDeviceComboBox;
    std::unique_ptr<Label> label3;
    std::unique_ptr<TextButton> touchkeyStartButton;
    std::unique_ptr<Label> touchkeyStatusLabel;
    std::unique_ptr<GroupComponent> oscGroupComponent;
    std::unique_ptr<Label> label7;
    std::unique_ptr<TextEditor> oscHostTextEditor;
    std::unique_ptr<Label> label8;
    std::unique_ptr<TextEditor> oscPortTextEditor;
    std::unique_ptr<ToggleButton> oscEnableButton;
    std::unique_ptr<ToggleButton> oscEnableRawButton;
    std::unique_ptr<Label> label4;
    std::unique_ptr<ComboBox> touchkeyOctaveComboBox;
    std::unique_ptr<GroupComponent> oscInputGroupComponent;
    std::unique_ptr<ToggleButton> oscInputEnableButton;
    std::unique_ptr<Label> label6;
    std::unique_ptr<TextEditor> oscInputPortTextEditor;
    std::unique_ptr<TabbedComponent> keyboardZoneTabbedComponent;
    std::unique_ptr<TextButton> addZoneButton;
    std::unique_ptr<TextButton> removeZoneButton;
    std::unique_ptr<TextButton> touchkeyAutodetectButton;
    std::unique_ptr<ComboBox> midiInputAuxDeviceComboBox;
    std::unique_ptr<Label> label5;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControlWindowMainComponent)
};

//[EndFile] You can add extra defines here...
#endif  // TOUCHKEYS_NO_GUI
//[/EndFile]

#endif   // __JUCE_HEADER_FD693E32C8291DFA__
