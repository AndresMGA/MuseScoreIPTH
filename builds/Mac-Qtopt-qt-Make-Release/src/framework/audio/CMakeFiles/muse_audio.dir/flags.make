# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# compile CXX with /Library/Developer/CommandLineTools/usr/bin/c++
CXX_DEFINES = -DDECODE_ON_THE_FLY -DFLAC__NO_DLL -DHAVE_CONFIG_H -DHAVE_MPGLIB -DHAVE_STDINT_H -DKORS_LOGGER_QT_SUPPORT -DKORS_PROFILER_ENABLED -DMUE_BUILD_APPSHELL_MODULE -DMUE_BUILD_BRAILLE_MODULE -DMUE_BUILD_CONVERTER_MODULE -DMUE_BUILD_IMAGESEXPORT_MODULE -DMUE_BUILD_IMPORTEXPORT_MODULE -DMUE_BUILD_INSPECTOR_MODULE -DMUE_BUILD_INSTRUMENTSSCENE_MODULE -DMUE_BUILD_NOTATION_MODULE -DMUE_BUILD_PALETTE_MODULE -DMUE_BUILD_PLAYBACK_MODULE -DMUE_BUILD_PROJECT_MODULE -DNDEBUG -DNO_GLIB -DNO_THREADS -DOUTSIDE_SPEEX -DQT_CONCURRENT_LIB -DQT_CORE5COMPAT_LIB -DQT_CORE_LIB -DQT_DBUS_LIB -DQT_GUI_LIB -DQT_NETWORKAUTH_LIB -DQT_NETWORK_LIB -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_PRINTSUPPORT_LIB -DQT_QMLBUILTINS_LIB -DQT_QMLINTEGRATION_LIB -DQT_QMLMODELS_LIB -DQT_QML_LIB -DQT_QUICKCONTROLS2_LIB -DQT_QUICKTEMPLATES2_LIB -DQT_QUICKWIDGETS_LIB -DQT_QUICK_LIB -DQT_STATEMACHINE_LIB -DQT_SUPPORT -DQT_SVG_LIB -DQT_WIDGETS_LIB -DQT_XML_LIB -DRANDOM_PREFIX=opusenc_prefix -DSCRIPT_INTERFACE -DSTDC_HEADERS -DTAKEHIRO_IEEE754_HACK -DUSE_FAST_LOG -Dflac_QML_IMPORT=\"\" -Dfluidsynth_QML_IMPORT=\"\" -Dieee754_float32_t=float -Dlame_QML_IMPORT=\"\" -Dmuse_audio_QML_IMPORT=\"/Users/andresgarcia/MuseScore/src/framework/audio/qml\" -Dmuse_global_EXPORTS=1 -Dmuse_global_QML_IMPORT=\"\" -Dopusenc_QML_IMPORT=\"\"

CXX_INCLUDES = -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio -I/Users/andresgarcia/MuseScore/src/framework/audio -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/muse_audio_autogen/include -I/usr/local/opt/qt/lib/QtDBus.framework/Headers -iframework /usr/local/opt/qt/lib -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release -I/Users/andresgarcia/MuseScore/src -I/Users/andresgarcia/MuseScore -I/Users/andresgarcia/MuseScore/framework -I/Users/andresgarcia/MuseScore/framework/global -I/Users/andresgarcia/MuseScore/framework/testing/thirdparty/googletest/googletest/include -I/Users/andresgarcia/MuseScore/src/framework -I/Users/andresgarcia/MuseScore/src/framework/global -I/Users/andresgarcia/MuseScore/src/framework/testing/thirdparty/googletest/googletest/include -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/include -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/external -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/utils -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/midi -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/rvoice -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/sfloader -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/bindings -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/synth -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/fluidsynth/fluidsynth-2.3.3/src/drivers -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/fluidsynth -I/usr/local/Cellar/libsndfile/1.2.2/include -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/lame -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/lame/include -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/lame/libmp3lame -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/lame/mpglib -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/lame -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/opusenc -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/opusenc/libopusenc-0.2.1/include -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/opusenc/libopusenc-0.2.1/src -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/opusenc/libopusenc-0.2.1 -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/opusenc/../opus/include -I/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/audio/flac -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/flac/flac-1.4.3 -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/flac/flac-1.4.3/include -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/flac/flac-1.4.3/src -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/flac/flac-1.4.3/src/libFLAC/include -I/Users/andresgarcia/MuseScore/src/framework/audio/thirdparty/flac/flac-1.4.3/src/libFLAC++/include -F/Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/System/Library/Frameworks -isystem /usr/local/opt/qt/lib/QtCore.framework/Headers -isystem /usr/local/opt/qt/lib/QtGui.framework/Headers -isystem /usr/local/opt/qt/lib/QtWidgets.framework/Headers -isystem /usr/local/opt/qt/lib/QtNetwork.framework/Headers -isystem /usr/local/opt/qt/lib/QtNetworkAuth.framework/Headers -isystem /usr/local/opt/qt/lib/QtQml.framework/Headers -isystem /usr/local/opt/qt/include/QtQmlIntegration -isystem /usr/local/opt/qt/include -isystem /usr/local/opt/qt/include/QtQmlBuiltins -isystem /usr/local/opt/qt/lib/QtQuick.framework/Headers -isystem /usr/local/opt/qt/lib/QtQmlModels.framework/Headers -isystem /usr/local/opt/qt/lib/QtOpenGL.framework/Headers -isystem /usr/local/opt/qt/lib/QtQuickControls2.framework/Headers -isystem /usr/local/opt/qt/lib/QtQuickTemplates2.framework/Headers -isystem /usr/local/opt/qt/lib/QtQuickWidgets.framework/Headers -isystem /usr/local/opt/qt/lib/QtXml.framework/Headers -isystem /usr/local/opt/qt/lib/QtSvg.framework/Headers -isystem /usr/local/opt/qt/lib/QtPrintSupport.framework/Headers -isystem /usr/local/opt/qt/lib/QtCore5Compat.framework/Headers -isystem /usr/local/opt/qt/lib/QtStateMachine.framework/Headers -isystem /usr/local/opt/qt/lib/QtConcurrent.framework/Headers -isystem /usr/local/opt/qt/share/qt/mkspecs/macx-clang

CXX_FLAGS = -O2 -std=gnu++17 -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk -mmacosx-version-min=10.15 -Wall -Wextra -fPIC

# PCH options: src/framework/audio/CMakeFiles/muse_audio.dir/Unity/unity_4_cxx.cxx.o_OPTIONS = -Winvalid-pch;-Xclang;-include-pch;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch;-Xclang;-include;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx

# PCH options: src/framework/audio/CMakeFiles/muse_audio.dir/Unity/unity_3_cxx.cxx.o_OPTIONS = -Winvalid-pch;-Xclang;-include-pch;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch;-Xclang;-include;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx

# PCH options: src/framework/audio/CMakeFiles/muse_audio.dir/Unity/unity_2_cxx.cxx.o_OPTIONS = -Winvalid-pch;-Xclang;-include-pch;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch;-Xclang;-include;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx

# PCH options: src/framework/audio/CMakeFiles/muse_audio.dir/Unity/unity_1_cxx.cxx.o_OPTIONS = -Winvalid-pch;-Xclang;-include-pch;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch;-Xclang;-include;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx

# PCH options: src/framework/audio/CMakeFiles/muse_audio.dir/Unity/unity_0_cxx.cxx.o_OPTIONS = -Winvalid-pch;-Xclang;-include-pch;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx.pch;-Xclang;-include;-Xclang;/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/src/framework/global/CMakeFiles/muse_global.dir/cmake_pch.hxx

