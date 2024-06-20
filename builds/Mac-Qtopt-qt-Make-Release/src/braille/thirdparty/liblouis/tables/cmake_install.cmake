# Install script for directory: /Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mscore.app/Contents/Resources/tables" TYPE FILE FILES
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/afr-za-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/afr-za-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ar-ar-comp8.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ar-ar-g1-core.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ar-ar-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ar-ar-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ar-ar-math.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ar.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/as-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/as.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/awa.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/aw-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ba.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/be-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bel-comp.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bel.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bengali.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bg.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bg.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bg.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bg.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bh.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bh.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bn.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bo.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bo.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/boxes.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/braille-patterns.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/bra.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/br-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ca-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ca-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ca.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/chr-us-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ckb-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ckb-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ckb.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ckb-translation.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/compress.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/controlchars.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cop-eg-comp8.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/corrections.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/countries.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cs-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cs-comp8.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cs-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cs.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cs-translation.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cy-cy-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cy-cy-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/cy.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-6miscChars_1993.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-6miscChars.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-8miscChars_1993.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-8miscChars.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g08_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g08.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g16_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g16.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g16-lit_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g18_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g18.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g2_1993.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g26_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g26.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g26l_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g26-lit_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g26l-lit_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g28_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g28.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g28l_1993.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-g2.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-octobraille_1993.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/da-dk-octobraille.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-accents.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-accents-detailed.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-chardefs6.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-chardefs8.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-chess.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-comp6.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-de-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-de.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-eurobrl6.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-eurobrl6u.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g0-core.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g0-detailed.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g0.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g1-core.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g1-core-patterns.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g1-detailed.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g2-core.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g2-core-patterns.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/de-g2-detailed.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/devanagari.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/digits6DotsPlusDot6.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/digits6Dots.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/digits8Dots.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/dra.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/dra.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/el.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en_CA.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en_CA.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-chess.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-gb-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-gb-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-GB-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en_GB.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-in-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-nabcc.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-ueb-chardefs.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-ueb-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-ueb-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-ueb-math.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-brf.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-comp6.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en_US-comp8-ext.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-comp8-ext.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-compbrl.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-emphasis.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-interline.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en-us-mathtext.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/en_US.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/eo-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/eo-g1-x-system.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/eo.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/es-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/Es-Es-G0.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/es-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/es-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/es-new.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/es-old.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/es.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/et.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/et-g0.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ethio-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/et.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/eurodefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/fa-ir-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/fa-ir-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/fi-fi-8dot.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/fi.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/fr-bfu-comp68.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/fr-bfu-comp6.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/fr-bfu-comp8.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/fr-bfu-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ga-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ga-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gd.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gd.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gez.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gon.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gon.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/grc-international-common.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/grc-international-composed.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/grc-international-decomposed.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/grc-international-en.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gr-pl-comp8.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gu-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gujarati.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gurumuki.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/gu.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/haw-us-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/he-IL-comp8.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/he-IL.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hi-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hi.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hr-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hr-comp8.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hr-comp8.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hr-digits.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hr-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hr-g1.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hr-translation.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-backtranslate-correction.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-backtranslate-word-corrections.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-exceptionwords.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-hu-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-hu-g1_braille_input.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-hu-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-hu-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu-hu-g2_exceptions.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hu.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hy.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_cs_CZ.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_da_DK.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_de_DE.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_en_US.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_eo.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_es_ES.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_fr_FR.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_hu_HU.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_it_IT.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_nb_NO.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_nl_NL.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_nn_NO.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_pl_PL.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_pt_PT.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_ru.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hyph_sv_SE.dic"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/hy.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/IPA-unicode-range.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/IPA.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/is-chardefs6.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/is-chardefs8.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/is.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/is.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/it-it-comp6.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/it-it-comp8.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/it.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/iu-ca-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ja-kantenji.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ka-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kannada.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ka.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kha.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kh-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kk.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/km-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kmr.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kn.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko-2006.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko-2006-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko-2006-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko-chars.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko-g1-rules.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ko-g2-rules.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kok.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kok.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kru.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/kru.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ks-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/latinLetterDef6Dots.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/latinLetterDef8Dots.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/latinLowercase.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/latinUppercaseComp6.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/lg-ug-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/litdigits6DotsPlusDot6.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/litdigits6Dots.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/loweredDigits6Dots.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/loweredDigits8Dots.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/lt-6dot.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/lt-6dot.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/lt.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/lt.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/Lv-Lv-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/lv.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/malayalam.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mao-nz-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/marburg_single_cell_defs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/marburg_unicode_defs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ml-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ml.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mn-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mni.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mn-MN-common.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mn-MN-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mn-MN-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mr-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mr.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ms-my-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mt.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mt.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mun.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mun.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mwr.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/mwr.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/my-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/my-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ne.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/nemethdefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ne.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/nl-BE.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/nl-chardefs.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/nl-comp8.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/nl-NL-g0.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/nl.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-8dot-fallback-6dot-g0.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-8dot.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-braillo-047-01.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-chardefs6.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-g0.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-g3.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-generic.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-generic.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/no-no-latinLetterDef6Dots_diacritics.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/np-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/nso-za-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/nso-za-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ny-mw.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/or-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/oriya.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/or.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pa.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pi.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pi.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pl-pl-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/Pl-Pl-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pl.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/printables.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pt-pt-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pt-pt-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pt-pt-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pt.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/pu-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ro.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ro.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ru-brf.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ru-compbrl.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ru.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ru-letters.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ru-litbrl.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ru-litbrl-detailed.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ru-ru-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ru-unicode.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/rw-rw-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sah.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sa-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sa.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sd.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/se-se.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/se-se.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/si-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sin.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sin.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sk-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sk-sk-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sk-sk.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sl-si-comp8.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sl-si-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sl.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sot-za-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sot-za-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/spaces.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sr-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sr-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sr.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sv-1989.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sv-1996.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sv-g0.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sv-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sv-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sw-ke-g1-2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sw-ke-g1-3.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sw-ke-g1-4.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sw-ke-g1-5.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sw-ke-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/sw-ke-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ta.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tamil.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ta-ta-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ta.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/te-in-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/telugu.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/te.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/text_nabcc.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tr.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tr-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tr-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tr-g2.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tr.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tsn-za-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tsn-za-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/tt.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ukchardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/uk-comp.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ukmaths_single_cell_defs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ukmaths_unicode_defs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/uk.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/unicode-braille.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/unicode.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/unicode-without-blank.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/uni-text.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ur-pk-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ur-pk-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/us-table.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/uz-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ve-za-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/ve-za-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/vi-charsdef.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/vi.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/vi-lettersdef.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/vi-puncsdef.uti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/vi-saigon-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/vi-vn-g0.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/vi-vn-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/vi-vn-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/wiskunde-chardefs.cti"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/wordcx.dis"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/xh-za-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/xh-za-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zh-chn.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zh_CHN.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zhcn-cbs.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zhcn-g1.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zhcn-g2.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zh-hk.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zh_HK.tbl"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zh-tw.ctb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zu-za-g1.utb"
    "/Users/andresgarcia/MuseScore/src/braille/thirdparty/liblouis/tables/zu-za-g2.ctb"
    )
endif()

