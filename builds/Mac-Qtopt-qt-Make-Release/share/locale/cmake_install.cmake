# Install script for directory: /Users/andresgarcia/MuseScore/share/locale

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RELEASE")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mscore.app/Contents/Resources/locale" TYPE FILE FILES
    "/Users/andresgarcia/MuseScore/share/locale/languages.json"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_af.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ar.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ar_DZ.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ar_EG.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ar_SD.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ast.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_be.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_bg.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_br.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ca.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ca@valencia.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_cs.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_cy.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_da.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_de.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_el.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_en.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_en_GB.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_en_US.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_eo.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_es.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_et.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_eu.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_fa.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_fi.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_fil.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_fo.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_fr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ga.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_gd.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_gl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_he.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_hi_IN.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_hr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_hu.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_hy.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_id.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ig.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_it.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ja.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ka.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_kab.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ko.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_lt.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_lv.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ml.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_mn_MN.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_mt.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_nb.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_nl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_nn.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_pl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_pt.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_pt_BR.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ro.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_ru.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_scn.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_sk.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_sl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_sr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_sr_RS.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_sv.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_sv_SE.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_th.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_tr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_uk.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_uz@Latn.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_vi.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_zh_CN.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_zh_HK.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/instruments_zh_TW.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_af.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ar.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ar_DZ.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ar_EG.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ar_SD.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ast.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_be.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_bg.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_br.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ca.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ca@valencia.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_cs.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_cy.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_da.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_de.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_el.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_en.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_en_GB.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_en_US.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_eo.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_es.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_et.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_eu.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_fa.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_fi.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_fil.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_fo.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_fr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ga.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_gd.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_gl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_he.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_hi_IN.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_hr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_hu.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_hy.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_id.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ig.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_it.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ja.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ka.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_kab.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ko.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_lt.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_lv.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ml.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_mn_MN.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_mt.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_nb.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_nl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_nn.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_pl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_pt.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_pt_BR.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ro.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_ru.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_scn.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_sk.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_sl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_sr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_sr_RS.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_sv.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_sv_SE.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_th.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_tr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_uk.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_uz@Latn.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_vi.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_zh_CN.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_zh_HK.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/musescore_zh_TW.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_bg.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_el.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_eu.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_gd.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_id.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_lv.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_nb.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_nl.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_nl_BE.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_pt_BR.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_ro.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_tr.qm"
    "/Users/andresgarcia/MuseScore/builds/Mac-Qtopt-qt-Make-Release/share/locale/qt_vi.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mscore.app/Contents/Resources/locale" TYPE DIRECTORY FILES "/usr/local/translations/" FILES_MATCHING REGEX "qt_.*\\.qm" REGEX "qt_help_.*\\.qm" EXCLUDE REGEX "qtbase_.*\\.qm" REGEX "qt*_en\\.qm" EXCLUDE)
endif()

