# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

# build with "V=1" for verbose builds
ifeq ($(V), 1)
V_AT =
else
V_AT = @
endif

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef STRIP
  STRIP=strip
endif

ifndef AR
  AR=ar
endif

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Debug
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DDEBUG=1 -D_DEBUG=1 -DJUCER_LINUX_MAKE_BCF8FE09=1 -DJUCE_APP_VERSION=0.1.0 -DJUCE_APP_VERSION_HEX=0x100 $(shell pkg-config --cflags alsa freetype2 libcurl x11 xext xinerama) -pthread -I../../JuceLibraryCode -I../../../juce/modules $(CPPFLAGS)
  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -g -ggdb -O0 -m32 $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++11 $(CXXFLAGS)
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -L/usr/X11R6/lib/ $(shell pkg-config --libs alsa freetype2 libcurl x11 xext xinerama) -lGL -ldl -lpthread -lrt -L/usr/lib/i386-linux-gnu -L/usr/lib/i386-linux-gnu/mesa -m32 /usr/local/lib/liblo32.a $(LDFLAGS)

  TARGET := TouchKeys
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

ifeq ($(CONFIG),Release)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Release
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DNDEBUG=1 -DJUCER_LINUX_MAKE_BCF8FE09=1 -DJUCE_APP_VERSION=0.1.0 -DJUCE_APP_VERSION_HEX=0x100 $(shell pkg-config --cflags alsa freetype2 libcurl x11 xext xinerama) -pthread -I../../JuceLibraryCode -I../../../juce/modules $(CPPFLAGS)
  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -Os -m32 $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++11 $(CXXFLAGS)
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -fvisibility=hidden -L/usr/X11R6/lib/ $(shell pkg-config --libs alsa freetype2 libcurl x11 xext xinerama) -lGL -ldl -lpthread -lrt -L/usr/lib/i386-linux-gnu -L/usr/lib/i386-linux-gnu/mesa -m32 /usr/local/lib/liblo32.a $(LDFLAGS)

  TARGET := TouchKeys
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

OBJECTS := \
  $(JUCE_OBJDIR)/PreferencesComponent_8c094f62.o \
  $(JUCE_OBJDIR)/MainWindow_ca618186.o \
  $(JUCE_OBJDIR)/KeyboardZoneComponent_fd0d7a77.o \
  $(JUCE_OBJDIR)/ControlWindowMainComponent_c67f9014.o \
  $(JUCE_OBJDIR)/MappingListComponent_402cf84e.o \
  $(JUCE_OBJDIR)/MappingListItem_7a9eebac.o \
  $(JUCE_OBJDIR)/TouchkeyVibratoMappingShortEditor_27ad15dd.o \
  $(JUCE_OBJDIR)/TouchkeyVibratoMapping_ea5c5156.o \
  $(JUCE_OBJDIR)/TouchkeyVibratoMappingFactory_f90040de.o \
  $(JUCE_OBJDIR)/TouchkeyReleaseAngleMappingExtendedEditor_cdb58770.o \
  $(JUCE_OBJDIR)/TouchkeyReleaseAngleMapping_170b0b0a.o \
  $(JUCE_OBJDIR)/TouchkeyReleaseAngleMappingFactory_9052f4aa.o \
  $(JUCE_OBJDIR)/TouchkeyPitchBendMappingShortEditor_6afc649d.o \
  $(JUCE_OBJDIR)/TouchkeyPitchBendMapping_78aba96.o \
  $(JUCE_OBJDIR)/TouchkeyPitchBendMappingFactory_9fc4ef9e.o \
  $(JUCE_OBJDIR)/TouchkeyOnsetAngleMapping_a77ca3ca.o \
  $(JUCE_OBJDIR)/TouchkeyOnsetAngleMappingFactory_6a4803ea.o \
  $(JUCE_OBJDIR)/TouchkeyMultiFingerTriggerMappingShortEditor_8604e029.o \
  $(JUCE_OBJDIR)/TouchkeyMultiFingerTriggerMapping_f7bfe8a.o \
  $(JUCE_OBJDIR)/TouchkeyMultiFingerTriggerMappingFactory_e811112a.o \
  $(JUCE_OBJDIR)/TouchkeyKeyDivisionMappingShortEditor_a9e1dc43.o \
  $(JUCE_OBJDIR)/TouchkeyKeyDivisionMapping_cea38eb0.o \
  $(JUCE_OBJDIR)/TouchkeyKeyDivisionMappingFactory_33b42a44.o \
  $(JUCE_OBJDIR)/TouchkeyControlMappingExtendedEditor_bb11f4.o \
  $(JUCE_OBJDIR)/TouchkeyControlMappingShortEditor_993f27a5.o \
  $(JUCE_OBJDIR)/TouchkeyControlMapping_1e638c8e.o \
  $(JUCE_OBJDIR)/TouchkeyControlMappingFactory_1db276a6.o \
  $(JUCE_OBJDIR)/MappingScheduler_3b3284f8.o \
  $(JUCE_OBJDIR)/TouchkeyBaseMapping_d96a411c.o \
  $(JUCE_OBJDIR)/Mapping_57653e8d.o \
  $(JUCE_OBJDIR)/MappingFactorySplitter_9525552e.o \
  $(JUCE_OBJDIR)/MIDIKeyPositionMapping_750093d2.o \
  $(JUCE_OBJDIR)/MRPMapping_742529ce.o \
  $(JUCE_OBJDIR)/KeyboardTesterDisplay_81722890.o \
  $(JUCE_OBJDIR)/KeyboardDisplay_d9f334cf.o \
  $(JUCE_OBJDIR)/KeyPositionGraphDisplay_5606e2d0.o \
  $(JUCE_OBJDIR)/RawSensorDisplay_f15a0e36.o \
  $(JUCE_OBJDIR)/IIRFilter_c9874248.o \
  $(JUCE_OBJDIR)/Scheduler_5d9eed19.o \
  $(JUCE_OBJDIR)/TimerNode_477a3545.o \
  $(JUCE_OBJDIR)/TimestampSynchronizer_df7831b6.o \
  $(JUCE_OBJDIR)/Trigger_66a771d6.o \
  $(JUCE_OBJDIR)/TouchkeyEntropyGenerator_89f40fa7.o \
  $(JUCE_OBJDIR)/TouchkeyOscEmulator_9ad15559.o \
  $(JUCE_OBJDIR)/MidiKeyboardSegment_e1be9d70.o \
  $(JUCE_OBJDIR)/KeyIdleDetector_2efa023e.o \
  $(JUCE_OBJDIR)/KeyPositionTracker_4c4c0dd5.o \
  $(JUCE_OBJDIR)/LogPlayback_1debad04.o \
  $(JUCE_OBJDIR)/MidiInputController_1864322a.o \
  $(JUCE_OBJDIR)/MidiOutputController_a68d4623.o \
  $(JUCE_OBJDIR)/Osc_433b9284.o \
  $(JUCE_OBJDIR)/OscMidiConverter_75608f25.o \
  $(JUCE_OBJDIR)/PianoKey_1afca9bb.o \
  $(JUCE_OBJDIR)/PianoKeyboard_f097ab55.o \
  $(JUCE_OBJDIR)/PianoKeyCalibrator_6932659c.o \
  $(JUCE_OBJDIR)/PianoPedal_34544d96.o \
  $(JUCE_OBJDIR)/TouchkeyDevice_be3b7a9b.o \
  $(JUCE_OBJDIR)/MainApplicationController_90b344b4.o \
  $(JUCE_OBJDIR)/Main_90ebc5c2.o \
  $(JUCE_OBJDIR)/BinaryData_ce4232d4.o \
  $(JUCE_OBJDIR)/juce_audio_basics_6b797ca1.o \
  $(JUCE_OBJDIR)/juce_audio_devices_a742c38b.o \
  $(JUCE_OBJDIR)/juce_audio_formats_5a29c68a.o \
  $(JUCE_OBJDIR)/juce_core_75b14332.o \
  $(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o \
  $(JUCE_OBJDIR)/juce_events_d2be882c.o \
  $(JUCE_OBJDIR)/juce_graphics_9c18891e.o \
  $(JUCE_OBJDIR)/juce_gui_basics_8a6da59c.o \
  $(JUCE_OBJDIR)/juce_gui_extra_4a026f23.o \
  $(JUCE_OBJDIR)/juce_opengl_cd70b4c2.o \

.PHONY: clean

$(JUCE_OUTDIR)/$(TARGET): check-pkg-config $(OBJECTS) $(RESOURCES)
	@echo Linking TouchKeys
	-@mkdir -p $(JUCE_BINDIR)
	-@mkdir -p $(JUCE_LIBDIR)
	-@mkdir -p $(JUCE_OUTDIR)
	$(V_AT)$(BLDCMD)

check-pkg-config:
	@command -v pkg-config >/dev/null 2>&1 || { echo >&2 "pkg-config not installed. Please, install it."; exit 1; }
	@pkg-config --print-errors alsa freetype2 libcurl x11 xext xinerama

clean:
	@echo Cleaning TouchKeys
	$(V_AT)$(CLEANCMD)

strip:
	@echo Stripping TouchKeys
	-@$(STRIP) --strip-unneeded $(JUCE_OUTDIR)/$(TARGET)

$(JUCE_OBJDIR)/PreferencesComponent_8c094f62.o: ../../Source/GUI/PreferencesComponent.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PreferencesComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MainWindow_ca618186.o: ../../Source/GUI/MainWindow.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MainWindow.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/KeyboardZoneComponent_fd0d7a77.o: ../../Source/GUI/KeyboardZoneComponent.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling KeyboardZoneComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ControlWindowMainComponent_c67f9014.o: ../../Source/GUI/ControlWindowMainComponent.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ControlWindowMainComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MappingListComponent_402cf84e.o: ../../Source/GUI/MappingListComponent.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MappingListComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MappingListItem_7a9eebac.o: ../../Source/GUI/MappingListItem.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MappingListItem.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyVibratoMappingShortEditor_27ad15dd.o: ../../Source/Mappings/Vibrato/TouchkeyVibratoMappingShortEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyVibratoMappingShortEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyVibratoMapping_ea5c5156.o: ../../Source/Mappings/Vibrato/TouchkeyVibratoMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyVibratoMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyVibratoMappingFactory_f90040de.o: ../../Source/Mappings/Vibrato/TouchkeyVibratoMappingFactory.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyVibratoMappingFactory.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyReleaseAngleMappingExtendedEditor_cdb58770.o: ../../Source/Mappings/ReleaseAngle/TouchkeyReleaseAngleMappingExtendedEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyReleaseAngleMappingExtendedEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyReleaseAngleMapping_170b0b0a.o: ../../Source/Mappings/ReleaseAngle/TouchkeyReleaseAngleMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyReleaseAngleMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyReleaseAngleMappingFactory_9052f4aa.o: ../../Source/Mappings/ReleaseAngle/TouchkeyReleaseAngleMappingFactory.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyReleaseAngleMappingFactory.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyPitchBendMappingShortEditor_6afc649d.o: ../../Source/Mappings/PitchBend/TouchkeyPitchBendMappingShortEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyPitchBendMappingShortEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyPitchBendMapping_78aba96.o: ../../Source/Mappings/PitchBend/TouchkeyPitchBendMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyPitchBendMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyPitchBendMappingFactory_9fc4ef9e.o: ../../Source/Mappings/PitchBend/TouchkeyPitchBendMappingFactory.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyPitchBendMappingFactory.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyOnsetAngleMapping_a77ca3ca.o: ../../Source/Mappings/OnsetAngle/TouchkeyOnsetAngleMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyOnsetAngleMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyOnsetAngleMappingFactory_6a4803ea.o: ../../Source/Mappings/OnsetAngle/TouchkeyOnsetAngleMappingFactory.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyOnsetAngleMappingFactory.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyMultiFingerTriggerMappingShortEditor_8604e029.o: ../../Source/Mappings/MultiFingerTrigger/TouchkeyMultiFingerTriggerMappingShortEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyMultiFingerTriggerMappingShortEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyMultiFingerTriggerMapping_f7bfe8a.o: ../../Source/Mappings/MultiFingerTrigger/TouchkeyMultiFingerTriggerMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyMultiFingerTriggerMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyMultiFingerTriggerMappingFactory_e811112a.o: ../../Source/Mappings/MultiFingerTrigger/TouchkeyMultiFingerTriggerMappingFactory.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyMultiFingerTriggerMappingFactory.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyKeyDivisionMappingShortEditor_a9e1dc43.o: ../../Source/Mappings/KeyDivision/TouchkeyKeyDivisionMappingShortEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyKeyDivisionMappingShortEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyKeyDivisionMapping_cea38eb0.o: ../../Source/Mappings/KeyDivision/TouchkeyKeyDivisionMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyKeyDivisionMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyKeyDivisionMappingFactory_33b42a44.o: ../../Source/Mappings/KeyDivision/TouchkeyKeyDivisionMappingFactory.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyKeyDivisionMappingFactory.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyControlMappingExtendedEditor_bb11f4.o: ../../Source/Mappings/Control/TouchkeyControlMappingExtendedEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyControlMappingExtendedEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyControlMappingShortEditor_993f27a5.o: ../../Source/Mappings/Control/TouchkeyControlMappingShortEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyControlMappingShortEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyControlMapping_1e638c8e.o: ../../Source/Mappings/Control/TouchkeyControlMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyControlMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyControlMappingFactory_1db276a6.o: ../../Source/Mappings/Control/TouchkeyControlMappingFactory.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyControlMappingFactory.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MappingScheduler_3b3284f8.o: ../../Source/Mappings/MappingScheduler.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MappingScheduler.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyBaseMapping_d96a411c.o: ../../Source/Mappings/TouchkeyBaseMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyBaseMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Mapping_57653e8d.o: ../../Source/Mappings/Mapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Mapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MappingFactorySplitter_9525552e.o: ../../Source/Mappings/MappingFactorySplitter.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MappingFactorySplitter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MIDIKeyPositionMapping_750093d2.o: ../../Source/Mappings/MIDIKeyPositionMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MIDIKeyPositionMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MRPMapping_742529ce.o: ../../Source/Mappings/MRPMapping.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MRPMapping.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/KeyboardTesterDisplay_81722890.o: ../../Source/Display/KeyboardTesterDisplay.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling KeyboardTesterDisplay.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/KeyboardDisplay_d9f334cf.o: ../../Source/Display/KeyboardDisplay.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling KeyboardDisplay.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/KeyPositionGraphDisplay_5606e2d0.o: ../../Source/Display/KeyPositionGraphDisplay.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling KeyPositionGraphDisplay.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/RawSensorDisplay_f15a0e36.o: ../../Source/Display/RawSensorDisplay.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling RawSensorDisplay.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/IIRFilter_c9874248.o: ../../Source/Utility/IIRFilter.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling IIRFilter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Scheduler_5d9eed19.o: ../../Source/Utility/Scheduler.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Scheduler.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TimerNode_477a3545.o: ../../Source/Utility/TimerNode.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TimerNode.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TimestampSynchronizer_df7831b6.o: ../../Source/Utility/TimestampSynchronizer.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TimestampSynchronizer.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Trigger_66a771d6.o: ../../Source/Utility/Trigger.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Trigger.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyEntropyGenerator_89f40fa7.o: ../../Source/TouchKeys/TouchkeyEntropyGenerator.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyEntropyGenerator.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyOscEmulator_9ad15559.o: ../../Source/TouchKeys/TouchkeyOscEmulator.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyOscEmulator.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MidiKeyboardSegment_e1be9d70.o: ../../Source/TouchKeys/MidiKeyboardSegment.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MidiKeyboardSegment.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/KeyIdleDetector_2efa023e.o: ../../Source/TouchKeys/KeyIdleDetector.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling KeyIdleDetector.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/KeyPositionTracker_4c4c0dd5.o: ../../Source/TouchKeys/KeyPositionTracker.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling KeyPositionTracker.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/LogPlayback_1debad04.o: ../../Source/TouchKeys/LogPlayback.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling LogPlayback.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MidiInputController_1864322a.o: ../../Source/TouchKeys/MidiInputController.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MidiInputController.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MidiOutputController_a68d4623.o: ../../Source/TouchKeys/MidiOutputController.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MidiOutputController.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Osc_433b9284.o: ../../Source/TouchKeys/Osc.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Osc.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/OscMidiConverter_75608f25.o: ../../Source/TouchKeys/OscMidiConverter.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling OscMidiConverter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PianoKey_1afca9bb.o: ../../Source/TouchKeys/PianoKey.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PianoKey.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PianoKeyboard_f097ab55.o: ../../Source/TouchKeys/PianoKeyboard.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PianoKeyboard.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PianoKeyCalibrator_6932659c.o: ../../Source/TouchKeys/PianoKeyCalibrator.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PianoKeyCalibrator.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PianoPedal_34544d96.o: ../../Source/TouchKeys/PianoPedal.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PianoPedal.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TouchkeyDevice_be3b7a9b.o: ../../Source/TouchKeys/TouchkeyDevice.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TouchkeyDevice.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MainApplicationController_90b344b4.o: ../../Source/MainApplicationController.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MainApplicationController.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Main_90ebc5c2.o: ../../Source/Main.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Main.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling BinaryData.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_basics_6b797ca1.o: ../../JuceLibraryCode/juce_audio_basics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_devices_a742c38b.o: ../../JuceLibraryCode/juce_audio_devices.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_formats_5a29c68a.o: ../../JuceLibraryCode/juce_audio_formats.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_core_75b14332.o: ../../JuceLibraryCode/juce_core.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_core.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o: ../../JuceLibraryCode/juce_data_structures.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_events_d2be882c.o: ../../JuceLibraryCode/juce_events.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_events.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_graphics_9c18891e.o: ../../JuceLibraryCode/juce_graphics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_gui_basics_8a6da59c.o: ../../JuceLibraryCode/juce_gui_basics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_gui_extra_4a026f23.o: ../../JuceLibraryCode/juce_gui_extra.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_opengl_cd70b4c2.o: ../../JuceLibraryCode/juce_opengl.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_opengl.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
