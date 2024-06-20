# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# compile C with /Library/Developer/CommandLineTools/usr/bin/cc
# compile CXX with /Library/Developer/CommandLineTools/usr/bin/c++
C_DEFINES = -DKORS_LOGGER_QT_SUPPORT -DKORS_PROFILER_ENABLED -DMUE_BUILD_ACCESSIBILITY_MODULE -DMUE_BUILD_APPSHELL_MODULE -DMUE_BUILD_AUDIO_MODULE -DMUE_BUILD_AUTOBOT_MODULE -DMUE_BUILD_BRAILLE_MODULE -DMUE_BUILD_CLOUD_MODULE -DMUE_BUILD_CONVERTER_MODULE -DMUE_BUILD_DIAGNOSTICS_MODULE -DMUE_BUILD_IMAGESEXPORT_MODULE -DMUE_BUILD_IMPORTEXPORT_MODULE -DMUE_BUILD_INSPECTOR_MODULE -DMUE_BUILD_INSTRUMENTSSCENE_MODULE -DMUE_BUILD_LANGUAGES_MODULE -DMUE_BUILD_LEARN_MODULE -DMUE_BUILD_MIDI_MODULE -DMUE_BUILD_MPE_MODULE -DMUE_BUILD_MULTIINSTANCES_MODULE -DMUE_BUILD_MUSESAMPLER_MODULE -DMUE_BUILD_NETWORK_MODULE -DMUE_BUILD_NOTATION_MODULE -DMUE_BUILD_PALETTE_MODULE -DMUE_BUILD_PLAYBACK_MODULE -DMUE_BUILD_PLUGINS_MODULE -DMUE_BUILD_PROJECT_MODULE -DMUE_BUILD_SHORTCUTS_MODULE -DMUE_BUILD_UI_MODULE -DMUE_BUILD_UPDATE_MODULE -DMUE_BUILD_WORKSPACE_MODULE -DMUE_ENABLE_AUDIO_EXPORT -DMUSESCORE_BUILD_NUMBER=\"\" -DMUSESCORE_INSTALL_NAME=\"Contents/Resources/\" -DMUSESCORE_INSTALL_PREFIX=\"/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/install\" -DMUSESCORE_INSTALL_SUFFIX=\"\" -DMUSESCORE_REVISION=\"\" -DMUSESCORE_UNSTABLE -DMUSESCORE_VERSION=\"4.3.2\" -DMUSESCORE_VERSION_LABEL=\"\" -DNDEBUG -DNO_GLIB -DNO_THREADS -DPROJECT_ROOT_DIR=\"/Users/andresgarcia/MuseScore\" -DQT_CONCURRENT_LIB -DQT_CORE_LIB -DQT_GUI_LIB -DQT_NETWORKAUTH_LIB -DQT_NETWORK_LIB -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_PRINTSUPPORT_LIB -DQT_QMLMODELS_LIB -DQT_QML_LIB -DQT_QUICKCONTROLS2_LIB -DQT_QUICKTEMPLATES2_LIB -DQT_QUICKWIDGETS_LIB -DQT_QUICK_LIB -DQT_SUPPORT -DQT_SVG_LIB -DQT_WIDGETS_LIB -DQT_XMLPATTERNS_LIB -DQT_XML_LIB -DSCRIPT_INTERFACE -Dfluidsynth_QML_IMPORT=\"\" -Dglobal_QML_IMPORT=\"\"

C_INCLUDES = -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/fluidsynth -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/fluidsynth/fluidsynth_autogen/include -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release -I/Users/andresgarcia/MuseScore -I/Users/andresgarcia/MuseScore/src -I/Users/andresgarcia/MuseScore/src/framework -I/Users/andresgarcia/MuseScore/src/framework/global -I/Users/andresgarcia/MuseScore/src/engraving -I/Users/andresgarcia/MuseScore/thirdparty/googletest/googletest/include -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/include -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/bindings -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/drivers -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/external -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/midi -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/rvoice -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/sfloader -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/synth -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/utils -I/usr/local/Cellar/libsndfile/1.2.2/include -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global -iframework /usr/local/opt/qt@5/lib -isystem /usr/local/opt/qt@5/lib/QtCore.framework/Headers -isystem /usr/local/opt/qt@5/./mkspecs/macx-clang -isystem /usr/local/opt/qt@5/lib/QtGui.framework/Headers -isystem /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/System/Library/Frameworks/OpenGL.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtNetwork.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtNetworkAuth.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQml.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQuick.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQmlModels.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQuickControls2.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQuickTemplates2.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQuickWidgets.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtWidgets.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtXml.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtXmlPatterns.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtSvg.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtPrintSupport.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtOpenGL.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtConcurrent.framework/Headers

C_FLAGSx86_64 = -O3 -DNDEBUG -arch x86_64 -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk -mmacosx-version-min=10.14 -Wall -Wextra -Wno-deprecated -Wno-unused-parameter -Wno-unused-variable -Wno-type-limits -Wno-unknown-pragmas -Wno-conversion -Wno-uninitialized -Wno-deprecated-declarations -fPIC

C_FLAGS = -O3 -DNDEBUG -arch x86_64 -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk -mmacosx-version-min=10.14 -Wall -Wextra -Wno-deprecated -Wno-unused-parameter -Wno-unused-variable -Wno-type-limits -Wno-unknown-pragmas -Wno-conversion -Wno-uninitialized -Wno-deprecated-declarations -fPIC

CXX_DEFINES = -DKORS_LOGGER_QT_SUPPORT -DKORS_PROFILER_ENABLED -DMUE_BUILD_ACCESSIBILITY_MODULE -DMUE_BUILD_APPSHELL_MODULE -DMUE_BUILD_AUDIO_MODULE -DMUE_BUILD_AUTOBOT_MODULE -DMUE_BUILD_BRAILLE_MODULE -DMUE_BUILD_CLOUD_MODULE -DMUE_BUILD_CONVERTER_MODULE -DMUE_BUILD_DIAGNOSTICS_MODULE -DMUE_BUILD_IMAGESEXPORT_MODULE -DMUE_BUILD_IMPORTEXPORT_MODULE -DMUE_BUILD_INSPECTOR_MODULE -DMUE_BUILD_INSTRUMENTSSCENE_MODULE -DMUE_BUILD_LANGUAGES_MODULE -DMUE_BUILD_LEARN_MODULE -DMUE_BUILD_MIDI_MODULE -DMUE_BUILD_MPE_MODULE -DMUE_BUILD_MULTIINSTANCES_MODULE -DMUE_BUILD_MUSESAMPLER_MODULE -DMUE_BUILD_NETWORK_MODULE -DMUE_BUILD_NOTATION_MODULE -DMUE_BUILD_PALETTE_MODULE -DMUE_BUILD_PLAYBACK_MODULE -DMUE_BUILD_PLUGINS_MODULE -DMUE_BUILD_PROJECT_MODULE -DMUE_BUILD_SHORTCUTS_MODULE -DMUE_BUILD_UI_MODULE -DMUE_BUILD_UPDATE_MODULE -DMUE_BUILD_WORKSPACE_MODULE -DMUE_ENABLE_AUDIO_EXPORT -DMUSESCORE_BUILD_NUMBER=\"\" -DMUSESCORE_INSTALL_NAME=\"Contents/Resources/\" -DMUSESCORE_INSTALL_PREFIX=\"/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/install\" -DMUSESCORE_INSTALL_SUFFIX=\"\" -DMUSESCORE_REVISION=\"\" -DMUSESCORE_UNSTABLE -DMUSESCORE_VERSION=\"4.3.2\" -DMUSESCORE_VERSION_LABEL=\"\" -DNDEBUG -DNO_GLIB -DNO_THREADS -DPROJECT_ROOT_DIR=\"/Users/andresgarcia/MuseScore\" -DQT_CONCURRENT_LIB -DQT_CORE_LIB -DQT_GUI_LIB -DQT_NETWORKAUTH_LIB -DQT_NETWORK_LIB -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_PRINTSUPPORT_LIB -DQT_QMLMODELS_LIB -DQT_QML_LIB -DQT_QUICKCONTROLS2_LIB -DQT_QUICKTEMPLATES2_LIB -DQT_QUICKWIDGETS_LIB -DQT_QUICK_LIB -DQT_SUPPORT -DQT_SVG_LIB -DQT_WIDGETS_LIB -DQT_XMLPATTERNS_LIB -DQT_XML_LIB -DSCRIPT_INTERFACE -Dfluidsynth_QML_IMPORT=\"\" -Dglobal_QML_IMPORT=\"\"

CXX_INCLUDES = -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/fluidsynth -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/audio/fluidsynth/fluidsynth_autogen/include -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release -I/Users/andresgarcia/MuseScore -I/Users/andresgarcia/MuseScore/src -I/Users/andresgarcia/MuseScore/src/framework -I/Users/andresgarcia/MuseScore/src/framework/global -I/Users/andresgarcia/MuseScore/src/engraving -I/Users/andresgarcia/MuseScore/thirdparty/googletest/googletest/include -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/include -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/bindings -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/drivers -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/external -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/midi -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/rvoice -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/sfloader -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/synth -I/Users/andresgarcia/MuseScore/thirdparty/fluidsynth/fluidsynth-2.3.3/src/utils -I/usr/local/Cellar/libsndfile/1.2.2/include -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt@6-Make-Release/src/framework/global -iframework /usr/local/opt/qt@5/lib -isystem /usr/local/opt/qt@5/lib/QtCore.framework/Headers -isystem /usr/local/opt/qt@5/./mkspecs/macx-clang -isystem /usr/local/opt/qt@5/lib/QtGui.framework/Headers -isystem /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/System/Library/Frameworks/OpenGL.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtNetwork.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtNetworkAuth.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQml.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQuick.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQmlModels.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQuickControls2.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQuickTemplates2.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtQuickWidgets.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtWidgets.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtXml.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtXmlPatterns.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtSvg.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtPrintSupport.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtOpenGL.framework/Headers -isystem /usr/local/opt/qt@5/lib/QtConcurrent.framework/Headers

CXX_FLAGSx86_64 = -O2 -std=gnu++17 -arch x86_64 -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk -mmacosx-version-min=10.14 -Wall -Wextra -Wno-deprecated -Wno-unused-parameter -Wno-unused-variable -Wno-type-limits -Wno-unknown-pragmas -Wno-conversion -Wno-uninitialized -Wno-deprecated-declarations -fPIC

CXX_FLAGS = -O2 -std=gnu++17 -arch x86_64 -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk -mmacosx-version-min=10.14 -Wall -Wextra -Wno-deprecated -Wno-unused-parameter -Wno-unused-variable -Wno-type-limits -Wno-unknown-pragmas -Wno-conversion -Wno-uninitialized -Wno-deprecated-declarations -fPIC

