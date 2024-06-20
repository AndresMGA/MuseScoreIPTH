/********************************************************************************
** Form generated from reading UI file 'editstyle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTYLE_H
#define UI_EDITSTYLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "notation/view/widgets/alignSelect.h"
#include "notation/view/widgets/colorlabel.h"
#include "notation/view/widgets/fontStyleSelect.h"
#include "notation/view/widgets/offsetSelect.h"
#include "notation/view/widgets/voicingSelect.h"
#include "uicomponents/view/widgets/radiobuttongroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_EditStyleBase
{
public:
    QGridLayout *gridLayout_39;
    QSplitter *splitter;
    QListWidget *pageList;
    QStackedWidget *pageStack;
    QWidget *PageScore;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *groupBox_score;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_score;
    QWidget *scrollArea_score_contents;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout;
    QLabel *label_musicalSymbolFont;
    QComboBox *musicalSymbolFont;
    QCheckBox *optimizeStyleCheckbox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_musicalTextFont;
    QComboBox *musicalTextFont;
    QLabel *label_staffLineWidth;
    QDoubleSpinBox *staffLineWidth;
    QToolButton *resetStaffLineWidth;
    QCheckBox *concertPitch;
    QGroupBox *enableIndentationOnFirstSystem;
    QHBoxLayout *hLayout_indentation;
    QLabel *label_indentation;
    QDoubleSpinBox *indentationValue;
    QToolButton *resetFirstSystemIndentation;
    QSpacerItem *horizontalSpacer_indentation;
    QGroupBox *hideEmptyStaves;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *dontHideStavesInFirstSystem;
    QCheckBox *alwaysShowBrackets;
    QCheckBox *crossMeasureValues;
    QGroupBox *instrumentLabel_box;
    QVBoxLayout *verticalLayout_63;
    QCheckBox *hideInstrumentNameIfOneInstrument;
    QGridLayout *gridLayout_67;
    QRadioButton *subsLongBtn;
    QToolButton *resetSubsSystemLabel;
    QRadioButton *firstLongBtn;
    QToolButton *resetFirstSystemLabel;
    QRadioButton *subsHideBtn;
    QLabel *subsSystemLabel_label;
    QLabel *firstSystemLabel_label;
    QRadioButton *subsShortBtn;
    QRadioButton *firstShortBtn;
    QRadioButton *firstHideBtn;
    QSpacerItem *horizontalSpacer_67;
    QSpacerItem *verticalSpacer_10;
    QGroupBox *swingSettings;
    QVBoxLayout *verticalLayout_39;
    QHBoxLayout *horizontalLayout_10;
    QLabel *SwingLabel;
    QRadioButton *swingOff;
    QRadioButton *swingEighth;
    QRadioButton *swingSixteenth;
    QSpacerItem *zontalSpacer_16;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QSpinBox *swingBox;
    QSpacerItem *horizontalSpacer_16;
    QGroupBox *groupBox_score_autoplace;
    QGridLayout *gridLayout_11;
    QLabel *minVerticalDistance_label;
    QDoubleSpinBox *minVerticalDistance;
    QComboBox *autoplaceVerticalAlignRange;
    QSpacerItem *horizontalSpacer_23;
    QToolButton *resetMinVerticalDistance;
    QLabel *label_36;
    QToolButton *resetAutoplaceVerticalAlignRange;
    QSpacerItem *horizontalSpacer_51;
    QSpacerItem *verticalSpacer;
    QWidget *PagePage;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *groupBox_page;
    QGridLayout *gridLayout_8;
    QScrollArea *scrollArea_page;
    QWidget *scrollArea_page_contents;
    QGridLayout *gridLayout_4;
    muse::uicomponents::RadioButtonGroupBox *disableVerticalSpread;
    QGridLayout *gridLayout_49;
    QDoubleSpinBox *staffDistance;
    QToolButton *resetAkkoladeDistance;
    QLabel *label_69;
    QToolButton *resetMinSystemDistance;
    QToolButton *resetMaxSystemDistance;
    QSpacerItem *horizontalSpacer_15;
    QToolButton *resetStaffDistance;
    QDoubleSpinBox *minSystemDistance;
    QLabel *label_191;
    QLabel *label_73;
    QDoubleSpinBox *akkoladeDistance;
    QLabel *label_70;
    QSpacerItem *horizontalSpacer_50;
    QDoubleSpinBox *maxSystemDistance;
    QLabel *label_78;
    QToolButton *resetStaffLowerBorder;
    QToolButton *resetSystemFrameDistance;
    QFrame *line_8;
    QDoubleSpinBox *staffUpperBorder;
    QDoubleSpinBox *frameSystemDistance;
    QFrame *line_6;
    QLabel *label_74;
    QToolButton *resetFrameSystemDistance;
    QLabel *label_75;
    QToolButton *resetLastSystemFillThreshold;
    QFrame *line_7;
    QSpinBox *lastSystemFillThreshold;
    QSpacerItem *horizontalSpacer_44;
    QLabel *label_77;
    QDoubleSpinBox *systemFrameDistance;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *resetStaffUpperBorder;
    QLabel *label_76;
    QSpacerItem *verticalSpacer_9;
    muse::uicomponents::RadioButtonGroupBox *enableVerticalSpread;
    QGridLayout *gridLayout_50;
    QDoubleSpinBox *maxPageFillSpread;
    QLabel *label_160;
    QDoubleSpinBox *minStaffSpread;
    QLabel *label_155;
    QToolButton *resetMinSystemSpread;
    QDoubleSpinBox *spreadSquareBracket;
    QToolButton *resetSpreadSquareBracket;
    QDoubleSpinBox *maxAkkoladeDistance;
    QSpacerItem *horizontalSpacer_13;
    QToolButton *resetMinStaffSpread;
    QLabel *label_161;
    QToolButton *resetSpreadCurlyBracket;
    QToolButton *resetMaxStaffSpread;
    QToolButton *resetMaxAkkoladeDistance;
    QLabel *label_156;
    QLabel *label_159;
    QDoubleSpinBox *maxStaffSpread;
    QDoubleSpinBox *spreadSystem;
    QLabel *label_162;
    QLabel *label_157;
    QLabel *label_154;
    QDoubleSpinBox *maxSystemSpread;
    QSpacerItem *horizontalSpacer_21;
    QDoubleSpinBox *minSystemSpread;
    QToolButton *resetMaxSystemSpread;
    QToolButton *resetMaxPageFillSpread;
    QDoubleSpinBox *spreadCurlyBracket;
    QToolButton *resetSpreadSystem;
    QLabel *label_153;
    QSpacerItem *horizontalSpacer_49;
    QDoubleSpinBox *staffLowerBorder;
    QWidget *PageSizes;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox_sizes;
    QGridLayout *gridLayout_27;
    QLabel *label_38;
    QSpinBox *smallStaffSize;
    QToolButton *resetSmallStaffSize;
    QSpacerItem *horizontalSpacer_24;
    QLabel *label_44;
    QSpinBox *smallNoteSize;
    QToolButton *resetSmallNoteSize;
    QLabel *label_39;
    QSpinBox *graceNoteSize;
    QToolButton *resetGraceNoteSize;
    QLabel *label_45;
    QSpinBox *smallClefSize;
    QToolButton *resetSmallClefSize;
    QSpacerItem *verticalSpacer_21;
    QWidget *PageHeaderFooter;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea_headerFooter;
    QWidget *scrollArea_headerFooter_contents;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *showHeader;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *showHeaderFirstPage;
    QSpacerItem *horizontalSpacer_52;
    QCheckBox *headerOddEven;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_5;
    QTextEdit *oddHeaderR;
    QTextEdit *evenHeaderL;
    QLabel *labelLeftHeader;
    QTextEdit *oddHeaderL;
    QTextEdit *evenHeaderR;
    QLabel *labelEvenHeader;
    QTextEdit *oddHeaderC;
    QLabel *labelMiddleHeader;
    QTextEdit *evenHeaderC;
    QLabel *labelPageHeader;
    QLabel *labelOddHeader;
    QLabel *labelRightHeader;
    QGroupBox *showFooter;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *showFooterFirstPage;
    QSpacerItem *horizontalSpacer_53;
    QCheckBox *footerOddEven;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_6;
    QLabel *labelOddFooter;
    QTextEdit *oddFooterL;
    QLabel *labelMiddleFooter;
    QTextEdit *oddFooterC;
    QTextEdit *evenFooterL;
    QLabel *labelEvenFooter;
    QLabel *labelLeftFooter;
    QTextEdit *evenFooterC;
    QTextEdit *evenFooterR;
    QTextEdit *oddFooterR;
    QLabel *labelPageFooter;
    QLabel *labelRightFooter;
    QSpacerItem *verticalSpacer_33;
    QWidget *PageMeasureNumbers;
    QVBoxLayout *verticalLayout_44;
    QGroupBox *showMeasureNumber;
    QGridLayout *_2;
    QCheckBox *showFirstMeasureNumber;
    QLabel *measureNumberPosAboveLabel;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *showIntervalMeasureNumber;
    QSpinBox *intervalMeasureNumber;
    QLabel *measureNumberPosBelowLabel;
    QToolButton *resetMeasureNumberPosAbove;
    QLabel *label_921;
    QToolButton *resetMeasureNumberPosBelow;
    QLabel *label_93;
    mu::notation::OffsetSelect *measureNumberPosAbove;
    QToolButton *resetMeasureNumberHPlacement;
    mu::notation::OffsetSelect *measureNumberPosBelow;
    QRadioButton *showEverySystemMeasureNumber;
    QToolButton *resetMeasureNumberVPlacement;
    QComboBox *measureNumberHPlacement;
    QCheckBox *showAllStavesMeasureNumber;
    QComboBox *measureNumberVPlacement;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_54;
    QGroupBox *mmRestShowMeasureNumberRange;
    QGridLayout *gridLayout_48;
    QToolButton *resetMmRestRangeBracketType;
    QComboBox *mmRestRangeBracketType;
    mu::notation::OffsetSelect *mmRestRangePosAbove;
    QToolButton *resetMMRestRangePosAbove;
    QLabel *label_165;
    QComboBox *mmRestRangeVPlacement;
    QComboBox *mmRestRangeHPlacement;
    QLabel *mmRestRangePosAboveLabel;
    QLabel *label_164;
    QToolButton *resetMmRestRangeVPlacement;
    QLabel *label_166;
    QToolButton *resetMmRestRangeHPlacement;
    QLabel *mmRestRangePosBelowLabel;
    mu::notation::OffsetSelect *mmRestRangePosBelow;
    QToolButton *resetMMRestRangePosBelow;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer_27;
    QWidget *PageSystem;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_systemBrackets;
    QGridLayout *gridLayout_44;
    QDoubleSpinBox *bracketWidth;
    QLabel *label_52;
    QDoubleSpinBox *bracketDistance;
    QToolButton *resetBracketDistance;
    QDoubleSpinBox *akkoladeBarDistance;
    QLabel *braceThicknessLabel;
    QDoubleSpinBox *akkoladeWidth;
    QToolButton *resetBraceThickness;
    QLabel *braceDistanceLabel;
    QToolButton *resetBraceDistance;
    QLabel *label_91;
    QToolButton *resetBracketThickness;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *horizontalSpacer_42;
    QGroupBox *groupBox_systemDividers;
    QVBoxLayout *verticalLayout_41;
    QGroupBox *dividerLeft;
    QGridLayout *gridLayout_10;
    QComboBox *dividerLeftSym;
    QDoubleSpinBox *dividerLeftY;
    QDoubleSpinBox *dividerLeftX;
    QLabel *label_65;
    QLabel *label_29;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_37;
    QSpacerItem *horizontalSpacer_41;
    QGroupBox *dividerRight;
    QGridLayout *gridLayout_30;
    QLabel *label_68;
    QComboBox *dividerRightSym;
    QDoubleSpinBox *dividerRightY;
    QLabel *label_66;
    QLabel *label_67;
    QDoubleSpinBox *dividerRightX;
    QSpacerItem *horizontalSpacer_39;
    QSpacerItem *horizontalSpacer_40;
    QSpacerItem *verticalSpacer_20;
    QWidget *PageClefsKeyTimeSigs;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *groupBox_clefSettings;
    QVBoxLayout *verticalLayout_59;
    QLabel *label_173;
    QRadioButton *radioShowAllClefs;
    QRadioButton *radioHideClefs;
    QCheckBox *hideTabClefs;
    QCheckBox *genCourtesyClef;
    QGroupBox *groupBox_TABClef;
    QVBoxLayout *verticalLayout_29;
    QRadioButton *clefTab1;
    QRadioButton *clefTab2;
    QGroupBox *groupBox_keySigSettings;
    QVBoxLayout *verticalLayout_60;
    QLabel *label_194;
    QRadioButton *radioShowAllKeys;
    QRadioButton *radioHideKeys;
    QCheckBox *genCourtesyKeysig;
    QGroupBox *groupBox_timeSigSettings;
    QVBoxLayout *verticalLayout_61;
    QCheckBox *genCourtesyTimesig;
    QSpacerItem *verticalSpacer_15;
    QWidget *PageAccidentals;
    QVBoxLayout *verticalLayout_30;
    QScrollArea *scrollAreaAccidentals;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_631;
    QGroupBox *groupBox_accidentals;
    QGridLayout *gridLayout_51;
    QToolButton *resetAccidentalsBracketPadding;
    QDoubleSpinBox *accidentalsBracketsBadding;
    QLabel *label_147;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *accidentalsGroup;
    QVBoxLayout *verticalLayout_31;
    QTableWidget *accidentalTable;
    QGroupBox *keySigNaturalsGroup;
    QVBoxLayout *verticalLayout_35;
    QRadioButton *radioKeySigNatNone;
    QRadioButton *radioKeySigNatBefore;
    QRadioButton *radioKeySigNatAfter;
    QGroupBox *groupBoxAccidentalStacking;
    QGridLayout *gridLayout_671;
    QSpacerItem *verticalSpacer_5;
    QWidget *PageMeasure;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_measure;
    QGridLayout *gridLayout_99;
    QScrollArea *scrollArea_measure;
    QWidget *scrollArea_measure_contents;
    QGridLayout *gridLayout_56;
    QDoubleSpinBox *measureSpacing;
    QGroupBox *groupBox_padding;
    QGridLayout *gridLayout_2;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_58;
    QLabel *label_109;
    QFrame *line_15;
    QToolButton *resetTimesigBarlineDistance;
    QFrame *line_10;
    QToolButton *resetNoteBarDistance;
    QDoubleSpinBox *barGraceDistance;
    QToolButton *resetTimesigLeftMargin;
    QDoubleSpinBox *barAccidentalDistance;
    QFrame *line_11;
    QLabel *label_18;
    QLabel *label_113;
    QToolButton *resetClefTimesigDistance;
    QToolButton *resetClefKeyDistance;
    QDoubleSpinBox *timesigLeftMargin;
    QDoubleSpinBox *clefBarlineDistance;
    QToolButton *resetClefBarlineDistance;
    QLabel *label_19;
    QDoubleSpinBox *clefTimesigDistance;
    QLabel *label_61;
    QLabel *label_53;
    QToolButton *resetClefLeftMargin;
    QDoubleSpinBox *clefKeyDistance;
    QLabel *label_13;
    QToolButton *resetBarNoteDistance;
    QLabel *label_12;
    QToolButton *resetKeysigLeftMargin;
    QDoubleSpinBox *clefLeftMargin;
    QToolButton *resetClefKeyRightMargin;
    QDoubleSpinBox *keyTimesigDistance;
    QToolButton *resetKeyBarlineDistance;
    QFrame *line_12;
    QDoubleSpinBox *noteBarDistance;
    QDoubleSpinBox *clefKeyRightMargin;
    QLabel *label_21;
    QLabel *label_94;
    QLabel *label_110;
    QDoubleSpinBox *timesigBarlineDistance;
    QToolButton *resetBarAccidentalDistance;
    QLabel *label_102;
    QToolButton *resetKeyTimesigDistance;
    QDoubleSpinBox *barNoteDistance;
    QToolButton *resetBarGraceDistance;
    QDoubleSpinBox *keysigLeftMargin;
    QDoubleSpinBox *keyBarlineDistance;
    QLabel *label_108;
    QSpacerItem *horizontalSpacer_61;
    QSpacerItem *horizontalSpacer_57;
    QDoubleSpinBox *minMeasureWidth_2;
    QToolButton *resetMeasureSpacing;
    QLabel *label_89;
    QSpacerItem *horizontalSpacer_62;
    QToolButton *resetMinNoteDistance;
    QSpacerItem *verticalSpacer_11;
    QDoubleSpinBox *minNoteDistance;
    QToolButton *resetMinMeasureWidth;
    QLabel *label_11;
    QLabel *label_14;
    QGroupBox *groupBox_systemHeader;
    QGridLayout *gridLayout_59;
    QDoubleSpinBox *systemHeaderTimeSigDistance;
    QDoubleSpinBox *systemHeaderDistance;
    QLabel *label_112;
    QSpacerItem *horizontalSpacer_59;
    QLabel *label_111;
    QToolButton *resetSystemHeaderTimeSigDistance;
    QToolButton *resetSystemHeaderDistance;
    QSpacerItem *horizontalSpacer_60;
    QWidget *PageBarlines;
    QVBoxLayout *verticalLayout_17;
    QGroupBox *groupBox_barlines;
    QGridLayout *gridLayout_42;
    QLabel *label_85;
    QDoubleSpinBox *barWidth;
    QToolButton *resetEndBarWidth;
    QToolButton *resetRepeatBarlineDotSeparation;
    QLabel *label_82;
    QToolButton *resetDoubleBarWidth;
    QCheckBox *showStartBarlineMultiple;
    QDoubleSpinBox *doubleBarWidth;
    QDoubleSpinBox *doubleBarDistance;
    QSpacerItem *horizontalSpacer_48;
    QDoubleSpinBox *repeatBarlineDotSeparation;
    QToolButton *resetShowRepeatBarTips;
    QCheckBox *showRepeatBarTips;
    QToolButton *resetScaleBarlines;
    QDoubleSpinBox *endBarDistance;
    QLabel *label_84;
    QCheckBox *scaleBarlines;
    QToolButton *resetShowStartBarlineSingle;
    QToolButton *resetDoubleBarDistance;
    QToolButton *resetEndBarDistance;
    QDoubleSpinBox *endBarWidth;
    QToolButton *resetShowStartBarlineMultiple;
    QLabel *label_83;
    QLabel *repeatBarlineDotSeparationLbl;
    QLabel *label_86;
    QToolButton *resetBarWidth;
    QCheckBox *showStartBarlineSingle;
    QGroupBox *keySigCourtesyBarlineGroup;
    QVBoxLayout *verticalLayout_611;
    QRadioButton *radioKeySigCourtesyBarlineAlwaysDouble;
    QRadioButton *radioKeySigCourtesyBarlineAlwaysSingle;
    QRadioButton *radioKeySigCourtesyBarlineDoubleBeforeNewSystem;
    QGroupBox *timeSigCourtesyBarlineGroup;
    QVBoxLayout *verticalLayout_62;
    QRadioButton *radioTimeSigCourtesyBarlineAlwaysDouble;
    QRadioButton *radioTimeSigCourtesyBarlineAlwaysSingle;
    QRadioButton *radioTimeSigCourtesyBarlineDoubleBeforeNewSystem;
    QSpacerItem *verticalSpacer_12;
    QWidget *PageNotes;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_noteFlags;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox_notes;
    QGridLayout *gridLayout_40;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_101;
    QLabel *label_24;
    QDoubleSpinBox *stemWidth;
    QLabel *label_34;
    QDoubleSpinBox *accidentalDistance;
    QDoubleSpinBox *ledgerLineWidth;
    QDoubleSpinBox *dotDotDistance;
    QDoubleSpinBox *ledgerLineLength;
    QDoubleSpinBox *noteDotDistance;
    QDoubleSpinBox *accidentalNoteDistance;
    QLabel *label_22;
    QLabel *label_100;
    QLabel *label_23;
    QLabel *label_43;
    QSpinBox *dotMag;
    QGroupBox *shortenStem;
    QGridLayout *gridLayout_37;
    QLabel *label_47;
    QDoubleSpinBox *shortestStem;
    QLabel *label_25;
    QGroupBox *groupBox_alignment;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *combineVoices;
    QToolButton *resetCombineVoices;
    QSpacerItem *verticalSpacer_6;
    QWidget *PageRests;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_rests;
    QVBoxLayout *verticalLayout_36;
    QLabel *label_46;
    QGroupBox *multiMeasureRests;
    QGridLayout *gridLayout_46;
    QLabel *label_15;
    QSpinBox *minEmptyMeasures;
    QLabel *label_16;
    QDoubleSpinBox *minMeasureWidth;
    QToolButton *resetMinMMRestWidth;
    QLabel *label_92;
    QDoubleSpinBox *mmRestNumberPos;
    QToolButton *resetMMRestNumberPos;
    QCheckBox *mmRestNumberMaskHBar;
    QToolButton *resetMMRestNumberMaskHBar;
    QLabel *label_119;
    QDoubleSpinBox *mmRestHBarThickness;
    QToolButton *resetMMRestHBarThickness;
    QLabel *label_103;
    QDoubleSpinBox *multiMeasureRestMargin;
    QToolButton *resetMultiMeasureRestMargin;
    QLabel *label_123;
    QDoubleSpinBox *mmRestHBarVStrokeThickness;
    QToolButton *resetMMRestHBarVStrokeThickness;
    QLabel *label_145;
    QDoubleSpinBox *mmRestHBarVStrokeHeight;
    QToolButton *resetMMRestHBarVStrokeHeight;
    QGroupBox *oldStyleMultiMeasureRests;
    QGridLayout *gridLayout_301;
    QSpacerItem *horizontalSpacer_151;
    QLabel *label_146;
    QToolButton *resetMMRestOldStyleMaxMeasures;
    QSpinBox *mmRestOldStyleMaxMeasures;
    QDoubleSpinBox *mmRestOldStyleSpacing;
    QLabel *label_1471;
    QToolButton *resetMMRestOldStyleSpacing;
    QSpacerItem *verticalSpacer_34;
    QWidget *PageMeasureRepeats;
    QGridLayout *gridLayout_58;
    QGroupBox *groupBox_measure_repeats;
    QGridLayout *gridLayout_52;
    QCheckBox *fourMeasureRepeatShowExtenders;
    QSpacerItem *horizontalSpacer_25;
    QGroupBox *mrNumberSeries;
    QGridLayout *gridLayout_53;
    QLabel *label_163;
    QSpinBox *mrNumberEveryXMeasures;
    QLabel *label_170;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *resetMRNumberSeriesWithParentheses;
    QToolButton *resetMRNumberEveryXMeasures;
    QCheckBox *mrNumberSeriesWithParentheses;
    QToolButton *resetFourMeasureRepeatShowExtenders;
    QLabel *label_148;
    QCheckBox *oneMeasureRepeatShow1;
    QDoubleSpinBox *measureRepeatNumberPos;
    QToolButton *resetMeasureRepeatNumberPos;
    QToolButton *resetOneMeasureRepeatShow1;
    QSpacerItem *verticalSpacer_36;
    QWidget *PageBeams;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_beams;
    QVBoxLayout *verticalLayout_25;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_7;
    QWidget *PageTuplets;
    QVBoxLayout *verticalLayout_301;
    QGroupBox *groupBox_tuplets;
    QGridLayout *gridLayout_481;
    QScrollArea *scrollArea_tuplets;
    QWidget *scrollArea_tuplets_contents;
    QGridLayout *gridLayout_54;
    QGroupBox *verticalDistance;
    QGridLayout *gridLayout_20;
    QToolButton *resetTupletMaxSlope;
    QLabel *label_48;
    QDoubleSpinBox *tupletMaxSlope;
    QLabel *label_49;
    QToolButton *resetTupletVStemDistance;
    QDoubleSpinBox *tupletVHeadDistance;
    QToolButton *resetTupletVHeadDistance;
    QLabel *label_50;
    QDoubleSpinBox *tupletVStemDistance;
    QSpacerItem *horizontalSpacer_28;
    QCheckBox *tupletOutOfStaff;
    QGroupBox *groupBox_tuplets_properties;
    QGridLayout *gridLayout_19;
    QLabel *label_114;
    QToolButton *resetTupletNumberType;
    QToolButton *resetTupletDirection;
    QComboBox *tupletNumberType;
    QComboBox *tupletDirection;
    QSpacerItem *horizontalSpacer_26;
    QLabel *label_115;
    QToolButton *resetTupletBracketType;
    QLabel *label_116;
    QComboBox *tupletBracketType;
    QGroupBox *groupBox_tuplets_brackets;
    QGridLayout *gridLayout_21;
    QLabel *label_6;
    QDoubleSpinBox *tupletBracketHookHeight;
    QLabel *label_187;
    QToolButton *resetTupletBracketWidth;
    QDoubleSpinBox *tupletBracketWidth;
    QToolButton *resetTupletBracketHookHeight;
    QSpacerItem *horizontalSpacer_55;
    QSpacerItem *verticalSpacer_35;
    QGroupBox *groupBox_tuplets_horizontalDist;
    QGridLayout *gridLayout_17;
    QDoubleSpinBox *tupletNoteLeftDistance;
    QLabel *label_56;
    QDoubleSpinBox *tupletStemLeftDistance;
    QDoubleSpinBox *tupletStemRightDistance;
    QLabel *label_58;
    QToolButton *resetTupletNoteRightDistance;
    QToolButton *resetTupletNoteLeftDistance;
    QToolButton *resetTupletStemLeftDistance;
    QLabel *label_51;
    QDoubleSpinBox *tupletNoteRightDistance;
    QLabel *label_55;
    QToolButton *resetTupletStemRightDistance;
    QSpacerItem *horizontalSpacer_27;
    QSpacerItem *verticalSpacer_3;
    QWidget *PageArpeggios;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_arpeggios;
    QGridLayout *gridLayout_31;
    QLabel *label_28;
    QDoubleSpinBox *arpeggioNoteDistance;
    QDoubleSpinBox *arpeggioHookLen;
    QDoubleSpinBox *arpeggioLineWidth;
    QLabel *label_27;
    QLabel *label_26;
    QCheckBox *arpeggioHiddenInStdIfTab;
    QSpacerItem *horizontalSpacer_35;
    QSpacerItem *verticalSpacer_8;
    QWidget *PageSlursTies;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_slursTies;
    QGridLayout *gridLayout_64;
    QGroupBox *groupBox_slurs;
    QGridLayout *gridLayout_3;
    QLabel *label_30;
    QDoubleSpinBox *slurEndLineWidth;
    QToolButton *resetSlurEndLineWidth;
    QLabel *label_31;
    QDoubleSpinBox *slurMidLineWidth;
    QToolButton *resetSlurMidLineWidth;
    QLabel *label_33;
    QDoubleSpinBox *slurDottedLineWidth;
    QToolButton *resetSlurDottedLineWidth;
    QLabel *label_158;
    QDoubleSpinBox *slurMinDistance;
    QToolButton *resetSlurMinDistance;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_ties_2;
    QGridLayout *gridLayout_65;
    QLabel *label_218;
    QDoubleSpinBox *tieEndLineWidth;
    QToolButton *resetTieEndLineWidth;
    QLabel *label_219;
    QDoubleSpinBox *tieMidLineWidth;
    QToolButton *resetTieMidLineWidth;
    QLabel *label_216;
    QDoubleSpinBox *tieDottedLineWidth;
    QToolButton *resetTieDottedLineWidth;
    QLabel *label_217;
    QDoubleSpinBox *tieMinDistance;
    QToolButton *resetTieMinDistance;
    QSpacerItem *horizontalSpacer_66;
    QGroupBox *groupBox_ties;
    QVBoxLayout *verticalLayout_57;
    QGridLayout *gridLayout_66;
    QLabel *minTieLengthLabel;
    QDoubleSpinBox *minTieLength;
    QToolButton *resetMinTieLength;
    QFrame *line_16;
    QSpacerItem *verticalSpacer_4;
    QWidget *PageDynamicsAndHairpins;
    QVBoxLayout *verticalLayout_19;
    QGroupBox *groupBox_dynamic_hairpin;
    QVBoxLayout *verticalLayout_49;
    QHBoxLayout *horizontalLayout;
    QLabel *label_62;
    QComboBox *dynamicsAndHairpinPos;
    QLabel *dynamicsAndHairpinPosDescription;
    QSpacerItem *horizontalSpacer_69;
    QToolButton *resetDynamicsAndHairpinPos;
    QCheckBox *dynamicsAndHairpinsAboveOnVocalStaves;
    QCheckBox *dynamicsAndHairpinsCenterOnGrandStaff;
    QGroupBox *groupBox_dynamics;
    QGridLayout *gridLayout_672;
    QLabel *label_220;
    mu::notation::OffsetSelect *dynamicsPosAbove;
    QLabel *label_223;
    QToolButton *resetDynamicsPosBelow;
    QToolButton *resetDynamicsSize;
    QToolButton *resetAvoidBarLines;
    QToolButton *resetDynamicsMinDistance;
    QLabel *label_221;
    QDoubleSpinBox *dynamicsSize;
    QDoubleSpinBox *dynamicsMinDistance;
    QCheckBox *avoidBarLines;
    QToolButton *resetDynamicsPosAbove;
    mu::notation::OffsetSelect *dynamicsPosBelow;
    QLabel *label_225;
    QGroupBox *dynamicsOverrideFont;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_224;
    QComboBox *dynamicsFont;
    QSpacerItem *horizontalSpacer_30;
    QGroupBox *groupBox_hairpins;
    QGridLayout *gridLayout_7;
    QToolButton *resetAutoplaceHairpinDynamicsDistance;
    QLabel *label_95;
    QDoubleSpinBox *hairpinHeight;
    mu::notation::OffsetSelect *hairpinPosAbove;
    QLabel *label_117;
    QToolButton *resetHairpinPosAbove;
    QToolButton *resetHairpinContinueHeight;
    QLabel *label_9;
    QLabel *label_8;
    QDoubleSpinBox *autoplaceHairpinDynamicsDistance;
    QToolButton *resetHairpinPosBelow;
    mu::notation::OffsetSelect *hairpinPosBelow;
    QDoubleSpinBox *hairpinLineWidth;
    QLabel *label_129;
    QToolButton *resetHairpinLineWidth;
    QDoubleSpinBox *hairpinContinueHeight;
    QLabel *label_10;
    QToolButton *resetHairpinHeight;
    QSpacerItem *horizontalSpacer_671;
    QSpacerItem *spacerItem;
    QWidget *PageVolta;
    QVBoxLayout *verticalLayout_46;
    QGroupBox *groupBox_volta;
    QGridLayout *gridLayout0;
    QToolButton *resetVoltaPosAbove;
    mu::notation::OffsetSelect *voltaPosAbove;
    QToolButton *resetVoltaLineStyleDashSize;
    QFrame *line_2;
    QToolButton *resetVoltaHook;
    QLabel *label_volta_lineStyle_dashSize;
    QDoubleSpinBox *voltaHook;
    QLabel *label_40;
    QToolButton *resetVoltaLineWidth;
    QDoubleSpinBox *voltaLineWidth;
    QToolButton *resetVoltaLineStyle;
    QLabel *label_104;
    QDoubleSpinBox *voltaLineStyleDashSize;
    QLabel *label_42;
    QLabel *label_64;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *voltaLineStyle;
    QLabel *label_volta_lineStyle_gapSize;
    QToolButton *resetVoltaLineStyleGapSize;
    QDoubleSpinBox *voltaLineStyleGapSize;
    QSpacerItem *verticalSpacer_13;
    QWidget *PageOttava;
    QVBoxLayout *verticalLayout_47;
    QGroupBox *groupBox_ottava;
    QGridLayout *gridLayout_12;
    QLabel *label_ottava_lineStyle_dashSize;
    QFrame *line_5;
    QLabel *label_81;
    QToolButton *resetOttavaPosAbove;
    QDoubleSpinBox *ottavaHookBelow;
    QLabel *label_105;
    QLabel *label_88;
    QLabel *label_130;
    QToolButton *resetOttavaHookBelow;
    QComboBox *ottavaLineStyle;
    QLabel *label_87;
    QCheckBox *ottavaNumbersOnly;
    QDoubleSpinBox *ottavaHookAbove;
    QToolButton *resetOttavaHookAbove;
    QLabel *label_185;
    QToolButton *resetOttavaLineStyle;
    QSpacerItem *horizontalSpacer_29;
    QToolButton *resetOttavaNumbersOnly;
    QFrame *line_4;
    QSpacerItem *horizontalSpacer_56;
    mu::notation::OffsetSelect *ottavaPosBelow;
    QLabel *label_ottava_lineStyle_gapSize;
    QToolButton *resetOttavaLineWidth;
    QToolButton *resetOttavaPosBelow;
    QDoubleSpinBox *ottavaLineWidth;
    mu::notation::OffsetSelect *ottavaPosAbove;
    QDoubleSpinBox *ottavaLineStyleDashSize;
    QDoubleSpinBox *ottavaLineStyleGapSize;
    QToolButton *resetOttavaLineStyleGapSize;
    QToolButton *resetOttavaLineStyleDashSize;
    QSpacerItem *verticalSpacer_14;
    QWidget *PagePedal;
    QVBoxLayout *verticalLayout_34;
    QGroupBox *groupBox_pedalLine;
    QGridLayout *gridLayout11;
    QComboBox *pedalLinePlacement;
    QDoubleSpinBox *pedalLineWidth;
    QToolButton *resetPedalLinePosAbove;
    QToolButton *resetPedalLineStyle;
    QLabel *label_106;
    QLabel *label_139;
    QToolButton *resetPedalLinePlacement;
    QLabel *label_107;
    QLabel *label_96;
    mu::notation::OffsetSelect *pedalLinePosBelow;
    QComboBox *pedalLineStyle;
    QLabel *label_124;
    QToolButton *resetPedalLineWidth;
    QToolButton *resetPedalLinePosBelow;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line_3;
    QLabel *label_pedalLine_lineStyle_dashSize;
    mu::notation::OffsetSelect *pedalLinePosAbove;
    QLabel *label_pedalLine_lineStyle_gapSize;
    QDoubleSpinBox *pedalLineStyleDashSize;
    QDoubleSpinBox *pedalLineStyleGapSize;
    QToolButton *resetPedalLineStyleDashSize;
    QToolButton *resetPedalLineStyleGapSize;
    QSpacerItem *verticalSpacer_19;
    QWidget *PageTrill;
    QVBoxLayout *verticalLayout_48;
    QGroupBox *groupBox_trillLine;
    QGridLayout *gridLayout_14;
    QLabel *label_97;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *resetTrillLinePosAbove;
    QComboBox *trillLinePlacement;
    QLabel *label_125;
    QToolButton *resetTrillLinePlacement;
    QLabel *label_140;
    QToolButton *resetTrillLinePosBelow;
    mu::notation::OffsetSelect *trillLinePosAbove;
    mu::notation::OffsetSelect *trillLinePosBelow;
    QSpacerItem *verticalSpacer_18;
    QWidget *PageVibrato;
    QVBoxLayout *verticalLayout_481;
    QGroupBox *groupBox_vibratoLine;
    QGridLayout *gridLayout_141;
    QLabel *label_971;
    QSpacerItem *horizontalSpacer_101;
    QToolButton *resetVibratoLinePosAbove;
    QComboBox *vibratoLinePlacement;
    QLabel *label_1251;
    QToolButton *resetVibratoLinePlacement;
    QLabel *label_1401;
    QToolButton *resetVibratoLinePosBelow;
    mu::notation::OffsetSelect *vibratoLinePosAbove;
    mu::notation::OffsetSelect *vibratoLinePosBelow;
    QSpacerItem *verticalSpacer_181;
    QWidget *PageBend;
    QGridLayout *gridLayout_35;
    QGroupBox *fullBendStyleBoxSelector;
    QVBoxLayout *verticalLayout_55;
    QGroupBox *groupBox_bend;
    QVBoxLayout *verticalLayout_58;
    QGroupBox *groupBox_bendsStandardStaff;
    QGridLayout *gridLayout_61;
    QSpacerItem *horizontalSpacer_64;
    QLabel *label_171;
    QDoubleSpinBox *bendLineWidth;
    QToolButton *resetBendLineWidth;
    QGroupBox *groupBox_bendsTablature;
    QGridLayout *gridLayout_63;
    QLabel *label_184;
    QToolButton *resetBendArrowWidth;
    QDoubleSpinBox *bendArrowHeight;
    QLabel *label_193;
    QDoubleSpinBox *bendArrowWidth;
    QToolButton *resetBendArrowHeight;
    QSpacerItem *horizontalSpacer_46;
    QLabel *label_179;
    QDoubleSpinBox *bendLineWidthTab;
    QToolButton *resetBendLineWidthTab;
    QSpacerItem *verticalSpacer_31;
    QGroupBox *groupBox_FretNumbers;
    QVBoxLayout *verticalLayout_56;
    QCheckBox *guitarBendCueSizedGraceFrets;
    QWidget *PageTextLine;
    QVBoxLayout *verticalLayout_45;
    QGroupBox *groupBox_textLine;
    QGridLayout *gridLayout_18;
    QLabel *label_135;
    QComboBox *textLinePlacement;
    QToolButton *resetTextLinePlacement;
    QToolButton *resetTextLinePosBelow;
    QLabel *label_136;
    QToolButton *resetTextLinePosAbove;
    QLabel *label_72;
    QSpacerItem *horizontalSpacer_33;
    mu::notation::OffsetSelect *textLinePosAbove;
    mu::notation::OffsetSelect *textLinePosBelow;
    QSpacerItem *verticalSpacer_24;
    QWidget *PageSystemTextLine;
    QVBoxLayout *verticalLayout_54;
    QGroupBox *groupBox_systemTextLine;
    QGridLayout *gridLayout_461;
    QLabel *label_211;
    QComboBox *systemTextLinePlacement;
    QToolButton *resetSystemTextLinePlacement;
    QToolButton *resetSystemTextLinePosBelow;
    QLabel *label_213;
    QToolButton *resetSystemTextLinePosAbove;
    QLabel *label_214;
    QSpacerItem *horizontalSpacer_47;
    mu::notation::OffsetSelect *systemTextLinePosAbove;
    mu::notation::OffsetSelect *systemTextLinePosBelow;
    QSpacerItem *verticalSpacer_341;
    QWidget *PageArticulationsOrnaments;
    QVBoxLayout *verticalLayout_24;
    QGroupBox *groupBox_articulationsOrnaments;
    QGridLayout *gridLayout_9;
    QToolButton *resetArticStaffDist;
    QDoubleSpinBox *articNoteHeadDist;
    QLabel *label_37;
    QLabel *label_32;
    QDoubleSpinBox *articStaffDist;
    QSpinBox *articulationMag;
    QDoubleSpinBox *articStemDist;
    QToolButton *resetArticStemDist;
    QToolButton *resetArticNoteHeadDist;
    QLabel *label_41;
    QSpacerItem *horizontalSpacer_31;
    QLabel *label_351;
    QToolButton *resetArticulationMag;
    QLabel *label_35;
    QDoubleSpinBox *articMinVerticalDist;
    QToolButton *resetArticMinVerticalDist;
    QSpacerItem *verticalSpacer_38;
    QGroupBox *groupBox_stemSideArticAlign;
    QVBoxLayout *verticalLayout_42;
    QRadioButton *radioArticAlignStem;
    QRadioButton *radioArticAlignNoteHead;
    QRadioButton *radioArticAlignCenter;
    QSpacerItem *verticalSpacer_41;
    QGroupBox *groupBox_combinedArtic;
    QVBoxLayout *verticalLayout_43;
    QRadioButton *radioArticKeepTogether;
    QRadioButton *radioArticAllowSeparate;
    QSpacerItem *verticalSpacer_25;
    QWidget *PageFermatas;
    QVBoxLayout *verticalLayout_53;
    QGroupBox *groupBox_fermatas;
    QGridLayout *gridLayout_32;
    QLabel *label_169;
    QDoubleSpinBox *fermataMinDistance;
    mu::notation::OffsetSelect *fermataPosBelow;
    QLabel *label_168;
    QToolButton *resetFermataMinDistance;
    mu::notation::OffsetSelect *fermataPosAbove;
    QToolButton *resetFermataPosAbove;
    QLabel *label_167;
    QToolButton *resetFermataPosBelow;
    QSpacerItem *horizontalSpacer_38;
    QSpacerItem *verticalSpacer_23;
    QWidget *PageStaffText;
    QGridLayout *gridLayout_34;
    QGroupBox *groupBox_staffText;
    QGridLayout *gridLayout_33;
    QSpacerItem *horizontalSpacer_45;
    QToolButton *resetStaffTextPosAbove;
    QLabel *label_178;
    QLabel *label_180;
    QDoubleSpinBox *staffTextMinDistance;
    QToolButton *resetStaffTextPosBelow;
    mu::notation::OffsetSelect *staffTextPosAbove;
    QToolButton *resetStaffTextPlacement;
    mu::notation::OffsetSelect *staffTextPosBelow;
    QLabel *label_176;
    QComboBox *staffTextPlacement;
    QLabel *label_177;
    QToolButton *resetStaffTextMinDistance;
    QSpacerItem *verticalSpacer_30;
    QWidget *PageTempoText;
    QVBoxLayout *verticalLayout_50;
    QGroupBox *groupBox_tempoText;
    QGridLayout *gridLayout_26;
    QLabel *label_144;
    QLabel *label_142;
    QComboBox *tempoTextPlacement;
    QToolButton *resetTempoTextPlacement;
    QToolButton *resetTempoTextPosBelow;
    QLabel *label_143;
    QToolButton *resetTempoTextPosAbove;
    QLabel *label_128;
    QSpacerItem *horizontalSpacer_34;
    QDoubleSpinBox *tempoTextMinDistance;
    QToolButton *resetTempoTextMinDistance;
    mu::notation::OffsetSelect *tempoTextPosAbove;
    mu::notation::OffsetSelect *tempoTextPosBelow;
    QSpacerItem *verticalSpacer_26;
    QWidget *PageLyrics;
    QGridLayout *gridLayout_29;
    QScrollArea *scrollArea_lyrics;
    QWidget *scrollArea_lyrics_contents;
    QVBoxLayout *verticalLayout_64;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_65;
    QPushButton *editLyricsTextStyleButton;
    QGridLayout *gridLayout_673;
    QDoubleSpinBox *yLyricsPosBelow;
    QToolButton *resetLyricsPosAbove;
    QLabel *label_minDistance;
    QToolButton *resetLyricsLineHeight;
    QLabel *label_134;
    QDoubleSpinBox *lyricsMinDistance;
    QLabel *label_131;
    QToolButton *resetLyricsPosBelow;
    QDoubleSpinBox *yLyricsPosAbove;
    QDoubleSpinBox *lyricsMinBottomDistance;
    QDoubleSpinBox *lyricsMinTopDistance;
    QLabel *label_137;
    QToolButton *resetLyricsPlacement;
    QCheckBox *lyricsAlignVerseNumber;
    QComboBox *lyricsPlacement;
    QDoubleSpinBox *lyricsLineHeight;
    QLabel *label_132;
    QLabel *label_71;
    QSpacerItem *horizontalSpacer_672;
    QLabel *label_133;
    QToolButton *resetLyricsAlignVerseNumber;
    QToolButton *resetLyricsMinTopDistance;
    QToolButton *resetLyricsMinDistance;
    QToolButton *resetLyricsMinBottomDistance;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *lyricsDashBox;
    QVBoxLayout *verticalLayout_632;
    QGridLayout *gridLayout_23;
    QDoubleSpinBox *lyricsDashMinLength;
    QDoubleSpinBox *lyricsDashLineThickness;
    QLabel *label_121;
    QToolButton *resetLyricsDashLineThickness;
    QToolButton *resetLyricsDashPad;
    QLabel *label_195;
    QDoubleSpinBox *lyricsDashPad;
    QLabel *label_189;
    QToolButton *resetLyricsDashMaxLength;
    QDoubleSpinBox *lyricsDashMaxLength;
    QToolButton *resetLyricsDashMaxDistance;
    QLabel *label_122;
    QDoubleSpinBox *lyricsDashMaxDistance;
    QLabel *label_120;
    QToolButton *resetLyricsDashMinLength;
    QLabel *label_196;
    QDoubleSpinBox *lyricsDashYposRatio;
    QToolButton *resetLyricsDashYposRatio;
    QGridLayout *gridLayout_57;
    QCheckBox *lyricsDashForce;
    QToolButton *resetLyricsShowDashIfSyllableOnFirstNote;
    QCheckBox *lyricsShowDashIfSyllableOnFirstNote;
    QLabel *label_198;
    QToolButton *resetLyricsDashForce;
    QComboBox *lyricsDashStartSystemPlacement;
    QToolButton *resetLyricsDashStartSystemPlacement;
    QGroupBox *lyricsMelismaBox;
    QVBoxLayout *verticalLayout_66;
    QGridLayout *gridLayout_24;
    QDoubleSpinBox *minMelismaLength;
    QToolButton *resetLyricsLineThickness;
    QToolButton *resetMinMelismaLength;
    QDoubleSpinBox *lyricsLineThickness;
    QLabel *label_222;
    QLabel *label_80;
    QLabel *label_188;
    QDoubleSpinBox *lyricsMelismaPad;
    QToolButton *resetLyricsMelismaPad;
    QGridLayout *gridLayout_25;
    QCheckBox *lyricsMelismaForce;
    QToolButton *resetLyricsMelismaForce;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_17;
    QWidget *PageExpression;
    QVBoxLayout *verticalLayout_37;
    QGroupBox *groupBox_expression;
    QGridLayout *gridLayout_62;
    QCheckBox *snapExpression;
    QSpacerItem *horizontalSpacer_65;
    QToolButton *resetSnapExpression;
    QSpacerItem *verticalSpacer_40;
    QWidget *PageRehearsalMarks;
    QVBoxLayout *verticalLayout_51;
    QGroupBox *groupBox_rehearsalMarks;
    QGridLayout *gridLayout_28;
    QLabel *label_149;
    QLabel *label_150;
    QComboBox *rehearsalMarkPlacement;
    QToolButton *resetRehearsalMarkPlacement;
    QToolButton *resetRehearsalMarkPosBelow;
    QLabel *label_151;
    QToolButton *resetRehearsalMarkPosAbove;
    QLabel *label_152;
    QDoubleSpinBox *rehearsalMarkMinDistance;
    QToolButton *resetRehearsalMarkMinDistance;
    mu::notation::OffsetSelect *rehearsalMarkPosAbove;
    mu::notation::OffsetSelect *rehearsalMarkPosBelow;
    QSpacerItem *horizontalSpacer_36;
    QSpacerItem *verticalSpacer_28;
    QWidget *PageFiguredBass;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_figuredBass;
    QVBoxLayout *verticalLayout_32;
    QGridLayout *gridLayout_16;
    QLabel *labelFBSize;
    QDoubleSpinBox *doubleSpinFBSize;
    QLabel *label_98;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_99;
    QDoubleSpinBox *doubleSpinFBVertPos;
    QLabel *labelFBLineHeight;
    QSpinBox *spinFBLineHeight;
    QLabel *labelFBFont;
    QComboBox *comboFBFont;
    QLabel *labelFBVertPos;
    QGroupBox *groupFBAlign;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *radioFBTop;
    QRadioButton *radioFBBottom;
    QGroupBox *groupFBStyle;
    QVBoxLayout *verticalLayout_33;
    QRadioButton *radioFBModern;
    QRadioButton *radioFBHistoric;
    QSpacerItem *verticalSpacer_16;
    QWidget *PageChordSymbols;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_chordSymbols;
    QGridLayout *gridLayout_13;
    QScrollArea *scrollArea_chordSymbols;
    QWidget *scrollArea_chordSymbols_contents;
    QGridLayout *gridLayout_55;
    QLabel *label_60;
    QSpinBox *capoPosition;
    QGroupBox *harmonyPlay;
    QGridLayout *gridLayout_47;
    mu::notation::VoicingSelect *voicingSelectWidget;
    QGroupBox *harmonyAppearance;
    QGridLayout *gridLayout_45;
    QDoubleSpinBox *modifierMag;
    QDoubleSpinBox *modifierAdjust;
    QDoubleSpinBox *extensionMag;
    QDoubleSpinBox *extensionAdjust;
    QToolButton *resetExtensionAdjust;
    QLabel *labelExtensionAdjust;
    QLabel *labelExtensionMag;
    QToolButton *resetExtensionMag;
    QLabel *labelModifierMag;
    QLabel *labelModifierAdjust;
    QToolButton *resetModifierMag;
    QToolButton *resetModifierAdjust;
    QGroupBox *automaticCapitalization;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *lowerCaseMinorChords;
    QCheckBox *lowerCaseBassNotes;
    QCheckBox *allCapsNoteNames;
    QSpacerItem *horizontalSpacer_17;
    QGroupBox *harmonySpelling;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *useStandardNoteNames;
    QRadioButton *useGermanNoteNames;
    QRadioButton *useFullGermanNoteNames;
    QRadioButton *useSolfeggioNoteNames;
    QRadioButton *useFrenchNoteNames;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *harmonyStyle;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *chordsStandard;
    QRadioButton *chordsJazz;
    QRadioButton *chordsCustom;
    QWidget *chordDescriptionGroup;
    QGridLayout *chordDescriptionLayout;
    QCheckBox *chordsXmlFile;
    QToolButton *chordDescriptionFileButton;
    QLineEdit *chordDescriptionFile;
    QGroupBox *harmonyPositioning;
    QGridLayout *gridLayout_15;
    QLabel *label_1461;
    QToolButton *resetMaxChordShiftAbove;
    QLabel *label_79;
    QLabel *label_1231;
    QDoubleSpinBox *maxHarmonyBarDistance;
    QLabel *label_1001;
    QLabel *label_1002;
    QToolButton *resetMaxChordShiftBelow;
    QDoubleSpinBox *harmonyFretDist;
    QDoubleSpinBox *minHarmonyDistance;
    QDoubleSpinBox *maxChordShiftBelow;
    QDoubleSpinBox *maxChordShiftAbove;
    QSpacerItem *verticalSpacer_61;
    QSpacerItem *verticalSpacer_3411;
    QWidget *PageFretboardDiagrams;
    QVBoxLayout *verticalLayout_52;
    QGroupBox *groupBox_fretboardDiagrams;
    QGridLayout *gridLayout_471;
    QLabel *label_1451;
    QDoubleSpinBox *maxFretShiftAbove;
    QToolButton *resetMaxFretShiftAbove;
    QSpinBox *fretNumMag;
    QDoubleSpinBox *fretFretSpacing;
    QLabel *label_17;
    QLabel *label_5;
    QDoubleSpinBox *fretMag;
    QLabel *label_601;
    QLabel *label_90;
    QDoubleSpinBox *fretY;
    QLabel *label_2;
    QLabel *label_54;
    QDoubleSpinBox *maxFretShiftBelow;
    QDoubleSpinBox *barreLineWidth;
    QToolButton *resetMaxFretShiftBelow;
    QLabel *label_6011;
    QLabel *label_1191;
    QLabel *label_602;
    QDoubleSpinBox *fretStringSpacing;
    QSpacerItem *horizontalSpacer_43;
    QDoubleSpinBox *fretDotSize;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioFretNumRight;
    QRadioButton *radioFretNumLeft;
    QSpacerItem *verticalSpacer_29;
    QWidget *PageTablatureStyles;
    QVBoxLayout *verticalLayout_26;
    QGroupBox *groupBox_tablature;
    QVBoxLayout *verticalLayout_28;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_40;
    QLabel *label;
    QGridLayout *gridLayout_36;
    QVBoxLayout *verticalLayout_38;
    QGridLayout *gridLayout_60;
    QCheckBox *mordentShowTabSimple;
    QCheckBox *wahShowTabSimple;
    QCheckBox *slurShowTabCommon;
    QCheckBox *wahShowTabCommon;
    QCheckBox *dynamicsShowTabCommon;
    QCheckBox *mordentShowTabCommon;
    QCheckBox *staccatoShowTabSimple;
    QLabel *label_215;
    QCheckBox *rasgueadoShowTabSimple;
    QLabel *label_182;
    QSpacerItem *horizontalSpacer_63;
    QCheckBox *golpeShowTabSimple;
    QLabel *label_175;
    QLabel *label_59;
    QLabel *label_181;
    QCheckBox *rasgueadoShowTabCommon;
    QCheckBox *harmonicMarkShowTabSimple;
    QCheckBox *accentShowTabSimple;
    QCheckBox *slurShowTabSimple;
    QCheckBox *palmMuteShowTabCommon;
    QCheckBox *turnShowTabCommon;
    QCheckBox *fermataShowTabSimple;
    QLabel *label_4;
    QCheckBox *accentShowTabCommon;
    QCheckBox *hairpinShowTabCommon;
    QCheckBox *fermataShowTabCommon;
    QLabel *label_63;
    QSpacerItem *verticalSpacer_37;
    QLabel *label_192;
    QLabel *label_199;
    QCheckBox *dynamicsShowTabSimple;
    QCheckBox *hairpinShowTabSimple;
    QCheckBox *turnShowTabSimple;
    QLabel *label_200;
    QCheckBox *letRingShowTabCommon;
    QLabel *label_190;
    QLabel *label_57;
    QCheckBox *golpeShowTabCommon;
    QLabel *label_201;
    QLabel *label_183;
    QCheckBox *harmonicMarkShowTabCommon;
    QLabel *label_197;
    QCheckBox *staccatoShowTabCommon;
    QCheckBox *palmMuteShowTabSimple;
    QLabel *label_174;
    QCheckBox *letRingShowTabSimple;
    QSpacerItem *horizontalSpacer_661;
    QSpacerItem *verticalSpacer_39;
    QSpacerItem *horizontalSpacer_32;
    QGroupBox *groupBox_tied_fret_marks;
    QVBoxLayout *verticalLayout_591;
    QRadioButton *tabShowTiesAndFret;
    QRadioButton *tabShowTies;
    QRadioButton *tabShowNone;
    QGroupBox *tieParen;
    QVBoxLayout *verticalLayout_601;
    QRadioButton *tabParenthSystem;
    QRadioButton *tabParenthMeasure;
    QRadioButton *tabParenthNone;
    QCheckBox *tabParenthArticulation;
    QWidget *PageTextStyles;
    QGridLayout *gridLayout_41;
    QGroupBox *showMeasureNumber_8;
    QGridLayout *_12;
    QGroupBox *groupBox_text_style;
    QGridLayout *gridLayout_38;
    QLabel *label_202;
    QComboBox *textStyleFrameType;
    QToolButton *resetTextStyleFrameType;
    QWidget *frameWidget;
    QGridLayout *gridLayout_43;
    Awl::ColorLabel *textStyleFrameForeground;
    QLabel *label_205;
    QDoubleSpinBox *textStyleFrameBorderRadius;
    QToolButton *resetTextStyleFrameBackground;
    QToolButton *resetTextStyleFrameForeground;
    QLabel *label_206;
    QLabel *label_212;
    QToolButton *resetTextStyleFrameBorder;
    QDoubleSpinBox *textStyleFramePadding;
    Awl::ColorLabel *textStyleFrameBackground;
    QToolButton *resetTextStyleFramePadding;
    QDoubleSpinBox *textStyleFrameBorder;
    QLabel *label_203;
    QLabel *label_204;
    QToolButton *resetTextStyleFrameBorderRadius;
    mu::notation::OffsetSelect *textStyleOffset;
    Awl::ColorLabel *textStyleColor;
    QToolButton *resetTextStyleFontStyle;
    QDoubleSpinBox *textStyleFontSize;
    QLabel *label_208;
    QToolButton *resetTextStyleAlign;
    QToolButton *resetTextStyleColor;
    QLabel *textStyleColorLabel;
    mu::notation::FontStyleSelect *textStyleFontStyle;
    QToolButton *resetTextStyleFontSize;
    QLineEdit *styleName;
    QLabel *label_209;
    mu::notation::AlignSelect *textStyleAlign;
    QToolButton *resetTextStyleSpatiumDependent;
    QLabel *label_186;
    QCheckBox *textStyleSpatiumDependent;
    QToolButton *resetTextStyleName;
    QToolButton *resetTextStyleFontFace;
    QToolButton *resetTextStyleOffset;
    QLabel *label_210;
    QLabel *labelStyleName;
    QFontComboBox *textStyleFontFace;
    QLabel *label_207;
    QDoubleSpinBox *textStyleLineSpacing;
    QLabel *label_14711;
    QToolButton *resetTextStyleLineSpacing;
    QCheckBox *tupletUseSymbols;
    QToolButton *resetTupletUseSymbols;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14712;
    QDoubleSpinBox *textStyleMusicalSymbolsScale;
    QToolButton *resetTextStyleMusicalSymbolsScale;
    QSpacerItem *verticalSpacer_32;
    QListWidget *textStyles;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonTogglePagelist;
    QPushButton *resetStylesButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditStyleBase)
    {
        if (EditStyleBase->objectName().isEmpty())
            EditStyleBase->setObjectName("EditStyleBase");
        EditStyleBase->resize(933, 824);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditStyleBase->sizePolicy().hasHeightForWidth());
        EditStyleBase->setSizePolicy(sizePolicy);
        EditStyleBase->setMinimumSize(QSize(0, 0));
        EditStyleBase->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_39 = new QGridLayout(EditStyleBase);
        gridLayout_39->setObjectName("gridLayout_39");
        gridLayout_39->setContentsMargins(-1, 0, -1, -1);
        splitter = new QSplitter(EditStyleBase);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        pageList = new QListWidget(splitter);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        pageList->setObjectName("pageList");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageList->sizePolicy().hasHeightForWidth());
        pageList->setSizePolicy(sizePolicy1);
        pageList->setMinimumSize(QSize(120, 0));
        pageList->setAlternatingRowColors(true);
        pageList->setSpacing(2);
        splitter->addWidget(pageList);
        pageStack = new QStackedWidget(splitter);
        pageStack->setObjectName("pageStack");
        PageScore = new QWidget();
        PageScore->setObjectName("PageScore");
        verticalLayout_20 = new QVBoxLayout(PageScore);
        verticalLayout_20->setObjectName("verticalLayout_20");
        groupBox_score = new QGroupBox(PageScore);
        groupBox_score->setObjectName("groupBox_score");
        verticalLayout_6 = new QVBoxLayout(groupBox_score);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_score = new QScrollArea(groupBox_score);
        scrollArea_score->setObjectName("scrollArea_score");
        scrollArea_score->setFrameShape(QFrame::NoFrame);
        scrollArea_score->setWidgetResizable(true);
        scrollArea_score_contents = new QWidget();
        scrollArea_score_contents->setObjectName("scrollArea_score_contents");
        scrollArea_score_contents->setGeometry(QRect(0, 0, 673, 712));
        verticalLayout_10 = new QVBoxLayout(scrollArea_score_contents);
        verticalLayout_10->setObjectName("verticalLayout_10");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_musicalSymbolFont = new QLabel(scrollArea_score_contents);
        label_musicalSymbolFont->setObjectName("label_musicalSymbolFont");

        gridLayout->addWidget(label_musicalSymbolFont, 0, 0, 1, 1);

        musicalSymbolFont = new QComboBox(scrollArea_score_contents);
        musicalSymbolFont->addItem(QString::fromUtf8("Leland"));
        musicalSymbolFont->addItem(QString::fromUtf8("Bravura"));
        musicalSymbolFont->addItem(QString::fromUtf8("Emmentaler"));
        musicalSymbolFont->addItem(QString::fromUtf8("Gonville"));
        musicalSymbolFont->addItem(QString::fromUtf8("MuseJazz"));
        musicalSymbolFont->addItem(QString::fromUtf8("Petaluma"));
        musicalSymbolFont->addItem(QString::fromUtf8("Finale Maestro"));
        musicalSymbolFont->addItem(QString::fromUtf8("Finale Broadway"));
        musicalSymbolFont->setObjectName("musicalSymbolFont");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(musicalSymbolFont->sizePolicy().hasHeightForWidth());
        musicalSymbolFont->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(musicalSymbolFont, 0, 1, 1, 1);

        optimizeStyleCheckbox = new QCheckBox(scrollArea_score_contents);
        optimizeStyleCheckbox->setObjectName("optimizeStyleCheckbox");
        optimizeStyleCheckbox->setChecked(true);

        gridLayout->addWidget(optimizeStyleCheckbox, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label_musicalTextFont = new QLabel(scrollArea_score_contents);
        label_musicalTextFont->setObjectName("label_musicalTextFont");

        gridLayout->addWidget(label_musicalTextFont, 1, 0, 1, 1);

        musicalTextFont = new QComboBox(scrollArea_score_contents);
        musicalTextFont->addItem(QString::fromUtf8("Leland Text"));
        musicalTextFont->addItem(QString::fromUtf8("Bravura Text"));
        musicalTextFont->addItem(QString::fromUtf8("Emmentaler Text"));
        musicalTextFont->addItem(QString::fromUtf8("Gonville Text"));
        musicalTextFont->addItem(QString::fromUtf8("MuseJazz Text"));
        musicalTextFont->addItem(QString::fromUtf8("Petaluma Text"));
        musicalTextFont->setObjectName("musicalTextFont");

        gridLayout->addWidget(musicalTextFont, 1, 1, 1, 1);

        label_staffLineWidth = new QLabel(scrollArea_score_contents);
        label_staffLineWidth->setObjectName("label_staffLineWidth");
        label_staffLineWidth->setWordWrap(false);

        gridLayout->addWidget(label_staffLineWidth, 2, 0, 1, 1);

        staffLineWidth = new QDoubleSpinBox(scrollArea_score_contents);
        staffLineWidth->setObjectName("staffLineWidth");
        staffLineWidth->setKeyboardTracking(false);
        staffLineWidth->setSingleStep(0.100000000000000);

        gridLayout->addWidget(staffLineWidth, 2, 1, 1, 1);

        resetStaffLineWidth = new QToolButton(scrollArea_score_contents);
        resetStaffLineWidth->setObjectName("resetStaffLineWidth");
        resetStaffLineWidth->setText(QString::fromUtf8(""));

        gridLayout->addWidget(resetStaffLineWidth, 2, 2, 1, 1);


        verticalLayout_10->addLayout(gridLayout);

        concertPitch = new QCheckBox(scrollArea_score_contents);
        concertPitch->setObjectName("concertPitch");

        verticalLayout_10->addWidget(concertPitch);

        enableIndentationOnFirstSystem = new QGroupBox(scrollArea_score_contents);
        enableIndentationOnFirstSystem->setObjectName("enableIndentationOnFirstSystem");
        enableIndentationOnFirstSystem->setCheckable(true);
        enableIndentationOnFirstSystem->setChecked(false);
        hLayout_indentation = new QHBoxLayout(enableIndentationOnFirstSystem);
        hLayout_indentation->setObjectName("hLayout_indentation");
        label_indentation = new QLabel(enableIndentationOnFirstSystem);
        label_indentation->setObjectName("label_indentation");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_indentation->sizePolicy().hasHeightForWidth());
        label_indentation->setSizePolicy(sizePolicy3);

        hLayout_indentation->addWidget(label_indentation);

        indentationValue = new QDoubleSpinBox(enableIndentationOnFirstSystem);
        indentationValue->setObjectName("indentationValue");
        indentationValue->setKeyboardTracking(false);
        indentationValue->setMinimum(0.000000000000000);
        indentationValue->setMaximum(1000.000000000000000);
        indentationValue->setSingleStep(0.500000000000000);

        hLayout_indentation->addWidget(indentationValue);

        resetFirstSystemIndentation = new QToolButton(enableIndentationOnFirstSystem);
        resetFirstSystemIndentation->setObjectName("resetFirstSystemIndentation");
        resetFirstSystemIndentation->setText(QString::fromUtf8(""));

        hLayout_indentation->addWidget(resetFirstSystemIndentation);

        horizontalSpacer_indentation = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayout_indentation->addItem(horizontalSpacer_indentation);


        verticalLayout_10->addWidget(enableIndentationOnFirstSystem);

        hideEmptyStaves = new QGroupBox(scrollArea_score_contents);
        hideEmptyStaves->setObjectName("hideEmptyStaves");
        hideEmptyStaves->setCheckable(true);
        hideEmptyStaves->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(hideEmptyStaves);
        verticalLayout_2->setObjectName("verticalLayout_2");
        dontHideStavesInFirstSystem = new QCheckBox(hideEmptyStaves);
        dontHideStavesInFirstSystem->setObjectName("dontHideStavesInFirstSystem");

        verticalLayout_2->addWidget(dontHideStavesInFirstSystem);

        alwaysShowBrackets = new QCheckBox(hideEmptyStaves);
        alwaysShowBrackets->setObjectName("alwaysShowBrackets");

        verticalLayout_2->addWidget(alwaysShowBrackets);


        verticalLayout_10->addWidget(hideEmptyStaves);

        crossMeasureValues = new QCheckBox(scrollArea_score_contents);
        crossMeasureValues->setObjectName("crossMeasureValues");

        verticalLayout_10->addWidget(crossMeasureValues);

        instrumentLabel_box = new QGroupBox(scrollArea_score_contents);
        instrumentLabel_box->setObjectName("instrumentLabel_box");
        verticalLayout_63 = new QVBoxLayout(instrumentLabel_box);
        verticalLayout_63->setObjectName("verticalLayout_63");
        hideInstrumentNameIfOneInstrument = new QCheckBox(instrumentLabel_box);
        hideInstrumentNameIfOneInstrument->setObjectName("hideInstrumentNameIfOneInstrument");

        verticalLayout_63->addWidget(hideInstrumentNameIfOneInstrument);

        gridLayout_67 = new QGridLayout();
        gridLayout_67->setObjectName("gridLayout_67");
        subsLongBtn = new QRadioButton(instrumentLabel_box);
        subsLongBtn->setObjectName("subsLongBtn");

        gridLayout_67->addWidget(subsLongBtn, 1, 1, 1, 1);

        resetSubsSystemLabel = new QToolButton(instrumentLabel_box);
        resetSubsSystemLabel->setObjectName("resetSubsSystemLabel");
        resetSubsSystemLabel->setText(QString::fromUtf8(""));

        gridLayout_67->addWidget(resetSubsSystemLabel, 1, 4, 1, 1);

        firstLongBtn = new QRadioButton(instrumentLabel_box);
        firstLongBtn->setObjectName("firstLongBtn");

        gridLayout_67->addWidget(firstLongBtn, 0, 1, 1, 1);

        resetFirstSystemLabel = new QToolButton(instrumentLabel_box);
        resetFirstSystemLabel->setObjectName("resetFirstSystemLabel");
        resetFirstSystemLabel->setText(QString::fromUtf8(""));

        gridLayout_67->addWidget(resetFirstSystemLabel, 0, 4, 1, 1);

        subsHideBtn = new QRadioButton(instrumentLabel_box);
        subsHideBtn->setObjectName("subsHideBtn");

        gridLayout_67->addWidget(subsHideBtn, 1, 3, 1, 1);

        subsSystemLabel_label = new QLabel(instrumentLabel_box);
        subsSystemLabel_label->setObjectName("subsSystemLabel_label");

        gridLayout_67->addWidget(subsSystemLabel_label, 1, 0, 1, 1);

        firstSystemLabel_label = new QLabel(instrumentLabel_box);
        firstSystemLabel_label->setObjectName("firstSystemLabel_label");

        gridLayout_67->addWidget(firstSystemLabel_label, 0, 0, 1, 1);

        subsShortBtn = new QRadioButton(instrumentLabel_box);
        subsShortBtn->setObjectName("subsShortBtn");

        gridLayout_67->addWidget(subsShortBtn, 1, 2, 1, 1);

        firstShortBtn = new QRadioButton(instrumentLabel_box);
        firstShortBtn->setObjectName("firstShortBtn");

        gridLayout_67->addWidget(firstShortBtn, 0, 2, 1, 1);

        firstHideBtn = new QRadioButton(instrumentLabel_box);
        firstHideBtn->setObjectName("firstHideBtn");

        gridLayout_67->addWidget(firstHideBtn, 0, 3, 1, 1);

        horizontalSpacer_67 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_67->addItem(horizontalSpacer_67, 0, 5, 1, 1);


        verticalLayout_63->addLayout(gridLayout_67);


        verticalLayout_10->addWidget(instrumentLabel_box);

        verticalSpacer_10 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_10->addItem(verticalSpacer_10);

        swingSettings = new QGroupBox(scrollArea_score_contents);
        swingSettings->setObjectName("swingSettings");
        verticalLayout_39 = new QVBoxLayout(swingSettings);
        verticalLayout_39->setObjectName("verticalLayout_39");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        SwingLabel = new QLabel(swingSettings);
        SwingLabel->setObjectName("SwingLabel");

        horizontalLayout_10->addWidget(SwingLabel);

        swingOff = new QRadioButton(swingSettings);
        swingOff->setObjectName("swingOff");
        swingOff->setChecked(true);

        horizontalLayout_10->addWidget(swingOff);

        swingEighth = new QRadioButton(swingSettings);
        swingEighth->setObjectName("swingEighth");

        horizontalLayout_10->addWidget(swingEighth);

        swingSixteenth = new QRadioButton(swingSettings);
        swingSixteenth->setObjectName("swingSixteenth");

        horizontalLayout_10->addWidget(swingSixteenth);

        zontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(zontalSpacer_16);


        verticalLayout_39->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_3 = new QLabel(swingSettings);
        label_3->setObjectName("label_3");

        horizontalLayout_11->addWidget(label_3);

        swingBox = new QSpinBox(swingSettings);
        swingBox->setObjectName("swingBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(swingBox->sizePolicy().hasHeightForWidth());
        swingBox->setSizePolicy(sizePolicy4);
        swingBox->setKeyboardTracking(false);
        swingBox->setMinimum(25);
        swingBox->setValue(60);

        horizontalLayout_11->addWidget(swingBox);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_16);


        verticalLayout_39->addLayout(horizontalLayout_11);


        verticalLayout_10->addWidget(swingSettings);

        groupBox_score_autoplace = new QGroupBox(scrollArea_score_contents);
        groupBox_score_autoplace->setObjectName("groupBox_score_autoplace");
        gridLayout_11 = new QGridLayout(groupBox_score_autoplace);
        gridLayout_11->setObjectName("gridLayout_11");
        minVerticalDistance_label = new QLabel(groupBox_score_autoplace);
        minVerticalDistance_label->setObjectName("minVerticalDistance_label");

        gridLayout_11->addWidget(minVerticalDistance_label, 0, 4, 1, 1);

        minVerticalDistance = new QDoubleSpinBox(groupBox_score_autoplace);
        minVerticalDistance->setObjectName("minVerticalDistance");
        sizePolicy4.setHeightForWidth(minVerticalDistance->sizePolicy().hasHeightForWidth());
        minVerticalDistance->setSizePolicy(sizePolicy4);
        minVerticalDistance->setKeyboardTracking(false);
        minVerticalDistance->setMinimum(-999.990000000000009);
        minVerticalDistance->setSingleStep(0.100000000000000);
        minVerticalDistance->setValue(0.500000000000000);

        gridLayout_11->addWidget(minVerticalDistance, 0, 5, 1, 1);

        autoplaceVerticalAlignRange = new QComboBox(groupBox_score_autoplace);
        autoplaceVerticalAlignRange->setObjectName("autoplaceVerticalAlignRange");

        gridLayout_11->addWidget(autoplaceVerticalAlignRange, 0, 1, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_23, 0, 7, 1, 1);

        resetMinVerticalDistance = new QToolButton(groupBox_score_autoplace);
        resetMinVerticalDistance->setObjectName("resetMinVerticalDistance");
        resetMinVerticalDistance->setText(QString::fromUtf8(""));

        gridLayout_11->addWidget(resetMinVerticalDistance, 0, 6, 1, 1);

        label_36 = new QLabel(groupBox_score_autoplace);
        label_36->setObjectName("label_36");

        gridLayout_11->addWidget(label_36, 0, 0, 1, 1);

        resetAutoplaceVerticalAlignRange = new QToolButton(groupBox_score_autoplace);
        resetAutoplaceVerticalAlignRange->setObjectName("resetAutoplaceVerticalAlignRange");
        resetAutoplaceVerticalAlignRange->setText(QString::fromUtf8(""));

        gridLayout_11->addWidget(resetAutoplaceVerticalAlignRange, 0, 2, 1, 1);

        horizontalSpacer_51 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_51, 0, 3, 1, 1);


        verticalLayout_10->addWidget(groupBox_score_autoplace);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        scrollArea_score->setWidget(scrollArea_score_contents);

        verticalLayout_6->addWidget(scrollArea_score);


        verticalLayout_20->addWidget(groupBox_score);

        pageStack->addWidget(PageScore);
        PagePage = new QWidget();
        PagePage->setObjectName("PagePage");
        verticalLayout_21 = new QVBoxLayout(PagePage);
        verticalLayout_21->setObjectName("verticalLayout_21");
        groupBox_page = new QGroupBox(PagePage);
        groupBox_page->setObjectName("groupBox_page");
        groupBox_page->setCheckable(false);
        gridLayout_8 = new QGridLayout(groupBox_page);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea_page = new QScrollArea(groupBox_page);
        scrollArea_page->setObjectName("scrollArea_page");
        scrollArea_page->setFrameShape(QFrame::NoFrame);
        scrollArea_page->setWidgetResizable(true);
        scrollArea_page_contents = new QWidget();
        scrollArea_page_contents->setObjectName("scrollArea_page_contents");
        scrollArea_page_contents->setGeometry(QRect(0, 0, 623, 559));
        gridLayout_4 = new QGridLayout(scrollArea_page_contents);
        gridLayout_4->setObjectName("gridLayout_4");
        disableVerticalSpread = new muse::uicomponents::RadioButtonGroupBox(scrollArea_page_contents);
        disableVerticalSpread->setObjectName("disableVerticalSpread");
        disableVerticalSpread->setCheckable(true);
        disableVerticalSpread->setChecked(false);
        gridLayout_49 = new QGridLayout(disableVerticalSpread);
        gridLayout_49->setObjectName("gridLayout_49");
        staffDistance = new QDoubleSpinBox(disableVerticalSpread);
        staffDistance->setObjectName("staffDistance");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(staffDistance->sizePolicy().hasHeightForWidth());
        staffDistance->setSizePolicy(sizePolicy5);
        staffDistance->setKeyboardTracking(false);
        staffDistance->setDecimals(1);
        staffDistance->setMinimum(-1000.000000000000000);
        staffDistance->setMaximum(1000.000000000000000);
        staffDistance->setSingleStep(0.500000000000000);

        gridLayout_49->addWidget(staffDistance, 0, 1, 1, 1);

        resetAkkoladeDistance = new QToolButton(disableVerticalSpread);
        resetAkkoladeDistance->setObjectName("resetAkkoladeDistance");
        resetAkkoladeDistance->setText(QString::fromUtf8(""));

        gridLayout_49->addWidget(resetAkkoladeDistance, 1, 2, 1, 1);

        label_69 = new QLabel(disableVerticalSpread);
        label_69->setObjectName("label_69");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_69->sizePolicy().hasHeightForWidth());
        label_69->setSizePolicy(sizePolicy6);

        gridLayout_49->addWidget(label_69, 0, 0, 1, 1);

        resetMinSystemDistance = new QToolButton(disableVerticalSpread);
        resetMinSystemDistance->setObjectName("resetMinSystemDistance");
        resetMinSystemDistance->setText(QString::fromUtf8(""));

        gridLayout_49->addWidget(resetMinSystemDistance, 0, 6, 1, 1);

        resetMaxSystemDistance = new QToolButton(disableVerticalSpread);
        resetMaxSystemDistance->setObjectName("resetMaxSystemDistance");
        resetMaxSystemDistance->setText(QString::fromUtf8(""));

        gridLayout_49->addWidget(resetMaxSystemDistance, 1, 6, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_49->addItem(horizontalSpacer_15, 0, 3, 1, 1);

        resetStaffDistance = new QToolButton(disableVerticalSpread);
        resetStaffDistance->setObjectName("resetStaffDistance");
        resetStaffDistance->setText(QString::fromUtf8(""));

        gridLayout_49->addWidget(resetStaffDistance, 0, 2, 1, 1);

        minSystemDistance = new QDoubleSpinBox(disableVerticalSpread);
        minSystemDistance->setObjectName("minSystemDistance");
        sizePolicy5.setHeightForWidth(minSystemDistance->sizePolicy().hasHeightForWidth());
        minSystemDistance->setSizePolicy(sizePolicy5);
        minSystemDistance->setKeyboardTracking(false);
        minSystemDistance->setDecimals(1);
        minSystemDistance->setMinimum(-1000.000000000000000);
        minSystemDistance->setMaximum(1000.000000000000000);
        minSystemDistance->setSingleStep(0.500000000000000);

        gridLayout_49->addWidget(minSystemDistance, 0, 5, 1, 1);

        label_191 = new QLabel(disableVerticalSpread);
        label_191->setObjectName("label_191");
        sizePolicy6.setHeightForWidth(label_191->sizePolicy().hasHeightForWidth());
        label_191->setSizePolicy(sizePolicy6);

        gridLayout_49->addWidget(label_191, 1, 4, 1, 1);

        label_73 = new QLabel(disableVerticalSpread);
        label_73->setObjectName("label_73");
        sizePolicy6.setHeightForWidth(label_73->sizePolicy().hasHeightForWidth());
        label_73->setSizePolicy(sizePolicy6);

        gridLayout_49->addWidget(label_73, 0, 4, 1, 1);

        akkoladeDistance = new QDoubleSpinBox(disableVerticalSpread);
        akkoladeDistance->setObjectName("akkoladeDistance");
        sizePolicy5.setHeightForWidth(akkoladeDistance->sizePolicy().hasHeightForWidth());
        akkoladeDistance->setSizePolicy(sizePolicy5);
        akkoladeDistance->setKeyboardTracking(false);
        akkoladeDistance->setDecimals(1);
        akkoladeDistance->setMinimum(0.000000000000000);
        akkoladeDistance->setMaximum(1000.000000000000000);
        akkoladeDistance->setSingleStep(0.500000000000000);

        gridLayout_49->addWidget(akkoladeDistance, 1, 1, 1, 1);

        label_70 = new QLabel(disableVerticalSpread);
        label_70->setObjectName("label_70");
        sizePolicy6.setHeightForWidth(label_70->sizePolicy().hasHeightForWidth());
        label_70->setSizePolicy(sizePolicy6);

        gridLayout_49->addWidget(label_70, 1, 0, 1, 1);

        horizontalSpacer_50 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_49->addItem(horizontalSpacer_50, 0, 7, 1, 1);

        maxSystemDistance = new QDoubleSpinBox(disableVerticalSpread);
        maxSystemDistance->setObjectName("maxSystemDistance");
        sizePolicy5.setHeightForWidth(maxSystemDistance->sizePolicy().hasHeightForWidth());
        maxSystemDistance->setSizePolicy(sizePolicy5);
        maxSystemDistance->setKeyboardTracking(false);
        maxSystemDistance->setDecimals(1);
        maxSystemDistance->setMinimum(0.000000000000000);
        maxSystemDistance->setMaximum(1000.000000000000000);
        maxSystemDistance->setSingleStep(0.500000000000000);

        gridLayout_49->addWidget(maxSystemDistance, 1, 5, 1, 1);


        gridLayout_4->addWidget(disableVerticalSpread, 3, 0, 1, 9);

        label_78 = new QLabel(scrollArea_page_contents);
        label_78->setObjectName("label_78");

        gridLayout_4->addWidget(label_78, 0, 4, 1, 2);

        resetStaffLowerBorder = new QToolButton(scrollArea_page_contents);
        resetStaffLowerBorder->setObjectName("resetStaffLowerBorder");
        resetStaffLowerBorder->setText(QString::fromUtf8(""));

        gridLayout_4->addWidget(resetStaffLowerBorder, 0, 7, 1, 1);

        resetSystemFrameDistance = new QToolButton(scrollArea_page_contents);
        resetSystemFrameDistance->setObjectName("resetSystemFrameDistance");
        resetSystemFrameDistance->setText(QString::fromUtf8(""));

        gridLayout_4->addWidget(resetSystemFrameDistance, 5, 2, 1, 1);

        line_8 = new QFrame(scrollArea_page_contents);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_8, 1, 0, 1, 9);

        staffUpperBorder = new QDoubleSpinBox(scrollArea_page_contents);
        staffUpperBorder->setObjectName("staffUpperBorder");
        sizePolicy5.setHeightForWidth(staffUpperBorder->sizePolicy().hasHeightForWidth());
        staffUpperBorder->setSizePolicy(sizePolicy5);
        staffUpperBorder->setKeyboardTracking(false);
        staffUpperBorder->setDecimals(1);
        staffUpperBorder->setMinimum(-1000.000000000000000);
        staffUpperBorder->setMaximum(1000.000000000000000);
        staffUpperBorder->setSingleStep(0.500000000000000);

        gridLayout_4->addWidget(staffUpperBorder, 0, 1, 1, 1);

        frameSystemDistance = new QDoubleSpinBox(scrollArea_page_contents);
        frameSystemDistance->setObjectName("frameSystemDistance");
        sizePolicy5.setHeightForWidth(frameSystemDistance->sizePolicy().hasHeightForWidth());
        frameSystemDistance->setSizePolicy(sizePolicy5);
        frameSystemDistance->setKeyboardTracking(false);
        frameSystemDistance->setDecimals(1);
        frameSystemDistance->setMinimum(-100.000000000000000);
        frameSystemDistance->setSingleStep(0.500000000000000);

        gridLayout_4->addWidget(frameSystemDistance, 5, 6, 1, 1);

        line_6 = new QFrame(scrollArea_page_contents);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_6, 7, 0, 1, 9);

        label_74 = new QLabel(scrollArea_page_contents);
        label_74->setObjectName("label_74");

        gridLayout_4->addWidget(label_74, 5, 0, 1, 1);

        resetFrameSystemDistance = new QToolButton(scrollArea_page_contents);
        resetFrameSystemDistance->setObjectName("resetFrameSystemDistance");
        resetFrameSystemDistance->setText(QString::fromUtf8(""));

        gridLayout_4->addWidget(resetFrameSystemDistance, 5, 7, 1, 1);

        label_75 = new QLabel(scrollArea_page_contents);
        label_75->setObjectName("label_75");

        gridLayout_4->addWidget(label_75, 5, 4, 1, 1);

        resetLastSystemFillThreshold = new QToolButton(scrollArea_page_contents);
        resetLastSystemFillThreshold->setObjectName("resetLastSystemFillThreshold");
        resetLastSystemFillThreshold->setText(QString::fromUtf8(""));

        gridLayout_4->addWidget(resetLastSystemFillThreshold, 6, 2, 1, 1);

        line_7 = new QFrame(scrollArea_page_contents);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_4->addWidget(line_7, 4, 0, 1, 9);

        lastSystemFillThreshold = new QSpinBox(scrollArea_page_contents);
        lastSystemFillThreshold->setObjectName("lastSystemFillThreshold");
        sizePolicy5.setHeightForWidth(lastSystemFillThreshold->sizePolicy().hasHeightForWidth());
        lastSystemFillThreshold->setSizePolicy(sizePolicy5);
        lastSystemFillThreshold->setKeyboardTracking(false);
        lastSystemFillThreshold->setSuffix(QString::fromUtf8("%"));
        lastSystemFillThreshold->setMaximum(100);
        lastSystemFillThreshold->setValue(70);

        gridLayout_4->addWidget(lastSystemFillThreshold, 6, 1, 1, 1);

        horizontalSpacer_44 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_44, 0, 8, 1, 1);

        label_77 = new QLabel(scrollArea_page_contents);
        label_77->setObjectName("label_77");

        gridLayout_4->addWidget(label_77, 6, 0, 1, 1);

        systemFrameDistance = new QDoubleSpinBox(scrollArea_page_contents);
        systemFrameDistance->setObjectName("systemFrameDistance");
        sizePolicy5.setHeightForWidth(systemFrameDistance->sizePolicy().hasHeightForWidth());
        systemFrameDistance->setSizePolicy(sizePolicy5);
        systemFrameDistance->setKeyboardTracking(false);
        systemFrameDistance->setDecimals(1);
        systemFrameDistance->setMinimum(-100.000000000000000);
        systemFrameDistance->setSingleStep(0.500000000000000);

        gridLayout_4->addWidget(systemFrameDistance, 5, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 3, 1, 1);

        resetStaffUpperBorder = new QToolButton(scrollArea_page_contents);
        resetStaffUpperBorder->setObjectName("resetStaffUpperBorder");
        resetStaffUpperBorder->setText(QString::fromUtf8(""));

        gridLayout_4->addWidget(resetStaffUpperBorder, 0, 2, 1, 1);

        label_76 = new QLabel(scrollArea_page_contents);
        label_76->setObjectName("label_76");
        sizePolicy6.setHeightForWidth(label_76->sizePolicy().hasHeightForWidth());
        label_76->setSizePolicy(sizePolicy6);

        gridLayout_4->addWidget(label_76, 0, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_9, 8, 0, 1, 8);

        enableVerticalSpread = new muse::uicomponents::RadioButtonGroupBox(scrollArea_page_contents);
        enableVerticalSpread->setObjectName("enableVerticalSpread");
        enableVerticalSpread->setCheckable(true);
        gridLayout_50 = new QGridLayout(enableVerticalSpread);
        gridLayout_50->setObjectName("gridLayout_50");
        maxPageFillSpread = new QDoubleSpinBox(enableVerticalSpread);
        maxPageFillSpread->setObjectName("maxPageFillSpread");
        maxPageFillSpread->setKeyboardTracking(false);
        maxPageFillSpread->setDecimals(1);
        maxPageFillSpread->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(maxPageFillSpread, 5, 5, 1, 1);

        label_160 = new QLabel(enableVerticalSpread);
        label_160->setObjectName("label_160");

        gridLayout_50->addWidget(label_160, 4, 4, 1, 1);

        minStaffSpread = new QDoubleSpinBox(enableVerticalSpread);
        minStaffSpread->setObjectName("minStaffSpread");
        sizePolicy5.setHeightForWidth(minStaffSpread->sizePolicy().hasHeightForWidth());
        minStaffSpread->setSizePolicy(sizePolicy5);
        minStaffSpread->setKeyboardTracking(false);
        minStaffSpread->setDecimals(1);
        minStaffSpread->setMinimum(0.000000000000000);
        minStaffSpread->setMaximum(1000.000000000000000);
        minStaffSpread->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(minStaffSpread, 2, 5, 1, 1);

        label_155 = new QLabel(enableVerticalSpread);
        label_155->setObjectName("label_155");

        gridLayout_50->addWidget(label_155, 3, 4, 1, 1);

        resetMinSystemSpread = new QToolButton(enableVerticalSpread);
        resetMinSystemSpread->setObjectName("resetMinSystemSpread");
        resetMinSystemSpread->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetMinSystemSpread, 0, 6, 1, 1);

        spreadSquareBracket = new QDoubleSpinBox(enableVerticalSpread);
        spreadSquareBracket->setObjectName("spreadSquareBracket");
        sizePolicy5.setHeightForWidth(spreadSquareBracket->sizePolicy().hasHeightForWidth());
        spreadSquareBracket->setSizePolicy(sizePolicy5);
        spreadSquareBracket->setKeyboardTracking(false);
        spreadSquareBracket->setDecimals(1);
        spreadSquareBracket->setMinimum(1.000000000000000);
        spreadSquareBracket->setMaximum(1000.000000000000000);
        spreadSquareBracket->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(spreadSquareBracket, 3, 0, 1, 1);

        resetSpreadSquareBracket = new QToolButton(enableVerticalSpread);
        resetSpreadSquareBracket->setObjectName("resetSpreadSquareBracket");
        resetSpreadSquareBracket->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetSpreadSquareBracket, 3, 1, 1, 1);

        maxAkkoladeDistance = new QDoubleSpinBox(enableVerticalSpread);
        maxAkkoladeDistance->setObjectName("maxAkkoladeDistance");
        maxAkkoladeDistance->setKeyboardTracking(false);
        maxAkkoladeDistance->setDecimals(1);
        maxAkkoladeDistance->setMaximum(1000.000000000000000);
        maxAkkoladeDistance->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(maxAkkoladeDistance, 4, 5, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_50->addItem(horizontalSpacer_13, 0, 3, 1, 1);

        resetMinStaffSpread = new QToolButton(enableVerticalSpread);
        resetMinStaffSpread->setObjectName("resetMinStaffSpread");
        resetMinStaffSpread->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetMinStaffSpread, 2, 6, 1, 1);

        label_161 = new QLabel(enableVerticalSpread);
        label_161->setObjectName("label_161");

        gridLayout_50->addWidget(label_161, 5, 4, 1, 1);

        resetSpreadCurlyBracket = new QToolButton(enableVerticalSpread);
        resetSpreadCurlyBracket->setObjectName("resetSpreadCurlyBracket");
        resetSpreadCurlyBracket->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetSpreadCurlyBracket, 5, 1, 1, 1);

        resetMaxStaffSpread = new QToolButton(enableVerticalSpread);
        resetMaxStaffSpread->setObjectName("resetMaxStaffSpread");
        resetMaxStaffSpread->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetMaxStaffSpread, 3, 6, 1, 1);

        resetMaxAkkoladeDistance = new QToolButton(enableVerticalSpread);
        resetMaxAkkoladeDistance->setObjectName("resetMaxAkkoladeDistance");
        resetMaxAkkoladeDistance->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetMaxAkkoladeDistance, 4, 6, 1, 1);

        label_156 = new QLabel(enableVerticalSpread);
        label_156->setObjectName("label_156");

        gridLayout_50->addWidget(label_156, 2, 4, 1, 1);

        label_159 = new QLabel(enableVerticalSpread);
        label_159->setObjectName("label_159");

        gridLayout_50->addWidget(label_159, 1, 4, 1, 1);

        maxStaffSpread = new QDoubleSpinBox(enableVerticalSpread);
        maxStaffSpread->setObjectName("maxStaffSpread");
        sizePolicy5.setHeightForWidth(maxStaffSpread->sizePolicy().hasHeightForWidth());
        maxStaffSpread->setSizePolicy(sizePolicy5);
        maxStaffSpread->setKeyboardTracking(false);
        maxStaffSpread->setDecimals(1);
        maxStaffSpread->setMinimum(0.000000000000000);
        maxStaffSpread->setMaximum(1000.000000000000000);
        maxStaffSpread->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(maxStaffSpread, 3, 5, 1, 1);

        spreadSystem = new QDoubleSpinBox(enableVerticalSpread);
        spreadSystem->setObjectName("spreadSystem");
        sizePolicy5.setHeightForWidth(spreadSystem->sizePolicy().hasHeightForWidth());
        spreadSystem->setSizePolicy(sizePolicy5);
        spreadSystem->setKeyboardTracking(false);
        spreadSystem->setDecimals(1);
        spreadSystem->setMinimum(1.000000000000000);
        spreadSystem->setMaximum(1000.000000000000000);
        spreadSystem->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(spreadSystem, 1, 0, 1, 1);

        label_162 = new QLabel(enableVerticalSpread);
        label_162->setObjectName("label_162");

        gridLayout_50->addWidget(label_162, 0, 4, 1, 1);

        label_157 = new QLabel(enableVerticalSpread);
        label_157->setObjectName("label_157");
        label_157->setFrameShadow(QFrame::Sunken);

        gridLayout_50->addWidget(label_157, 4, 0, 1, 3);

        label_154 = new QLabel(enableVerticalSpread);
        label_154->setObjectName("label_154");
        label_154->setFrameShadow(QFrame::Sunken);

        gridLayout_50->addWidget(label_154, 2, 0, 1, 3);

        maxSystemSpread = new QDoubleSpinBox(enableVerticalSpread);
        maxSystemSpread->setObjectName("maxSystemSpread");
        maxSystemSpread->setKeyboardTracking(false);
        maxSystemSpread->setDecimals(1);
        maxSystemSpread->setMaximum(1000.000000000000000);
        maxSystemSpread->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(maxSystemSpread, 1, 5, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_50->addItem(horizontalSpacer_21, 1, 2, 1, 1);

        minSystemSpread = new QDoubleSpinBox(enableVerticalSpread);
        minSystemSpread->setObjectName("minSystemSpread");
        minSystemSpread->setKeyboardTracking(false);
        minSystemSpread->setDecimals(1);
        minSystemSpread->setMaximum(1000.000000000000000);
        minSystemSpread->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(minSystemSpread, 0, 5, 1, 1);

        resetMaxSystemSpread = new QToolButton(enableVerticalSpread);
        resetMaxSystemSpread->setObjectName("resetMaxSystemSpread");
        resetMaxSystemSpread->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetMaxSystemSpread, 1, 6, 1, 1);

        resetMaxPageFillSpread = new QToolButton(enableVerticalSpread);
        resetMaxPageFillSpread->setObjectName("resetMaxPageFillSpread");
        resetMaxPageFillSpread->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetMaxPageFillSpread, 5, 6, 1, 1);

        spreadCurlyBracket = new QDoubleSpinBox(enableVerticalSpread);
        spreadCurlyBracket->setObjectName("spreadCurlyBracket");
        sizePolicy5.setHeightForWidth(spreadCurlyBracket->sizePolicy().hasHeightForWidth());
        spreadCurlyBracket->setSizePolicy(sizePolicy5);
        spreadCurlyBracket->setKeyboardTracking(false);
        spreadCurlyBracket->setDecimals(1);
        spreadCurlyBracket->setMinimum(1.000000000000000);
        spreadCurlyBracket->setMaximum(1000.000000000000000);
        spreadCurlyBracket->setSingleStep(0.500000000000000);

        gridLayout_50->addWidget(spreadCurlyBracket, 5, 0, 1, 1);

        resetSpreadSystem = new QToolButton(enableVerticalSpread);
        resetSpreadSystem->setObjectName("resetSpreadSystem");
        resetSpreadSystem->setText(QString::fromUtf8(""));

        gridLayout_50->addWidget(resetSpreadSystem, 1, 1, 1, 1);

        label_153 = new QLabel(enableVerticalSpread);
        label_153->setObjectName("label_153");
        label_153->setFrameShadow(QFrame::Sunken);

        gridLayout_50->addWidget(label_153, 0, 0, 1, 3);

        horizontalSpacer_49 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_50->addItem(horizontalSpacer_49, 0, 7, 1, 1);


        gridLayout_4->addWidget(enableVerticalSpread, 2, 0, 1, 9);

        staffLowerBorder = new QDoubleSpinBox(scrollArea_page_contents);
        staffLowerBorder->setObjectName("staffLowerBorder");
        sizePolicy5.setHeightForWidth(staffLowerBorder->sizePolicy().hasHeightForWidth());
        staffLowerBorder->setSizePolicy(sizePolicy5);
        staffLowerBorder->setKeyboardTracking(false);
        staffLowerBorder->setDecimals(1);
        staffLowerBorder->setMinimum(-1000.000000000000000);
        staffLowerBorder->setMaximum(1000.000000000000000);
        staffLowerBorder->setSingleStep(0.500000000000000);

        gridLayout_4->addWidget(staffLowerBorder, 0, 6, 1, 1);

        scrollArea_page->setWidget(scrollArea_page_contents);

        gridLayout_8->addWidget(scrollArea_page, 0, 0, 1, 7);


        verticalLayout_21->addWidget(groupBox_page);

        pageStack->addWidget(PagePage);
        PageSizes = new QWidget();
        PageSizes->setObjectName("PageSizes");
        verticalLayout_18 = new QVBoxLayout(PageSizes);
        verticalLayout_18->setObjectName("verticalLayout_18");
        groupBox_sizes = new QGroupBox(PageSizes);
        groupBox_sizes->setObjectName("groupBox_sizes");
        gridLayout_27 = new QGridLayout(groupBox_sizes);
        gridLayout_27->setObjectName("gridLayout_27");
        label_38 = new QLabel(groupBox_sizes);
        label_38->setObjectName("label_38");
        sizePolicy6.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy6);

        gridLayout_27->addWidget(label_38, 0, 0, 1, 1);

        smallStaffSize = new QSpinBox(groupBox_sizes);
        smallStaffSize->setObjectName("smallStaffSize");
        sizePolicy5.setHeightForWidth(smallStaffSize->sizePolicy().hasHeightForWidth());
        smallStaffSize->setSizePolicy(sizePolicy5);
        smallStaffSize->setKeyboardTracking(false);
        smallStaffSize->setSuffix(QString::fromUtf8("%"));
        smallStaffSize->setMinimum(10);
        smallStaffSize->setMaximum(200);
        smallStaffSize->setValue(70);

        gridLayout_27->addWidget(smallStaffSize, 0, 1, 1, 1);

        resetSmallStaffSize = new QToolButton(groupBox_sizes);
        resetSmallStaffSize->setObjectName("resetSmallStaffSize");
        resetSmallStaffSize->setText(QString::fromUtf8(""));

        gridLayout_27->addWidget(resetSmallStaffSize, 0, 2, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_27->addItem(horizontalSpacer_24, 0, 3, 1, 1);

        label_44 = new QLabel(groupBox_sizes);
        label_44->setObjectName("label_44");
        sizePolicy6.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy6);

        gridLayout_27->addWidget(label_44, 1, 0, 1, 1);

        smallNoteSize = new QSpinBox(groupBox_sizes);
        smallNoteSize->setObjectName("smallNoteSize");
        sizePolicy5.setHeightForWidth(smallNoteSize->sizePolicy().hasHeightForWidth());
        smallNoteSize->setSizePolicy(sizePolicy5);
        smallNoteSize->setKeyboardTracking(false);
        smallNoteSize->setSuffix(QString::fromUtf8("%"));
        smallNoteSize->setMinimum(10);
        smallNoteSize->setMaximum(200);
        smallNoteSize->setValue(70);

        gridLayout_27->addWidget(smallNoteSize, 1, 1, 1, 1);

        resetSmallNoteSize = new QToolButton(groupBox_sizes);
        resetSmallNoteSize->setObjectName("resetSmallNoteSize");
        resetSmallNoteSize->setText(QString::fromUtf8(""));

        gridLayout_27->addWidget(resetSmallNoteSize, 1, 2, 1, 1);

        label_39 = new QLabel(groupBox_sizes);
        label_39->setObjectName("label_39");
        sizePolicy6.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy6);

        gridLayout_27->addWidget(label_39, 2, 0, 1, 1);

        graceNoteSize = new QSpinBox(groupBox_sizes);
        graceNoteSize->setObjectName("graceNoteSize");
        sizePolicy5.setHeightForWidth(graceNoteSize->sizePolicy().hasHeightForWidth());
        graceNoteSize->setSizePolicy(sizePolicy5);
        graceNoteSize->setKeyboardTracking(false);
        graceNoteSize->setSuffix(QString::fromUtf8("%"));
        graceNoteSize->setMinimum(10);
        graceNoteSize->setMaximum(200);
        graceNoteSize->setValue(70);

        gridLayout_27->addWidget(graceNoteSize, 2, 1, 1, 1);

        resetGraceNoteSize = new QToolButton(groupBox_sizes);
        resetGraceNoteSize->setObjectName("resetGraceNoteSize");
        resetGraceNoteSize->setText(QString::fromUtf8(""));

        gridLayout_27->addWidget(resetGraceNoteSize, 2, 2, 1, 1);

        label_45 = new QLabel(groupBox_sizes);
        label_45->setObjectName("label_45");
        sizePolicy6.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy6);

        gridLayout_27->addWidget(label_45, 3, 0, 1, 1);

        smallClefSize = new QSpinBox(groupBox_sizes);
        smallClefSize->setObjectName("smallClefSize");
        sizePolicy5.setHeightForWidth(smallClefSize->sizePolicy().hasHeightForWidth());
        smallClefSize->setSizePolicy(sizePolicy5);
        smallClefSize->setKeyboardTracking(false);
        smallClefSize->setSuffix(QString::fromUtf8("%"));
        smallClefSize->setMinimum(10);
        smallClefSize->setMaximum(200);
        smallClefSize->setValue(70);

        gridLayout_27->addWidget(smallClefSize, 3, 1, 1, 1);

        resetSmallClefSize = new QToolButton(groupBox_sizes);
        resetSmallClefSize->setObjectName("resetSmallClefSize");
        resetSmallClefSize->setText(QString::fromUtf8(""));

        gridLayout_27->addWidget(resetSmallClefSize, 3, 2, 1, 1);


        verticalLayout_18->addWidget(groupBox_sizes);

        verticalSpacer_21 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_21);

        pageStack->addWidget(PageSizes);
        PageHeaderFooter = new QWidget();
        PageHeaderFooter->setObjectName("PageHeaderFooter");
        verticalLayout_5 = new QVBoxLayout(PageHeaderFooter);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        scrollArea_headerFooter = new QScrollArea(PageHeaderFooter);
        scrollArea_headerFooter->setObjectName("scrollArea_headerFooter");
        scrollArea_headerFooter->setFrameShape(QFrame::NoFrame);
        scrollArea_headerFooter->setWidgetResizable(true);
        scrollArea_headerFooter_contents = new QWidget();
        scrollArea_headerFooter_contents->setObjectName("scrollArea_headerFooter_contents");
        scrollArea_headerFooter_contents->setGeometry(QRect(0, 0, 737, 733));
        verticalLayout_9 = new QVBoxLayout(scrollArea_headerFooter_contents);
        verticalLayout_9->setObjectName("verticalLayout_9");
        showHeader = new QGroupBox(scrollArea_headerFooter_contents);
        showHeader->setObjectName("showHeader");
        showHeader->setCheckable(true);
        verticalLayout_23 = new QVBoxLayout(showHeader);
        verticalLayout_23->setObjectName("verticalLayout_23");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        showHeaderFirstPage = new QCheckBox(showHeader);
        showHeaderFirstPage->setObjectName("showHeaderFirstPage");

        horizontalLayout_4->addWidget(showHeaderFirstPage);

        horizontalSpacer_52 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_52);

        headerOddEven = new QCheckBox(showHeader);
        headerOddEven->setObjectName("headerOddEven");

        horizontalLayout_4->addWidget(headerOddEven);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_23->addLayout(horizontalLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        oddHeaderR = new QTextEdit(showHeader);
        oddHeaderR->setObjectName("oddHeaderR");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(oddHeaderR->sizePolicy().hasHeightForWidth());
        oddHeaderR->setSizePolicy(sizePolicy7);
        oddHeaderR->setMinimumSize(QSize(0, 30));
        oddHeaderR->setMaximumSize(QSize(207, 80));
        oddHeaderR->setTabChangesFocus(true);

        gridLayout_5->addWidget(oddHeaderR, 1, 3, 1, 1);

        evenHeaderL = new QTextEdit(showHeader);
        evenHeaderL->setObjectName("evenHeaderL");
        sizePolicy7.setHeightForWidth(evenHeaderL->sizePolicy().hasHeightForWidth());
        evenHeaderL->setSizePolicy(sizePolicy7);
        evenHeaderL->setMinimumSize(QSize(0, 30));
        evenHeaderL->setMaximumSize(QSize(207, 80));
        evenHeaderL->setTabChangesFocus(true);

        gridLayout_5->addWidget(evenHeaderL, 2, 1, 1, 1);

        labelLeftHeader = new QLabel(showHeader);
        labelLeftHeader->setObjectName("labelLeftHeader");
        sizePolicy5.setHeightForWidth(labelLeftHeader->sizePolicy().hasHeightForWidth());
        labelLeftHeader->setSizePolicy(sizePolicy5);
        labelLeftHeader->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelLeftHeader, 0, 1, 1, 1);

        oddHeaderL = new QTextEdit(showHeader);
        oddHeaderL->setObjectName("oddHeaderL");
        sizePolicy7.setHeightForWidth(oddHeaderL->sizePolicy().hasHeightForWidth());
        oddHeaderL->setSizePolicy(sizePolicy7);
        oddHeaderL->setMinimumSize(QSize(0, 30));
        oddHeaderL->setMaximumSize(QSize(207, 80));
        oddHeaderL->setTabChangesFocus(true);

        gridLayout_5->addWidget(oddHeaderL, 1, 1, 1, 1);

        evenHeaderR = new QTextEdit(showHeader);
        evenHeaderR->setObjectName("evenHeaderR");
        sizePolicy7.setHeightForWidth(evenHeaderR->sizePolicy().hasHeightForWidth());
        evenHeaderR->setSizePolicy(sizePolicy7);
        evenHeaderR->setMinimumSize(QSize(0, 30));
        evenHeaderR->setMaximumSize(QSize(207, 80));
        evenHeaderR->setTabChangesFocus(true);

        gridLayout_5->addWidget(evenHeaderR, 2, 3, 1, 1);

        labelEvenHeader = new QLabel(showHeader);
        labelEvenHeader->setObjectName("labelEvenHeader");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(labelEvenHeader->sizePolicy().hasHeightForWidth());
        labelEvenHeader->setSizePolicy(sizePolicy8);

        gridLayout_5->addWidget(labelEvenHeader, 2, 0, 1, 1);

        oddHeaderC = new QTextEdit(showHeader);
        oddHeaderC->setObjectName("oddHeaderC");
        sizePolicy7.setHeightForWidth(oddHeaderC->sizePolicy().hasHeightForWidth());
        oddHeaderC->setSizePolicy(sizePolicy7);
        oddHeaderC->setMinimumSize(QSize(0, 30));
        oddHeaderC->setMaximumSize(QSize(207, 80));
        oddHeaderC->setTabChangesFocus(true);

        gridLayout_5->addWidget(oddHeaderC, 1, 2, 1, 1);

        labelMiddleHeader = new QLabel(showHeader);
        labelMiddleHeader->setObjectName("labelMiddleHeader");
        sizePolicy5.setHeightForWidth(labelMiddleHeader->sizePolicy().hasHeightForWidth());
        labelMiddleHeader->setSizePolicy(sizePolicy5);
        labelMiddleHeader->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelMiddleHeader, 0, 2, 1, 1);

        evenHeaderC = new QTextEdit(showHeader);
        evenHeaderC->setObjectName("evenHeaderC");
        sizePolicy7.setHeightForWidth(evenHeaderC->sizePolicy().hasHeightForWidth());
        evenHeaderC->setSizePolicy(sizePolicy7);
        evenHeaderC->setMinimumSize(QSize(0, 30));
        evenHeaderC->setMaximumSize(QSize(207, 80));
        evenHeaderC->setTabChangesFocus(true);

        gridLayout_5->addWidget(evenHeaderC, 2, 2, 1, 1);

        labelPageHeader = new QLabel(showHeader);
        labelPageHeader->setObjectName("labelPageHeader");
        sizePolicy6.setHeightForWidth(labelPageHeader->sizePolicy().hasHeightForWidth());
        labelPageHeader->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(labelPageHeader, 0, 0, 1, 1);

        labelOddHeader = new QLabel(showHeader);
        labelOddHeader->setObjectName("labelOddHeader");
        sizePolicy8.setHeightForWidth(labelOddHeader->sizePolicy().hasHeightForWidth());
        labelOddHeader->setSizePolicy(sizePolicy8);

        gridLayout_5->addWidget(labelOddHeader, 1, 0, 1, 1);

        labelRightHeader = new QLabel(showHeader);
        labelRightHeader->setObjectName("labelRightHeader");
        sizePolicy5.setHeightForWidth(labelRightHeader->sizePolicy().hasHeightForWidth());
        labelRightHeader->setSizePolicy(sizePolicy5);
        labelRightHeader->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelRightHeader, 0, 3, 1, 1);


        verticalLayout_23->addLayout(gridLayout_5);


        verticalLayout_9->addWidget(showHeader);

        showFooter = new QGroupBox(scrollArea_headerFooter_contents);
        showFooter->setObjectName("showFooter");
        showFooter->setCheckable(true);
        verticalLayout_22 = new QVBoxLayout(showFooter);
        verticalLayout_22->setObjectName("verticalLayout_22");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        showFooterFirstPage = new QCheckBox(showFooter);
        showFooterFirstPage->setObjectName("showFooterFirstPage");

        horizontalLayout_2->addWidget(showFooterFirstPage);

        horizontalSpacer_53 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_53);

        footerOddEven = new QCheckBox(showFooter);
        footerOddEven->setObjectName("footerOddEven");

        horizontalLayout_2->addWidget(footerOddEven);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_22->addLayout(horizontalLayout_2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        labelOddFooter = new QLabel(showFooter);
        labelOddFooter->setObjectName("labelOddFooter");
        sizePolicy8.setHeightForWidth(labelOddFooter->sizePolicy().hasHeightForWidth());
        labelOddFooter->setSizePolicy(sizePolicy8);

        gridLayout_6->addWidget(labelOddFooter, 1, 0, 1, 1);

        oddFooterL = new QTextEdit(showFooter);
        oddFooterL->setObjectName("oddFooterL");
        sizePolicy7.setHeightForWidth(oddFooterL->sizePolicy().hasHeightForWidth());
        oddFooterL->setSizePolicy(sizePolicy7);
        oddFooterL->setMinimumSize(QSize(0, 30));
        oddFooterL->setMaximumSize(QSize(207, 80));
        oddFooterL->setTabChangesFocus(true);

        gridLayout_6->addWidget(oddFooterL, 1, 1, 1, 1);

        labelMiddleFooter = new QLabel(showFooter);
        labelMiddleFooter->setObjectName("labelMiddleFooter");
        sizePolicy5.setHeightForWidth(labelMiddleFooter->sizePolicy().hasHeightForWidth());
        labelMiddleFooter->setSizePolicy(sizePolicy5);
        labelMiddleFooter->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelMiddleFooter, 0, 2, 1, 1);

        oddFooterC = new QTextEdit(showFooter);
        oddFooterC->setObjectName("oddFooterC");
        sizePolicy7.setHeightForWidth(oddFooterC->sizePolicy().hasHeightForWidth());
        oddFooterC->setSizePolicy(sizePolicy7);
        oddFooterC->setMinimumSize(QSize(0, 30));
        oddFooterC->setMaximumSize(QSize(207, 80));
        oddFooterC->setTabChangesFocus(true);

        gridLayout_6->addWidget(oddFooterC, 1, 2, 1, 1);

        evenFooterL = new QTextEdit(showFooter);
        evenFooterL->setObjectName("evenFooterL");
        sizePolicy7.setHeightForWidth(evenFooterL->sizePolicy().hasHeightForWidth());
        evenFooterL->setSizePolicy(sizePolicy7);
        evenFooterL->setMinimumSize(QSize(0, 30));
        evenFooterL->setMaximumSize(QSize(207, 80));
        evenFooterL->setTabChangesFocus(true);

        gridLayout_6->addWidget(evenFooterL, 2, 1, 1, 1);

        labelEvenFooter = new QLabel(showFooter);
        labelEvenFooter->setObjectName("labelEvenFooter");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(labelEvenFooter->sizePolicy().hasHeightForWidth());
        labelEvenFooter->setSizePolicy(sizePolicy9);

        gridLayout_6->addWidget(labelEvenFooter, 2, 0, 1, 1);

        labelLeftFooter = new QLabel(showFooter);
        labelLeftFooter->setObjectName("labelLeftFooter");
        sizePolicy5.setHeightForWidth(labelLeftFooter->sizePolicy().hasHeightForWidth());
        labelLeftFooter->setSizePolicy(sizePolicy5);
        labelLeftFooter->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelLeftFooter, 0, 1, 1, 1);

        evenFooterC = new QTextEdit(showFooter);
        evenFooterC->setObjectName("evenFooterC");
        sizePolicy7.setHeightForWidth(evenFooterC->sizePolicy().hasHeightForWidth());
        evenFooterC->setSizePolicy(sizePolicy7);
        evenFooterC->setMinimumSize(QSize(0, 30));
        evenFooterC->setMaximumSize(QSize(207, 80));
        evenFooterC->setTabChangesFocus(true);

        gridLayout_6->addWidget(evenFooterC, 2, 2, 1, 1);

        evenFooterR = new QTextEdit(showFooter);
        evenFooterR->setObjectName("evenFooterR");
        sizePolicy7.setHeightForWidth(evenFooterR->sizePolicy().hasHeightForWidth());
        evenFooterR->setSizePolicy(sizePolicy7);
        evenFooterR->setMinimumSize(QSize(0, 30));
        evenFooterR->setMaximumSize(QSize(207, 80));
        evenFooterR->setTabChangesFocus(true);

        gridLayout_6->addWidget(evenFooterR, 2, 3, 1, 1);

        oddFooterR = new QTextEdit(showFooter);
        oddFooterR->setObjectName("oddFooterR");
        sizePolicy7.setHeightForWidth(oddFooterR->sizePolicy().hasHeightForWidth());
        oddFooterR->setSizePolicy(sizePolicy7);
        oddFooterR->setMinimumSize(QSize(0, 30));
        oddFooterR->setMaximumSize(QSize(207, 80));
        oddFooterR->setTabChangesFocus(true);

        gridLayout_6->addWidget(oddFooterR, 1, 3, 1, 1);

        labelPageFooter = new QLabel(showFooter);
        labelPageFooter->setObjectName("labelPageFooter");
        sizePolicy6.setHeightForWidth(labelPageFooter->sizePolicy().hasHeightForWidth());
        labelPageFooter->setSizePolicy(sizePolicy6);

        gridLayout_6->addWidget(labelPageFooter, 0, 0, 1, 1);

        labelRightFooter = new QLabel(showFooter);
        labelRightFooter->setObjectName("labelRightFooter");
        sizePolicy5.setHeightForWidth(labelRightFooter->sizePolicy().hasHeightForWidth());
        labelRightFooter->setSizePolicy(sizePolicy5);
        labelRightFooter->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelRightFooter, 0, 3, 1, 1);


        verticalLayout_22->addLayout(gridLayout_6);


        verticalLayout_9->addWidget(showFooter);

        verticalSpacer_33 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_33);

        scrollArea_headerFooter->setWidget(scrollArea_headerFooter_contents);

        verticalLayout_5->addWidget(scrollArea_headerFooter);

        pageStack->addWidget(PageHeaderFooter);
        PageMeasureNumbers = new QWidget();
        PageMeasureNumbers->setObjectName("PageMeasureNumbers");
        verticalLayout_44 = new QVBoxLayout(PageMeasureNumbers);
        verticalLayout_44->setObjectName("verticalLayout_44");
        showMeasureNumber = new QGroupBox(PageMeasureNumbers);
        showMeasureNumber->setObjectName("showMeasureNumber");
        showMeasureNumber->setCheckable(true);
        showMeasureNumber->setChecked(true);
        _2 = new QGridLayout(showMeasureNumber);
        _2->setObjectName("_2");
        showFirstMeasureNumber = new QCheckBox(showMeasureNumber);
        showFirstMeasureNumber->setObjectName("showFirstMeasureNumber");

        _2->addWidget(showFirstMeasureNumber, 0, 0, 1, 1);

        measureNumberPosAboveLabel = new QLabel(showMeasureNumber);
        measureNumberPosAboveLabel->setObjectName("measureNumberPosAboveLabel");
        measureNumberPosAboveLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        _2->addWidget(measureNumberPosAboveLabel, 2, 3, 2, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        showIntervalMeasureNumber = new QRadioButton(showMeasureNumber);
        showIntervalMeasureNumber->setObjectName("showIntervalMeasureNumber");
        showIntervalMeasureNumber->setChecked(true);

        horizontalLayout_8->addWidget(showIntervalMeasureNumber);

        intervalMeasureNumber = new QSpinBox(showMeasureNumber);
        intervalMeasureNumber->setObjectName("intervalMeasureNumber");
        intervalMeasureNumber->setKeyboardTracking(false);
        intervalMeasureNumber->setMinimum(1);
        intervalMeasureNumber->setValue(5);

        horizontalLayout_8->addWidget(intervalMeasureNumber);


        _2->addLayout(horizontalLayout_8, 3, 0, 1, 2);

        measureNumberPosBelowLabel = new QLabel(showMeasureNumber);
        measureNumberPosBelowLabel->setObjectName("measureNumberPosBelowLabel");
        measureNumberPosBelowLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        _2->addWidget(measureNumberPosBelowLabel, 4, 3, 2, 1);

        resetMeasureNumberPosAbove = new QToolButton(showMeasureNumber);
        resetMeasureNumberPosAbove->setObjectName("resetMeasureNumberPosAbove");
        resetMeasureNumberPosAbove->setText(QString::fromUtf8(""));

        _2->addWidget(resetMeasureNumberPosAbove, 2, 6, 2, 1);

        label_921 = new QLabel(showMeasureNumber);
        label_921->setObjectName("label_921");

        _2->addWidget(label_921, 0, 3, 1, 1);

        resetMeasureNumberPosBelow = new QToolButton(showMeasureNumber);
        resetMeasureNumberPosBelow->setObjectName("resetMeasureNumberPosBelow");
        resetMeasureNumberPosBelow->setText(QString::fromUtf8(""));

        _2->addWidget(resetMeasureNumberPosBelow, 4, 6, 2, 1);

        label_93 = new QLabel(showMeasureNumber);
        label_93->setObjectName("label_93");

        _2->addWidget(label_93, 1, 3, 1, 1);

        measureNumberPosAbove = new mu::notation::OffsetSelect(showMeasureNumber);
        measureNumberPosAbove->setObjectName("measureNumberPosAbove");
        measureNumberPosAbove->setFocusPolicy(Qt::StrongFocus);

        _2->addWidget(measureNumberPosAbove, 2, 4, 2, 2);

        resetMeasureNumberHPlacement = new QToolButton(showMeasureNumber);
        resetMeasureNumberHPlacement->setObjectName("resetMeasureNumberHPlacement");

        _2->addWidget(resetMeasureNumberHPlacement, 1, 6, 1, 1);

        measureNumberPosBelow = new mu::notation::OffsetSelect(showMeasureNumber);
        measureNumberPosBelow->setObjectName("measureNumberPosBelow");
        measureNumberPosBelow->setFocusPolicy(Qt::StrongFocus);

        _2->addWidget(measureNumberPosBelow, 4, 4, 2, 2);

        showEverySystemMeasureNumber = new QRadioButton(showMeasureNumber);
        showEverySystemMeasureNumber->setObjectName("showEverySystemMeasureNumber");

        _2->addWidget(showEverySystemMeasureNumber, 2, 0, 1, 1);

        resetMeasureNumberVPlacement = new QToolButton(showMeasureNumber);
        resetMeasureNumberVPlacement->setObjectName("resetMeasureNumberVPlacement");

        _2->addWidget(resetMeasureNumberVPlacement, 0, 6, 1, 1);

        measureNumberHPlacement = new QComboBox(showMeasureNumber);
        measureNumberHPlacement->setObjectName("measureNumberHPlacement");

        _2->addWidget(measureNumberHPlacement, 1, 4, 1, 2);

        showAllStavesMeasureNumber = new QCheckBox(showMeasureNumber);
        showAllStavesMeasureNumber->setObjectName("showAllStavesMeasureNumber");

        _2->addWidget(showAllStavesMeasureNumber, 1, 0, 1, 1);

        measureNumberVPlacement = new QComboBox(showMeasureNumber);
        measureNumberVPlacement->setObjectName("measureNumberVPlacement");

        _2->addWidget(measureNumberVPlacement, 0, 4, 1, 2);

        horizontalSpacer_18 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _2->addItem(horizontalSpacer_18, 0, 2, 1, 1);

        horizontalSpacer_54 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _2->addItem(horizontalSpacer_54, 0, 7, 1, 1);


        verticalLayout_44->addWidget(showMeasureNumber);

        mmRestShowMeasureNumberRange = new QGroupBox(PageMeasureNumbers);
        mmRestShowMeasureNumberRange->setObjectName("mmRestShowMeasureNumberRange");
        mmRestShowMeasureNumberRange->setCheckable(true);
        gridLayout_48 = new QGridLayout(mmRestShowMeasureNumberRange);
        gridLayout_48->setObjectName("gridLayout_48");
        resetMmRestRangeBracketType = new QToolButton(mmRestShowMeasureNumberRange);
        resetMmRestRangeBracketType->setObjectName("resetMmRestRangeBracketType");

        gridLayout_48->addWidget(resetMmRestRangeBracketType, 0, 2, 1, 1);

        mmRestRangeBracketType = new QComboBox(mmRestShowMeasureNumberRange);
        mmRestRangeBracketType->setObjectName("mmRestRangeBracketType");

        gridLayout_48->addWidget(mmRestRangeBracketType, 0, 1, 1, 1);

        mmRestRangePosAbove = new mu::notation::OffsetSelect(mmRestShowMeasureNumberRange);
        mmRestRangePosAbove->setObjectName("mmRestRangePosAbove");
        mmRestRangePosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_48->addWidget(mmRestRangePosAbove, 3, 1, 1, 1);

        resetMMRestRangePosAbove = new QToolButton(mmRestShowMeasureNumberRange);
        resetMMRestRangePosAbove->setObjectName("resetMMRestRangePosAbove");
        resetMMRestRangePosAbove->setText(QString::fromUtf8(""));

        gridLayout_48->addWidget(resetMMRestRangePosAbove, 3, 2, 1, 1);

        label_165 = new QLabel(mmRestShowMeasureNumberRange);
        label_165->setObjectName("label_165");

        gridLayout_48->addWidget(label_165, 1, 0, 1, 1);

        mmRestRangeVPlacement = new QComboBox(mmRestShowMeasureNumberRange);
        mmRestRangeVPlacement->setObjectName("mmRestRangeVPlacement");

        gridLayout_48->addWidget(mmRestRangeVPlacement, 1, 1, 1, 1);

        mmRestRangeHPlacement = new QComboBox(mmRestShowMeasureNumberRange);
        mmRestRangeHPlacement->setObjectName("mmRestRangeHPlacement");

        gridLayout_48->addWidget(mmRestRangeHPlacement, 2, 1, 1, 1);

        mmRestRangePosAboveLabel = new QLabel(mmRestShowMeasureNumberRange);
        mmRestRangePosAboveLabel->setObjectName("mmRestRangePosAboveLabel");
        sizePolicy6.setHeightForWidth(mmRestRangePosAboveLabel->sizePolicy().hasHeightForWidth());
        mmRestRangePosAboveLabel->setSizePolicy(sizePolicy6);
        mmRestRangePosAboveLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_48->addWidget(mmRestRangePosAboveLabel, 3, 0, 1, 1);

        label_164 = new QLabel(mmRestShowMeasureNumberRange);
        label_164->setObjectName("label_164");

        gridLayout_48->addWidget(label_164, 0, 0, 1, 1);

        resetMmRestRangeVPlacement = new QToolButton(mmRestShowMeasureNumberRange);
        resetMmRestRangeVPlacement->setObjectName("resetMmRestRangeVPlacement");

        gridLayout_48->addWidget(resetMmRestRangeVPlacement, 1, 2, 1, 1);

        label_166 = new QLabel(mmRestShowMeasureNumberRange);
        label_166->setObjectName("label_166");

        gridLayout_48->addWidget(label_166, 2, 0, 1, 1);

        resetMmRestRangeHPlacement = new QToolButton(mmRestShowMeasureNumberRange);
        resetMmRestRangeHPlacement->setObjectName("resetMmRestRangeHPlacement");

        gridLayout_48->addWidget(resetMmRestRangeHPlacement, 2, 2, 1, 1);

        mmRestRangePosBelowLabel = new QLabel(mmRestShowMeasureNumberRange);
        mmRestRangePosBelowLabel->setObjectName("mmRestRangePosBelowLabel");
        sizePolicy6.setHeightForWidth(mmRestRangePosBelowLabel->sizePolicy().hasHeightForWidth());
        mmRestRangePosBelowLabel->setSizePolicy(sizePolicy6);
        mmRestRangePosBelowLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_48->addWidget(mmRestRangePosBelowLabel, 4, 0, 1, 1);

        mmRestRangePosBelow = new mu::notation::OffsetSelect(mmRestShowMeasureNumberRange);
        mmRestRangePosBelow->setObjectName("mmRestRangePosBelow");
        mmRestRangePosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_48->addWidget(mmRestRangePosBelow, 4, 1, 1, 1);

        resetMMRestRangePosBelow = new QToolButton(mmRestShowMeasureNumberRange);
        resetMMRestRangePosBelow->setObjectName("resetMMRestRangePosBelow");
        resetMMRestRangePosBelow->setText(QString::fromUtf8(""));

        gridLayout_48->addWidget(resetMMRestRangePosBelow, 4, 2, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_48->addItem(horizontalSpacer_19, 0, 3, 1, 1);


        verticalLayout_44->addWidget(mmRestShowMeasureNumberRange);

        verticalSpacer_27 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_44->addItem(verticalSpacer_27);

        pageStack->addWidget(PageMeasureNumbers);
        PageSystem = new QWidget();
        PageSystem->setObjectName("PageSystem");
        verticalLayout_3 = new QVBoxLayout(PageSystem);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_systemBrackets = new QGroupBox(PageSystem);
        groupBox_systemBrackets->setObjectName("groupBox_systemBrackets");
        gridLayout_44 = new QGridLayout(groupBox_systemBrackets);
        gridLayout_44->setObjectName("gridLayout_44");
        bracketWidth = new QDoubleSpinBox(groupBox_systemBrackets);
        bracketWidth->setObjectName("bracketWidth");
        bracketWidth->setKeyboardTracking(false);
        bracketWidth->setDecimals(2);
        bracketWidth->setMinimum(-1000.000000000000000);
        bracketWidth->setMaximum(1000.000000000000000);
        bracketWidth->setSingleStep(0.100000000000000);

        gridLayout_44->addWidget(bracketWidth, 0, 1, 1, 1);

        label_52 = new QLabel(groupBox_systemBrackets);
        label_52->setObjectName("label_52");

        gridLayout_44->addWidget(label_52, 1, 0, 1, 1);

        bracketDistance = new QDoubleSpinBox(groupBox_systemBrackets);
        bracketDistance->setObjectName("bracketDistance");
        sizePolicy5.setHeightForWidth(bracketDistance->sizePolicy().hasHeightForWidth());
        bracketDistance->setSizePolicy(sizePolicy5);
        bracketDistance->setKeyboardTracking(false);
        bracketDistance->setDecimals(2);
        bracketDistance->setMinimum(-1000.000000000000000);
        bracketDistance->setMaximum(1000.000000000000000);
        bracketDistance->setSingleStep(0.100000000000000);

        gridLayout_44->addWidget(bracketDistance, 1, 1, 1, 1);

        resetBracketDistance = new QToolButton(groupBox_systemBrackets);
        resetBracketDistance->setObjectName("resetBracketDistance");
        resetBracketDistance->setText(QString::fromUtf8(""));

        gridLayout_44->addWidget(resetBracketDistance, 1, 2, 1, 1);

        akkoladeBarDistance = new QDoubleSpinBox(groupBox_systemBrackets);
        akkoladeBarDistance->setObjectName("akkoladeBarDistance");
        sizePolicy3.setHeightForWidth(akkoladeBarDistance->sizePolicy().hasHeightForWidth());
        akkoladeBarDistance->setSizePolicy(sizePolicy3);
        akkoladeBarDistance->setMinimumSize(QSize(0, 0));
        akkoladeBarDistance->setKeyboardTracking(false);

        gridLayout_44->addWidget(akkoladeBarDistance, 1, 5, 1, 1);

        braceThicknessLabel = new QLabel(groupBox_systemBrackets);
        braceThicknessLabel->setObjectName("braceThicknessLabel");

        gridLayout_44->addWidget(braceThicknessLabel, 0, 4, 1, 1);

        akkoladeWidth = new QDoubleSpinBox(groupBox_systemBrackets);
        akkoladeWidth->setObjectName("akkoladeWidth");
        sizePolicy3.setHeightForWidth(akkoladeWidth->sizePolicy().hasHeightForWidth());
        akkoladeWidth->setSizePolicy(sizePolicy3);
        akkoladeWidth->setMinimumSize(QSize(0, 0));
        akkoladeWidth->setKeyboardTracking(false);

        gridLayout_44->addWidget(akkoladeWidth, 0, 5, 1, 1);

        resetBraceThickness = new QToolButton(groupBox_systemBrackets);
        resetBraceThickness->setObjectName("resetBraceThickness");
        resetBraceThickness->setText(QString::fromUtf8(""));

        gridLayout_44->addWidget(resetBraceThickness, 0, 6, 1, 1);

        braceDistanceLabel = new QLabel(groupBox_systemBrackets);
        braceDistanceLabel->setObjectName("braceDistanceLabel");

        gridLayout_44->addWidget(braceDistanceLabel, 1, 4, 1, 1);

        resetBraceDistance = new QToolButton(groupBox_systemBrackets);
        resetBraceDistance->setObjectName("resetBraceDistance");
        resetBraceDistance->setText(QString::fromUtf8(""));

        gridLayout_44->addWidget(resetBraceDistance, 1, 6, 1, 1);

        label_91 = new QLabel(groupBox_systemBrackets);
        label_91->setObjectName("label_91");

        gridLayout_44->addWidget(label_91, 0, 0, 1, 1);

        resetBracketThickness = new QToolButton(groupBox_systemBrackets);
        resetBracketThickness->setObjectName("resetBracketThickness");
        resetBracketThickness->setText(QString::fromUtf8(""));

        gridLayout_44->addWidget(resetBracketThickness, 0, 2, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_22, 0, 3, 1, 1);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_42, 0, 7, 1, 1);


        verticalLayout_3->addWidget(groupBox_systemBrackets);

        groupBox_systemDividers = new QGroupBox(PageSystem);
        groupBox_systemDividers->setObjectName("groupBox_systemDividers");
        verticalLayout_41 = new QVBoxLayout(groupBox_systemDividers);
        verticalLayout_41->setObjectName("verticalLayout_41");
        dividerLeft = new QGroupBox(groupBox_systemDividers);
        dividerLeft->setObjectName("dividerLeft");
        dividerLeft->setCheckable(true);
        dividerLeft->setChecked(false);
        gridLayout_10 = new QGridLayout(dividerLeft);
        gridLayout_10->setObjectName("gridLayout_10");
        dividerLeftSym = new QComboBox(dividerLeft);
        dividerLeftSym->setObjectName("dividerLeftSym");

        gridLayout_10->addWidget(dividerLeftSym, 0, 1, 2, 1);

        dividerLeftY = new QDoubleSpinBox(dividerLeft);
        dividerLeftY->setObjectName("dividerLeftY");
        dividerLeftY->setMinimumSize(QSize(0, 20));
        dividerLeftY->setKeyboardTracking(false);
        dividerLeftY->setMinimum(-99.000000000000000);

        gridLayout_10->addWidget(dividerLeftY, 1, 4, 1, 1);

        dividerLeftX = new QDoubleSpinBox(dividerLeft);
        dividerLeftX->setObjectName("dividerLeftX");
        dividerLeftX->setMinimumSize(QSize(0, 20));
        dividerLeftX->setKeyboardTracking(false);
        dividerLeftX->setMinimum(-99.000000000000000);

        gridLayout_10->addWidget(dividerLeftX, 0, 4, 1, 1);

        label_65 = new QLabel(dividerLeft);
        label_65->setObjectName("label_65");

        gridLayout_10->addWidget(label_65, 1, 3, 1, 1);

        label_29 = new QLabel(dividerLeft);
        label_29->setObjectName("label_29");

        gridLayout_10->addWidget(label_29, 0, 3, 1, 1);

        label_7 = new QLabel(dividerLeft);
        label_7->setObjectName("label_7");

        gridLayout_10->addWidget(label_7, 0, 0, 2, 1);

        horizontalSpacer_37 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_37, 0, 2, 1, 1);

        horizontalSpacer_41 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_41, 0, 5, 1, 1);


        verticalLayout_41->addWidget(dividerLeft);

        dividerRight = new QGroupBox(groupBox_systemDividers);
        dividerRight->setObjectName("dividerRight");
        dividerRight->setCheckable(true);
        dividerRight->setChecked(false);
        gridLayout_30 = new QGridLayout(dividerRight);
        gridLayout_30->setObjectName("gridLayout_30");
        label_68 = new QLabel(dividerRight);
        label_68->setObjectName("label_68");

        gridLayout_30->addWidget(label_68, 1, 3, 1, 1);

        dividerRightSym = new QComboBox(dividerRight);
        dividerRightSym->setObjectName("dividerRightSym");

        gridLayout_30->addWidget(dividerRightSym, 0, 1, 2, 1);

        dividerRightY = new QDoubleSpinBox(dividerRight);
        dividerRightY->setObjectName("dividerRightY");
        dividerRightY->setMinimumSize(QSize(0, 20));
        dividerRightY->setKeyboardTracking(false);
        dividerRightY->setMinimum(-99.000000000000000);

        gridLayout_30->addWidget(dividerRightY, 1, 4, 1, 1);

        label_66 = new QLabel(dividerRight);
        label_66->setObjectName("label_66");

        gridLayout_30->addWidget(label_66, 0, 0, 2, 1);

        label_67 = new QLabel(dividerRight);
        label_67->setObjectName("label_67");

        gridLayout_30->addWidget(label_67, 0, 3, 1, 1);

        dividerRightX = new QDoubleSpinBox(dividerRight);
        dividerRightX->setObjectName("dividerRightX");
        dividerRightX->setMinimumSize(QSize(0, 20));
        dividerRightX->setKeyboardTracking(false);
        dividerRightX->setMinimum(-99.000000000000000);

        gridLayout_30->addWidget(dividerRightX, 0, 4, 1, 1);

        horizontalSpacer_39 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_30->addItem(horizontalSpacer_39, 0, 2, 1, 1);

        horizontalSpacer_40 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_30->addItem(horizontalSpacer_40, 0, 5, 1, 1);


        verticalLayout_41->addWidget(dividerRight);


        verticalLayout_3->addWidget(groupBox_systemDividers);

        verticalSpacer_20 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_20);

        pageStack->addWidget(PageSystem);
        PageClefsKeyTimeSigs = new QWidget();
        PageClefsKeyTimeSigs->setObjectName("PageClefsKeyTimeSigs");
        verticalLayout_27 = new QVBoxLayout(PageClefsKeyTimeSigs);
        verticalLayout_27->setObjectName("verticalLayout_27");
        groupBox_clefSettings = new QGroupBox(PageClefsKeyTimeSigs);
        groupBox_clefSettings->setObjectName("groupBox_clefSettings");
        verticalLayout_59 = new QVBoxLayout(groupBox_clefSettings);
        verticalLayout_59->setObjectName("verticalLayout_59");
        label_173 = new QLabel(groupBox_clefSettings);
        label_173->setObjectName("label_173");

        verticalLayout_59->addWidget(label_173);

        radioShowAllClefs = new QRadioButton(groupBox_clefSettings);
        radioShowAllClefs->setObjectName("radioShowAllClefs");

        verticalLayout_59->addWidget(radioShowAllClefs);

        radioHideClefs = new QRadioButton(groupBox_clefSettings);
        radioHideClefs->setObjectName("radioHideClefs");

        verticalLayout_59->addWidget(radioHideClefs);

        hideTabClefs = new QCheckBox(groupBox_clefSettings);
        hideTabClefs->setObjectName("hideTabClefs");

        verticalLayout_59->addWidget(hideTabClefs);

        genCourtesyClef = new QCheckBox(groupBox_clefSettings);
        genCourtesyClef->setObjectName("genCourtesyClef");

        verticalLayout_59->addWidget(genCourtesyClef);

        groupBox_TABClef = new QGroupBox(groupBox_clefSettings);
        groupBox_TABClef->setObjectName("groupBox_TABClef");
        verticalLayout_29 = new QVBoxLayout(groupBox_TABClef);
        verticalLayout_29->setObjectName("verticalLayout_29");
        clefTab1 = new QRadioButton(groupBox_TABClef);
        clefTab1->setObjectName("clefTab1");

        verticalLayout_29->addWidget(clefTab1);

        clefTab2 = new QRadioButton(groupBox_TABClef);
        clefTab2->setObjectName("clefTab2");

        verticalLayout_29->addWidget(clefTab2);


        verticalLayout_59->addWidget(groupBox_TABClef);


        verticalLayout_27->addWidget(groupBox_clefSettings);

        groupBox_keySigSettings = new QGroupBox(PageClefsKeyTimeSigs);
        groupBox_keySigSettings->setObjectName("groupBox_keySigSettings");
        verticalLayout_60 = new QVBoxLayout(groupBox_keySigSettings);
        verticalLayout_60->setObjectName("verticalLayout_60");
        label_194 = new QLabel(groupBox_keySigSettings);
        label_194->setObjectName("label_194");

        verticalLayout_60->addWidget(label_194);

        radioShowAllKeys = new QRadioButton(groupBox_keySigSettings);
        radioShowAllKeys->setObjectName("radioShowAllKeys");

        verticalLayout_60->addWidget(radioShowAllKeys);

        radioHideKeys = new QRadioButton(groupBox_keySigSettings);
        radioHideKeys->setObjectName("radioHideKeys");

        verticalLayout_60->addWidget(radioHideKeys);

        genCourtesyKeysig = new QCheckBox(groupBox_keySigSettings);
        genCourtesyKeysig->setObjectName("genCourtesyKeysig");

        verticalLayout_60->addWidget(genCourtesyKeysig);


        verticalLayout_27->addWidget(groupBox_keySigSettings);

        groupBox_timeSigSettings = new QGroupBox(PageClefsKeyTimeSigs);
        groupBox_timeSigSettings->setObjectName("groupBox_timeSigSettings");
        verticalLayout_61 = new QVBoxLayout(groupBox_timeSigSettings);
        verticalLayout_61->setObjectName("verticalLayout_61");
        genCourtesyTimesig = new QCheckBox(groupBox_timeSigSettings);
        genCourtesyTimesig->setObjectName("genCourtesyTimesig");

        verticalLayout_61->addWidget(genCourtesyTimesig);


        verticalLayout_27->addWidget(groupBox_timeSigSettings);

        verticalSpacer_15 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_15);

        pageStack->addWidget(PageClefsKeyTimeSigs);
        PageAccidentals = new QWidget();
        PageAccidentals->setObjectName("PageAccidentals");
        verticalLayout_30 = new QVBoxLayout(PageAccidentals);
        verticalLayout_30->setObjectName("verticalLayout_30");
        scrollAreaAccidentals = new QScrollArea(PageAccidentals);
        scrollAreaAccidentals->setObjectName("scrollAreaAccidentals");
        scrollAreaAccidentals->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 677, 722));
        verticalLayout_631 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_631->setObjectName("verticalLayout_631");
        groupBox_accidentals = new QGroupBox(scrollAreaWidgetContents);
        groupBox_accidentals->setObjectName("groupBox_accidentals");
        gridLayout_51 = new QGridLayout(groupBox_accidentals);
        gridLayout_51->setObjectName("gridLayout_51");
        resetAccidentalsBracketPadding = new QToolButton(groupBox_accidentals);
        resetAccidentalsBracketPadding->setObjectName("resetAccidentalsBracketPadding");
        resetAccidentalsBracketPadding->setText(QString::fromUtf8(""));

        gridLayout_51->addWidget(resetAccidentalsBracketPadding, 0, 3, 2, 1);

        accidentalsBracketsBadding = new QDoubleSpinBox(groupBox_accidentals);
        accidentalsBracketsBadding->setObjectName("accidentalsBracketsBadding");
        sizePolicy5.setHeightForWidth(accidentalsBracketsBadding->sizePolicy().hasHeightForWidth());
        accidentalsBracketsBadding->setSizePolicy(sizePolicy5);
        accidentalsBracketsBadding->setKeyboardTracking(false);
        accidentalsBracketsBadding->setDecimals(3);
        accidentalsBracketsBadding->setMinimum(-10.000000000000000);
        accidentalsBracketsBadding->setMaximum(10.000000000000000);
        accidentalsBracketsBadding->setSingleStep(0.100000000000000);

        gridLayout_51->addWidget(accidentalsBracketsBadding, 0, 2, 2, 1);

        label_147 = new QLabel(groupBox_accidentals);
        label_147->setObjectName("label_147");
        sizePolicy6.setHeightForWidth(label_147->sizePolicy().hasHeightForWidth());
        label_147->setSizePolicy(sizePolicy6);

        gridLayout_51->addWidget(label_147, 0, 0, 2, 2);

        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_51->addItem(horizontalSpacer_6, 0, 4, 2, 1);


        verticalLayout_631->addWidget(groupBox_accidentals);

        accidentalsGroup = new QGroupBox(scrollAreaWidgetContents);
        accidentalsGroup->setObjectName("accidentalsGroup");
        verticalLayout_31 = new QVBoxLayout(accidentalsGroup);
        verticalLayout_31->setObjectName("verticalLayout_31");
        accidentalTable = new QTableWidget(accidentalsGroup);
        if (accidentalTable->columnCount() < 3)
            accidentalTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        accidentalTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        accidentalTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        accidentalTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        accidentalTable->setObjectName("accidentalTable");
        accidentalTable->horizontalHeader()->setDefaultSectionSize(150);

        verticalLayout_31->addWidget(accidentalTable);


        verticalLayout_631->addWidget(accidentalsGroup);

        keySigNaturalsGroup = new QGroupBox(scrollAreaWidgetContents);
        keySigNaturalsGroup->setObjectName("keySigNaturalsGroup");
        verticalLayout_35 = new QVBoxLayout(keySigNaturalsGroup);
        verticalLayout_35->setObjectName("verticalLayout_35");
        radioKeySigNatNone = new QRadioButton(keySigNaturalsGroup);
        radioKeySigNatNone->setObjectName("radioKeySigNatNone");

        verticalLayout_35->addWidget(radioKeySigNatNone);

        radioKeySigNatBefore = new QRadioButton(keySigNaturalsGroup);
        radioKeySigNatBefore->setObjectName("radioKeySigNatBefore");

        verticalLayout_35->addWidget(radioKeySigNatBefore);

        radioKeySigNatAfter = new QRadioButton(keySigNaturalsGroup);
        radioKeySigNatAfter->setObjectName("radioKeySigNatAfter");

        verticalLayout_35->addWidget(radioKeySigNatAfter);


        verticalLayout_631->addWidget(keySigNaturalsGroup);

        groupBoxAccidentalStacking = new QGroupBox(scrollAreaWidgetContents);
        groupBoxAccidentalStacking->setObjectName("groupBoxAccidentalStacking");
        gridLayout_671 = new QGridLayout(groupBoxAccidentalStacking);
        gridLayout_671->setObjectName("gridLayout_671");

        verticalLayout_631->addWidget(groupBoxAccidentalStacking);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_631->addItem(verticalSpacer_5);

        scrollAreaAccidentals->setWidget(scrollAreaWidgetContents);

        verticalLayout_30->addWidget(scrollAreaAccidentals);

        pageStack->addWidget(PageAccidentals);
        PageMeasure = new QWidget();
        PageMeasure->setObjectName("PageMeasure");
        sizePolicy7.setHeightForWidth(PageMeasure->sizePolicy().hasHeightForWidth());
        PageMeasure->setSizePolicy(sizePolicy7);
        verticalLayout_4 = new QVBoxLayout(PageMeasure);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        groupBox_measure = new QGroupBox(PageMeasure);
        groupBox_measure->setObjectName("groupBox_measure");
        gridLayout_99 = new QGridLayout(groupBox_measure);
        gridLayout_99->setObjectName("gridLayout_99");
        gridLayout_99->setContentsMargins(0, 0, 0, 0);
        scrollArea_measure = new QScrollArea(groupBox_measure);
        scrollArea_measure->setObjectName("scrollArea_measure");
        scrollArea_measure->setFrameShape(QFrame::NoFrame);
        scrollArea_measure->setWidgetResizable(true);
        scrollArea_measure_contents = new QWidget();
        scrollArea_measure_contents->setObjectName("scrollArea_measure_contents");
        scrollArea_measure_contents->setGeometry(QRect(0, 0, 658, 882));
        gridLayout_56 = new QGridLayout(scrollArea_measure_contents);
        gridLayout_56->setObjectName("gridLayout_56");
        measureSpacing = new QDoubleSpinBox(scrollArea_measure_contents);
        measureSpacing->setObjectName("measureSpacing");
        measureSpacing->setKeyboardTracking(false);
        measureSpacing->setDecimals(3);
        measureSpacing->setMinimum(1.000000000000000);
        measureSpacing->setMaximum(2.000000000000000);
        measureSpacing->setSingleStep(0.100000000000000);
        measureSpacing->setValue(1.500000000000000);

        gridLayout_56->addWidget(measureSpacing, 1, 1, 1, 1);

        groupBox_padding = new QGroupBox(scrollArea_measure_contents);
        groupBox_padding->setObjectName("groupBox_padding");
        gridLayout_2 = new QGridLayout(groupBox_padding);
        gridLayout_2->setObjectName("gridLayout_2");
        label_20 = new QLabel(groupBox_padding);
        label_20->setObjectName("label_20");

        gridLayout_2->addWidget(label_20, 21, 0, 1, 1);

        horizontalSpacer_58 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_58, 1, 3, 1, 1);

        label_109 = new QLabel(groupBox_padding);
        label_109->setObjectName("label_109");

        gridLayout_2->addWidget(label_109, 4, 0, 1, 1);

        line_15 = new QFrame(groupBox_padding);
        line_15->setObjectName("line_15");
        line_15->setFrameShape(QFrame::Shape::HLine);
        line_15->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line_15, 9, 0, 1, 4);

        resetTimesigBarlineDistance = new QToolButton(groupBox_padding);
        resetTimesigBarlineDistance->setObjectName("resetTimesigBarlineDistance");
        resetTimesigBarlineDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetTimesigBarlineDistance, 22, 2, 1, 1);

        line_10 = new QFrame(groupBox_padding);
        line_10->setObjectName("line_10");
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line_10, 14, 0, 1, 4);

        resetNoteBarDistance = new QToolButton(groupBox_padding);
        resetNoteBarDistance->setObjectName("resetNoteBarDistance");
        resetNoteBarDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetNoteBarDistance, 10, 2, 1, 1);

        barGraceDistance = new QDoubleSpinBox(groupBox_padding);
        barGraceDistance->setObjectName("barGraceDistance");
        barGraceDistance->setKeyboardTracking(false);
        barGraceDistance->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(barGraceDistance, 13, 1, 1, 1);

        resetTimesigLeftMargin = new QToolButton(groupBox_padding);
        resetTimesigLeftMargin->setObjectName("resetTimesigLeftMargin");
        resetTimesigLeftMargin->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetTimesigLeftMargin, 21, 2, 1, 1);

        barAccidentalDistance = new QDoubleSpinBox(groupBox_padding);
        barAccidentalDistance->setObjectName("barAccidentalDistance");
        barAccidentalDistance->setKeyboardTracking(false);
        barAccidentalDistance->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(barAccidentalDistance, 12, 1, 1, 1);

        line_11 = new QFrame(groupBox_padding);
        line_11->setObjectName("line_11");
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line_11, 17, 0, 1, 4);

        label_18 = new QLabel(groupBox_padding);
        label_18->setObjectName("label_18");

        gridLayout_2->addWidget(label_18, 15, 0, 1, 1);

        label_113 = new QLabel(groupBox_padding);
        label_113->setObjectName("label_113");

        gridLayout_2->addWidget(label_113, 22, 0, 1, 1);

        resetClefTimesigDistance = new QToolButton(groupBox_padding);
        resetClefTimesigDistance->setObjectName("resetClefTimesigDistance");
        resetClefTimesigDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetClefTimesigDistance, 2, 2, 1, 1);

        resetClefKeyDistance = new QToolButton(groupBox_padding);
        resetClefKeyDistance->setObjectName("resetClefKeyDistance");
        resetClefKeyDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetClefKeyDistance, 1, 2, 1, 1);

        timesigLeftMargin = new QDoubleSpinBox(groupBox_padding);
        timesigLeftMargin->setObjectName("timesigLeftMargin");
        timesigLeftMargin->setKeyboardTracking(false);
        timesigLeftMargin->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(timesigLeftMargin, 21, 1, 1, 1);

        clefBarlineDistance = new QDoubleSpinBox(groupBox_padding);
        clefBarlineDistance->setObjectName("clefBarlineDistance");
        clefBarlineDistance->setKeyboardTracking(false);
        clefBarlineDistance->setSingleStep(0.010000000000000);

        gridLayout_2->addWidget(clefBarlineDistance, 16, 1, 1, 1);

        resetClefBarlineDistance = new QToolButton(groupBox_padding);
        resetClefBarlineDistance->setObjectName("resetClefBarlineDistance");
        resetClefBarlineDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetClefBarlineDistance, 16, 2, 1, 1);

        label_19 = new QLabel(groupBox_padding);
        label_19->setObjectName("label_19");

        gridLayout_2->addWidget(label_19, 18, 0, 1, 1);

        clefTimesigDistance = new QDoubleSpinBox(groupBox_padding);
        clefTimesigDistance->setObjectName("clefTimesigDistance");
        clefTimesigDistance->setKeyboardTracking(false);
        clefTimesigDistance->setSingleStep(0.010000000000000);

        gridLayout_2->addWidget(clefTimesigDistance, 2, 1, 1, 1);

        label_61 = new QLabel(groupBox_padding);
        label_61->setObjectName("label_61");

        gridLayout_2->addWidget(label_61, 13, 0, 1, 1);

        label_53 = new QLabel(groupBox_padding);
        label_53->setObjectName("label_53");

        gridLayout_2->addWidget(label_53, 16, 0, 1, 1);

        resetClefLeftMargin = new QToolButton(groupBox_padding);
        resetClefLeftMargin->setObjectName("resetClefLeftMargin");
        resetClefLeftMargin->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetClefLeftMargin, 15, 2, 1, 1);

        clefKeyDistance = new QDoubleSpinBox(groupBox_padding);
        clefKeyDistance->setObjectName("clefKeyDistance");
        clefKeyDistance->setKeyboardTracking(false);
        clefKeyDistance->setSingleStep(0.010000000000000);

        gridLayout_2->addWidget(clefKeyDistance, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox_padding);
        label_13->setObjectName("label_13");

        gridLayout_2->addWidget(label_13, 10, 0, 1, 1);

        resetBarNoteDistance = new QToolButton(groupBox_padding);
        resetBarNoteDistance->setObjectName("resetBarNoteDistance");
        resetBarNoteDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetBarNoteDistance, 11, 2, 1, 1);

        label_12 = new QLabel(groupBox_padding);
        label_12->setObjectName("label_12");

        gridLayout_2->addWidget(label_12, 11, 0, 1, 1);

        resetKeysigLeftMargin = new QToolButton(groupBox_padding);
        resetKeysigLeftMargin->setObjectName("resetKeysigLeftMargin");
        resetKeysigLeftMargin->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetKeysigLeftMargin, 18, 2, 1, 1);

        clefLeftMargin = new QDoubleSpinBox(groupBox_padding);
        clefLeftMargin->setObjectName("clefLeftMargin");
        clefLeftMargin->setKeyboardTracking(false);
        clefLeftMargin->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(clefLeftMargin, 15, 1, 1, 1);

        resetClefKeyRightMargin = new QToolButton(groupBox_padding);
        resetClefKeyRightMargin->setObjectName("resetClefKeyRightMargin");
        resetClefKeyRightMargin->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetClefKeyRightMargin, 5, 2, 1, 1);

        keyTimesigDistance = new QDoubleSpinBox(groupBox_padding);
        keyTimesigDistance->setObjectName("keyTimesigDistance");
        keyTimesigDistance->setKeyboardTracking(false);
        keyTimesigDistance->setSingleStep(0.010000000000000);

        gridLayout_2->addWidget(keyTimesigDistance, 4, 1, 1, 1);

        resetKeyBarlineDistance = new QToolButton(groupBox_padding);
        resetKeyBarlineDistance->setObjectName("resetKeyBarlineDistance");
        resetKeyBarlineDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetKeyBarlineDistance, 19, 2, 1, 1);

        line_12 = new QFrame(groupBox_padding);
        line_12->setObjectName("line_12");
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line_12, 20, 0, 1, 4);

        noteBarDistance = new QDoubleSpinBox(groupBox_padding);
        noteBarDistance->setObjectName("noteBarDistance");
        noteBarDistance->setKeyboardTracking(false);
        noteBarDistance->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(noteBarDistance, 10, 1, 1, 1);

        clefKeyRightMargin = new QDoubleSpinBox(groupBox_padding);
        clefKeyRightMargin->setObjectName("clefKeyRightMargin");
        clefKeyRightMargin->setKeyboardTracking(false);
        clefKeyRightMargin->setSingleStep(0.050000000000000);

        gridLayout_2->addWidget(clefKeyRightMargin, 5, 1, 1, 1);

        label_21 = new QLabel(groupBox_padding);
        label_21->setObjectName("label_21");
        label_21->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_21, 5, 0, 1, 1);

        label_94 = new QLabel(groupBox_padding);
        label_94->setObjectName("label_94");

        gridLayout_2->addWidget(label_94, 1, 0, 1, 1);

        label_110 = new QLabel(groupBox_padding);
        label_110->setObjectName("label_110");

        gridLayout_2->addWidget(label_110, 19, 0, 1, 1);

        timesigBarlineDistance = new QDoubleSpinBox(groupBox_padding);
        timesigBarlineDistance->setObjectName("timesigBarlineDistance");
        timesigBarlineDistance->setKeyboardTracking(false);
        timesigBarlineDistance->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(timesigBarlineDistance, 22, 1, 1, 1);

        resetBarAccidentalDistance = new QToolButton(groupBox_padding);
        resetBarAccidentalDistance->setObjectName("resetBarAccidentalDistance");
        resetBarAccidentalDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetBarAccidentalDistance, 12, 2, 1, 1);

        label_102 = new QLabel(groupBox_padding);
        label_102->setObjectName("label_102");

        gridLayout_2->addWidget(label_102, 12, 0, 1, 1);

        resetKeyTimesigDistance = new QToolButton(groupBox_padding);
        resetKeyTimesigDistance->setObjectName("resetKeyTimesigDistance");
        resetKeyTimesigDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetKeyTimesigDistance, 4, 2, 1, 1);

        barNoteDistance = new QDoubleSpinBox(groupBox_padding);
        barNoteDistance->setObjectName("barNoteDistance");
        barNoteDistance->setKeyboardTracking(false);
        barNoteDistance->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(barNoteDistance, 11, 1, 1, 1);

        resetBarGraceDistance = new QToolButton(groupBox_padding);
        resetBarGraceDistance->setObjectName("resetBarGraceDistance");
        resetBarGraceDistance->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(resetBarGraceDistance, 13, 2, 1, 1);

        keysigLeftMargin = new QDoubleSpinBox(groupBox_padding);
        keysigLeftMargin->setObjectName("keysigLeftMargin");
        keysigLeftMargin->setKeyboardTracking(false);
        keysigLeftMargin->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(keysigLeftMargin, 18, 1, 1, 1);

        keyBarlineDistance = new QDoubleSpinBox(groupBox_padding);
        keyBarlineDistance->setObjectName("keyBarlineDistance");
        keyBarlineDistance->setKeyboardTracking(false);
        keyBarlineDistance->setSingleStep(0.010000000000000);

        gridLayout_2->addWidget(keyBarlineDistance, 19, 1, 1, 1);

        label_108 = new QLabel(groupBox_padding);
        label_108->setObjectName("label_108");

        gridLayout_2->addWidget(label_108, 2, 0, 1, 1);

        horizontalSpacer_61 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_61, 23, 0, 1, 1);


        gridLayout_56->addWidget(groupBox_padding, 4, 0, 1, 4);

        horizontalSpacer_57 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_56->addItem(horizontalSpacer_57, 0, 3, 1, 1);

        minMeasureWidth_2 = new QDoubleSpinBox(scrollArea_measure_contents);
        minMeasureWidth_2->setObjectName("minMeasureWidth_2");
        minMeasureWidth_2->setKeyboardTracking(false);
        minMeasureWidth_2->setMinimum(2.000000000000000);

        gridLayout_56->addWidget(minMeasureWidth_2, 0, 1, 1, 1);

        resetMeasureSpacing = new QToolButton(scrollArea_measure_contents);
        resetMeasureSpacing->setObjectName("resetMeasureSpacing");
        resetMeasureSpacing->setText(QString::fromUtf8(""));

        gridLayout_56->addWidget(resetMeasureSpacing, 1, 2, 1, 1);

        label_89 = new QLabel(scrollArea_measure_contents);
        label_89->setObjectName("label_89");

        gridLayout_56->addWidget(label_89, 0, 0, 1, 1);

        horizontalSpacer_62 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_56->addItem(horizontalSpacer_62, 27, 0, 1, 1);

        resetMinNoteDistance = new QToolButton(scrollArea_measure_contents);
        resetMinNoteDistance->setObjectName("resetMinNoteDistance");
        resetMinNoteDistance->setText(QString::fromUtf8(""));

        gridLayout_56->addWidget(resetMinNoteDistance, 2, 2, 1, 1);

        verticalSpacer_11 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_56->addItem(verticalSpacer_11, 28, 0, 1, 1);

        minNoteDistance = new QDoubleSpinBox(scrollArea_measure_contents);
        minNoteDistance->setObjectName("minNoteDistance");
        minNoteDistance->setKeyboardTracking(false);
        minNoteDistance->setSingleStep(0.100000000000000);

        gridLayout_56->addWidget(minNoteDistance, 2, 1, 1, 1);

        resetMinMeasureWidth = new QToolButton(scrollArea_measure_contents);
        resetMinMeasureWidth->setObjectName("resetMinMeasureWidth");
        resetMinMeasureWidth->setText(QString::fromUtf8(""));

        gridLayout_56->addWidget(resetMinMeasureWidth, 0, 2, 1, 1);

        label_11 = new QLabel(scrollArea_measure_contents);
        label_11->setObjectName("label_11");

        gridLayout_56->addWidget(label_11, 1, 0, 1, 1);

        label_14 = new QLabel(scrollArea_measure_contents);
        label_14->setObjectName("label_14");

        gridLayout_56->addWidget(label_14, 2, 0, 1, 1);

        groupBox_systemHeader = new QGroupBox(scrollArea_measure_contents);
        groupBox_systemHeader->setObjectName("groupBox_systemHeader");
        gridLayout_59 = new QGridLayout(groupBox_systemHeader);
        gridLayout_59->setObjectName("gridLayout_59");
        systemHeaderTimeSigDistance = new QDoubleSpinBox(groupBox_systemHeader);
        systemHeaderTimeSigDistance->setObjectName("systemHeaderTimeSigDistance");
        systemHeaderTimeSigDistance->setKeyboardTracking(false);
        systemHeaderTimeSigDistance->setSingleStep(0.100000000000000);

        gridLayout_59->addWidget(systemHeaderTimeSigDistance, 2, 1, 1, 1);

        systemHeaderDistance = new QDoubleSpinBox(groupBox_systemHeader);
        systemHeaderDistance->setObjectName("systemHeaderDistance");
        systemHeaderDistance->setKeyboardTracking(false);
        systemHeaderDistance->setSingleStep(0.100000000000000);

        gridLayout_59->addWidget(systemHeaderDistance, 1, 1, 1, 1);

        label_112 = new QLabel(groupBox_systemHeader);
        label_112->setObjectName("label_112");

        gridLayout_59->addWidget(label_112, 2, 0, 1, 1);

        horizontalSpacer_59 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_59->addItem(horizontalSpacer_59, 1, 3, 1, 1);

        label_111 = new QLabel(groupBox_systemHeader);
        label_111->setObjectName("label_111");

        gridLayout_59->addWidget(label_111, 1, 0, 1, 1);

        resetSystemHeaderTimeSigDistance = new QToolButton(groupBox_systemHeader);
        resetSystemHeaderTimeSigDistance->setObjectName("resetSystemHeaderTimeSigDistance");
        resetSystemHeaderTimeSigDistance->setText(QString::fromUtf8(""));

        gridLayout_59->addWidget(resetSystemHeaderTimeSigDistance, 2, 2, 1, 1);

        resetSystemHeaderDistance = new QToolButton(groupBox_systemHeader);
        resetSystemHeaderDistance->setObjectName("resetSystemHeaderDistance");
        resetSystemHeaderDistance->setText(QString::fromUtf8(""));

        gridLayout_59->addWidget(resetSystemHeaderDistance, 1, 2, 1, 1);

        horizontalSpacer_60 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_59->addItem(horizontalSpacer_60, 3, 0, 1, 1);


        gridLayout_56->addWidget(groupBox_systemHeader, 29, 0, 1, 4);

        scrollArea_measure->setWidget(scrollArea_measure_contents);

        gridLayout_99->addWidget(scrollArea_measure, 0, 0, 2, 2);


        verticalLayout_4->addWidget(groupBox_measure);

        pageStack->addWidget(PageMeasure);
        PageBarlines = new QWidget();
        PageBarlines->setObjectName("PageBarlines");
        verticalLayout_17 = new QVBoxLayout(PageBarlines);
        verticalLayout_17->setObjectName("verticalLayout_17");
        groupBox_barlines = new QGroupBox(PageBarlines);
        groupBox_barlines->setObjectName("groupBox_barlines");
        gridLayout_42 = new QGridLayout(groupBox_barlines);
        gridLayout_42->setObjectName("gridLayout_42");
        label_85 = new QLabel(groupBox_barlines);
        label_85->setObjectName("label_85");

        gridLayout_42->addWidget(label_85, 7, 0, 1, 1);

        barWidth = new QDoubleSpinBox(groupBox_barlines);
        barWidth->setObjectName("barWidth");
        barWidth->setKeyboardTracking(false);
        barWidth->setSingleStep(0.010000000000000);

        gridLayout_42->addWidget(barWidth, 4, 1, 1, 1);

        resetEndBarWidth = new QToolButton(groupBox_barlines);
        resetEndBarWidth->setObjectName("resetEndBarWidth");
        resetEndBarWidth->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetEndBarWidth, 5, 2, 1, 1);

        resetRepeatBarlineDotSeparation = new QToolButton(groupBox_barlines);
        resetRepeatBarlineDotSeparation->setObjectName("resetRepeatBarlineDotSeparation");
        resetRepeatBarlineDotSeparation->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetRepeatBarlineDotSeparation, 9, 2, 1, 1);

        label_82 = new QLabel(groupBox_barlines);
        label_82->setObjectName("label_82");

        gridLayout_42->addWidget(label_82, 4, 0, 1, 1);

        resetDoubleBarWidth = new QToolButton(groupBox_barlines);
        resetDoubleBarWidth->setObjectName("resetDoubleBarWidth");
        resetDoubleBarWidth->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetDoubleBarWidth, 7, 2, 1, 1);

        showStartBarlineMultiple = new QCheckBox(groupBox_barlines);
        showStartBarlineMultiple->setObjectName("showStartBarlineMultiple");
        showStartBarlineMultiple->setChecked(true);

        gridLayout_42->addWidget(showStartBarlineMultiple, 2, 0, 1, 2);

        doubleBarWidth = new QDoubleSpinBox(groupBox_barlines);
        doubleBarWidth->setObjectName("doubleBarWidth");
        doubleBarWidth->setKeyboardTracking(false);
        doubleBarWidth->setSingleStep(0.010000000000000);

        gridLayout_42->addWidget(doubleBarWidth, 7, 1, 1, 1);

        doubleBarDistance = new QDoubleSpinBox(groupBox_barlines);
        doubleBarDistance->setObjectName("doubleBarDistance");
        doubleBarDistance->setKeyboardTracking(false);
        doubleBarDistance->setSingleStep(0.010000000000000);

        gridLayout_42->addWidget(doubleBarDistance, 8, 1, 1, 1);

        horizontalSpacer_48 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_42->addItem(horizontalSpacer_48, 0, 3, 1, 1);

        repeatBarlineDotSeparation = new QDoubleSpinBox(groupBox_barlines);
        repeatBarlineDotSeparation->setObjectName("repeatBarlineDotSeparation");
        repeatBarlineDotSeparation->setKeyboardTracking(false);
        repeatBarlineDotSeparation->setSingleStep(0.010000000000000);

        gridLayout_42->addWidget(repeatBarlineDotSeparation, 9, 1, 1, 1);

        resetShowRepeatBarTips = new QToolButton(groupBox_barlines);
        resetShowRepeatBarTips->setObjectName("resetShowRepeatBarTips");
        resetShowRepeatBarTips->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetShowRepeatBarTips, 0, 2, 1, 1);

        showRepeatBarTips = new QCheckBox(groupBox_barlines);
        showRepeatBarTips->setObjectName("showRepeatBarTips");

        gridLayout_42->addWidget(showRepeatBarTips, 0, 0, 1, 2);

        resetScaleBarlines = new QToolButton(groupBox_barlines);
        resetScaleBarlines->setObjectName("resetScaleBarlines");
        resetScaleBarlines->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetScaleBarlines, 3, 2, 1, 1);

        endBarDistance = new QDoubleSpinBox(groupBox_barlines);
        endBarDistance->setObjectName("endBarDistance");
        endBarDistance->setKeyboardTracking(false);
        endBarDistance->setSingleStep(0.010000000000000);

        gridLayout_42->addWidget(endBarDistance, 6, 1, 1, 1);

        label_84 = new QLabel(groupBox_barlines);
        label_84->setObjectName("label_84");

        gridLayout_42->addWidget(label_84, 6, 0, 1, 1);

        scaleBarlines = new QCheckBox(groupBox_barlines);
        scaleBarlines->setObjectName("scaleBarlines");

        gridLayout_42->addWidget(scaleBarlines, 3, 0, 1, 2);

        resetShowStartBarlineSingle = new QToolButton(groupBox_barlines);
        resetShowStartBarlineSingle->setObjectName("resetShowStartBarlineSingle");
        resetShowStartBarlineSingle->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetShowStartBarlineSingle, 1, 2, 1, 1);

        resetDoubleBarDistance = new QToolButton(groupBox_barlines);
        resetDoubleBarDistance->setObjectName("resetDoubleBarDistance");
        resetDoubleBarDistance->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetDoubleBarDistance, 8, 2, 1, 1);

        resetEndBarDistance = new QToolButton(groupBox_barlines);
        resetEndBarDistance->setObjectName("resetEndBarDistance");
        resetEndBarDistance->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetEndBarDistance, 6, 2, 1, 1);

        endBarWidth = new QDoubleSpinBox(groupBox_barlines);
        endBarWidth->setObjectName("endBarWidth");
        endBarWidth->setKeyboardTracking(false);
        endBarWidth->setSingleStep(0.010000000000000);

        gridLayout_42->addWidget(endBarWidth, 5, 1, 1, 1);

        resetShowStartBarlineMultiple = new QToolButton(groupBox_barlines);
        resetShowStartBarlineMultiple->setObjectName("resetShowStartBarlineMultiple");
        resetShowStartBarlineMultiple->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetShowStartBarlineMultiple, 2, 2, 1, 1);

        label_83 = new QLabel(groupBox_barlines);
        label_83->setObjectName("label_83");

        gridLayout_42->addWidget(label_83, 5, 0, 1, 1);

        repeatBarlineDotSeparationLbl = new QLabel(groupBox_barlines);
        repeatBarlineDotSeparationLbl->setObjectName("repeatBarlineDotSeparationLbl");

        gridLayout_42->addWidget(repeatBarlineDotSeparationLbl, 9, 0, 1, 1);

        label_86 = new QLabel(groupBox_barlines);
        label_86->setObjectName("label_86");

        gridLayout_42->addWidget(label_86, 8, 0, 1, 1);

        resetBarWidth = new QToolButton(groupBox_barlines);
        resetBarWidth->setObjectName("resetBarWidth");
        resetBarWidth->setText(QString::fromUtf8(""));

        gridLayout_42->addWidget(resetBarWidth, 4, 2, 1, 1);

        showStartBarlineSingle = new QCheckBox(groupBox_barlines);
        showStartBarlineSingle->setObjectName("showStartBarlineSingle");

        gridLayout_42->addWidget(showStartBarlineSingle, 1, 0, 1, 2);


        verticalLayout_17->addWidget(groupBox_barlines);

        keySigCourtesyBarlineGroup = new QGroupBox(PageBarlines);
        keySigCourtesyBarlineGroup->setObjectName("keySigCourtesyBarlineGroup");
        verticalLayout_611 = new QVBoxLayout(keySigCourtesyBarlineGroup);
        verticalLayout_611->setObjectName("verticalLayout_611");
        radioKeySigCourtesyBarlineAlwaysDouble = new QRadioButton(keySigCourtesyBarlineGroup);
        radioKeySigCourtesyBarlineAlwaysDouble->setObjectName("radioKeySigCourtesyBarlineAlwaysDouble");

        verticalLayout_611->addWidget(radioKeySigCourtesyBarlineAlwaysDouble);

        radioKeySigCourtesyBarlineAlwaysSingle = new QRadioButton(keySigCourtesyBarlineGroup);
        radioKeySigCourtesyBarlineAlwaysSingle->setObjectName("radioKeySigCourtesyBarlineAlwaysSingle");

        verticalLayout_611->addWidget(radioKeySigCourtesyBarlineAlwaysSingle);

        radioKeySigCourtesyBarlineDoubleBeforeNewSystem = new QRadioButton(keySigCourtesyBarlineGroup);
        radioKeySigCourtesyBarlineDoubleBeforeNewSystem->setObjectName("radioKeySigCourtesyBarlineDoubleBeforeNewSystem");

        verticalLayout_611->addWidget(radioKeySigCourtesyBarlineDoubleBeforeNewSystem);


        verticalLayout_17->addWidget(keySigCourtesyBarlineGroup);

        timeSigCourtesyBarlineGroup = new QGroupBox(PageBarlines);
        timeSigCourtesyBarlineGroup->setObjectName("timeSigCourtesyBarlineGroup");
        verticalLayout_62 = new QVBoxLayout(timeSigCourtesyBarlineGroup);
        verticalLayout_62->setObjectName("verticalLayout_62");
        radioTimeSigCourtesyBarlineAlwaysDouble = new QRadioButton(timeSigCourtesyBarlineGroup);
        radioTimeSigCourtesyBarlineAlwaysDouble->setObjectName("radioTimeSigCourtesyBarlineAlwaysDouble");

        verticalLayout_62->addWidget(radioTimeSigCourtesyBarlineAlwaysDouble);

        radioTimeSigCourtesyBarlineAlwaysSingle = new QRadioButton(timeSigCourtesyBarlineGroup);
        radioTimeSigCourtesyBarlineAlwaysSingle->setObjectName("radioTimeSigCourtesyBarlineAlwaysSingle");

        verticalLayout_62->addWidget(radioTimeSigCourtesyBarlineAlwaysSingle);

        radioTimeSigCourtesyBarlineDoubleBeforeNewSystem = new QRadioButton(timeSigCourtesyBarlineGroup);
        radioTimeSigCourtesyBarlineDoubleBeforeNewSystem->setObjectName("radioTimeSigCourtesyBarlineDoubleBeforeNewSystem");

        verticalLayout_62->addWidget(radioTimeSigCourtesyBarlineDoubleBeforeNewSystem);


        verticalLayout_17->addWidget(timeSigCourtesyBarlineGroup);

        verticalSpacer_12 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_12);

        pageStack->addWidget(PageBarlines);
        PageNotes = new QWidget();
        PageNotes->setObjectName("PageNotes");
        verticalLayout_7 = new QVBoxLayout(PageNotes);
        verticalLayout_7->setObjectName("verticalLayout_7");
        groupBox_noteFlags = new QGroupBox(PageNotes);
        groupBox_noteFlags->setObjectName("groupBox_noteFlags");
        verticalLayout_16 = new QVBoxLayout(groupBox_noteFlags);
        verticalLayout_16->setObjectName("verticalLayout_16");

        verticalLayout_7->addWidget(groupBox_noteFlags);

        groupBox_notes = new QGroupBox(PageNotes);
        groupBox_notes->setObjectName("groupBox_notes");
        groupBox_notes->setFlat(false);
        gridLayout_40 = new QGridLayout(groupBox_notes);
        gridLayout_40->setObjectName("gridLayout_40");
        horizontalSpacer_20 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_40->addItem(horizontalSpacer_20, 1, 2, 1, 1);

        label_101 = new QLabel(groupBox_notes);
        label_101->setObjectName("label_101");

        gridLayout_40->addWidget(label_101, 3, 0, 1, 1);

        label_24 = new QLabel(groupBox_notes);
        label_24->setObjectName("label_24");

        gridLayout_40->addWidget(label_24, 7, 0, 1, 1);

        stemWidth = new QDoubleSpinBox(groupBox_notes);
        stemWidth->setObjectName("stemWidth");
        sizePolicy5.setHeightForWidth(stemWidth->sizePolicy().hasHeightForWidth());
        stemWidth->setSizePolicy(sizePolicy5);
        stemWidth->setKeyboardTracking(false);
        stemWidth->setSingleStep(0.100000000000000);

        gridLayout_40->addWidget(stemWidth, 6, 1, 1, 1);

        label_34 = new QLabel(groupBox_notes);
        label_34->setObjectName("label_34");

        gridLayout_40->addWidget(label_34, 8, 0, 1, 1);

        accidentalDistance = new QDoubleSpinBox(groupBox_notes);
        accidentalDistance->setObjectName("accidentalDistance");
        sizePolicy5.setHeightForWidth(accidentalDistance->sizePolicy().hasHeightForWidth());
        accidentalDistance->setSizePolicy(sizePolicy5);
        accidentalDistance->setKeyboardTracking(false);
        accidentalDistance->setSingleStep(0.010000000000000);

        gridLayout_40->addWidget(accidentalDistance, 2, 1, 1, 1);

        ledgerLineWidth = new QDoubleSpinBox(groupBox_notes);
        ledgerLineWidth->setObjectName("ledgerLineWidth");
        sizePolicy5.setHeightForWidth(ledgerLineWidth->sizePolicy().hasHeightForWidth());
        ledgerLineWidth->setSizePolicy(sizePolicy5);
        ledgerLineWidth->setKeyboardTracking(false);
        ledgerLineWidth->setSingleStep(0.010000000000000);

        gridLayout_40->addWidget(ledgerLineWidth, 7, 1, 1, 1);

        dotDotDistance = new QDoubleSpinBox(groupBox_notes);
        dotDotDistance->setObjectName("dotDotDistance");
        sizePolicy5.setHeightForWidth(dotDotDistance->sizePolicy().hasHeightForWidth());
        dotDotDistance->setSizePolicy(sizePolicy5);
        dotDotDistance->setKeyboardTracking(false);
        dotDotDistance->setSingleStep(0.100000000000000);

        gridLayout_40->addWidget(dotDotDistance, 5, 1, 1, 1);

        ledgerLineLength = new QDoubleSpinBox(groupBox_notes);
        ledgerLineLength->setObjectName("ledgerLineLength");
        sizePolicy5.setHeightForWidth(ledgerLineLength->sizePolicy().hasHeightForWidth());
        ledgerLineLength->setSizePolicy(sizePolicy5);
        ledgerLineLength->setKeyboardTracking(false);
        ledgerLineLength->setSingleStep(0.100000000000000);

        gridLayout_40->addWidget(ledgerLineLength, 8, 1, 1, 1);

        noteDotDistance = new QDoubleSpinBox(groupBox_notes);
        noteDotDistance->setObjectName("noteDotDistance");
        sizePolicy5.setHeightForWidth(noteDotDistance->sizePolicy().hasHeightForWidth());
        noteDotDistance->setSizePolicy(sizePolicy5);
        noteDotDistance->setKeyboardTracking(false);
        noteDotDistance->setSingleStep(0.100000000000000);

        gridLayout_40->addWidget(noteDotDistance, 4, 1, 1, 1);

        accidentalNoteDistance = new QDoubleSpinBox(groupBox_notes);
        accidentalNoteDistance->setObjectName("accidentalNoteDistance");
        sizePolicy5.setHeightForWidth(accidentalNoteDistance->sizePolicy().hasHeightForWidth());
        accidentalNoteDistance->setSizePolicy(sizePolicy5);
        accidentalNoteDistance->setKeyboardTracking(false);
        accidentalNoteDistance->setSingleStep(0.010000000000000);

        gridLayout_40->addWidget(accidentalNoteDistance, 1, 1, 1, 1);

        label_22 = new QLabel(groupBox_notes);
        label_22->setObjectName("label_22");

        gridLayout_40->addWidget(label_22, 4, 0, 1, 1);

        label_100 = new QLabel(groupBox_notes);
        label_100->setObjectName("label_100");

        gridLayout_40->addWidget(label_100, 6, 0, 1, 1);

        label_23 = new QLabel(groupBox_notes);
        label_23->setObjectName("label_23");

        gridLayout_40->addWidget(label_23, 5, 0, 1, 1);

        label_43 = new QLabel(groupBox_notes);
        label_43->setObjectName("label_43");

        gridLayout_40->addWidget(label_43, 2, 0, 1, 1);

        dotMag = new QSpinBox(groupBox_notes);
        dotMag->setObjectName("dotMag");
        dotMag->setKeyboardTracking(false);
        dotMag->setSuffix(QString::fromUtf8("%"));
        dotMag->setMinimum(50);
        dotMag->setMaximum(200);
        dotMag->setSingleStep(10);
        dotMag->setValue(100);

        gridLayout_40->addWidget(dotMag, 3, 1, 1, 1);

        shortenStem = new QGroupBox(groupBox_notes);
        shortenStem->setObjectName("shortenStem");
        shortenStem->setCheckable(true);
        gridLayout_37 = new QGridLayout(shortenStem);
        gridLayout_37->setObjectName("gridLayout_37");
        label_47 = new QLabel(shortenStem);
        label_47->setObjectName("label_47");

        gridLayout_37->addWidget(label_47, 1, 0, 1, 1);

        shortestStem = new QDoubleSpinBox(shortenStem);
        shortestStem->setObjectName("shortestStem");
        shortestStem->setMinimum(1.000000000000000);
        shortestStem->setSingleStep(0.250000000000000);

        gridLayout_37->addWidget(shortestStem, 1, 1, 1, 1);


        gridLayout_40->addWidget(shortenStem, 0, 0, 1, 2);

        label_25 = new QLabel(groupBox_notes);
        label_25->setObjectName("label_25");

        gridLayout_40->addWidget(label_25, 1, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox_notes);

        groupBox_alignment = new QGroupBox(PageNotes);
        groupBox_alignment->setObjectName("groupBox_alignment");
        horizontalLayout_9 = new QHBoxLayout(groupBox_alignment);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        combineVoices = new QCheckBox(groupBox_alignment);
        combineVoices->setObjectName("combineVoices");

        horizontalLayout_9->addWidget(combineVoices);

        resetCombineVoices = new QToolButton(groupBox_alignment);
        resetCombineVoices->setObjectName("resetCombineVoices");
        resetCombineVoices->setText(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(resetCombineVoices);


        verticalLayout_7->addWidget(groupBox_alignment);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        pageStack->addWidget(PageNotes);
        PageRests = new QWidget();
        PageRests->setObjectName("PageRests");
        verticalLayout_8 = new QVBoxLayout(PageRests);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox_rests = new QGroupBox(PageRests);
        groupBox_rests->setObjectName("groupBox_rests");
        verticalLayout_36 = new QVBoxLayout(groupBox_rests);
        verticalLayout_36->setObjectName("verticalLayout_36");
        label_46 = new QLabel(groupBox_rests);
        label_46->setObjectName("label_46");

        verticalLayout_36->addWidget(label_46);


        verticalLayout_8->addWidget(groupBox_rests);

        multiMeasureRests = new QGroupBox(PageRests);
        multiMeasureRests->setObjectName("multiMeasureRests");
        multiMeasureRests->setCheckable(true);
        multiMeasureRests->setChecked(false);
        gridLayout_46 = new QGridLayout(multiMeasureRests);
        gridLayout_46->setObjectName("gridLayout_46");
        label_15 = new QLabel(multiMeasureRests);
        label_15->setObjectName("label_15");
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);

        gridLayout_46->addWidget(label_15, 0, 0, 1, 1);

        minEmptyMeasures = new QSpinBox(multiMeasureRests);
        minEmptyMeasures->setObjectName("minEmptyMeasures");
        minEmptyMeasures->setKeyboardTracking(false);
        minEmptyMeasures->setMinimum(1);
        minEmptyMeasures->setValue(2);

        gridLayout_46->addWidget(minEmptyMeasures, 0, 1, 1, 1);

        label_16 = new QLabel(multiMeasureRests);
        label_16->setObjectName("label_16");
        sizePolicy3.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy3);

        gridLayout_46->addWidget(label_16, 0, 3, 1, 1);

        minMeasureWidth = new QDoubleSpinBox(multiMeasureRests);
        minMeasureWidth->setObjectName("minMeasureWidth");
        minMeasureWidth->setKeyboardTracking(false);
        minMeasureWidth->setMinimum(2.000000000000000);
        minMeasureWidth->setValue(4.000000000000000);

        gridLayout_46->addWidget(minMeasureWidth, 0, 4, 1, 1);

        resetMinMMRestWidth = new QToolButton(multiMeasureRests);
        resetMinMMRestWidth->setObjectName("resetMinMMRestWidth");
        resetMinMMRestWidth->setText(QString::fromUtf8(""));

        gridLayout_46->addWidget(resetMinMMRestWidth, 0, 5, 1, 1);

        label_92 = new QLabel(multiMeasureRests);
        label_92->setObjectName("label_92");
        sizePolicy3.setHeightForWidth(label_92->sizePolicy().hasHeightForWidth());
        label_92->setSizePolicy(sizePolicy3);

        gridLayout_46->addWidget(label_92, 1, 0, 1, 1);

        mmRestNumberPos = new QDoubleSpinBox(multiMeasureRests);
        mmRestNumberPos->setObjectName("mmRestNumberPos");
        mmRestNumberPos->setKeyboardTracking(false);
        mmRestNumberPos->setMinimum(-99.989999999999995);
        mmRestNumberPos->setSingleStep(0.500000000000000);

        gridLayout_46->addWidget(mmRestNumberPos, 1, 1, 1, 1);

        resetMMRestNumberPos = new QToolButton(multiMeasureRests);
        resetMMRestNumberPos->setObjectName("resetMMRestNumberPos");
        resetMMRestNumberPos->setText(QString::fromUtf8(""));

        gridLayout_46->addWidget(resetMMRestNumberPos, 1, 2, 1, 1);

        mmRestNumberMaskHBar = new QCheckBox(multiMeasureRests);
        mmRestNumberMaskHBar->setObjectName("mmRestNumberMaskHBar");

        gridLayout_46->addWidget(mmRestNumberMaskHBar, 1, 3, 1, 2);

        resetMMRestNumberMaskHBar = new QToolButton(multiMeasureRests);
        resetMMRestNumberMaskHBar->setObjectName("resetMMRestNumberMaskHBar");
        resetMMRestNumberMaskHBar->setText(QString::fromUtf8(""));

        gridLayout_46->addWidget(resetMMRestNumberMaskHBar, 1, 5, 1, 1);

        label_119 = new QLabel(multiMeasureRests);
        label_119->setObjectName("label_119");

        gridLayout_46->addWidget(label_119, 2, 0, 1, 1);

        mmRestHBarThickness = new QDoubleSpinBox(multiMeasureRests);
        mmRestHBarThickness->setObjectName("mmRestHBarThickness");
        mmRestHBarThickness->setKeyboardTracking(false);
        mmRestHBarThickness->setMaximum(4.000000000000000);
        mmRestHBarThickness->setSingleStep(0.100000000000000);

        gridLayout_46->addWidget(mmRestHBarThickness, 2, 1, 1, 1);

        resetMMRestHBarThickness = new QToolButton(multiMeasureRests);
        resetMMRestHBarThickness->setObjectName("resetMMRestHBarThickness");
        resetMMRestHBarThickness->setText(QString::fromUtf8(""));

        gridLayout_46->addWidget(resetMMRestHBarThickness, 2, 2, 1, 1);

        label_103 = new QLabel(multiMeasureRests);
        label_103->setObjectName("label_103");

        gridLayout_46->addWidget(label_103, 2, 3, 1, 1);

        multiMeasureRestMargin = new QDoubleSpinBox(multiMeasureRests);
        multiMeasureRestMargin->setObjectName("multiMeasureRestMargin");
        sizePolicy5.setHeightForWidth(multiMeasureRestMargin->sizePolicy().hasHeightForWidth());
        multiMeasureRestMargin->setSizePolicy(sizePolicy5);
        multiMeasureRestMargin->setKeyboardTracking(false);
        multiMeasureRestMargin->setSingleStep(0.100000000000000);

        gridLayout_46->addWidget(multiMeasureRestMargin, 2, 4, 1, 1);

        resetMultiMeasureRestMargin = new QToolButton(multiMeasureRests);
        resetMultiMeasureRestMargin->setObjectName("resetMultiMeasureRestMargin");
        resetMultiMeasureRestMargin->setText(QString::fromUtf8(""));

        gridLayout_46->addWidget(resetMultiMeasureRestMargin, 2, 5, 1, 1);

        label_123 = new QLabel(multiMeasureRests);
        label_123->setObjectName("label_123");

        gridLayout_46->addWidget(label_123, 3, 0, 1, 1);

        mmRestHBarVStrokeThickness = new QDoubleSpinBox(multiMeasureRests);
        mmRestHBarVStrokeThickness->setObjectName("mmRestHBarVStrokeThickness");
        mmRestHBarVStrokeThickness->setKeyboardTracking(false);
        mmRestHBarVStrokeThickness->setMaximum(4.000000000000000);
        mmRestHBarVStrokeThickness->setSingleStep(0.050000000000000);

        gridLayout_46->addWidget(mmRestHBarVStrokeThickness, 3, 1, 1, 1);

        resetMMRestHBarVStrokeThickness = new QToolButton(multiMeasureRests);
        resetMMRestHBarVStrokeThickness->setObjectName("resetMMRestHBarVStrokeThickness");
        resetMMRestHBarVStrokeThickness->setText(QString::fromUtf8(""));

        gridLayout_46->addWidget(resetMMRestHBarVStrokeThickness, 3, 2, 1, 1);

        label_145 = new QLabel(multiMeasureRests);
        label_145->setObjectName("label_145");

        gridLayout_46->addWidget(label_145, 3, 3, 1, 1);

        mmRestHBarVStrokeHeight = new QDoubleSpinBox(multiMeasureRests);
        mmRestHBarVStrokeHeight->setObjectName("mmRestHBarVStrokeHeight");
        mmRestHBarVStrokeHeight->setKeyboardTracking(false);
        mmRestHBarVStrokeHeight->setMaximum(10.000000000000000);
        mmRestHBarVStrokeHeight->setSingleStep(0.500000000000000);

        gridLayout_46->addWidget(mmRestHBarVStrokeHeight, 3, 4, 1, 1);

        resetMMRestHBarVStrokeHeight = new QToolButton(multiMeasureRests);
        resetMMRestHBarVStrokeHeight->setObjectName("resetMMRestHBarVStrokeHeight");
        resetMMRestHBarVStrokeHeight->setText(QString::fromUtf8(""));

        gridLayout_46->addWidget(resetMMRestHBarVStrokeHeight, 3, 5, 1, 1);

        oldStyleMultiMeasureRests = new QGroupBox(multiMeasureRests);
        oldStyleMultiMeasureRests->setObjectName("oldStyleMultiMeasureRests");
        oldStyleMultiMeasureRests->setCheckable(true);
        oldStyleMultiMeasureRests->setChecked(false);
        gridLayout_301 = new QGridLayout(oldStyleMultiMeasureRests);
        gridLayout_301->setObjectName("gridLayout_301");
        horizontalSpacer_151 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_301->addItem(horizontalSpacer_151, 0, 3, 1, 1);

        label_146 = new QLabel(oldStyleMultiMeasureRests);
        label_146->setObjectName("label_146");

        gridLayout_301->addWidget(label_146, 0, 0, 1, 1);

        resetMMRestOldStyleMaxMeasures = new QToolButton(oldStyleMultiMeasureRests);
        resetMMRestOldStyleMaxMeasures->setObjectName("resetMMRestOldStyleMaxMeasures");
        resetMMRestOldStyleMaxMeasures->setText(QString::fromUtf8(""));

        gridLayout_301->addWidget(resetMMRestOldStyleMaxMeasures, 0, 2, 1, 1);

        mmRestOldStyleMaxMeasures = new QSpinBox(oldStyleMultiMeasureRests);
        mmRestOldStyleMaxMeasures->setObjectName("mmRestOldStyleMaxMeasures");
        mmRestOldStyleMaxMeasures->setKeyboardTracking(false);

        gridLayout_301->addWidget(mmRestOldStyleMaxMeasures, 0, 1, 1, 1);

        mmRestOldStyleSpacing = new QDoubleSpinBox(oldStyleMultiMeasureRests);
        mmRestOldStyleSpacing->setObjectName("mmRestOldStyleSpacing");
        mmRestOldStyleSpacing->setKeyboardTracking(false);
        mmRestOldStyleSpacing->setMaximum(4.000000000000000);
        mmRestOldStyleSpacing->setSingleStep(0.010000000000000);

        gridLayout_301->addWidget(mmRestOldStyleSpacing, 1, 1, 1, 1);

        label_1471 = new QLabel(oldStyleMultiMeasureRests);
        label_1471->setObjectName("label_1471");

        gridLayout_301->addWidget(label_1471, 1, 0, 1, 1);

        resetMMRestOldStyleSpacing = new QToolButton(oldStyleMultiMeasureRests);
        resetMMRestOldStyleSpacing->setObjectName("resetMMRestOldStyleSpacing");
        resetMMRestOldStyleSpacing->setText(QString::fromUtf8(""));

        gridLayout_301->addWidget(resetMMRestOldStyleSpacing, 1, 2, 1, 1);


        gridLayout_46->addWidget(oldStyleMultiMeasureRests, 4, 0, 1, 6);


        verticalLayout_8->addWidget(multiMeasureRests);

        verticalSpacer_34 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_34);

        pageStack->addWidget(PageRests);
        PageMeasureRepeats = new QWidget();
        PageMeasureRepeats->setObjectName("PageMeasureRepeats");
        gridLayout_58 = new QGridLayout(PageMeasureRepeats);
        gridLayout_58->setObjectName("gridLayout_58");
        groupBox_measure_repeats = new QGroupBox(PageMeasureRepeats);
        groupBox_measure_repeats->setObjectName("groupBox_measure_repeats");
        gridLayout_52 = new QGridLayout(groupBox_measure_repeats);
        gridLayout_52->setObjectName("gridLayout_52");
        fourMeasureRepeatShowExtenders = new QCheckBox(groupBox_measure_repeats);
        fourMeasureRepeatShowExtenders->setObjectName("fourMeasureRepeatShowExtenders");

        gridLayout_52->addWidget(fourMeasureRepeatShowExtenders, 3, 0, 1, 2);

        horizontalSpacer_25 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_52->addItem(horizontalSpacer_25, 1, 3, 1, 1);

        mrNumberSeries = new QGroupBox(groupBox_measure_repeats);
        mrNumberSeries->setObjectName("mrNumberSeries");
        mrNumberSeries->setCheckable(true);
        gridLayout_53 = new QGridLayout(mrNumberSeries);
        gridLayout_53->setObjectName("gridLayout_53");
        label_163 = new QLabel(mrNumberSeries);
        label_163->setObjectName("label_163");

        gridLayout_53->addWidget(label_163, 0, 0, 1, 1);

        mrNumberEveryXMeasures = new QSpinBox(mrNumberSeries);
        mrNumberEveryXMeasures->setObjectName("mrNumberEveryXMeasures");
        mrNumberEveryXMeasures->setKeyboardTracking(false);
        mrNumberEveryXMeasures->setMinimum(1);
        mrNumberEveryXMeasures->setMaximum(10);

        gridLayout_53->addWidget(mrNumberEveryXMeasures, 0, 1, 1, 1);

        label_170 = new QLabel(mrNumberSeries);
        label_170->setObjectName("label_170");

        gridLayout_53->addWidget(label_170, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(64, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_53->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        resetMRNumberSeriesWithParentheses = new QToolButton(mrNumberSeries);
        resetMRNumberSeriesWithParentheses->setObjectName("resetMRNumberSeriesWithParentheses");
        resetMRNumberSeriesWithParentheses->setText(QString::fromUtf8("\342\200\246"));

        gridLayout_53->addWidget(resetMRNumberSeriesWithParentheses, 1, 5, 1, 1);

        resetMRNumberEveryXMeasures = new QToolButton(mrNumberSeries);
        resetMRNumberEveryXMeasures->setObjectName("resetMRNumberEveryXMeasures");
        resetMRNumberEveryXMeasures->setText(QString::fromUtf8("\342\200\246"));

        gridLayout_53->addWidget(resetMRNumberEveryXMeasures, 0, 5, 1, 1);

        mrNumberSeriesWithParentheses = new QCheckBox(mrNumberSeries);
        mrNumberSeriesWithParentheses->setObjectName("mrNumberSeriesWithParentheses");

        gridLayout_53->addWidget(mrNumberSeriesWithParentheses, 1, 0, 1, 4);


        gridLayout_52->addWidget(mrNumberSeries, 4, 0, 1, 3);

        resetFourMeasureRepeatShowExtenders = new QToolButton(groupBox_measure_repeats);
        resetFourMeasureRepeatShowExtenders->setObjectName("resetFourMeasureRepeatShowExtenders");
        resetFourMeasureRepeatShowExtenders->setText(QString::fromUtf8(""));

        gridLayout_52->addWidget(resetFourMeasureRepeatShowExtenders, 3, 2, 1, 1);

        label_148 = new QLabel(groupBox_measure_repeats);
        label_148->setObjectName("label_148");

        gridLayout_52->addWidget(label_148, 1, 0, 1, 1);

        oneMeasureRepeatShow1 = new QCheckBox(groupBox_measure_repeats);
        oneMeasureRepeatShow1->setObjectName("oneMeasureRepeatShow1");
        oneMeasureRepeatShow1->setText(QString::fromUtf8("Show \342\200\230\\1\342\200\231 on 1-measure repeats [set in edidstyle.cpp]"));

        gridLayout_52->addWidget(oneMeasureRepeatShow1, 2, 0, 1, 2);

        measureRepeatNumberPos = new QDoubleSpinBox(groupBox_measure_repeats);
        measureRepeatNumberPos->setObjectName("measureRepeatNumberPos");
        measureRepeatNumberPos->setKeyboardTracking(false);
        measureRepeatNumberPos->setMinimum(-99.989999999999995);
        measureRepeatNumberPos->setSingleStep(0.500000000000000);

        gridLayout_52->addWidget(measureRepeatNumberPos, 1, 1, 1, 1);

        resetMeasureRepeatNumberPos = new QToolButton(groupBox_measure_repeats);
        resetMeasureRepeatNumberPos->setObjectName("resetMeasureRepeatNumberPos");
        resetMeasureRepeatNumberPos->setText(QString::fromUtf8("\342\200\246"));

        gridLayout_52->addWidget(resetMeasureRepeatNumberPos, 1, 2, 1, 1);

        resetOneMeasureRepeatShow1 = new QToolButton(groupBox_measure_repeats);
        resetOneMeasureRepeatShow1->setObjectName("resetOneMeasureRepeatShow1");
        resetOneMeasureRepeatShow1->setText(QString::fromUtf8("\342\200\246"));

        gridLayout_52->addWidget(resetOneMeasureRepeatShow1, 2, 2, 1, 1);


        gridLayout_58->addWidget(groupBox_measure_repeats, 0, 0, 1, 1);

        verticalSpacer_36 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_58->addItem(verticalSpacer_36, 1, 0, 1, 1);

        pageStack->addWidget(PageMeasureRepeats);
        PageBeams = new QWidget();
        PageBeams->setObjectName("PageBeams");
        verticalLayout_14 = new QVBoxLayout(PageBeams);
        verticalLayout_14->setObjectName("verticalLayout_14");
        groupBox_beams = new QGroupBox(PageBeams);
        groupBox_beams->setObjectName("groupBox_beams");
        groupBox_beams->setFlat(false);
        verticalLayout_25 = new QVBoxLayout(groupBox_beams);
        verticalLayout_25->setObjectName("verticalLayout_25");
        horizontalSpacer_14 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_25->addItem(horizontalSpacer_14);


        verticalLayout_14->addWidget(groupBox_beams);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_7);

        pageStack->addWidget(PageBeams);
        PageTuplets = new QWidget();
        PageTuplets->setObjectName("PageTuplets");
        verticalLayout_301 = new QVBoxLayout(PageTuplets);
        verticalLayout_301->setObjectName("verticalLayout_301");
        groupBox_tuplets = new QGroupBox(PageTuplets);
        groupBox_tuplets->setObjectName("groupBox_tuplets");
        gridLayout_481 = new QGridLayout(groupBox_tuplets);
        gridLayout_481->setObjectName("gridLayout_481");
        gridLayout_481->setContentsMargins(0, 0, 0, 0);
        scrollArea_tuplets = new QScrollArea(groupBox_tuplets);
        scrollArea_tuplets->setObjectName("scrollArea_tuplets");
        scrollArea_tuplets->setFrameShape(QFrame::NoFrame);
        scrollArea_tuplets->setWidgetResizable(true);
        scrollArea_tuplets_contents = new QWidget();
        scrollArea_tuplets_contents->setObjectName("scrollArea_tuplets_contents");
        scrollArea_tuplets_contents->setGeometry(QRect(0, 0, 578, 527));
        gridLayout_54 = new QGridLayout(scrollArea_tuplets_contents);
        gridLayout_54->setObjectName("gridLayout_54");
        verticalDistance = new QGroupBox(scrollArea_tuplets_contents);
        verticalDistance->setObjectName("verticalDistance");
        gridLayout_20 = new QGridLayout(verticalDistance);
        gridLayout_20->setObjectName("gridLayout_20");
        resetTupletMaxSlope = new QToolButton(verticalDistance);
        resetTupletMaxSlope->setObjectName("resetTupletMaxSlope");
        sizePolicy6.setHeightForWidth(resetTupletMaxSlope->sizePolicy().hasHeightForWidth());
        resetTupletMaxSlope->setSizePolicy(sizePolicy6);
        resetTupletMaxSlope->setText(QString::fromUtf8(""));

        gridLayout_20->addWidget(resetTupletMaxSlope, 0, 2, 1, 1);

        label_48 = new QLabel(verticalDistance);
        label_48->setObjectName("label_48");

        gridLayout_20->addWidget(label_48, 0, 0, 1, 1);

        tupletMaxSlope = new QDoubleSpinBox(verticalDistance);
        tupletMaxSlope->setObjectName("tupletMaxSlope");
        tupletMaxSlope->setKeyboardTracking(false);
        tupletMaxSlope->setMaximum(1.000000000000000);
        tupletMaxSlope->setSingleStep(0.050000000000000);
        tupletMaxSlope->setValue(0.500000000000000);

        gridLayout_20->addWidget(tupletMaxSlope, 0, 1, 1, 1);

        label_49 = new QLabel(verticalDistance);
        label_49->setObjectName("label_49");

        gridLayout_20->addWidget(label_49, 1, 0, 1, 1);

        resetTupletVStemDistance = new QToolButton(verticalDistance);
        resetTupletVStemDistance->setObjectName("resetTupletVStemDistance");
        sizePolicy6.setHeightForWidth(resetTupletVStemDistance->sizePolicy().hasHeightForWidth());
        resetTupletVStemDistance->setSizePolicy(sizePolicy6);
        resetTupletVStemDistance->setText(QString::fromUtf8(""));

        gridLayout_20->addWidget(resetTupletVStemDistance, 1, 2, 1, 1);

        tupletVHeadDistance = new QDoubleSpinBox(verticalDistance);
        tupletVHeadDistance->setObjectName("tupletVHeadDistance");
        tupletVHeadDistance->setKeyboardTracking(false);
        tupletVHeadDistance->setMinimum(-5.000000000000000);
        tupletVHeadDistance->setMaximum(5.000000000000000);
        tupletVHeadDistance->setSingleStep(0.050000000000000);
        tupletVHeadDistance->setValue(0.500000000000000);

        gridLayout_20->addWidget(tupletVHeadDistance, 2, 1, 1, 1);

        resetTupletVHeadDistance = new QToolButton(verticalDistance);
        resetTupletVHeadDistance->setObjectName("resetTupletVHeadDistance");
        sizePolicy6.setHeightForWidth(resetTupletVHeadDistance->sizePolicy().hasHeightForWidth());
        resetTupletVHeadDistance->setSizePolicy(sizePolicy6);
        resetTupletVHeadDistance->setText(QString::fromUtf8(""));

        gridLayout_20->addWidget(resetTupletVHeadDistance, 2, 2, 1, 1);

        label_50 = new QLabel(verticalDistance);
        label_50->setObjectName("label_50");

        gridLayout_20->addWidget(label_50, 2, 0, 1, 1);

        tupletVStemDistance = new QDoubleSpinBox(verticalDistance);
        tupletVStemDistance->setObjectName("tupletVStemDistance");
        tupletVStemDistance->setKeyboardTracking(false);
        tupletVStemDistance->setMinimum(-5.000000000000000);
        tupletVStemDistance->setMaximum(5.000000000000000);
        tupletVStemDistance->setSingleStep(0.050000000000000);
        tupletVStemDistance->setValue(0.250000000000000);

        gridLayout_20->addWidget(tupletVStemDistance, 1, 1, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_28, 0, 3, 1, 1);

        tupletOutOfStaff = new QCheckBox(verticalDistance);
        tupletOutOfStaff->setObjectName("tupletOutOfStaff");

        gridLayout_20->addWidget(tupletOutOfStaff, 3, 0, 1, 3);


        gridLayout_54->addWidget(verticalDistance, 1, 0, 1, 2);

        groupBox_tuplets_properties = new QGroupBox(scrollArea_tuplets_contents);
        groupBox_tuplets_properties->setObjectName("groupBox_tuplets_properties");
        gridLayout_19 = new QGridLayout(groupBox_tuplets_properties);
        gridLayout_19->setObjectName("gridLayout_19");
        label_114 = new QLabel(groupBox_tuplets_properties);
        label_114->setObjectName("label_114");

        gridLayout_19->addWidget(label_114, 0, 0, 1, 1);

        resetTupletNumberType = new QToolButton(groupBox_tuplets_properties);
        resetTupletNumberType->setObjectName("resetTupletNumberType");
        sizePolicy6.setHeightForWidth(resetTupletNumberType->sizePolicy().hasHeightForWidth());
        resetTupletNumberType->setSizePolicy(sizePolicy6);
        resetTupletNumberType->setText(QString::fromUtf8(""));

        gridLayout_19->addWidget(resetTupletNumberType, 1, 2, 1, 1);

        resetTupletDirection = new QToolButton(groupBox_tuplets_properties);
        resetTupletDirection->setObjectName("resetTupletDirection");
        sizePolicy6.setHeightForWidth(resetTupletDirection->sizePolicy().hasHeightForWidth());
        resetTupletDirection->setSizePolicy(sizePolicy6);
        resetTupletDirection->setText(QString::fromUtf8(""));

        gridLayout_19->addWidget(resetTupletDirection, 0, 2, 1, 1);

        tupletNumberType = new QComboBox(groupBox_tuplets_properties);
        tupletNumberType->addItem(QString());
        tupletNumberType->addItem(QString());
        tupletNumberType->addItem(QString());
        tupletNumberType->setObjectName("tupletNumberType");

        gridLayout_19->addWidget(tupletNumberType, 1, 1, 1, 1);

        tupletDirection = new QComboBox(groupBox_tuplets_properties);
        tupletDirection->addItem(QString());
        tupletDirection->addItem(QString());
        tupletDirection->addItem(QString());
        tupletDirection->setObjectName("tupletDirection");

        gridLayout_19->addWidget(tupletDirection, 0, 1, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_26, 0, 9, 1, 1);

        label_115 = new QLabel(groupBox_tuplets_properties);
        label_115->setObjectName("label_115");

        gridLayout_19->addWidget(label_115, 1, 0, 1, 1);

        resetTupletBracketType = new QToolButton(groupBox_tuplets_properties);
        resetTupletBracketType->setObjectName("resetTupletBracketType");
        sizePolicy6.setHeightForWidth(resetTupletBracketType->sizePolicy().hasHeightForWidth());
        resetTupletBracketType->setSizePolicy(sizePolicy6);
        resetTupletBracketType->setText(QString::fromUtf8(""));

        gridLayout_19->addWidget(resetTupletBracketType, 2, 2, 1, 1);

        label_116 = new QLabel(groupBox_tuplets_properties);
        label_116->setObjectName("label_116");

        gridLayout_19->addWidget(label_116, 2, 0, 1, 1);

        tupletBracketType = new QComboBox(groupBox_tuplets_properties);
        tupletBracketType->addItem(QString());
        tupletBracketType->addItem(QString());
        tupletBracketType->addItem(QString());
        tupletBracketType->setObjectName("tupletBracketType");

        gridLayout_19->addWidget(tupletBracketType, 2, 1, 1, 1);


        gridLayout_54->addWidget(groupBox_tuplets_properties, 0, 0, 1, 1);

        groupBox_tuplets_brackets = new QGroupBox(scrollArea_tuplets_contents);
        groupBox_tuplets_brackets->setObjectName("groupBox_tuplets_brackets");
        gridLayout_21 = new QGridLayout(groupBox_tuplets_brackets);
        gridLayout_21->setObjectName("gridLayout_21");
        label_6 = new QLabel(groupBox_tuplets_brackets);
        label_6->setObjectName("label_6");

        gridLayout_21->addWidget(label_6, 0, 0, 1, 1);

        tupletBracketHookHeight = new QDoubleSpinBox(groupBox_tuplets_brackets);
        tupletBracketHookHeight->setObjectName("tupletBracketHookHeight");
        tupletBracketHookHeight->setKeyboardTracking(false);
        tupletBracketHookHeight->setMinimum(0.050000000000000);
        tupletBracketHookHeight->setMaximum(10.000000000000000);
        tupletBracketHookHeight->setSingleStep(0.050000000000000);
        tupletBracketHookHeight->setValue(0.100000000000000);

        gridLayout_21->addWidget(tupletBracketHookHeight, 1, 1, 1, 1);

        label_187 = new QLabel(groupBox_tuplets_brackets);
        label_187->setObjectName("label_187");

        gridLayout_21->addWidget(label_187, 1, 0, 1, 1);

        resetTupletBracketWidth = new QToolButton(groupBox_tuplets_brackets);
        resetTupletBracketWidth->setObjectName("resetTupletBracketWidth");
        sizePolicy6.setHeightForWidth(resetTupletBracketWidth->sizePolicy().hasHeightForWidth());
        resetTupletBracketWidth->setSizePolicy(sizePolicy6);
        resetTupletBracketWidth->setText(QString::fromUtf8(""));

        gridLayout_21->addWidget(resetTupletBracketWidth, 0, 2, 1, 1);

        tupletBracketWidth = new QDoubleSpinBox(groupBox_tuplets_brackets);
        tupletBracketWidth->setObjectName("tupletBracketWidth");
        tupletBracketWidth->setKeyboardTracking(false);
        tupletBracketWidth->setMinimum(0.050000000000000);
        tupletBracketWidth->setMaximum(1.000000000000000);
        tupletBracketWidth->setSingleStep(0.050000000000000);
        tupletBracketWidth->setValue(0.100000000000000);

        gridLayout_21->addWidget(tupletBracketWidth, 0, 1, 1, 1);

        resetTupletBracketHookHeight = new QToolButton(groupBox_tuplets_brackets);
        resetTupletBracketHookHeight->setObjectName("resetTupletBracketHookHeight");
        sizePolicy6.setHeightForWidth(resetTupletBracketHookHeight->sizePolicy().hasHeightForWidth());
        resetTupletBracketHookHeight->setSizePolicy(sizePolicy6);
        resetTupletBracketHookHeight->setText(QString::fromUtf8(""));

        gridLayout_21->addWidget(resetTupletBracketHookHeight, 1, 2, 1, 1);

        horizontalSpacer_55 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_55, 0, 3, 1, 1);

        verticalSpacer_35 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_21->addItem(verticalSpacer_35, 2, 0, 1, 1);


        gridLayout_54->addWidget(groupBox_tuplets_brackets, 0, 1, 1, 1);

        groupBox_tuplets_horizontalDist = new QGroupBox(scrollArea_tuplets_contents);
        groupBox_tuplets_horizontalDist->setObjectName("groupBox_tuplets_horizontalDist");
        gridLayout_17 = new QGridLayout(groupBox_tuplets_horizontalDist);
        gridLayout_17->setObjectName("gridLayout_17");
        tupletNoteLeftDistance = new QDoubleSpinBox(groupBox_tuplets_horizontalDist);
        tupletNoteLeftDistance->setObjectName("tupletNoteLeftDistance");
        tupletNoteLeftDistance->setKeyboardTracking(false);
        tupletNoteLeftDistance->setMinimum(-5.000000000000000);
        tupletNoteLeftDistance->setMaximum(5.000000000000000);
        tupletNoteLeftDistance->setSingleStep(0.050000000000000);

        gridLayout_17->addWidget(tupletNoteLeftDistance, 1, 1, 1, 1);

        label_56 = new QLabel(groupBox_tuplets_horizontalDist);
        label_56->setObjectName("label_56");

        gridLayout_17->addWidget(label_56, 2, 0, 1, 1);

        tupletStemLeftDistance = new QDoubleSpinBox(groupBox_tuplets_horizontalDist);
        tupletStemLeftDistance->setObjectName("tupletStemLeftDistance");
        tupletStemLeftDistance->setKeyboardTracking(false);
        tupletStemLeftDistance->setMinimum(-5.000000000000000);
        tupletStemLeftDistance->setMaximum(5.000000000000000);
        tupletStemLeftDistance->setSingleStep(0.050000000000000);
        tupletStemLeftDistance->setValue(0.500000000000000);

        gridLayout_17->addWidget(tupletStemLeftDistance, 0, 1, 1, 1);

        tupletStemRightDistance = new QDoubleSpinBox(groupBox_tuplets_horizontalDist);
        tupletStemRightDistance->setObjectName("tupletStemRightDistance");
        tupletStemRightDistance->setKeyboardTracking(false);
        tupletStemRightDistance->setMinimum(-5.000000000000000);
        tupletStemRightDistance->setMaximum(5.000000000000000);
        tupletStemRightDistance->setSingleStep(0.050000000000000);
        tupletStemRightDistance->setValue(0.500000000000000);

        gridLayout_17->addWidget(tupletStemRightDistance, 2, 1, 1, 1);

        label_58 = new QLabel(groupBox_tuplets_horizontalDist);
        label_58->setObjectName("label_58");

        gridLayout_17->addWidget(label_58, 3, 0, 1, 1);

        resetTupletNoteRightDistance = new QToolButton(groupBox_tuplets_horizontalDist);
        resetTupletNoteRightDistance->setObjectName("resetTupletNoteRightDistance");
        sizePolicy6.setHeightForWidth(resetTupletNoteRightDistance->sizePolicy().hasHeightForWidth());
        resetTupletNoteRightDistance->setSizePolicy(sizePolicy6);
        resetTupletNoteRightDistance->setText(QString::fromUtf8(""));

        gridLayout_17->addWidget(resetTupletNoteRightDistance, 3, 2, 1, 1);

        resetTupletNoteLeftDistance = new QToolButton(groupBox_tuplets_horizontalDist);
        resetTupletNoteLeftDistance->setObjectName("resetTupletNoteLeftDistance");
        sizePolicy6.setHeightForWidth(resetTupletNoteLeftDistance->sizePolicy().hasHeightForWidth());
        resetTupletNoteLeftDistance->setSizePolicy(sizePolicy6);
        resetTupletNoteLeftDistance->setText(QString::fromUtf8(""));

        gridLayout_17->addWidget(resetTupletNoteLeftDistance, 1, 2, 1, 1);

        resetTupletStemLeftDistance = new QToolButton(groupBox_tuplets_horizontalDist);
        resetTupletStemLeftDistance->setObjectName("resetTupletStemLeftDistance");
        sizePolicy6.setHeightForWidth(resetTupletStemLeftDistance->sizePolicy().hasHeightForWidth());
        resetTupletStemLeftDistance->setSizePolicy(sizePolicy6);
        resetTupletStemLeftDistance->setText(QString::fromUtf8(""));

        gridLayout_17->addWidget(resetTupletStemLeftDistance, 0, 2, 1, 1);

        label_51 = new QLabel(groupBox_tuplets_horizontalDist);
        label_51->setObjectName("label_51");

        gridLayout_17->addWidget(label_51, 0, 0, 1, 1);

        tupletNoteRightDistance = new QDoubleSpinBox(groupBox_tuplets_horizontalDist);
        tupletNoteRightDistance->setObjectName("tupletNoteRightDistance");
        tupletNoteRightDistance->setKeyboardTracking(false);
        tupletNoteRightDistance->setMinimum(-5.000000000000000);
        tupletNoteRightDistance->setMaximum(5.000000000000000);
        tupletNoteRightDistance->setSingleStep(0.050000000000000);

        gridLayout_17->addWidget(tupletNoteRightDistance, 3, 1, 1, 1);

        label_55 = new QLabel(groupBox_tuplets_horizontalDist);
        label_55->setObjectName("label_55");

        gridLayout_17->addWidget(label_55, 1, 0, 1, 1);

        resetTupletStemRightDistance = new QToolButton(groupBox_tuplets_horizontalDist);
        resetTupletStemRightDistance->setObjectName("resetTupletStemRightDistance");
        sizePolicy6.setHeightForWidth(resetTupletStemRightDistance->sizePolicy().hasHeightForWidth());
        resetTupletStemRightDistance->setSizePolicy(sizePolicy6);
        resetTupletStemRightDistance->setText(QString::fromUtf8(""));

        gridLayout_17->addWidget(resetTupletStemRightDistance, 2, 2, 1, 1);

        horizontalSpacer_27 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_27, 0, 3, 1, 1);


        gridLayout_54->addWidget(groupBox_tuplets_horizontalDist, 2, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_54->addItem(verticalSpacer_3, 3, 0, 1, 2);

        scrollArea_tuplets->setWidget(scrollArea_tuplets_contents);

        gridLayout_481->addWidget(scrollArea_tuplets, 0, 0, 2, 2);


        verticalLayout_301->addWidget(groupBox_tuplets);

        pageStack->addWidget(PageTuplets);
        PageArpeggios = new QWidget();
        PageArpeggios->setObjectName("PageArpeggios");
        verticalLayout_15 = new QVBoxLayout(PageArpeggios);
        verticalLayout_15->setObjectName("verticalLayout_15");
        groupBox_arpeggios = new QGroupBox(PageArpeggios);
        groupBox_arpeggios->setObjectName("groupBox_arpeggios");
        groupBox_arpeggios->setFlat(false);
        gridLayout_31 = new QGridLayout(groupBox_arpeggios);
        gridLayout_31->setObjectName("gridLayout_31");
        label_28 = new QLabel(groupBox_arpeggios);
        label_28->setObjectName("label_28");
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_31->addWidget(label_28, 2, 0, 1, 1);

        arpeggioNoteDistance = new QDoubleSpinBox(groupBox_arpeggios);
        arpeggioNoteDistance->setObjectName("arpeggioNoteDistance");
        arpeggioNoteDistance->setKeyboardTracking(false);
        arpeggioNoteDistance->setMaximum(99999.000000000000000);
        arpeggioNoteDistance->setSingleStep(0.200000000000000);

        gridLayout_31->addWidget(arpeggioNoteDistance, 0, 1, 1, 1);

        arpeggioHookLen = new QDoubleSpinBox(groupBox_arpeggios);
        arpeggioHookLen->setObjectName("arpeggioHookLen");
        arpeggioHookLen->setKeyboardTracking(false);
        arpeggioHookLen->setMaximum(99999.000000000000000);
        arpeggioHookLen->setSingleStep(0.100000000000000);

        gridLayout_31->addWidget(arpeggioHookLen, 2, 1, 1, 1);

        arpeggioLineWidth = new QDoubleSpinBox(groupBox_arpeggios);
        arpeggioLineWidth->setObjectName("arpeggioLineWidth");
        arpeggioLineWidth->setKeyboardTracking(false);
        arpeggioLineWidth->setMaximum(99999.000000000000000);
        arpeggioLineWidth->setSingleStep(0.010000000000000);

        gridLayout_31->addWidget(arpeggioLineWidth, 1, 1, 1, 1);

        label_27 = new QLabel(groupBox_arpeggios);
        label_27->setObjectName("label_27");

        gridLayout_31->addWidget(label_27, 1, 0, 1, 1);

        label_26 = new QLabel(groupBox_arpeggios);
        label_26->setObjectName("label_26");

        gridLayout_31->addWidget(label_26, 0, 0, 1, 1);

        arpeggioHiddenInStdIfTab = new QCheckBox(groupBox_arpeggios);
        arpeggioHiddenInStdIfTab->setObjectName("arpeggioHiddenInStdIfTab");

        gridLayout_31->addWidget(arpeggioHiddenInStdIfTab, 3, 0, 1, 3);

        horizontalSpacer_35 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_31->addItem(horizontalSpacer_35, 0, 2, 1, 1);


        verticalLayout_15->addWidget(groupBox_arpeggios);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_8);

        pageStack->addWidget(PageArpeggios);
        PageSlursTies = new QWidget();
        PageSlursTies->setObjectName("PageSlursTies");
        verticalLayout_13 = new QVBoxLayout(PageSlursTies);
        verticalLayout_13->setObjectName("verticalLayout_13");
        groupBox_slursTies = new QGroupBox(PageSlursTies);
        groupBox_slursTies->setObjectName("groupBox_slursTies");
        groupBox_slursTies->setFlat(false);
        gridLayout_64 = new QGridLayout(groupBox_slursTies);
        gridLayout_64->setObjectName("gridLayout_64");
        groupBox_slurs = new QGroupBox(groupBox_slursTies);
        groupBox_slurs->setObjectName("groupBox_slurs");
        groupBox_slurs->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox_slurs);
        gridLayout_3->setObjectName("gridLayout_3");
        label_30 = new QLabel(groupBox_slurs);
        label_30->setObjectName("label_30");

        gridLayout_3->addWidget(label_30, 0, 0, 1, 1);

        slurEndLineWidth = new QDoubleSpinBox(groupBox_slurs);
        slurEndLineWidth->setObjectName("slurEndLineWidth");
        sizePolicy5.setHeightForWidth(slurEndLineWidth->sizePolicy().hasHeightForWidth());
        slurEndLineWidth->setSizePolicy(sizePolicy5);
        slurEndLineWidth->setKeyboardTracking(false);
        slurEndLineWidth->setSingleStep(0.050000000000000);

        gridLayout_3->addWidget(slurEndLineWidth, 0, 1, 1, 1);

        resetSlurEndLineWidth = new QToolButton(groupBox_slurs);
        resetSlurEndLineWidth->setObjectName("resetSlurEndLineWidth");
        resetSlurEndLineWidth->setText(QString::fromUtf8(""));

        gridLayout_3->addWidget(resetSlurEndLineWidth, 0, 2, 1, 1);

        label_31 = new QLabel(groupBox_slurs);
        label_31->setObjectName("label_31");

        gridLayout_3->addWidget(label_31, 1, 0, 1, 1);

        slurMidLineWidth = new QDoubleSpinBox(groupBox_slurs);
        slurMidLineWidth->setObjectName("slurMidLineWidth");
        sizePolicy5.setHeightForWidth(slurMidLineWidth->sizePolicy().hasHeightForWidth());
        slurMidLineWidth->setSizePolicy(sizePolicy5);
        slurMidLineWidth->setKeyboardTracking(false);
        slurMidLineWidth->setSingleStep(0.050000000000000);

        gridLayout_3->addWidget(slurMidLineWidth, 1, 1, 1, 1);

        resetSlurMidLineWidth = new QToolButton(groupBox_slurs);
        resetSlurMidLineWidth->setObjectName("resetSlurMidLineWidth");
        resetSlurMidLineWidth->setText(QString::fromUtf8(""));

        gridLayout_3->addWidget(resetSlurMidLineWidth, 1, 2, 1, 1);

        label_33 = new QLabel(groupBox_slurs);
        label_33->setObjectName("label_33");

        gridLayout_3->addWidget(label_33, 2, 0, 1, 1);

        slurDottedLineWidth = new QDoubleSpinBox(groupBox_slurs);
        slurDottedLineWidth->setObjectName("slurDottedLineWidth");
        sizePolicy5.setHeightForWidth(slurDottedLineWidth->sizePolicy().hasHeightForWidth());
        slurDottedLineWidth->setSizePolicy(sizePolicy5);
        slurDottedLineWidth->setKeyboardTracking(false);
        slurDottedLineWidth->setSingleStep(0.050000000000000);

        gridLayout_3->addWidget(slurDottedLineWidth, 2, 1, 1, 1);

        resetSlurDottedLineWidth = new QToolButton(groupBox_slurs);
        resetSlurDottedLineWidth->setObjectName("resetSlurDottedLineWidth");
        resetSlurDottedLineWidth->setText(QString::fromUtf8(""));

        gridLayout_3->addWidget(resetSlurDottedLineWidth, 2, 2, 1, 1);

        label_158 = new QLabel(groupBox_slurs);
        label_158->setObjectName("label_158");

        gridLayout_3->addWidget(label_158, 3, 0, 1, 1);

        slurMinDistance = new QDoubleSpinBox(groupBox_slurs);
        slurMinDistance->setObjectName("slurMinDistance");
        sizePolicy5.setHeightForWidth(slurMinDistance->sizePolicy().hasHeightForWidth());
        slurMinDistance->setSizePolicy(sizePolicy5);
        slurMinDistance->setKeyboardTracking(false);
        slurMinDistance->setDecimals(2);
        slurMinDistance->setMinimum(-100.000000000000000);
        slurMinDistance->setSingleStep(0.500000000000000);

        gridLayout_3->addWidget(slurMinDistance, 3, 1, 1, 1);

        resetSlurMinDistance = new QToolButton(groupBox_slurs);
        resetSlurMinDistance->setObjectName("resetSlurMinDistance");
        resetSlurMinDistance->setText(QString::fromUtf8(""));

        gridLayout_3->addWidget(resetSlurMinDistance, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 3, 3, 1, 1);


        gridLayout_64->addWidget(groupBox_slurs, 0, 0, 1, 2);

        groupBox_ties_2 = new QGroupBox(groupBox_slursTies);
        groupBox_ties_2->setObjectName("groupBox_ties_2");
        groupBox_ties_2->setFlat(false);
        gridLayout_65 = new QGridLayout(groupBox_ties_2);
        gridLayout_65->setObjectName("gridLayout_65");
        label_218 = new QLabel(groupBox_ties_2);
        label_218->setObjectName("label_218");

        gridLayout_65->addWidget(label_218, 0, 0, 1, 1);

        tieEndLineWidth = new QDoubleSpinBox(groupBox_ties_2);
        tieEndLineWidth->setObjectName("tieEndLineWidth");
        sizePolicy5.setHeightForWidth(tieEndLineWidth->sizePolicy().hasHeightForWidth());
        tieEndLineWidth->setSizePolicy(sizePolicy5);
        tieEndLineWidth->setKeyboardTracking(false);
        tieEndLineWidth->setSingleStep(0.050000000000000);

        gridLayout_65->addWidget(tieEndLineWidth, 0, 1, 1, 1);

        resetTieEndLineWidth = new QToolButton(groupBox_ties_2);
        resetTieEndLineWidth->setObjectName("resetTieEndLineWidth");
        resetTieEndLineWidth->setText(QString::fromUtf8(""));

        gridLayout_65->addWidget(resetTieEndLineWidth, 0, 2, 1, 1);

        label_219 = new QLabel(groupBox_ties_2);
        label_219->setObjectName("label_219");

        gridLayout_65->addWidget(label_219, 1, 0, 1, 1);

        tieMidLineWidth = new QDoubleSpinBox(groupBox_ties_2);
        tieMidLineWidth->setObjectName("tieMidLineWidth");
        sizePolicy5.setHeightForWidth(tieMidLineWidth->sizePolicy().hasHeightForWidth());
        tieMidLineWidth->setSizePolicy(sizePolicy5);
        tieMidLineWidth->setKeyboardTracking(false);
        tieMidLineWidth->setSingleStep(0.050000000000000);

        gridLayout_65->addWidget(tieMidLineWidth, 1, 1, 1, 1);

        resetTieMidLineWidth = new QToolButton(groupBox_ties_2);
        resetTieMidLineWidth->setObjectName("resetTieMidLineWidth");
        resetTieMidLineWidth->setText(QString::fromUtf8(""));

        gridLayout_65->addWidget(resetTieMidLineWidth, 1, 2, 1, 1);

        label_216 = new QLabel(groupBox_ties_2);
        label_216->setObjectName("label_216");

        gridLayout_65->addWidget(label_216, 2, 0, 1, 1);

        tieDottedLineWidth = new QDoubleSpinBox(groupBox_ties_2);
        tieDottedLineWidth->setObjectName("tieDottedLineWidth");
        sizePolicy5.setHeightForWidth(tieDottedLineWidth->sizePolicy().hasHeightForWidth());
        tieDottedLineWidth->setSizePolicy(sizePolicy5);
        tieDottedLineWidth->setKeyboardTracking(false);
        tieDottedLineWidth->setSingleStep(0.050000000000000);

        gridLayout_65->addWidget(tieDottedLineWidth, 2, 1, 1, 1);

        resetTieDottedLineWidth = new QToolButton(groupBox_ties_2);
        resetTieDottedLineWidth->setObjectName("resetTieDottedLineWidth");
        resetTieDottedLineWidth->setText(QString::fromUtf8(""));

        gridLayout_65->addWidget(resetTieDottedLineWidth, 2, 2, 1, 1);

        label_217 = new QLabel(groupBox_ties_2);
        label_217->setObjectName("label_217");

        gridLayout_65->addWidget(label_217, 3, 0, 1, 1);

        tieMinDistance = new QDoubleSpinBox(groupBox_ties_2);
        tieMinDistance->setObjectName("tieMinDistance");
        sizePolicy5.setHeightForWidth(tieMinDistance->sizePolicy().hasHeightForWidth());
        tieMinDistance->setSizePolicy(sizePolicy5);
        tieMinDistance->setKeyboardTracking(false);
        tieMinDistance->setDecimals(2);
        tieMinDistance->setMinimum(-100.000000000000000);
        tieMinDistance->setSingleStep(0.500000000000000);

        gridLayout_65->addWidget(tieMinDistance, 3, 1, 1, 1);

        resetTieMinDistance = new QToolButton(groupBox_ties_2);
        resetTieMinDistance->setObjectName("resetTieMinDistance");
        resetTieMinDistance->setText(QString::fromUtf8(""));

        gridLayout_65->addWidget(resetTieMinDistance, 3, 2, 1, 1);

        horizontalSpacer_66 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_65->addItem(horizontalSpacer_66, 3, 3, 1, 1);


        gridLayout_64->addWidget(groupBox_ties_2, 0, 2, 1, 2);


        verticalLayout_13->addWidget(groupBox_slursTies);

        groupBox_ties = new QGroupBox(PageSlursTies);
        groupBox_ties->setObjectName("groupBox_ties");
        verticalLayout_57 = new QVBoxLayout(groupBox_ties);
        verticalLayout_57->setObjectName("verticalLayout_57");
        gridLayout_66 = new QGridLayout();
        gridLayout_66->setObjectName("gridLayout_66");
        minTieLengthLabel = new QLabel(groupBox_ties);
        minTieLengthLabel->setObjectName("minTieLengthLabel");
        sizePolicy8.setHeightForWidth(minTieLengthLabel->sizePolicy().hasHeightForWidth());
        minTieLengthLabel->setSizePolicy(sizePolicy8);

        gridLayout_66->addWidget(minTieLengthLabel, 0, 0, 1, 1);

        minTieLength = new QDoubleSpinBox(groupBox_ties);
        minTieLength->setObjectName("minTieLength");
        sizePolicy6.setHeightForWidth(minTieLength->sizePolicy().hasHeightForWidth());
        minTieLength->setSizePolicy(sizePolicy6);
        minTieLength->setKeyboardTracking(false);
        minTieLength->setSingleStep(0.100000000000000);

        gridLayout_66->addWidget(minTieLength, 0, 1, 1, 1);

        resetMinTieLength = new QToolButton(groupBox_ties);
        resetMinTieLength->setObjectName("resetMinTieLength");
        sizePolicy8.setHeightForWidth(resetMinTieLength->sizePolicy().hasHeightForWidth());
        resetMinTieLength->setSizePolicy(sizePolicy8);
        resetMinTieLength->setText(QString::fromUtf8(""));

        gridLayout_66->addWidget(resetMinTieLength, 0, 2, 1, 1);


        verticalLayout_57->addLayout(gridLayout_66);

        line_16 = new QFrame(groupBox_ties);
        line_16->setObjectName("line_16");
        line_16->setFrameShape(QFrame::Shape::HLine);
        line_16->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_57->addWidget(line_16);


        verticalLayout_13->addWidget(groupBox_ties);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_4);

        pageStack->addWidget(PageSlursTies);
        PageDynamicsAndHairpins = new QWidget();
        PageDynamicsAndHairpins->setObjectName("PageDynamicsAndHairpins");
        verticalLayout_19 = new QVBoxLayout(PageDynamicsAndHairpins);
        verticalLayout_19->setObjectName("verticalLayout_19");
        groupBox_dynamic_hairpin = new QGroupBox(PageDynamicsAndHairpins);
        groupBox_dynamic_hairpin->setObjectName("groupBox_dynamic_hairpin");
        verticalLayout_49 = new QVBoxLayout(groupBox_dynamic_hairpin);
        verticalLayout_49->setObjectName("verticalLayout_49");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        label_62 = new QLabel(groupBox_dynamic_hairpin);
        label_62->setObjectName("label_62");

        horizontalLayout->addWidget(label_62);

        dynamicsAndHairpinPos = new QComboBox(groupBox_dynamic_hairpin);
        dynamicsAndHairpinPos->setObjectName("dynamicsAndHairpinPos");
        dynamicsAndHairpinPos->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(dynamicsAndHairpinPos);

        dynamicsAndHairpinPosDescription = new QLabel(groupBox_dynamic_hairpin);
        dynamicsAndHairpinPosDescription->setObjectName("dynamicsAndHairpinPosDescription");

        horizontalLayout->addWidget(dynamicsAndHairpinPosDescription);

        horizontalSpacer_69 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_69);

        resetDynamicsAndHairpinPos = new QToolButton(groupBox_dynamic_hairpin);
        resetDynamicsAndHairpinPos->setObjectName("resetDynamicsAndHairpinPos");

        horizontalLayout->addWidget(resetDynamicsAndHairpinPos);


        verticalLayout_49->addLayout(horizontalLayout);

        dynamicsAndHairpinsAboveOnVocalStaves = new QCheckBox(groupBox_dynamic_hairpin);
        dynamicsAndHairpinsAboveOnVocalStaves->setObjectName("dynamicsAndHairpinsAboveOnVocalStaves");

        verticalLayout_49->addWidget(dynamicsAndHairpinsAboveOnVocalStaves);

        dynamicsAndHairpinsCenterOnGrandStaff = new QCheckBox(groupBox_dynamic_hairpin);
        dynamicsAndHairpinsCenterOnGrandStaff->setObjectName("dynamicsAndHairpinsCenterOnGrandStaff");

        verticalLayout_49->addWidget(dynamicsAndHairpinsCenterOnGrandStaff);


        verticalLayout_19->addWidget(groupBox_dynamic_hairpin);

        groupBox_dynamics = new QGroupBox(PageDynamicsAndHairpins);
        groupBox_dynamics->setObjectName("groupBox_dynamics");
        gridLayout_672 = new QGridLayout(groupBox_dynamics);
        gridLayout_672->setObjectName("gridLayout_672");
        label_220 = new QLabel(groupBox_dynamics);
        label_220->setObjectName("label_220");

        gridLayout_672->addWidget(label_220, 5, 0, 1, 1);

        dynamicsPosAbove = new mu::notation::OffsetSelect(groupBox_dynamics);
        dynamicsPosAbove->setObjectName("dynamicsPosAbove");

        gridLayout_672->addWidget(dynamicsPosAbove, 3, 1, 1, 1);

        label_223 = new QLabel(groupBox_dynamics);
        label_223->setObjectName("label_223");

        gridLayout_672->addWidget(label_223, 4, 0, 1, 1);

        resetDynamicsPosBelow = new QToolButton(groupBox_dynamics);
        resetDynamicsPosBelow->setObjectName("resetDynamicsPosBelow");
        resetDynamicsPosBelow->setText(QString::fromUtf8(""));

        gridLayout_672->addWidget(resetDynamicsPosBelow, 4, 2, 1, 1);

        resetDynamicsSize = new QToolButton(groupBox_dynamics);
        resetDynamicsSize->setObjectName("resetDynamicsSize");
        resetDynamicsSize->setText(QString::fromUtf8(""));

        gridLayout_672->addWidget(resetDynamicsSize, 2, 2, 1, 1);

        resetAvoidBarLines = new QToolButton(groupBox_dynamics);
        resetAvoidBarLines->setObjectName("resetAvoidBarLines");
        resetAvoidBarLines->setText(QString::fromUtf8(""));

        gridLayout_672->addWidget(resetAvoidBarLines, 1, 2, 1, 1);

        resetDynamicsMinDistance = new QToolButton(groupBox_dynamics);
        resetDynamicsMinDistance->setObjectName("resetDynamicsMinDistance");
        resetDynamicsMinDistance->setText(QString::fromUtf8(""));

        gridLayout_672->addWidget(resetDynamicsMinDistance, 5, 2, 1, 1);

        label_221 = new QLabel(groupBox_dynamics);
        label_221->setObjectName("label_221");

        gridLayout_672->addWidget(label_221, 3, 0, 1, 1);

        dynamicsSize = new QDoubleSpinBox(groupBox_dynamics);
        dynamicsSize->setObjectName("dynamicsSize");
        dynamicsSize->setKeyboardTracking(false);
        dynamicsSize->setDecimals(0);
        dynamicsSize->setMaximum(1000.000000000000000);

        gridLayout_672->addWidget(dynamicsSize, 2, 1, 1, 1);

        dynamicsMinDistance = new QDoubleSpinBox(groupBox_dynamics);
        dynamicsMinDistance->setObjectName("dynamicsMinDistance");
        dynamicsMinDistance->setKeyboardTracking(false);
        dynamicsMinDistance->setDecimals(1);
        dynamicsMinDistance->setMinimum(0.000000000000000);
        dynamicsMinDistance->setMaximum(1000.000000000000000);
        dynamicsMinDistance->setSingleStep(0.200000000000000);
        dynamicsMinDistance->setValue(0.000000000000000);

        gridLayout_672->addWidget(dynamicsMinDistance, 5, 1, 1, 1);

        avoidBarLines = new QCheckBox(groupBox_dynamics);
        avoidBarLines->setObjectName("avoidBarLines");

        gridLayout_672->addWidget(avoidBarLines, 1, 0, 1, 1);

        resetDynamicsPosAbove = new QToolButton(groupBox_dynamics);
        resetDynamicsPosAbove->setObjectName("resetDynamicsPosAbove");
        resetDynamicsPosAbove->setText(QString::fromUtf8(""));

        gridLayout_672->addWidget(resetDynamicsPosAbove, 3, 2, 1, 1);

        dynamicsPosBelow = new mu::notation::OffsetSelect(groupBox_dynamics);
        dynamicsPosBelow->setObjectName("dynamicsPosBelow");

        gridLayout_672->addWidget(dynamicsPosBelow, 4, 1, 1, 1);

        label_225 = new QLabel(groupBox_dynamics);
        label_225->setObjectName("label_225");
        label_225->setMargin(0);

        gridLayout_672->addWidget(label_225, 2, 0, 1, 1);

        dynamicsOverrideFont = new QGroupBox(groupBox_dynamics);
        dynamicsOverrideFont->setObjectName("dynamicsOverrideFont");
        dynamicsOverrideFont->setCheckable(true);
        horizontalLayout_14 = new QHBoxLayout(dynamicsOverrideFont);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_224 = new QLabel(dynamicsOverrideFont);
        label_224->setObjectName("label_224");

        horizontalLayout_14->addWidget(label_224);

        dynamicsFont = new QComboBox(dynamicsOverrideFont);
        dynamicsFont->setObjectName("dynamicsFont");
        dynamicsFont->setMinimumSize(QSize(0, 0));

        horizontalLayout_14->addWidget(dynamicsFont);


        gridLayout_672->addWidget(dynamicsOverrideFont, 0, 0, 1, 4);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_672->addItem(horizontalSpacer_30, 5, 3, 1, 1);


        verticalLayout_19->addWidget(groupBox_dynamics);

        groupBox_hairpins = new QGroupBox(PageDynamicsAndHairpins);
        groupBox_hairpins->setObjectName("groupBox_hairpins");
        gridLayout_7 = new QGridLayout(groupBox_hairpins);
        gridLayout_7->setObjectName("gridLayout_7");
        resetAutoplaceHairpinDynamicsDistance = new QToolButton(groupBox_hairpins);
        resetAutoplaceHairpinDynamicsDistance->setObjectName("resetAutoplaceHairpinDynamicsDistance");
        sizePolicy6.setHeightForWidth(resetAutoplaceHairpinDynamicsDistance->sizePolicy().hasHeightForWidth());
        resetAutoplaceHairpinDynamicsDistance->setSizePolicy(sizePolicy6);
        resetAutoplaceHairpinDynamicsDistance->setText(QString::fromUtf8(""));

        gridLayout_7->addWidget(resetAutoplaceHairpinDynamicsDistance, 5, 2, 1, 1);

        label_95 = new QLabel(groupBox_hairpins);
        label_95->setObjectName("label_95");

        gridLayout_7->addWidget(label_95, 0, 0, 1, 1);

        hairpinHeight = new QDoubleSpinBox(groupBox_hairpins);
        hairpinHeight->setObjectName("hairpinHeight");
        hairpinHeight->setKeyboardTracking(false);
        hairpinHeight->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(hairpinHeight, 3, 1, 1, 1);

        hairpinPosAbove = new mu::notation::OffsetSelect(groupBox_hairpins);
        hairpinPosAbove->setObjectName("hairpinPosAbove");
        hairpinPosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(hairpinPosAbove, 0, 1, 1, 1);

        label_117 = new QLabel(groupBox_hairpins);
        label_117->setObjectName("label_117");

        gridLayout_7->addWidget(label_117, 5, 0, 1, 1);

        resetHairpinPosAbove = new QToolButton(groupBox_hairpins);
        resetHairpinPosAbove->setObjectName("resetHairpinPosAbove");
        sizePolicy6.setHeightForWidth(resetHairpinPosAbove->sizePolicy().hasHeightForWidth());
        resetHairpinPosAbove->setSizePolicy(sizePolicy6);
        resetHairpinPosAbove->setText(QString::fromUtf8(""));

        gridLayout_7->addWidget(resetHairpinPosAbove, 0, 2, 1, 1);

        resetHairpinContinueHeight = new QToolButton(groupBox_hairpins);
        resetHairpinContinueHeight->setObjectName("resetHairpinContinueHeight");
        sizePolicy6.setHeightForWidth(resetHairpinContinueHeight->sizePolicy().hasHeightForWidth());
        resetHairpinContinueHeight->setSizePolicy(sizePolicy6);
        resetHairpinContinueHeight->setText(QString::fromUtf8(""));

        gridLayout_7->addWidget(resetHairpinContinueHeight, 4, 2, 1, 1);

        label_9 = new QLabel(groupBox_hairpins);
        label_9->setObjectName("label_9");

        gridLayout_7->addWidget(label_9, 3, 0, 1, 1);

        label_8 = new QLabel(groupBox_hairpins);
        label_8->setObjectName("label_8");

        gridLayout_7->addWidget(label_8, 6, 0, 1, 1);

        autoplaceHairpinDynamicsDistance = new QDoubleSpinBox(groupBox_hairpins);
        autoplaceHairpinDynamicsDistance->setObjectName("autoplaceHairpinDynamicsDistance");
        autoplaceHairpinDynamicsDistance->setKeyboardTracking(false);
        autoplaceHairpinDynamicsDistance->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(autoplaceHairpinDynamicsDistance, 5, 1, 1, 1);

        resetHairpinPosBelow = new QToolButton(groupBox_hairpins);
        resetHairpinPosBelow->setObjectName("resetHairpinPosBelow");
        sizePolicy6.setHeightForWidth(resetHairpinPosBelow->sizePolicy().hasHeightForWidth());
        resetHairpinPosBelow->setSizePolicy(sizePolicy6);
        resetHairpinPosBelow->setText(QString::fromUtf8(""));

        gridLayout_7->addWidget(resetHairpinPosBelow, 1, 2, 1, 1);

        hairpinPosBelow = new mu::notation::OffsetSelect(groupBox_hairpins);
        hairpinPosBelow->setObjectName("hairpinPosBelow");
        hairpinPosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_7->addWidget(hairpinPosBelow, 1, 1, 1, 1);

        hairpinLineWidth = new QDoubleSpinBox(groupBox_hairpins);
        hairpinLineWidth->setObjectName("hairpinLineWidth");
        hairpinLineWidth->setKeyboardTracking(false);
        hairpinLineWidth->setSingleStep(0.010000000000000);

        gridLayout_7->addWidget(hairpinLineWidth, 6, 1, 1, 1);

        label_129 = new QLabel(groupBox_hairpins);
        label_129->setObjectName("label_129");

        gridLayout_7->addWidget(label_129, 1, 0, 1, 1);

        resetHairpinLineWidth = new QToolButton(groupBox_hairpins);
        resetHairpinLineWidth->setObjectName("resetHairpinLineWidth");
        sizePolicy6.setHeightForWidth(resetHairpinLineWidth->sizePolicy().hasHeightForWidth());
        resetHairpinLineWidth->setSizePolicy(sizePolicy6);
        resetHairpinLineWidth->setText(QString::fromUtf8(""));

        gridLayout_7->addWidget(resetHairpinLineWidth, 6, 2, 1, 1);

        hairpinContinueHeight = new QDoubleSpinBox(groupBox_hairpins);
        hairpinContinueHeight->setObjectName("hairpinContinueHeight");
        hairpinContinueHeight->setKeyboardTracking(false);
        hairpinContinueHeight->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(hairpinContinueHeight, 4, 1, 1, 1);

        label_10 = new QLabel(groupBox_hairpins);
        label_10->setObjectName("label_10");

        gridLayout_7->addWidget(label_10, 4, 0, 1, 1);

        resetHairpinHeight = new QToolButton(groupBox_hairpins);
        resetHairpinHeight->setObjectName("resetHairpinHeight");
        sizePolicy6.setHeightForWidth(resetHairpinHeight->sizePolicy().hasHeightForWidth());
        resetHairpinHeight->setSizePolicy(sizePolicy6);
        resetHairpinHeight->setText(QString::fromUtf8(""));

        gridLayout_7->addWidget(resetHairpinHeight, 3, 2, 1, 1);

        horizontalSpacer_671 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_671, 0, 3, 1, 1);


        verticalLayout_19->addWidget(groupBox_hairpins);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_19->addItem(spacerItem);

        pageStack->addWidget(PageDynamicsAndHairpins);
        PageVolta = new QWidget();
        PageVolta->setObjectName("PageVolta");
        verticalLayout_46 = new QVBoxLayout(PageVolta);
        verticalLayout_46->setObjectName("verticalLayout_46");
        groupBox_volta = new QGroupBox(PageVolta);
        groupBox_volta->setObjectName("groupBox_volta");
        gridLayout0 = new QGridLayout(groupBox_volta);
        gridLayout0->setObjectName("gridLayout0");
        resetVoltaPosAbove = new QToolButton(groupBox_volta);
        resetVoltaPosAbove->setObjectName("resetVoltaPosAbove");
        sizePolicy6.setHeightForWidth(resetVoltaPosAbove->sizePolicy().hasHeightForWidth());
        resetVoltaPosAbove->setSizePolicy(sizePolicy6);
        resetVoltaPosAbove->setText(QString::fromUtf8(""));

        gridLayout0->addWidget(resetVoltaPosAbove, 0, 2, 1, 1);

        voltaPosAbove = new mu::notation::OffsetSelect(groupBox_volta);
        voltaPosAbove->setObjectName("voltaPosAbove");
        voltaPosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout0->addWidget(voltaPosAbove, 0, 1, 1, 1);

        resetVoltaLineStyleDashSize = new QToolButton(groupBox_volta);
        resetVoltaLineStyleDashSize->setObjectName("resetVoltaLineStyleDashSize");
        sizePolicy6.setHeightForWidth(resetVoltaLineStyleDashSize->sizePolicy().hasHeightForWidth());
        resetVoltaLineStyleDashSize->setSizePolicy(sizePolicy6);
        resetVoltaLineStyleDashSize->setText(QString::fromUtf8(""));

        gridLayout0->addWidget(resetVoltaLineStyleDashSize, 5, 2, 1, 1);

        line_2 = new QFrame(groupBox_volta);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout0->addWidget(line_2, 1, 0, 1, 4);

        resetVoltaHook = new QToolButton(groupBox_volta);
        resetVoltaHook->setObjectName("resetVoltaHook");
        sizePolicy6.setHeightForWidth(resetVoltaHook->sizePolicy().hasHeightForWidth());
        resetVoltaHook->setSizePolicy(sizePolicy6);
        resetVoltaHook->setText(QString::fromUtf8(""));

        gridLayout0->addWidget(resetVoltaHook, 2, 2, 1, 1);

        label_volta_lineStyle_dashSize = new QLabel(groupBox_volta);
        label_volta_lineStyle_dashSize->setObjectName("label_volta_lineStyle_dashSize");

        gridLayout0->addWidget(label_volta_lineStyle_dashSize, 5, 0, 1, 1);

        voltaHook = new QDoubleSpinBox(groupBox_volta);
        voltaHook->setObjectName("voltaHook");
        voltaHook->setKeyboardTracking(false);

        gridLayout0->addWidget(voltaHook, 2, 1, 1, 1);

        label_40 = new QLabel(groupBox_volta);
        label_40->setObjectName("label_40");

        gridLayout0->addWidget(label_40, 0, 0, 1, 1);

        resetVoltaLineWidth = new QToolButton(groupBox_volta);
        resetVoltaLineWidth->setObjectName("resetVoltaLineWidth");
        sizePolicy6.setHeightForWidth(resetVoltaLineWidth->sizePolicy().hasHeightForWidth());
        resetVoltaLineWidth->setSizePolicy(sizePolicy6);
        resetVoltaLineWidth->setText(QString::fromUtf8(""));

        gridLayout0->addWidget(resetVoltaLineWidth, 3, 2, 1, 1);

        voltaLineWidth = new QDoubleSpinBox(groupBox_volta);
        voltaLineWidth->setObjectName("voltaLineWidth");
        voltaLineWidth->setKeyboardTracking(false);

        gridLayout0->addWidget(voltaLineWidth, 3, 1, 1, 1);

        resetVoltaLineStyle = new QToolButton(groupBox_volta);
        resetVoltaLineStyle->setObjectName("resetVoltaLineStyle");
        sizePolicy6.setHeightForWidth(resetVoltaLineStyle->sizePolicy().hasHeightForWidth());
        resetVoltaLineStyle->setSizePolicy(sizePolicy6);
        resetVoltaLineStyle->setText(QString::fromUtf8(""));

        gridLayout0->addWidget(resetVoltaLineStyle, 4, 2, 1, 1);

        label_104 = new QLabel(groupBox_volta);
        label_104->setObjectName("label_104");

        gridLayout0->addWidget(label_104, 4, 0, 1, 1);

        voltaLineStyleDashSize = new QDoubleSpinBox(groupBox_volta);
        voltaLineStyleDashSize->setObjectName("voltaLineStyleDashSize");
        voltaLineStyleDashSize->setKeyboardTracking(false);
        voltaLineStyleDashSize->setMinimum(0.100000000000000);
        voltaLineStyleDashSize->setMaximum(100.000000000000000);
        voltaLineStyleDashSize->setSingleStep(0.100000000000000);

        gridLayout0->addWidget(voltaLineStyleDashSize, 5, 1, 1, 1);

        label_42 = new QLabel(groupBox_volta);
        label_42->setObjectName("label_42");

        gridLayout0->addWidget(label_42, 2, 0, 1, 1);

        label_64 = new QLabel(groupBox_volta);
        label_64->setObjectName("label_64");

        gridLayout0->addWidget(label_64, 3, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout0->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        voltaLineStyle = new QComboBox(groupBox_volta);
        voltaLineStyle->addItem(QString());
        voltaLineStyle->addItem(QString());
        voltaLineStyle->addItem(QString());
        voltaLineStyle->addItem(QString());
        voltaLineStyle->addItem(QString());
        voltaLineStyle->setObjectName("voltaLineStyle");

        gridLayout0->addWidget(voltaLineStyle, 4, 1, 1, 1);

        label_volta_lineStyle_gapSize = new QLabel(groupBox_volta);
        label_volta_lineStyle_gapSize->setObjectName("label_volta_lineStyle_gapSize");

        gridLayout0->addWidget(label_volta_lineStyle_gapSize, 6, 0, 1, 1);

        resetVoltaLineStyleGapSize = new QToolButton(groupBox_volta);
        resetVoltaLineStyleGapSize->setObjectName("resetVoltaLineStyleGapSize");
        sizePolicy6.setHeightForWidth(resetVoltaLineStyleGapSize->sizePolicy().hasHeightForWidth());
        resetVoltaLineStyleGapSize->setSizePolicy(sizePolicy6);
        resetVoltaLineStyleGapSize->setText(QString::fromUtf8(""));

        gridLayout0->addWidget(resetVoltaLineStyleGapSize, 6, 2, 1, 1);

        voltaLineStyleGapSize = new QDoubleSpinBox(groupBox_volta);
        voltaLineStyleGapSize->setObjectName("voltaLineStyleGapSize");
        voltaLineStyleGapSize->setKeyboardTracking(false);
        voltaLineStyleGapSize->setMinimum(0.100000000000000);
        voltaLineStyleGapSize->setMaximum(100.000000000000000);
        voltaLineStyleGapSize->setSingleStep(0.100000000000000);

        gridLayout0->addWidget(voltaLineStyleGapSize, 6, 1, 1, 1);


        verticalLayout_46->addWidget(groupBox_volta);

        verticalSpacer_13 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_46->addItem(verticalSpacer_13);

        pageStack->addWidget(PageVolta);
        PageOttava = new QWidget();
        PageOttava->setObjectName("PageOttava");
        verticalLayout_47 = new QVBoxLayout(PageOttava);
        verticalLayout_47->setObjectName("verticalLayout_47");
        groupBox_ottava = new QGroupBox(PageOttava);
        groupBox_ottava->setObjectName("groupBox_ottava");
        groupBox_ottava->setMinimumSize(QSize(0, 100));
        gridLayout_12 = new QGridLayout(groupBox_ottava);
        gridLayout_12->setObjectName("gridLayout_12");
        label_ottava_lineStyle_dashSize = new QLabel(groupBox_ottava);
        label_ottava_lineStyle_dashSize->setObjectName("label_ottava_lineStyle_dashSize");

        gridLayout_12->addWidget(label_ottava_lineStyle_dashSize, 8, 0, 1, 1);

        line_5 = new QFrame(groupBox_ottava);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_12->addWidget(line_5, 1, 0, 1, 8);

        label_81 = new QLabel(groupBox_ottava);
        label_81->setObjectName("label_81");

        gridLayout_12->addWidget(label_81, 2, 0, 1, 1);

        resetOttavaPosAbove = new QToolButton(groupBox_ottava);
        resetOttavaPosAbove->setObjectName("resetOttavaPosAbove");
        sizePolicy6.setHeightForWidth(resetOttavaPosAbove->sizePolicy().hasHeightForWidth());
        resetOttavaPosAbove->setSizePolicy(sizePolicy6);
        resetOttavaPosAbove->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaPosAbove, 2, 2, 1, 1);

        ottavaHookBelow = new QDoubleSpinBox(groupBox_ottava);
        ottavaHookBelow->setObjectName("ottavaHookBelow");
        ottavaHookBelow->setKeyboardTracking(false);
        ottavaHookBelow->setMinimum(-99.000000000000000);

        gridLayout_12->addWidget(ottavaHookBelow, 3, 5, 1, 1);

        label_105 = new QLabel(groupBox_ottava);
        label_105->setObjectName("label_105");

        gridLayout_12->addWidget(label_105, 7, 0, 1, 1);

        label_88 = new QLabel(groupBox_ottava);
        label_88->setObjectName("label_88");

        gridLayout_12->addWidget(label_88, 6, 0, 1, 1);

        label_130 = new QLabel(groupBox_ottava);
        label_130->setObjectName("label_130");

        gridLayout_12->addWidget(label_130, 3, 0, 1, 1);

        resetOttavaHookBelow = new QToolButton(groupBox_ottava);
        resetOttavaHookBelow->setObjectName("resetOttavaHookBelow");
        sizePolicy6.setHeightForWidth(resetOttavaHookBelow->sizePolicy().hasHeightForWidth());
        resetOttavaHookBelow->setSizePolicy(sizePolicy6);
        resetOttavaHookBelow->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaHookBelow, 3, 6, 1, 1);

        ottavaLineStyle = new QComboBox(groupBox_ottava);
        ottavaLineStyle->addItem(QString());
        ottavaLineStyle->addItem(QString());
        ottavaLineStyle->addItem(QString());
        ottavaLineStyle->addItem(QString());
        ottavaLineStyle->addItem(QString());
        ottavaLineStyle->setObjectName("ottavaLineStyle");

        gridLayout_12->addWidget(ottavaLineStyle, 7, 1, 1, 1);

        label_87 = new QLabel(groupBox_ottava);
        label_87->setObjectName("label_87");

        gridLayout_12->addWidget(label_87, 2, 4, 1, 1);

        ottavaNumbersOnly = new QCheckBox(groupBox_ottava);
        ottavaNumbersOnly->setObjectName("ottavaNumbersOnly");

        gridLayout_12->addWidget(ottavaNumbersOnly, 0, 0, 1, 2);

        ottavaHookAbove = new QDoubleSpinBox(groupBox_ottava);
        ottavaHookAbove->setObjectName("ottavaHookAbove");
        ottavaHookAbove->setKeyboardTracking(false);
        ottavaHookAbove->setMinimum(-99.000000000000000);

        gridLayout_12->addWidget(ottavaHookAbove, 2, 5, 1, 1);

        resetOttavaHookAbove = new QToolButton(groupBox_ottava);
        resetOttavaHookAbove->setObjectName("resetOttavaHookAbove");
        sizePolicy6.setHeightForWidth(resetOttavaHookAbove->sizePolicy().hasHeightForWidth());
        resetOttavaHookAbove->setSizePolicy(sizePolicy6);
        resetOttavaHookAbove->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaHookAbove, 2, 6, 1, 1);

        label_185 = new QLabel(groupBox_ottava);
        label_185->setObjectName("label_185");

        gridLayout_12->addWidget(label_185, 3, 4, 1, 1);

        resetOttavaLineStyle = new QToolButton(groupBox_ottava);
        resetOttavaLineStyle->setObjectName("resetOttavaLineStyle");
        sizePolicy6.setHeightForWidth(resetOttavaLineStyle->sizePolicy().hasHeightForWidth());
        resetOttavaLineStyle->setSizePolicy(sizePolicy6);
        resetOttavaLineStyle->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaLineStyle, 7, 2, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_29, 0, 3, 1, 1);

        resetOttavaNumbersOnly = new QToolButton(groupBox_ottava);
        resetOttavaNumbersOnly->setObjectName("resetOttavaNumbersOnly");
        sizePolicy6.setHeightForWidth(resetOttavaNumbersOnly->sizePolicy().hasHeightForWidth());
        resetOttavaNumbersOnly->setSizePolicy(sizePolicy6);
        resetOttavaNumbersOnly->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaNumbersOnly, 0, 2, 1, 1);

        line_4 = new QFrame(groupBox_ottava);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_12->addWidget(line_4, 4, 0, 1, 8);

        horizontalSpacer_56 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_56, 0, 7, 1, 1);

        ottavaPosBelow = new mu::notation::OffsetSelect(groupBox_ottava);
        ottavaPosBelow->setObjectName("ottavaPosBelow");
        ottavaPosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(ottavaPosBelow, 3, 1, 1, 1);

        label_ottava_lineStyle_gapSize = new QLabel(groupBox_ottava);
        label_ottava_lineStyle_gapSize->setObjectName("label_ottava_lineStyle_gapSize");

        gridLayout_12->addWidget(label_ottava_lineStyle_gapSize, 9, 0, 1, 1);

        resetOttavaLineWidth = new QToolButton(groupBox_ottava);
        resetOttavaLineWidth->setObjectName("resetOttavaLineWidth");
        sizePolicy6.setHeightForWidth(resetOttavaLineWidth->sizePolicy().hasHeightForWidth());
        resetOttavaLineWidth->setSizePolicy(sizePolicy6);
        resetOttavaLineWidth->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaLineWidth, 6, 2, 1, 1);

        resetOttavaPosBelow = new QToolButton(groupBox_ottava);
        resetOttavaPosBelow->setObjectName("resetOttavaPosBelow");
        sizePolicy6.setHeightForWidth(resetOttavaPosBelow->sizePolicy().hasHeightForWidth());
        resetOttavaPosBelow->setSizePolicy(sizePolicy6);
        resetOttavaPosBelow->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaPosBelow, 3, 2, 1, 1);

        ottavaLineWidth = new QDoubleSpinBox(groupBox_ottava);
        ottavaLineWidth->setObjectName("ottavaLineWidth");
        ottavaLineWidth->setKeyboardTracking(false);

        gridLayout_12->addWidget(ottavaLineWidth, 6, 1, 1, 1);

        ottavaPosAbove = new mu::notation::OffsetSelect(groupBox_ottava);
        ottavaPosAbove->setObjectName("ottavaPosAbove");
        ottavaPosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_12->addWidget(ottavaPosAbove, 2, 1, 1, 1);

        ottavaLineStyleDashSize = new QDoubleSpinBox(groupBox_ottava);
        ottavaLineStyleDashSize->setObjectName("ottavaLineStyleDashSize");
        ottavaLineStyleDashSize->setKeyboardTracking(false);
        ottavaLineStyleDashSize->setMinimum(0.100000000000000);
        ottavaLineStyleDashSize->setMaximum(100.000000000000000);
        ottavaLineStyleDashSize->setSingleStep(0.100000000000000);

        gridLayout_12->addWidget(ottavaLineStyleDashSize, 8, 1, 1, 1);

        ottavaLineStyleGapSize = new QDoubleSpinBox(groupBox_ottava);
        ottavaLineStyleGapSize->setObjectName("ottavaLineStyleGapSize");
        ottavaLineStyleGapSize->setKeyboardTracking(false);
        ottavaLineStyleGapSize->setMinimum(0.100000000000000);
        ottavaLineStyleGapSize->setMaximum(100.000000000000000);
        ottavaLineStyleGapSize->setSingleStep(0.100000000000000);

        gridLayout_12->addWidget(ottavaLineStyleGapSize, 9, 1, 1, 1);

        resetOttavaLineStyleGapSize = new QToolButton(groupBox_ottava);
        resetOttavaLineStyleGapSize->setObjectName("resetOttavaLineStyleGapSize");
        sizePolicy6.setHeightForWidth(resetOttavaLineStyleGapSize->sizePolicy().hasHeightForWidth());
        resetOttavaLineStyleGapSize->setSizePolicy(sizePolicy6);
        resetOttavaLineStyleGapSize->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaLineStyleGapSize, 9, 2, 1, 1);

        resetOttavaLineStyleDashSize = new QToolButton(groupBox_ottava);
        resetOttavaLineStyleDashSize->setObjectName("resetOttavaLineStyleDashSize");
        sizePolicy6.setHeightForWidth(resetOttavaLineStyleDashSize->sizePolicy().hasHeightForWidth());
        resetOttavaLineStyleDashSize->setSizePolicy(sizePolicy6);
        resetOttavaLineStyleDashSize->setText(QString::fromUtf8(""));

        gridLayout_12->addWidget(resetOttavaLineStyleDashSize, 8, 2, 1, 1);


        verticalLayout_47->addWidget(groupBox_ottava);

        verticalSpacer_14 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_47->addItem(verticalSpacer_14);

        pageStack->addWidget(PageOttava);
        PagePedal = new QWidget();
        PagePedal->setObjectName("PagePedal");
        verticalLayout_34 = new QVBoxLayout(PagePedal);
        verticalLayout_34->setObjectName("verticalLayout_34");
        groupBox_pedalLine = new QGroupBox(PagePedal);
        groupBox_pedalLine->setObjectName("groupBox_pedalLine");
        gridLayout11 = new QGridLayout(groupBox_pedalLine);
        gridLayout11->setObjectName("gridLayout11");
        pedalLinePlacement = new QComboBox(groupBox_pedalLine);
        pedalLinePlacement->addItem(QString::fromUtf8("Above"));
        pedalLinePlacement->addItem(QString::fromUtf8("Below"));
        pedalLinePlacement->setObjectName("pedalLinePlacement");

        gridLayout11->addWidget(pedalLinePlacement, 0, 1, 1, 1);

        pedalLineWidth = new QDoubleSpinBox(groupBox_pedalLine);
        pedalLineWidth->setObjectName("pedalLineWidth");
        pedalLineWidth->setKeyboardTracking(false);
        pedalLineWidth->setSingleStep(0.100000000000000);

        gridLayout11->addWidget(pedalLineWidth, 4, 1, 1, 1);

        resetPedalLinePosAbove = new QToolButton(groupBox_pedalLine);
        resetPedalLinePosAbove->setObjectName("resetPedalLinePosAbove");
        resetPedalLinePosAbove->setText(QString::fromUtf8(""));

        gridLayout11->addWidget(resetPedalLinePosAbove, 1, 3, 1, 1);

        resetPedalLineStyle = new QToolButton(groupBox_pedalLine);
        resetPedalLineStyle->setObjectName("resetPedalLineStyle");
        resetPedalLineStyle->setText(QString::fromUtf8(""));

        gridLayout11->addWidget(resetPedalLineStyle, 5, 3, 1, 1);

        label_106 = new QLabel(groupBox_pedalLine);
        label_106->setObjectName("label_106");

        gridLayout11->addWidget(label_106, 5, 0, 1, 1);

        label_139 = new QLabel(groupBox_pedalLine);
        label_139->setObjectName("label_139");

        gridLayout11->addWidget(label_139, 2, 0, 1, 1);

        resetPedalLinePlacement = new QToolButton(groupBox_pedalLine);
        resetPedalLinePlacement->setObjectName("resetPedalLinePlacement");
        resetPedalLinePlacement->setText(QString::fromUtf8(""));

        gridLayout11->addWidget(resetPedalLinePlacement, 0, 3, 1, 1);

        label_107 = new QLabel(groupBox_pedalLine);
        label_107->setObjectName("label_107");

        gridLayout11->addWidget(label_107, 4, 0, 1, 1);

        label_96 = new QLabel(groupBox_pedalLine);
        label_96->setObjectName("label_96");

        gridLayout11->addWidget(label_96, 1, 0, 1, 1);

        pedalLinePosBelow = new mu::notation::OffsetSelect(groupBox_pedalLine);
        pedalLinePosBelow->setObjectName("pedalLinePosBelow");
        pedalLinePosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout11->addWidget(pedalLinePosBelow, 2, 1, 1, 1);

        pedalLineStyle = new QComboBox(groupBox_pedalLine);
        pedalLineStyle->addItem(QString());
        pedalLineStyle->addItem(QString());
        pedalLineStyle->addItem(QString());
        pedalLineStyle->addItem(QString());
        pedalLineStyle->addItem(QString());
        pedalLineStyle->setObjectName("pedalLineStyle");

        gridLayout11->addWidget(pedalLineStyle, 5, 1, 1, 1);

        label_124 = new QLabel(groupBox_pedalLine);
        label_124->setObjectName("label_124");

        gridLayout11->addWidget(label_124, 0, 0, 1, 1);

        resetPedalLineWidth = new QToolButton(groupBox_pedalLine);
        resetPedalLineWidth->setObjectName("resetPedalLineWidth");
        resetPedalLineWidth->setText(QString::fromUtf8(""));

        gridLayout11->addWidget(resetPedalLineWidth, 4, 3, 1, 1);

        resetPedalLinePosBelow = new QToolButton(groupBox_pedalLine);
        resetPedalLinePosBelow->setObjectName("resetPedalLinePosBelow");
        resetPedalLinePosBelow->setText(QString::fromUtf8(""));

        gridLayout11->addWidget(resetPedalLinePosBelow, 2, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout11->addItem(horizontalSpacer_8, 1, 4, 1, 1);

        line_3 = new QFrame(groupBox_pedalLine);
        line_3->setObjectName("line_3");
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout11->addWidget(line_3, 3, 0, 1, 5);

        label_pedalLine_lineStyle_dashSize = new QLabel(groupBox_pedalLine);
        label_pedalLine_lineStyle_dashSize->setObjectName("label_pedalLine_lineStyle_dashSize");

        gridLayout11->addWidget(label_pedalLine_lineStyle_dashSize, 6, 0, 1, 1);

        pedalLinePosAbove = new mu::notation::OffsetSelect(groupBox_pedalLine);
        pedalLinePosAbove->setObjectName("pedalLinePosAbove");
        pedalLinePosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout11->addWidget(pedalLinePosAbove, 1, 1, 1, 1);

        label_pedalLine_lineStyle_gapSize = new QLabel(groupBox_pedalLine);
        label_pedalLine_lineStyle_gapSize->setObjectName("label_pedalLine_lineStyle_gapSize");

        gridLayout11->addWidget(label_pedalLine_lineStyle_gapSize, 7, 0, 1, 1);

        pedalLineStyleDashSize = new QDoubleSpinBox(groupBox_pedalLine);
        pedalLineStyleDashSize->setObjectName("pedalLineStyleDashSize");
        pedalLineStyleDashSize->setKeyboardTracking(false);
        pedalLineStyleDashSize->setMinimum(0.100000000000000);
        pedalLineStyleDashSize->setMaximum(100.000000000000000);
        pedalLineStyleDashSize->setSingleStep(0.100000000000000);

        gridLayout11->addWidget(pedalLineStyleDashSize, 6, 1, 1, 1);

        pedalLineStyleGapSize = new QDoubleSpinBox(groupBox_pedalLine);
        pedalLineStyleGapSize->setObjectName("pedalLineStyleGapSize");
        pedalLineStyleGapSize->setKeyboardTracking(false);
        pedalLineStyleGapSize->setMinimum(0.100000000000000);
        pedalLineStyleGapSize->setMaximum(100.000000000000000);
        pedalLineStyleGapSize->setSingleStep(0.100000000000000);

        gridLayout11->addWidget(pedalLineStyleGapSize, 7, 1, 1, 1);

        resetPedalLineStyleDashSize = new QToolButton(groupBox_pedalLine);
        resetPedalLineStyleDashSize->setObjectName("resetPedalLineStyleDashSize");
        sizePolicy6.setHeightForWidth(resetPedalLineStyleDashSize->sizePolicy().hasHeightForWidth());
        resetPedalLineStyleDashSize->setSizePolicy(sizePolicy6);
        resetPedalLineStyleDashSize->setText(QString::fromUtf8(""));

        gridLayout11->addWidget(resetPedalLineStyleDashSize, 6, 3, 1, 1);

        resetPedalLineStyleGapSize = new QToolButton(groupBox_pedalLine);
        resetPedalLineStyleGapSize->setObjectName("resetPedalLineStyleGapSize");
        sizePolicy6.setHeightForWidth(resetPedalLineStyleGapSize->sizePolicy().hasHeightForWidth());
        resetPedalLineStyleGapSize->setSizePolicy(sizePolicy6);
        resetPedalLineStyleGapSize->setText(QString::fromUtf8(""));

        gridLayout11->addWidget(resetPedalLineStyleGapSize, 7, 3, 1, 1);


        verticalLayout_34->addWidget(groupBox_pedalLine);

        verticalSpacer_19 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_34->addItem(verticalSpacer_19);

        pageStack->addWidget(PagePedal);
        PageTrill = new QWidget();
        PageTrill->setObjectName("PageTrill");
        verticalLayout_48 = new QVBoxLayout(PageTrill);
        verticalLayout_48->setObjectName("verticalLayout_48");
        groupBox_trillLine = new QGroupBox(PageTrill);
        groupBox_trillLine->setObjectName("groupBox_trillLine");
        gridLayout_14 = new QGridLayout(groupBox_trillLine);
        gridLayout_14->setObjectName("gridLayout_14");
        label_97 = new QLabel(groupBox_trillLine);
        label_97->setObjectName("label_97");

        gridLayout_14->addWidget(label_97, 1, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_10, 1, 3, 1, 1);

        resetTrillLinePosAbove = new QToolButton(groupBox_trillLine);
        resetTrillLinePosAbove->setObjectName("resetTrillLinePosAbove");
        resetTrillLinePosAbove->setText(QString::fromUtf8(""));

        gridLayout_14->addWidget(resetTrillLinePosAbove, 1, 2, 1, 1);

        trillLinePlacement = new QComboBox(groupBox_trillLine);
        trillLinePlacement->addItem(QString::fromUtf8("Above"));
        trillLinePlacement->addItem(QString::fromUtf8("Below"));
        trillLinePlacement->setObjectName("trillLinePlacement");

        gridLayout_14->addWidget(trillLinePlacement, 0, 1, 1, 1);

        label_125 = new QLabel(groupBox_trillLine);
        label_125->setObjectName("label_125");

        gridLayout_14->addWidget(label_125, 0, 0, 1, 1);

        resetTrillLinePlacement = new QToolButton(groupBox_trillLine);
        resetTrillLinePlacement->setObjectName("resetTrillLinePlacement");
        resetTrillLinePlacement->setText(QString::fromUtf8(""));

        gridLayout_14->addWidget(resetTrillLinePlacement, 0, 2, 1, 1);

        label_140 = new QLabel(groupBox_trillLine);
        label_140->setObjectName("label_140");

        gridLayout_14->addWidget(label_140, 2, 0, 1, 1);

        resetTrillLinePosBelow = new QToolButton(groupBox_trillLine);
        resetTrillLinePosBelow->setObjectName("resetTrillLinePosBelow");
        resetTrillLinePosBelow->setText(QString::fromUtf8(""));

        gridLayout_14->addWidget(resetTrillLinePosBelow, 2, 2, 1, 1);

        trillLinePosAbove = new mu::notation::OffsetSelect(groupBox_trillLine);
        trillLinePosAbove->setObjectName("trillLinePosAbove");
        trillLinePosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_14->addWidget(trillLinePosAbove, 1, 1, 1, 1);

        trillLinePosBelow = new mu::notation::OffsetSelect(groupBox_trillLine);
        trillLinePosBelow->setObjectName("trillLinePosBelow");
        trillLinePosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_14->addWidget(trillLinePosBelow, 2, 1, 1, 1);


        verticalLayout_48->addWidget(groupBox_trillLine);

        verticalSpacer_18 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_48->addItem(verticalSpacer_18);

        pageStack->addWidget(PageTrill);
        PageVibrato = new QWidget();
        PageVibrato->setObjectName("PageVibrato");
        verticalLayout_481 = new QVBoxLayout(PageVibrato);
        verticalLayout_481->setObjectName("verticalLayout_481");
        groupBox_vibratoLine = new QGroupBox(PageVibrato);
        groupBox_vibratoLine->setObjectName("groupBox_vibratoLine");
        gridLayout_141 = new QGridLayout(groupBox_vibratoLine);
        gridLayout_141->setObjectName("gridLayout_141");
        label_971 = new QLabel(groupBox_vibratoLine);
        label_971->setObjectName("label_971");

        gridLayout_141->addWidget(label_971, 1, 0, 1, 1);

        horizontalSpacer_101 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_141->addItem(horizontalSpacer_101, 1, 3, 1, 1);

        resetVibratoLinePosAbove = new QToolButton(groupBox_vibratoLine);
        resetVibratoLinePosAbove->setObjectName("resetVibratoLinePosAbove");
        resetVibratoLinePosAbove->setText(QString::fromUtf8(""));

        gridLayout_141->addWidget(resetVibratoLinePosAbove, 1, 2, 1, 1);

        vibratoLinePlacement = new QComboBox(groupBox_vibratoLine);
        vibratoLinePlacement->addItem(QString::fromUtf8("Above"));
        vibratoLinePlacement->addItem(QString::fromUtf8("Below"));
        vibratoLinePlacement->setObjectName("vibratoLinePlacement");

        gridLayout_141->addWidget(vibratoLinePlacement, 0, 1, 1, 1);

        label_1251 = new QLabel(groupBox_vibratoLine);
        label_1251->setObjectName("label_1251");

        gridLayout_141->addWidget(label_1251, 0, 0, 1, 1);

        resetVibratoLinePlacement = new QToolButton(groupBox_vibratoLine);
        resetVibratoLinePlacement->setObjectName("resetVibratoLinePlacement");
        resetVibratoLinePlacement->setText(QString::fromUtf8(""));

        gridLayout_141->addWidget(resetVibratoLinePlacement, 0, 2, 1, 1);

        label_1401 = new QLabel(groupBox_vibratoLine);
        label_1401->setObjectName("label_1401");

        gridLayout_141->addWidget(label_1401, 2, 0, 1, 1);

        resetVibratoLinePosBelow = new QToolButton(groupBox_vibratoLine);
        resetVibratoLinePosBelow->setObjectName("resetVibratoLinePosBelow");
        resetVibratoLinePosBelow->setText(QString::fromUtf8(""));

        gridLayout_141->addWidget(resetVibratoLinePosBelow, 2, 2, 1, 1);

        vibratoLinePosAbove = new mu::notation::OffsetSelect(groupBox_vibratoLine);
        vibratoLinePosAbove->setObjectName("vibratoLinePosAbove");
        vibratoLinePosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_141->addWidget(vibratoLinePosAbove, 1, 1, 1, 1);

        vibratoLinePosBelow = new mu::notation::OffsetSelect(groupBox_vibratoLine);
        vibratoLinePosBelow->setObjectName("vibratoLinePosBelow");
        vibratoLinePosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_141->addWidget(vibratoLinePosBelow, 2, 1, 1, 1);


        verticalLayout_481->addWidget(groupBox_vibratoLine);

        verticalSpacer_181 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_481->addItem(verticalSpacer_181);

        pageStack->addWidget(PageVibrato);
        PageBend = new QWidget();
        PageBend->setObjectName("PageBend");
        gridLayout_35 = new QGridLayout(PageBend);
        gridLayout_35->setObjectName("gridLayout_35");
        fullBendStyleBoxSelector = new QGroupBox(PageBend);
        fullBendStyleBoxSelector->setObjectName("fullBendStyleBoxSelector");
        verticalLayout_55 = new QVBoxLayout(fullBendStyleBoxSelector);
        verticalLayout_55->setObjectName("verticalLayout_55");

        gridLayout_35->addWidget(fullBendStyleBoxSelector, 1, 0, 1, 1);

        groupBox_bend = new QGroupBox(PageBend);
        groupBox_bend->setObjectName("groupBox_bend");
        verticalLayout_58 = new QVBoxLayout(groupBox_bend);
        verticalLayout_58->setObjectName("verticalLayout_58");
        groupBox_bendsStandardStaff = new QGroupBox(groupBox_bend);
        groupBox_bendsStandardStaff->setObjectName("groupBox_bendsStandardStaff");
        gridLayout_61 = new QGridLayout(groupBox_bendsStandardStaff);
        gridLayout_61->setObjectName("gridLayout_61");
        horizontalSpacer_64 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_61->addItem(horizontalSpacer_64, 0, 3, 1, 1);

        label_171 = new QLabel(groupBox_bendsStandardStaff);
        label_171->setObjectName("label_171");

        gridLayout_61->addWidget(label_171, 0, 0, 1, 1);

        bendLineWidth = new QDoubleSpinBox(groupBox_bendsStandardStaff);
        bendLineWidth->setObjectName("bendLineWidth");
        bendLineWidth->setSingleStep(0.010000000000000);

        gridLayout_61->addWidget(bendLineWidth, 0, 1, 1, 1);

        resetBendLineWidth = new QToolButton(groupBox_bendsStandardStaff);
        resetBendLineWidth->setObjectName("resetBendLineWidth");
        resetBendLineWidth->setText(QString::fromUtf8(""));

        gridLayout_61->addWidget(resetBendLineWidth, 0, 2, 1, 1);


        verticalLayout_58->addWidget(groupBox_bendsStandardStaff);

        groupBox_bendsTablature = new QGroupBox(groupBox_bend);
        groupBox_bendsTablature->setObjectName("groupBox_bendsTablature");
        gridLayout_63 = new QGridLayout(groupBox_bendsTablature);
        gridLayout_63->setObjectName("gridLayout_63");
        label_184 = new QLabel(groupBox_bendsTablature);
        label_184->setObjectName("label_184");

        gridLayout_63->addWidget(label_184, 1, 0, 1, 1);

        resetBendArrowWidth = new QToolButton(groupBox_bendsTablature);
        resetBendArrowWidth->setObjectName("resetBendArrowWidth");
        resetBendArrowWidth->setText(QString::fromUtf8(""));

        gridLayout_63->addWidget(resetBendArrowWidth, 1, 2, 1, 1);

        bendArrowHeight = new QDoubleSpinBox(groupBox_bendsTablature);
        bendArrowHeight->setObjectName("bendArrowHeight");
        bendArrowHeight->setSingleStep(0.100000000000000);

        gridLayout_63->addWidget(bendArrowHeight, 1, 4, 1, 1);

        label_193 = new QLabel(groupBox_bendsTablature);
        label_193->setObjectName("label_193");

        gridLayout_63->addWidget(label_193, 1, 3, 1, 1);

        bendArrowWidth = new QDoubleSpinBox(groupBox_bendsTablature);
        bendArrowWidth->setObjectName("bendArrowWidth");
        bendArrowWidth->setKeyboardTracking(false);
        bendArrowWidth->setMinimum(0.000000000000000);
        bendArrowWidth->setMaximum(10.000000000000000);
        bendArrowWidth->setSingleStep(0.100000000000000);
        bendArrowWidth->setValue(1.000000000000000);

        gridLayout_63->addWidget(bendArrowWidth, 1, 1, 1, 1);

        resetBendArrowHeight = new QToolButton(groupBox_bendsTablature);
        resetBendArrowHeight->setObjectName("resetBendArrowHeight");
        resetBendArrowHeight->setText(QString::fromUtf8(""));

        gridLayout_63->addWidget(resetBendArrowHeight, 1, 5, 1, 1);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_63->addItem(horizontalSpacer_46, 1, 6, 1, 1);

        label_179 = new QLabel(groupBox_bendsTablature);
        label_179->setObjectName("label_179");

        gridLayout_63->addWidget(label_179, 0, 0, 1, 1);

        bendLineWidthTab = new QDoubleSpinBox(groupBox_bendsTablature);
        bendLineWidthTab->setObjectName("bendLineWidthTab");
        bendLineWidthTab->setKeyboardTracking(false);
        bendLineWidthTab->setMinimum(0.000000000000000);
        bendLineWidthTab->setMaximum(10.000000000000000);
        bendLineWidthTab->setSingleStep(0.010000000000000);
        bendLineWidthTab->setValue(1.000000000000000);

        gridLayout_63->addWidget(bendLineWidthTab, 0, 1, 1, 1);

        resetBendLineWidthTab = new QToolButton(groupBox_bendsTablature);
        resetBendLineWidthTab->setObjectName("resetBendLineWidthTab");
        resetBendLineWidthTab->setText(QString::fromUtf8(""));

        gridLayout_63->addWidget(resetBendLineWidthTab, 0, 2, 1, 1);


        verticalLayout_58->addWidget(groupBox_bendsTablature);


        gridLayout_35->addWidget(groupBox_bend, 0, 0, 1, 1);

        verticalSpacer_31 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_35->addItem(verticalSpacer_31, 3, 0, 1, 1);

        groupBox_FretNumbers = new QGroupBox(PageBend);
        groupBox_FretNumbers->setObjectName("groupBox_FretNumbers");
        verticalLayout_56 = new QVBoxLayout(groupBox_FretNumbers);
        verticalLayout_56->setObjectName("verticalLayout_56");
        guitarBendCueSizedGraceFrets = new QCheckBox(groupBox_FretNumbers);
        guitarBendCueSizedGraceFrets->setObjectName("guitarBendCueSizedGraceFrets");

        verticalLayout_56->addWidget(guitarBendCueSizedGraceFrets);


        gridLayout_35->addWidget(groupBox_FretNumbers, 2, 0, 1, 1);

        pageStack->addWidget(PageBend);
        PageTextLine = new QWidget();
        PageTextLine->setObjectName("PageTextLine");
        verticalLayout_45 = new QVBoxLayout(PageTextLine);
        verticalLayout_45->setObjectName("verticalLayout_45");
        groupBox_textLine = new QGroupBox(PageTextLine);
        groupBox_textLine->setObjectName("groupBox_textLine");
        gridLayout_18 = new QGridLayout(groupBox_textLine);
        gridLayout_18->setObjectName("gridLayout_18");
        label_135 = new QLabel(groupBox_textLine);
        label_135->setObjectName("label_135");
        sizePolicy6.setHeightForWidth(label_135->sizePolicy().hasHeightForWidth());
        label_135->setSizePolicy(sizePolicy6);

        gridLayout_18->addWidget(label_135, 2, 0, 1, 1);

        textLinePlacement = new QComboBox(groupBox_textLine);
        textLinePlacement->addItem(QString::fromUtf8("Above"));
        textLinePlacement->addItem(QString::fromUtf8("Below"));
        textLinePlacement->setObjectName("textLinePlacement");

        gridLayout_18->addWidget(textLinePlacement, 0, 1, 1, 1);

        resetTextLinePlacement = new QToolButton(groupBox_textLine);
        resetTextLinePlacement->setObjectName("resetTextLinePlacement");
        resetTextLinePlacement->setText(QString::fromUtf8(""));

        gridLayout_18->addWidget(resetTextLinePlacement, 0, 2, 1, 1);

        resetTextLinePosBelow = new QToolButton(groupBox_textLine);
        resetTextLinePosBelow->setObjectName("resetTextLinePosBelow");
        resetTextLinePosBelow->setText(QString::fromUtf8(""));

        gridLayout_18->addWidget(resetTextLinePosBelow, 2, 2, 1, 1);

        label_136 = new QLabel(groupBox_textLine);
        label_136->setObjectName("label_136");
        sizePolicy6.setHeightForWidth(label_136->sizePolicy().hasHeightForWidth());
        label_136->setSizePolicy(sizePolicy6);

        gridLayout_18->addWidget(label_136, 1, 0, 1, 1);

        resetTextLinePosAbove = new QToolButton(groupBox_textLine);
        resetTextLinePosAbove->setObjectName("resetTextLinePosAbove");
        resetTextLinePosAbove->setText(QString::fromUtf8(""));

        gridLayout_18->addWidget(resetTextLinePosAbove, 1, 2, 1, 1);

        label_72 = new QLabel(groupBox_textLine);
        label_72->setObjectName("label_72");

        gridLayout_18->addWidget(label_72, 0, 0, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_33, 1, 3, 1, 1);

        textLinePosAbove = new mu::notation::OffsetSelect(groupBox_textLine);
        textLinePosAbove->setObjectName("textLinePosAbove");
        textLinePosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_18->addWidget(textLinePosAbove, 1, 1, 1, 1);

        textLinePosBelow = new mu::notation::OffsetSelect(groupBox_textLine);
        textLinePosBelow->setObjectName("textLinePosBelow");
        textLinePosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_18->addWidget(textLinePosBelow, 2, 1, 1, 1);


        verticalLayout_45->addWidget(groupBox_textLine);

        verticalSpacer_24 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_45->addItem(verticalSpacer_24);

        pageStack->addWidget(PageTextLine);
        PageSystemTextLine = new QWidget();
        PageSystemTextLine->setObjectName("PageSystemTextLine");
        verticalLayout_54 = new QVBoxLayout(PageSystemTextLine);
        verticalLayout_54->setObjectName("verticalLayout_54");
        groupBox_systemTextLine = new QGroupBox(PageSystemTextLine);
        groupBox_systemTextLine->setObjectName("groupBox_systemTextLine");
        gridLayout_461 = new QGridLayout(groupBox_systemTextLine);
        gridLayout_461->setObjectName("gridLayout_461");
        label_211 = new QLabel(groupBox_systemTextLine);
        label_211->setObjectName("label_211");
        sizePolicy6.setHeightForWidth(label_211->sizePolicy().hasHeightForWidth());
        label_211->setSizePolicy(sizePolicy6);

        gridLayout_461->addWidget(label_211, 2, 0, 1, 1);

        systemTextLinePlacement = new QComboBox(groupBox_systemTextLine);
        systemTextLinePlacement->addItem(QString::fromUtf8("Above"));
        systemTextLinePlacement->addItem(QString::fromUtf8("Below"));
        systemTextLinePlacement->setObjectName("systemTextLinePlacement");

        gridLayout_461->addWidget(systemTextLinePlacement, 0, 1, 1, 1);

        resetSystemTextLinePlacement = new QToolButton(groupBox_systemTextLine);
        resetSystemTextLinePlacement->setObjectName("resetSystemTextLinePlacement");
        resetSystemTextLinePlacement->setText(QString::fromUtf8(""));

        gridLayout_461->addWidget(resetSystemTextLinePlacement, 0, 2, 1, 1);

        resetSystemTextLinePosBelow = new QToolButton(groupBox_systemTextLine);
        resetSystemTextLinePosBelow->setObjectName("resetSystemTextLinePosBelow");
        resetSystemTextLinePosBelow->setText(QString::fromUtf8(""));

        gridLayout_461->addWidget(resetSystemTextLinePosBelow, 2, 2, 1, 1);

        label_213 = new QLabel(groupBox_systemTextLine);
        label_213->setObjectName("label_213");
        sizePolicy6.setHeightForWidth(label_213->sizePolicy().hasHeightForWidth());
        label_213->setSizePolicy(sizePolicy6);

        gridLayout_461->addWidget(label_213, 1, 0, 1, 1);

        resetSystemTextLinePosAbove = new QToolButton(groupBox_systemTextLine);
        resetSystemTextLinePosAbove->setObjectName("resetSystemTextLinePosAbove");
        resetSystemTextLinePosAbove->setText(QString::fromUtf8(""));

        gridLayout_461->addWidget(resetSystemTextLinePosAbove, 1, 2, 1, 1);

        label_214 = new QLabel(groupBox_systemTextLine);
        label_214->setObjectName("label_214");

        gridLayout_461->addWidget(label_214, 0, 0, 1, 1);

        horizontalSpacer_47 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_461->addItem(horizontalSpacer_47, 1, 3, 1, 1);

        systemTextLinePosAbove = new mu::notation::OffsetSelect(groupBox_systemTextLine);
        systemTextLinePosAbove->setObjectName("systemTextLinePosAbove");
        systemTextLinePosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_461->addWidget(systemTextLinePosAbove, 1, 1, 1, 1);

        systemTextLinePosBelow = new mu::notation::OffsetSelect(groupBox_systemTextLine);
        systemTextLinePosBelow->setObjectName("systemTextLinePosBelow");
        systemTextLinePosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_461->addWidget(systemTextLinePosBelow, 2, 1, 1, 1);


        verticalLayout_54->addWidget(groupBox_systemTextLine);

        verticalSpacer_341 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_54->addItem(verticalSpacer_341);

        pageStack->addWidget(PageSystemTextLine);
        PageArticulationsOrnaments = new QWidget();
        PageArticulationsOrnaments->setObjectName("PageArticulationsOrnaments");
        verticalLayout_24 = new QVBoxLayout(PageArticulationsOrnaments);
        verticalLayout_24->setObjectName("verticalLayout_24");
        groupBox_articulationsOrnaments = new QGroupBox(PageArticulationsOrnaments);
        groupBox_articulationsOrnaments->setObjectName("groupBox_articulationsOrnaments");
        gridLayout_9 = new QGridLayout(groupBox_articulationsOrnaments);
        gridLayout_9->setObjectName("gridLayout_9");
        resetArticStaffDist = new QToolButton(groupBox_articulationsOrnaments);
        resetArticStaffDist->setObjectName("resetArticStaffDist");

        gridLayout_9->addWidget(resetArticStaffDist, 3, 2, 1, 1);

        articNoteHeadDist = new QDoubleSpinBox(groupBox_articulationsOrnaments);
        articNoteHeadDist->setObjectName("articNoteHeadDist");
        articNoteHeadDist->setKeyboardTracking(false);
        articNoteHeadDist->setSingleStep(0.100000000000000);

        gridLayout_9->addWidget(articNoteHeadDist, 1, 1, 1, 1);

        label_37 = new QLabel(groupBox_articulationsOrnaments);
        label_37->setObjectName("label_37");

        gridLayout_9->addWidget(label_37, 2, 0, 1, 1);

        label_32 = new QLabel(groupBox_articulationsOrnaments);
        label_32->setObjectName("label_32");

        gridLayout_9->addWidget(label_32, 4, 0, 1, 1);

        articStaffDist = new QDoubleSpinBox(groupBox_articulationsOrnaments);
        articStaffDist->setObjectName("articStaffDist");
        articStaffDist->setKeyboardTracking(false);
        articStaffDist->setSingleStep(0.100000000000000);

        gridLayout_9->addWidget(articStaffDist, 3, 1, 1, 1);

        articulationMag = new QSpinBox(groupBox_articulationsOrnaments);
        articulationMag->setObjectName("articulationMag");
        articulationMag->setKeyboardTracking(false);
        articulationMag->setSuffix(QString::fromUtf8("%"));
        articulationMag->setMaximum(300);
        articulationMag->setSingleStep(10);
        articulationMag->setValue(100);

        gridLayout_9->addWidget(articulationMag, 4, 1, 1, 1);

        articStemDist = new QDoubleSpinBox(groupBox_articulationsOrnaments);
        articStemDist->setObjectName("articStemDist");
        articStemDist->setKeyboardTracking(false);
        articStemDist->setSingleStep(0.100000000000000);

        gridLayout_9->addWidget(articStemDist, 2, 1, 1, 1);

        resetArticStemDist = new QToolButton(groupBox_articulationsOrnaments);
        resetArticStemDist->setObjectName("resetArticStemDist");

        gridLayout_9->addWidget(resetArticStemDist, 2, 2, 1, 1);

        resetArticNoteHeadDist = new QToolButton(groupBox_articulationsOrnaments);
        resetArticNoteHeadDist->setObjectName("resetArticNoteHeadDist");

        gridLayout_9->addWidget(resetArticNoteHeadDist, 1, 2, 1, 1);

        label_41 = new QLabel(groupBox_articulationsOrnaments);
        label_41->setObjectName("label_41");

        gridLayout_9->addWidget(label_41, 3, 0, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_31, 1, 3, 1, 1);

        label_351 = new QLabel(groupBox_articulationsOrnaments);
        label_351->setObjectName("label_351");

        gridLayout_9->addWidget(label_351, 1, 0, 1, 1);

        resetArticulationMag = new QToolButton(groupBox_articulationsOrnaments);
        resetArticulationMag->setObjectName("resetArticulationMag");

        gridLayout_9->addWidget(resetArticulationMag, 4, 2, 1, 1);

        label_35 = new QLabel(groupBox_articulationsOrnaments);
        label_35->setObjectName("label_35");

        gridLayout_9->addWidget(label_35, 0, 0, 1, 1);

        articMinVerticalDist = new QDoubleSpinBox(groupBox_articulationsOrnaments);
        articMinVerticalDist->setObjectName("articMinVerticalDist");
        articMinVerticalDist->setKeyboardTracking(false);
        articMinVerticalDist->setSingleStep(0.100000000000000);

        gridLayout_9->addWidget(articMinVerticalDist, 0, 1, 1, 1);

        resetArticMinVerticalDist = new QToolButton(groupBox_articulationsOrnaments);
        resetArticMinVerticalDist->setObjectName("resetArticMinVerticalDist");

        gridLayout_9->addWidget(resetArticMinVerticalDist, 0, 2, 1, 1);


        verticalLayout_24->addWidget(groupBox_articulationsOrnaments);

        verticalSpacer_38 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_24->addItem(verticalSpacer_38);

        groupBox_stemSideArticAlign = new QGroupBox(PageArticulationsOrnaments);
        groupBox_stemSideArticAlign->setObjectName("groupBox_stemSideArticAlign");
        verticalLayout_42 = new QVBoxLayout(groupBox_stemSideArticAlign);
        verticalLayout_42->setObjectName("verticalLayout_42");
        radioArticAlignStem = new QRadioButton(groupBox_stemSideArticAlign);
        radioArticAlignStem->setObjectName("radioArticAlignStem");

        verticalLayout_42->addWidget(radioArticAlignStem);

        radioArticAlignNoteHead = new QRadioButton(groupBox_stemSideArticAlign);
        radioArticAlignNoteHead->setObjectName("radioArticAlignNoteHead");

        verticalLayout_42->addWidget(radioArticAlignNoteHead);

        radioArticAlignCenter = new QRadioButton(groupBox_stemSideArticAlign);
        radioArticAlignCenter->setObjectName("radioArticAlignCenter");

        verticalLayout_42->addWidget(radioArticAlignCenter);


        verticalLayout_24->addWidget(groupBox_stemSideArticAlign);

        verticalSpacer_41 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_24->addItem(verticalSpacer_41);

        groupBox_combinedArtic = new QGroupBox(PageArticulationsOrnaments);
        groupBox_combinedArtic->setObjectName("groupBox_combinedArtic");
        verticalLayout_43 = new QVBoxLayout(groupBox_combinedArtic);
        verticalLayout_43->setObjectName("verticalLayout_43");
        radioArticKeepTogether = new QRadioButton(groupBox_combinedArtic);
        radioArticKeepTogether->setObjectName("radioArticKeepTogether");

        verticalLayout_43->addWidget(radioArticKeepTogether);

        radioArticAllowSeparate = new QRadioButton(groupBox_combinedArtic);
        radioArticAllowSeparate->setObjectName("radioArticAllowSeparate");

        verticalLayout_43->addWidget(radioArticAllowSeparate);


        verticalLayout_24->addWidget(groupBox_combinedArtic);

        verticalSpacer_25 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_25);

        pageStack->addWidget(PageArticulationsOrnaments);
        PageFermatas = new QWidget();
        PageFermatas->setObjectName("PageFermatas");
        verticalLayout_53 = new QVBoxLayout(PageFermatas);
        verticalLayout_53->setObjectName("verticalLayout_53");
        groupBox_fermatas = new QGroupBox(PageFermatas);
        groupBox_fermatas->setObjectName("groupBox_fermatas");
        gridLayout_32 = new QGridLayout(groupBox_fermatas);
        gridLayout_32->setObjectName("gridLayout_32");
        label_169 = new QLabel(groupBox_fermatas);
        label_169->setObjectName("label_169");

        gridLayout_32->addWidget(label_169, 2, 0, 1, 1);

        fermataMinDistance = new QDoubleSpinBox(groupBox_fermatas);
        fermataMinDistance->setObjectName("fermataMinDistance");
        fermataMinDistance->setKeyboardTracking(false);
        fermataMinDistance->setMinimum(0.000000000000000);
        fermataMinDistance->setMaximum(1000.000000000000000);
        fermataMinDistance->setSingleStep(0.200000000000000);
        fermataMinDistance->setValue(0.400000000000000);

        gridLayout_32->addWidget(fermataMinDistance, 2, 1, 1, 1);

        fermataPosBelow = new mu::notation::OffsetSelect(groupBox_fermatas);
        fermataPosBelow->setObjectName("fermataPosBelow");
        fermataPosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_32->addWidget(fermataPosBelow, 1, 1, 1, 1);

        label_168 = new QLabel(groupBox_fermatas);
        label_168->setObjectName("label_168");

        gridLayout_32->addWidget(label_168, 0, 0, 1, 1);

        resetFermataMinDistance = new QToolButton(groupBox_fermatas);
        resetFermataMinDistance->setObjectName("resetFermataMinDistance");
        resetFermataMinDistance->setText(QString::fromUtf8(""));

        gridLayout_32->addWidget(resetFermataMinDistance, 2, 2, 1, 1);

        fermataPosAbove = new mu::notation::OffsetSelect(groupBox_fermatas);
        fermataPosAbove->setObjectName("fermataPosAbove");
        fermataPosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_32->addWidget(fermataPosAbove, 0, 1, 1, 1);

        resetFermataPosAbove = new QToolButton(groupBox_fermatas);
        resetFermataPosAbove->setObjectName("resetFermataPosAbove");
        resetFermataPosAbove->setText(QString::fromUtf8(""));

        gridLayout_32->addWidget(resetFermataPosAbove, 0, 2, 1, 1);

        label_167 = new QLabel(groupBox_fermatas);
        label_167->setObjectName("label_167");

        gridLayout_32->addWidget(label_167, 1, 0, 1, 1);

        resetFermataPosBelow = new QToolButton(groupBox_fermatas);
        resetFermataPosBelow->setObjectName("resetFermataPosBelow");
        resetFermataPosBelow->setText(QString::fromUtf8(""));

        gridLayout_32->addWidget(resetFermataPosBelow, 1, 2, 1, 1);

        horizontalSpacer_38 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_32->addItem(horizontalSpacer_38, 0, 3, 1, 1);


        verticalLayout_53->addWidget(groupBox_fermatas);

        verticalSpacer_23 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_53->addItem(verticalSpacer_23);

        pageStack->addWidget(PageFermatas);
        PageStaffText = new QWidget();
        PageStaffText->setObjectName("PageStaffText");
        gridLayout_34 = new QGridLayout(PageStaffText);
        gridLayout_34->setObjectName("gridLayout_34");
        groupBox_staffText = new QGroupBox(PageStaffText);
        groupBox_staffText->setObjectName("groupBox_staffText");
        gridLayout_33 = new QGridLayout(groupBox_staffText);
        gridLayout_33->setObjectName("gridLayout_33");
        horizontalSpacer_45 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_33->addItem(horizontalSpacer_45, 1, 3, 1, 1);

        resetStaffTextPosAbove = new QToolButton(groupBox_staffText);
        resetStaffTextPosAbove->setObjectName("resetStaffTextPosAbove");
        resetStaffTextPosAbove->setText(QString::fromUtf8(""));

        gridLayout_33->addWidget(resetStaffTextPosAbove, 1, 2, 1, 1);

        label_178 = new QLabel(groupBox_staffText);
        label_178->setObjectName("label_178");

        gridLayout_33->addWidget(label_178, 0, 0, 1, 1);

        label_180 = new QLabel(groupBox_staffText);
        label_180->setObjectName("label_180");

        gridLayout_33->addWidget(label_180, 3, 0, 1, 1);

        staffTextMinDistance = new QDoubleSpinBox(groupBox_staffText);
        staffTextMinDistance->setObjectName("staffTextMinDistance");
        sizePolicy5.setHeightForWidth(staffTextMinDistance->sizePolicy().hasHeightForWidth());
        staffTextMinDistance->setSizePolicy(sizePolicy5);
        staffTextMinDistance->setKeyboardTracking(false);
        staffTextMinDistance->setDecimals(1);
        staffTextMinDistance->setMinimum(-100.000000000000000);
        staffTextMinDistance->setSingleStep(0.500000000000000);

        gridLayout_33->addWidget(staffTextMinDistance, 3, 1, 1, 1);

        resetStaffTextPosBelow = new QToolButton(groupBox_staffText);
        resetStaffTextPosBelow->setObjectName("resetStaffTextPosBelow");
        resetStaffTextPosBelow->setText(QString::fromUtf8(""));

        gridLayout_33->addWidget(resetStaffTextPosBelow, 2, 2, 1, 1);

        staffTextPosAbove = new mu::notation::OffsetSelect(groupBox_staffText);
        staffTextPosAbove->setObjectName("staffTextPosAbove");
        staffTextPosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_33->addWidget(staffTextPosAbove, 1, 1, 1, 1);

        resetStaffTextPlacement = new QToolButton(groupBox_staffText);
        resetStaffTextPlacement->setObjectName("resetStaffTextPlacement");
        resetStaffTextPlacement->setText(QString::fromUtf8(""));

        gridLayout_33->addWidget(resetStaffTextPlacement, 0, 2, 1, 1);

        staffTextPosBelow = new mu::notation::OffsetSelect(groupBox_staffText);
        staffTextPosBelow->setObjectName("staffTextPosBelow");
        staffTextPosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_33->addWidget(staffTextPosBelow, 2, 1, 1, 1);

        label_176 = new QLabel(groupBox_staffText);
        label_176->setObjectName("label_176");
        sizePolicy6.setHeightForWidth(label_176->sizePolicy().hasHeightForWidth());
        label_176->setSizePolicy(sizePolicy6);

        gridLayout_33->addWidget(label_176, 2, 0, 1, 1);

        staffTextPlacement = new QComboBox(groupBox_staffText);
        staffTextPlacement->addItem(QString::fromUtf8("Above"));
        staffTextPlacement->addItem(QString::fromUtf8("Below"));
        staffTextPlacement->setObjectName("staffTextPlacement");

        gridLayout_33->addWidget(staffTextPlacement, 0, 1, 1, 1);

        label_177 = new QLabel(groupBox_staffText);
        label_177->setObjectName("label_177");
        sizePolicy6.setHeightForWidth(label_177->sizePolicy().hasHeightForWidth());
        label_177->setSizePolicy(sizePolicy6);

        gridLayout_33->addWidget(label_177, 1, 0, 1, 1);

        resetStaffTextMinDistance = new QToolButton(groupBox_staffText);
        resetStaffTextMinDistance->setObjectName("resetStaffTextMinDistance");
        resetStaffTextMinDistance->setText(QString::fromUtf8(""));

        gridLayout_33->addWidget(resetStaffTextMinDistance, 3, 2, 1, 1);


        gridLayout_34->addWidget(groupBox_staffText, 0, 0, 1, 1);

        verticalSpacer_30 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_34->addItem(verticalSpacer_30, 1, 0, 1, 1);

        pageStack->addWidget(PageStaffText);
        PageTempoText = new QWidget();
        PageTempoText->setObjectName("PageTempoText");
        verticalLayout_50 = new QVBoxLayout(PageTempoText);
        verticalLayout_50->setObjectName("verticalLayout_50");
        groupBox_tempoText = new QGroupBox(PageTempoText);
        groupBox_tempoText->setObjectName("groupBox_tempoText");
        gridLayout_26 = new QGridLayout(groupBox_tempoText);
        gridLayout_26->setObjectName("gridLayout_26");
        label_144 = new QLabel(groupBox_tempoText);
        label_144->setObjectName("label_144");

        gridLayout_26->addWidget(label_144, 3, 0, 1, 1);

        label_142 = new QLabel(groupBox_tempoText);
        label_142->setObjectName("label_142");
        sizePolicy6.setHeightForWidth(label_142->sizePolicy().hasHeightForWidth());
        label_142->setSizePolicy(sizePolicy6);

        gridLayout_26->addWidget(label_142, 2, 0, 1, 1);

        tempoTextPlacement = new QComboBox(groupBox_tempoText);
        tempoTextPlacement->addItem(QString::fromUtf8("Above"));
        tempoTextPlacement->addItem(QString::fromUtf8("Below"));
        tempoTextPlacement->setObjectName("tempoTextPlacement");

        gridLayout_26->addWidget(tempoTextPlacement, 0, 1, 1, 1);

        resetTempoTextPlacement = new QToolButton(groupBox_tempoText);
        resetTempoTextPlacement->setObjectName("resetTempoTextPlacement");
        resetTempoTextPlacement->setText(QString::fromUtf8(""));

        gridLayout_26->addWidget(resetTempoTextPlacement, 0, 2, 1, 1);

        resetTempoTextPosBelow = new QToolButton(groupBox_tempoText);
        resetTempoTextPosBelow->setObjectName("resetTempoTextPosBelow");
        resetTempoTextPosBelow->setText(QString::fromUtf8(""));

        gridLayout_26->addWidget(resetTempoTextPosBelow, 2, 2, 1, 1);

        label_143 = new QLabel(groupBox_tempoText);
        label_143->setObjectName("label_143");
        sizePolicy6.setHeightForWidth(label_143->sizePolicy().hasHeightForWidth());
        label_143->setSizePolicy(sizePolicy6);

        gridLayout_26->addWidget(label_143, 1, 0, 1, 1);

        resetTempoTextPosAbove = new QToolButton(groupBox_tempoText);
        resetTempoTextPosAbove->setObjectName("resetTempoTextPosAbove");
        resetTempoTextPosAbove->setText(QString::fromUtf8(""));

        gridLayout_26->addWidget(resetTempoTextPosAbove, 1, 2, 1, 1);

        label_128 = new QLabel(groupBox_tempoText);
        label_128->setObjectName("label_128");

        gridLayout_26->addWidget(label_128, 0, 0, 1, 1);

        horizontalSpacer_34 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_26->addItem(horizontalSpacer_34, 1, 3, 1, 1);

        tempoTextMinDistance = new QDoubleSpinBox(groupBox_tempoText);
        tempoTextMinDistance->setObjectName("tempoTextMinDistance");
        sizePolicy5.setHeightForWidth(tempoTextMinDistance->sizePolicy().hasHeightForWidth());
        tempoTextMinDistance->setSizePolicy(sizePolicy5);
        tempoTextMinDistance->setKeyboardTracking(false);
        tempoTextMinDistance->setDecimals(1);
        tempoTextMinDistance->setMinimum(-100.000000000000000);
        tempoTextMinDistance->setSingleStep(0.500000000000000);

        gridLayout_26->addWidget(tempoTextMinDistance, 3, 1, 1, 1);

        resetTempoTextMinDistance = new QToolButton(groupBox_tempoText);
        resetTempoTextMinDistance->setObjectName("resetTempoTextMinDistance");
        resetTempoTextMinDistance->setText(QString::fromUtf8(""));

        gridLayout_26->addWidget(resetTempoTextMinDistance, 3, 2, 1, 1);

        tempoTextPosAbove = new mu::notation::OffsetSelect(groupBox_tempoText);
        tempoTextPosAbove->setObjectName("tempoTextPosAbove");
        tempoTextPosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_26->addWidget(tempoTextPosAbove, 1, 1, 1, 1);

        tempoTextPosBelow = new mu::notation::OffsetSelect(groupBox_tempoText);
        tempoTextPosBelow->setObjectName("tempoTextPosBelow");
        tempoTextPosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_26->addWidget(tempoTextPosBelow, 2, 1, 1, 1);


        verticalLayout_50->addWidget(groupBox_tempoText);

        verticalSpacer_26 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_50->addItem(verticalSpacer_26);

        pageStack->addWidget(PageTempoText);
        PageLyrics = new QWidget();
        PageLyrics->setObjectName("PageLyrics");
        PageLyrics->setMinimumSize(QSize(150, 0));
        gridLayout_29 = new QGridLayout(PageLyrics);
        gridLayout_29->setObjectName("gridLayout_29");
        gridLayout_29->setContentsMargins(0, 0, 0, 0);
        scrollArea_lyrics = new QScrollArea(PageLyrics);
        scrollArea_lyrics->setObjectName("scrollArea_lyrics");
        scrollArea_lyrics->setFrameShape(QFrame::NoFrame);
        scrollArea_lyrics->setWidgetResizable(true);
        scrollArea_lyrics_contents = new QWidget();
        scrollArea_lyrics_contents->setObjectName("scrollArea_lyrics_contents");
        scrollArea_lyrics_contents->setGeometry(QRect(0, 0, 703, 748));
        verticalLayout_64 = new QVBoxLayout(scrollArea_lyrics_contents);
        verticalLayout_64->setObjectName("verticalLayout_64");
        groupBox_4 = new QGroupBox(scrollArea_lyrics_contents);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_65 = new QVBoxLayout(groupBox_4);
        verticalLayout_65->setObjectName("verticalLayout_65");
        editLyricsTextStyleButton = new QPushButton(groupBox_4);
        editLyricsTextStyleButton->setObjectName("editLyricsTextStyleButton");
        editLyricsTextStyleButton->setMaximumSize(QSize(130, 16777215));

        verticalLayout_65->addWidget(editLyricsTextStyleButton);

        gridLayout_673 = new QGridLayout();
        gridLayout_673->setObjectName("gridLayout_673");
        yLyricsPosBelow = new QDoubleSpinBox(groupBox_4);
        yLyricsPosBelow->setObjectName("yLyricsPosBelow");
        yLyricsPosBelow->setMinimum(-99.989999999999995);
        yLyricsPosBelow->setSingleStep(0.100000000000000);

        gridLayout_673->addWidget(yLyricsPosBelow, 3, 1, 1, 1);

        resetLyricsPosAbove = new QToolButton(groupBox_4);
        resetLyricsPosAbove->setObjectName("resetLyricsPosAbove");
        resetLyricsPosAbove->setText(QString::fromUtf8(""));

        gridLayout_673->addWidget(resetLyricsPosAbove, 2, 2, 1, 1);

        label_minDistance = new QLabel(groupBox_4);
        label_minDistance->setObjectName("label_minDistance");

        gridLayout_673->addWidget(label_minDistance, 3, 4, 1, 1);

        resetLyricsLineHeight = new QToolButton(groupBox_4);
        resetLyricsLineHeight->setObjectName("resetLyricsLineHeight");
        resetLyricsLineHeight->setText(QString::fromUtf8(""));

        gridLayout_673->addWidget(resetLyricsLineHeight, 4, 2, 1, 1);

        label_134 = new QLabel(groupBox_4);
        label_134->setObjectName("label_134");
        sizePolicy5.setHeightForWidth(label_134->sizePolicy().hasHeightForWidth());
        label_134->setSizePolicy(sizePolicy5);

        gridLayout_673->addWidget(label_134, 3, 0, 1, 1);

        lyricsMinDistance = new QDoubleSpinBox(groupBox_4);
        lyricsMinDistance->setObjectName("lyricsMinDistance");
        lyricsMinDistance->setKeyboardTracking(false);
        lyricsMinDistance->setDecimals(2);
        lyricsMinDistance->setMinimum(-100.000000000000000);
        lyricsMinDistance->setSingleStep(0.050000000000000);

        gridLayout_673->addWidget(lyricsMinDistance, 3, 5, 1, 1);

        label_131 = new QLabel(groupBox_4);
        label_131->setObjectName("label_131");
        sizePolicy5.setHeightForWidth(label_131->sizePolicy().hasHeightForWidth());
        label_131->setSizePolicy(sizePolicy5);
        label_131->setMinimumSize(QSize(0, 0));

        gridLayout_673->addWidget(label_131, 0, 4, 1, 1);

        resetLyricsPosBelow = new QToolButton(groupBox_4);
        resetLyricsPosBelow->setObjectName("resetLyricsPosBelow");
        resetLyricsPosBelow->setText(QString::fromUtf8(""));

        gridLayout_673->addWidget(resetLyricsPosBelow, 3, 2, 1, 1);

        yLyricsPosAbove = new QDoubleSpinBox(groupBox_4);
        yLyricsPosAbove->setObjectName("yLyricsPosAbove");
        yLyricsPosAbove->setMinimumSize(QSize(80, 0));
        yLyricsPosAbove->setMinimum(-99.989999999999995);
        yLyricsPosAbove->setSingleStep(0.100000000000000);

        gridLayout_673->addWidget(yLyricsPosAbove, 2, 1, 1, 1);

        lyricsMinBottomDistance = new QDoubleSpinBox(groupBox_4);
        lyricsMinBottomDistance->setObjectName("lyricsMinBottomDistance");
        sizePolicy3.setHeightForWidth(lyricsMinBottomDistance->sizePolicy().hasHeightForWidth());
        lyricsMinBottomDistance->setSizePolicy(sizePolicy3);
        lyricsMinBottomDistance->setKeyboardTracking(false);
        lyricsMinBottomDistance->setDecimals(1);
        lyricsMinBottomDistance->setMinimum(-100.000000000000000);
        lyricsMinBottomDistance->setSingleStep(0.500000000000000);

        gridLayout_673->addWidget(lyricsMinBottomDistance, 2, 5, 1, 1);

        lyricsMinTopDistance = new QDoubleSpinBox(groupBox_4);
        lyricsMinTopDistance->setObjectName("lyricsMinTopDistance");
        sizePolicy3.setHeightForWidth(lyricsMinTopDistance->sizePolicy().hasHeightForWidth());
        lyricsMinTopDistance->setSizePolicy(sizePolicy3);
        lyricsMinTopDistance->setKeyboardTracking(false);
        lyricsMinTopDistance->setDecimals(1);
        lyricsMinTopDistance->setMinimum(-100.000000000000000);
        lyricsMinTopDistance->setSingleStep(0.500000000000000);

        gridLayout_673->addWidget(lyricsMinTopDistance, 0, 5, 1, 1);

        label_137 = new QLabel(groupBox_4);
        label_137->setObjectName("label_137");

        gridLayout_673->addWidget(label_137, 2, 4, 1, 1);

        resetLyricsPlacement = new QToolButton(groupBox_4);
        resetLyricsPlacement->setObjectName("resetLyricsPlacement");
        resetLyricsPlacement->setText(QString::fromUtf8(""));

        gridLayout_673->addWidget(resetLyricsPlacement, 0, 2, 1, 1);

        lyricsAlignVerseNumber = new QCheckBox(groupBox_4);
        lyricsAlignVerseNumber->setObjectName("lyricsAlignVerseNumber");
        sizePolicy5.setHeightForWidth(lyricsAlignVerseNumber->sizePolicy().hasHeightForWidth());
        lyricsAlignVerseNumber->setSizePolicy(sizePolicy5);
        lyricsAlignVerseNumber->setMinimumSize(QSize(0, 0));

        gridLayout_673->addWidget(lyricsAlignVerseNumber, 4, 4, 1, 1);

        lyricsPlacement = new QComboBox(groupBox_4);
        lyricsPlacement->addItem(QString::fromUtf8("Above"));
        lyricsPlacement->addItem(QString::fromUtf8("Below"));
        lyricsPlacement->setObjectName("lyricsPlacement");
        sizePolicy3.setHeightForWidth(lyricsPlacement->sizePolicy().hasHeightForWidth());
        lyricsPlacement->setSizePolicy(sizePolicy3);
        lyricsPlacement->setMinimumSize(QSize(0, 0));
        lyricsPlacement->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_673->addWidget(lyricsPlacement, 0, 1, 1, 1);

        lyricsLineHeight = new QDoubleSpinBox(groupBox_4);
        lyricsLineHeight->setObjectName("lyricsLineHeight");
        lyricsLineHeight->setKeyboardTracking(false);
        lyricsLineHeight->setMinimum(50.000000000000000);
        lyricsLineHeight->setMaximum(1000.000000000000000);

        gridLayout_673->addWidget(lyricsLineHeight, 4, 1, 1, 1);

        label_132 = new QLabel(groupBox_4);
        label_132->setObjectName("label_132");
        sizePolicy5.setHeightForWidth(label_132->sizePolicy().hasHeightForWidth());
        label_132->setSizePolicy(sizePolicy5);

        gridLayout_673->addWidget(label_132, 2, 0, 1, 1);

        label_71 = new QLabel(groupBox_4);
        label_71->setObjectName("label_71");
        sizePolicy5.setHeightForWidth(label_71->sizePolicy().hasHeightForWidth());
        label_71->setSizePolicy(sizePolicy5);

        gridLayout_673->addWidget(label_71, 0, 0, 1, 1);

        horizontalSpacer_672 = new QSpacerItem(16, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_673->addItem(horizontalSpacer_672, 3, 3, 1, 1);

        label_133 = new QLabel(groupBox_4);
        label_133->setObjectName("label_133");
        sizePolicy5.setHeightForWidth(label_133->sizePolicy().hasHeightForWidth());
        label_133->setSizePolicy(sizePolicy5);
        label_133->setMinimumSize(QSize(0, 0));

        gridLayout_673->addWidget(label_133, 4, 0, 1, 1);

        resetLyricsAlignVerseNumber = new QToolButton(groupBox_4);
        resetLyricsAlignVerseNumber->setObjectName("resetLyricsAlignVerseNumber");
        resetLyricsAlignVerseNumber->setMaximumSize(QSize(120, 16777215));
        resetLyricsAlignVerseNumber->setText(QString::fromUtf8(""));

        gridLayout_673->addWidget(resetLyricsAlignVerseNumber, 4, 6, 1, 1);

        resetLyricsMinTopDistance = new QToolButton(groupBox_4);
        resetLyricsMinTopDistance->setObjectName("resetLyricsMinTopDistance");
        resetLyricsMinTopDistance->setText(QString::fromUtf8(""));

        gridLayout_673->addWidget(resetLyricsMinTopDistance, 0, 6, 1, 1);

        resetLyricsMinDistance = new QToolButton(groupBox_4);
        resetLyricsMinDistance->setObjectName("resetLyricsMinDistance");
        resetLyricsMinDistance->setText(QString::fromUtf8(""));

        gridLayout_673->addWidget(resetLyricsMinDistance, 3, 6, 1, 1);

        resetLyricsMinBottomDistance = new QToolButton(groupBox_4);
        resetLyricsMinBottomDistance->setObjectName("resetLyricsMinBottomDistance");
        resetLyricsMinBottomDistance->setText(QString::fromUtf8(""));

        gridLayout_673->addWidget(resetLyricsMinBottomDistance, 2, 6, 1, 1);


        verticalLayout_65->addLayout(gridLayout_673);


        verticalLayout_64->addWidget(groupBox_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        lyricsDashBox = new QGroupBox(scrollArea_lyrics_contents);
        lyricsDashBox->setObjectName("lyricsDashBox");
        verticalLayout_632 = new QVBoxLayout(lyricsDashBox);
        verticalLayout_632->setObjectName("verticalLayout_632");
        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName("gridLayout_23");
        gridLayout_23->setContentsMargins(-1, 0, -1, -1);
        lyricsDashMinLength = new QDoubleSpinBox(lyricsDashBox);
        lyricsDashMinLength->setObjectName("lyricsDashMinLength");
        lyricsDashMinLength->setKeyboardTracking(false);
        lyricsDashMinLength->setMaximum(9.990000000000000);
        lyricsDashMinLength->setSingleStep(0.050000000000000);
        lyricsDashMinLength->setValue(0.400000000000000);

        gridLayout_23->addWidget(lyricsDashMinLength, 0, 1, 1, 1);

        lyricsDashLineThickness = new QDoubleSpinBox(lyricsDashBox);
        lyricsDashLineThickness->setObjectName("lyricsDashLineThickness");
        lyricsDashLineThickness->setKeyboardTracking(false);
        lyricsDashLineThickness->setMaximum(1.000000000000000);
        lyricsDashLineThickness->setSingleStep(0.010000000000000);
        lyricsDashLineThickness->setValue(0.100000000000000);

        gridLayout_23->addWidget(lyricsDashLineThickness, 2, 1, 1, 1);

        label_121 = new QLabel(lyricsDashBox);
        label_121->setObjectName("label_121");

        gridLayout_23->addWidget(label_121, 4, 0, 1, 1);

        resetLyricsDashLineThickness = new QToolButton(lyricsDashBox);
        resetLyricsDashLineThickness->setObjectName("resetLyricsDashLineThickness");
        resetLyricsDashLineThickness->setText(QString::fromUtf8(""));

        gridLayout_23->addWidget(resetLyricsDashLineThickness, 2, 2, 1, 1);

        resetLyricsDashPad = new QToolButton(lyricsDashBox);
        resetLyricsDashPad->setObjectName("resetLyricsDashPad");
        resetLyricsDashPad->setText(QString::fromUtf8(""));

        gridLayout_23->addWidget(resetLyricsDashPad, 3, 2, 1, 1);

        label_195 = new QLabel(lyricsDashBox);
        label_195->setObjectName("label_195");

        gridLayout_23->addWidget(label_195, 3, 0, 1, 1);

        lyricsDashPad = new QDoubleSpinBox(lyricsDashBox);
        lyricsDashPad->setObjectName("lyricsDashPad");
        lyricsDashPad->setKeyboardTracking(false);
        lyricsDashPad->setMaximum(1.000000000000000);
        lyricsDashPad->setSingleStep(0.010000000000000);
        lyricsDashPad->setValue(0.100000000000000);

        gridLayout_23->addWidget(lyricsDashPad, 3, 1, 1, 1);

        label_189 = new QLabel(lyricsDashBox);
        label_189->setObjectName("label_189");

        gridLayout_23->addWidget(label_189, 2, 0, 1, 1);

        resetLyricsDashMaxLength = new QToolButton(lyricsDashBox);
        resetLyricsDashMaxLength->setObjectName("resetLyricsDashMaxLength");
        resetLyricsDashMaxLength->setText(QString::fromUtf8(""));

        gridLayout_23->addWidget(resetLyricsDashMaxLength, 1, 2, 1, 1);

        lyricsDashMaxLength = new QDoubleSpinBox(lyricsDashBox);
        lyricsDashMaxLength->setObjectName("lyricsDashMaxLength");
        lyricsDashMaxLength->setKeyboardTracking(false);
        lyricsDashMaxLength->setMinimum(0.050000000000000);
        lyricsDashMaxLength->setMaximum(9.990000000000000);
        lyricsDashMaxLength->setSingleStep(0.050000000000000);
        lyricsDashMaxLength->setValue(0.800000000000000);

        gridLayout_23->addWidget(lyricsDashMaxLength, 1, 1, 1, 1);

        resetLyricsDashMaxDistance = new QToolButton(lyricsDashBox);
        resetLyricsDashMaxDistance->setObjectName("resetLyricsDashMaxDistance");
        resetLyricsDashMaxDistance->setText(QString::fromUtf8(""));

        gridLayout_23->addWidget(resetLyricsDashMaxDistance, 4, 2, 1, 1);

        label_122 = new QLabel(lyricsDashBox);
        label_122->setObjectName("label_122");

        gridLayout_23->addWidget(label_122, 0, 0, 1, 1);

        lyricsDashMaxDistance = new QDoubleSpinBox(lyricsDashBox);
        lyricsDashMaxDistance->setObjectName("lyricsDashMaxDistance");
        lyricsDashMaxDistance->setKeyboardTracking(false);
        lyricsDashMaxDistance->setDecimals(0);
        lyricsDashMaxDistance->setMinimum(1.000000000000000);
        lyricsDashMaxDistance->setSingleStep(1.000000000000000);
        lyricsDashMaxDistance->setValue(16.000000000000000);

        gridLayout_23->addWidget(lyricsDashMaxDistance, 4, 1, 1, 1);

        label_120 = new QLabel(lyricsDashBox);
        label_120->setObjectName("label_120");

        gridLayout_23->addWidget(label_120, 1, 0, 1, 1);

        resetLyricsDashMinLength = new QToolButton(lyricsDashBox);
        resetLyricsDashMinLength->setObjectName("resetLyricsDashMinLength");
        resetLyricsDashMinLength->setText(QString::fromUtf8(""));

        gridLayout_23->addWidget(resetLyricsDashMinLength, 0, 2, 1, 1);

        label_196 = new QLabel(lyricsDashBox);
        label_196->setObjectName("label_196");

        gridLayout_23->addWidget(label_196, 5, 0, 1, 1);

        lyricsDashYposRatio = new QDoubleSpinBox(lyricsDashBox);
        lyricsDashYposRatio->setObjectName("lyricsDashYposRatio");
        lyricsDashYposRatio->setKeyboardTracking(false);

        gridLayout_23->addWidget(lyricsDashYposRatio, 5, 1, 1, 1);

        resetLyricsDashYposRatio = new QToolButton(lyricsDashBox);
        resetLyricsDashYposRatio->setObjectName("resetLyricsDashYposRatio");
        resetLyricsDashYposRatio->setText(QString::fromUtf8(""));

        gridLayout_23->addWidget(resetLyricsDashYposRatio, 5, 2, 1, 1);


        verticalLayout_632->addLayout(gridLayout_23);

        gridLayout_57 = new QGridLayout();
        gridLayout_57->setObjectName("gridLayout_57");
        gridLayout_57->setContentsMargins(-1, 0, -1, -1);
        lyricsDashForce = new QCheckBox(lyricsDashBox);
        lyricsDashForce->setObjectName("lyricsDashForce");

        gridLayout_57->addWidget(lyricsDashForce, 0, 0, 1, 1);

        resetLyricsShowDashIfSyllableOnFirstNote = new QToolButton(lyricsDashBox);
        resetLyricsShowDashIfSyllableOnFirstNote->setObjectName("resetLyricsShowDashIfSyllableOnFirstNote");

        gridLayout_57->addWidget(resetLyricsShowDashIfSyllableOnFirstNote, 1, 1, 1, 1);

        lyricsShowDashIfSyllableOnFirstNote = new QCheckBox(lyricsDashBox);
        lyricsShowDashIfSyllableOnFirstNote->setObjectName("lyricsShowDashIfSyllableOnFirstNote");

        gridLayout_57->addWidget(lyricsShowDashIfSyllableOnFirstNote, 1, 0, 1, 1);

        label_198 = new QLabel(lyricsDashBox);
        label_198->setObjectName("label_198");

        gridLayout_57->addWidget(label_198, 2, 0, 1, 1);

        resetLyricsDashForce = new QToolButton(lyricsDashBox);
        resetLyricsDashForce->setObjectName("resetLyricsDashForce");
        resetLyricsDashForce->setText(QString::fromUtf8(""));

        gridLayout_57->addWidget(resetLyricsDashForce, 0, 1, 1, 1);

        lyricsDashStartSystemPlacement = new QComboBox(lyricsDashBox);
        lyricsDashStartSystemPlacement->setObjectName("lyricsDashStartSystemPlacement");

        gridLayout_57->addWidget(lyricsDashStartSystemPlacement, 3, 0, 1, 1);

        resetLyricsDashStartSystemPlacement = new QToolButton(lyricsDashBox);
        resetLyricsDashStartSystemPlacement->setObjectName("resetLyricsDashStartSystemPlacement");

        gridLayout_57->addWidget(resetLyricsDashStartSystemPlacement, 3, 1, 1, 1);


        verticalLayout_632->addLayout(gridLayout_57);


        horizontalLayout_5->addWidget(lyricsDashBox);

        lyricsMelismaBox = new QGroupBox(scrollArea_lyrics_contents);
        lyricsMelismaBox->setObjectName("lyricsMelismaBox");
        verticalLayout_66 = new QVBoxLayout(lyricsMelismaBox);
        verticalLayout_66->setObjectName("verticalLayout_66");
        verticalLayout_66->setContentsMargins(-1, 10, -1, -1);
        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName("gridLayout_24");
        gridLayout_24->setContentsMargins(-1, 0, -1, -1);
        minMelismaLength = new QDoubleSpinBox(lyricsMelismaBox);
        minMelismaLength->setObjectName("minMelismaLength");
        minMelismaLength->setSingleStep(0.100000000000000);

        gridLayout_24->addWidget(minMelismaLength, 0, 1, 1, 1);

        resetLyricsLineThickness = new QToolButton(lyricsMelismaBox);
        resetLyricsLineThickness->setObjectName("resetLyricsLineThickness");
        resetLyricsLineThickness->setText(QString::fromUtf8(""));

        gridLayout_24->addWidget(resetLyricsLineThickness, 1, 2, 1, 1);

        resetMinMelismaLength = new QToolButton(lyricsMelismaBox);
        resetMinMelismaLength->setObjectName("resetMinMelismaLength");

        gridLayout_24->addWidget(resetMinMelismaLength, 0, 2, 1, 1);

        lyricsLineThickness = new QDoubleSpinBox(lyricsMelismaBox);
        lyricsLineThickness->setObjectName("lyricsLineThickness");
        lyricsLineThickness->setKeyboardTracking(false);
        lyricsLineThickness->setMaximum(1.000000000000000);
        lyricsLineThickness->setSingleStep(0.010000000000000);
        lyricsLineThickness->setValue(0.100000000000000);

        gridLayout_24->addWidget(lyricsLineThickness, 1, 1, 1, 1);

        label_222 = new QLabel(lyricsMelismaBox);
        label_222->setObjectName("label_222");

        gridLayout_24->addWidget(label_222, 0, 0, 1, 1);

        label_80 = new QLabel(lyricsMelismaBox);
        label_80->setObjectName("label_80");

        gridLayout_24->addWidget(label_80, 1, 0, 1, 1);

        label_188 = new QLabel(lyricsMelismaBox);
        label_188->setObjectName("label_188");

        gridLayout_24->addWidget(label_188, 2, 0, 1, 1);

        lyricsMelismaPad = new QDoubleSpinBox(lyricsMelismaBox);
        lyricsMelismaPad->setObjectName("lyricsMelismaPad");
        lyricsMelismaPad->setKeyboardTracking(false);
        lyricsMelismaPad->setMaximum(1.000000000000000);
        lyricsMelismaPad->setSingleStep(0.010000000000000);
        lyricsMelismaPad->setValue(0.100000000000000);

        gridLayout_24->addWidget(lyricsMelismaPad, 2, 1, 1, 1);

        resetLyricsMelismaPad = new QToolButton(lyricsMelismaBox);
        resetLyricsMelismaPad->setObjectName("resetLyricsMelismaPad");
        resetLyricsMelismaPad->setText(QString::fromUtf8(""));

        gridLayout_24->addWidget(resetLyricsMelismaPad, 2, 2, 1, 1);


        verticalLayout_66->addLayout(gridLayout_24);

        gridLayout_25 = new QGridLayout();
        gridLayout_25->setObjectName("gridLayout_25");
        gridLayout_25->setContentsMargins(-1, 0, -1, -1);
        lyricsMelismaForce = new QCheckBox(lyricsMelismaBox);
        lyricsMelismaForce->setObjectName("lyricsMelismaForce");

        gridLayout_25->addWidget(lyricsMelismaForce, 0, 0, 1, 1);

        resetLyricsMelismaForce = new QToolButton(lyricsMelismaBox);
        resetLyricsMelismaForce->setObjectName("resetLyricsMelismaForce");

        gridLayout_25->addWidget(resetLyricsMelismaForce, 0, 1, 1, 1);


        verticalLayout_66->addLayout(gridLayout_25);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_66->addItem(verticalSpacer_2);


        horizontalLayout_5->addWidget(lyricsMelismaBox);


        verticalLayout_64->addLayout(horizontalLayout_5);

        verticalSpacer_17 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_64->addItem(verticalSpacer_17);

        scrollArea_lyrics->setWidget(scrollArea_lyrics_contents);

        gridLayout_29->addWidget(scrollArea_lyrics, 0, 0, 1, 1);

        pageStack->addWidget(PageLyrics);
        PageExpression = new QWidget();
        PageExpression->setObjectName("PageExpression");
        verticalLayout_37 = new QVBoxLayout(PageExpression);
        verticalLayout_37->setObjectName("verticalLayout_37");
        groupBox_expression = new QGroupBox(PageExpression);
        groupBox_expression->setObjectName("groupBox_expression");
        gridLayout_62 = new QGridLayout(groupBox_expression);
        gridLayout_62->setObjectName("gridLayout_62");
        snapExpression = new QCheckBox(groupBox_expression);
        snapExpression->setObjectName("snapExpression");

        gridLayout_62->addWidget(snapExpression, 0, 0, 1, 1);

        horizontalSpacer_65 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_62->addItem(horizontalSpacer_65, 0, 2, 1, 1);

        resetSnapExpression = new QToolButton(groupBox_expression);
        resetSnapExpression->setObjectName("resetSnapExpression");
        resetSnapExpression->setText(QString::fromUtf8(""));

        gridLayout_62->addWidget(resetSnapExpression, 0, 1, 1, 1);


        verticalLayout_37->addWidget(groupBox_expression);

        verticalSpacer_40 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_37->addItem(verticalSpacer_40);

        pageStack->addWidget(PageExpression);
        PageRehearsalMarks = new QWidget();
        PageRehearsalMarks->setObjectName("PageRehearsalMarks");
        verticalLayout_51 = new QVBoxLayout(PageRehearsalMarks);
        verticalLayout_51->setObjectName("verticalLayout_51");
        groupBox_rehearsalMarks = new QGroupBox(PageRehearsalMarks);
        groupBox_rehearsalMarks->setObjectName("groupBox_rehearsalMarks");
        gridLayout_28 = new QGridLayout(groupBox_rehearsalMarks);
        gridLayout_28->setObjectName("gridLayout_28");
        label_149 = new QLabel(groupBox_rehearsalMarks);
        label_149->setObjectName("label_149");

        gridLayout_28->addWidget(label_149, 3, 0, 1, 1);

        label_150 = new QLabel(groupBox_rehearsalMarks);
        label_150->setObjectName("label_150");

        gridLayout_28->addWidget(label_150, 2, 0, 1, 1);

        rehearsalMarkPlacement = new QComboBox(groupBox_rehearsalMarks);
        rehearsalMarkPlacement->addItem(QString::fromUtf8("Above"));
        rehearsalMarkPlacement->addItem(QString::fromUtf8("Below"));
        rehearsalMarkPlacement->setObjectName("rehearsalMarkPlacement");

        gridLayout_28->addWidget(rehearsalMarkPlacement, 0, 1, 1, 1);

        resetRehearsalMarkPlacement = new QToolButton(groupBox_rehearsalMarks);
        resetRehearsalMarkPlacement->setObjectName("resetRehearsalMarkPlacement");
        resetRehearsalMarkPlacement->setText(QString::fromUtf8(""));

        gridLayout_28->addWidget(resetRehearsalMarkPlacement, 0, 2, 1, 1);

        resetRehearsalMarkPosBelow = new QToolButton(groupBox_rehearsalMarks);
        resetRehearsalMarkPosBelow->setObjectName("resetRehearsalMarkPosBelow");
        resetRehearsalMarkPosBelow->setText(QString::fromUtf8(""));

        gridLayout_28->addWidget(resetRehearsalMarkPosBelow, 2, 2, 1, 1);

        label_151 = new QLabel(groupBox_rehearsalMarks);
        label_151->setObjectName("label_151");

        gridLayout_28->addWidget(label_151, 1, 0, 1, 1);

        resetRehearsalMarkPosAbove = new QToolButton(groupBox_rehearsalMarks);
        resetRehearsalMarkPosAbove->setObjectName("resetRehearsalMarkPosAbove");
        resetRehearsalMarkPosAbove->setText(QString::fromUtf8(""));

        gridLayout_28->addWidget(resetRehearsalMarkPosAbove, 1, 2, 1, 1);

        label_152 = new QLabel(groupBox_rehearsalMarks);
        label_152->setObjectName("label_152");

        gridLayout_28->addWidget(label_152, 0, 0, 1, 1);

        rehearsalMarkMinDistance = new QDoubleSpinBox(groupBox_rehearsalMarks);
        rehearsalMarkMinDistance->setObjectName("rehearsalMarkMinDistance");
        sizePolicy5.setHeightForWidth(rehearsalMarkMinDistance->sizePolicy().hasHeightForWidth());
        rehearsalMarkMinDistance->setSizePolicy(sizePolicy5);
        rehearsalMarkMinDistance->setKeyboardTracking(false);
        rehearsalMarkMinDistance->setDecimals(1);
        rehearsalMarkMinDistance->setMinimum(-100.000000000000000);
        rehearsalMarkMinDistance->setSingleStep(0.500000000000000);

        gridLayout_28->addWidget(rehearsalMarkMinDistance, 3, 1, 1, 1);

        resetRehearsalMarkMinDistance = new QToolButton(groupBox_rehearsalMarks);
        resetRehearsalMarkMinDistance->setObjectName("resetRehearsalMarkMinDistance");
        resetRehearsalMarkMinDistance->setText(QString::fromUtf8(""));

        gridLayout_28->addWidget(resetRehearsalMarkMinDistance, 3, 2, 1, 1);

        rehearsalMarkPosAbove = new mu::notation::OffsetSelect(groupBox_rehearsalMarks);
        rehearsalMarkPosAbove->setObjectName("rehearsalMarkPosAbove");
        rehearsalMarkPosAbove->setFocusPolicy(Qt::StrongFocus);

        gridLayout_28->addWidget(rehearsalMarkPosAbove, 1, 1, 1, 1);

        rehearsalMarkPosBelow = new mu::notation::OffsetSelect(groupBox_rehearsalMarks);
        rehearsalMarkPosBelow->setObjectName("rehearsalMarkPosBelow");
        rehearsalMarkPosBelow->setFocusPolicy(Qt::StrongFocus);

        gridLayout_28->addWidget(rehearsalMarkPosBelow, 2, 1, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_28->addItem(horizontalSpacer_36, 0, 3, 1, 1);


        verticalLayout_51->addWidget(groupBox_rehearsalMarks);

        verticalSpacer_28 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_51->addItem(verticalSpacer_28);

        pageStack->addWidget(PageRehearsalMarks);
        PageFiguredBass = new QWidget();
        PageFiguredBass->setObjectName("PageFiguredBass");
        verticalLayout = new QVBoxLayout(PageFiguredBass);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_figuredBass = new QGroupBox(PageFiguredBass);
        groupBox_figuredBass->setObjectName("groupBox_figuredBass");
        verticalLayout_32 = new QVBoxLayout(groupBox_figuredBass);
        verticalLayout_32->setObjectName("verticalLayout_32");
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName("gridLayout_16");
        labelFBSize = new QLabel(groupBox_figuredBass);
        labelFBSize->setObjectName("labelFBSize");
        labelFBSize->setTextFormat(Qt::PlainText);

        gridLayout_16->addWidget(labelFBSize, 1, 0, 1, 1);

        doubleSpinFBSize = new QDoubleSpinBox(groupBox_figuredBass);
        doubleSpinFBSize->setObjectName("doubleSpinFBSize");
        doubleSpinFBSize->setKeyboardTracking(false);
        doubleSpinFBSize->setDecimals(1);
        doubleSpinFBSize->setMinimum(5.000000000000000);
        doubleSpinFBSize->setValue(9.000000000000000);

        gridLayout_16->addWidget(doubleSpinFBSize, 1, 1, 1, 1);

        label_98 = new QLabel(groupBox_figuredBass);
        label_98->setObjectName("label_98");

        gridLayout_16->addWidget(label_98, 2, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_9, 0, 2, 1, 1);

        label_99 = new QLabel(groupBox_figuredBass);
        label_99->setObjectName("label_99");

        gridLayout_16->addWidget(label_99, 3, 2, 1, 1);

        doubleSpinFBVertPos = new QDoubleSpinBox(groupBox_figuredBass);
        doubleSpinFBVertPos->setObjectName("doubleSpinFBVertPos");
        doubleSpinFBVertPos->setKeyboardTracking(false);
        doubleSpinFBVertPos->setMinimum(-25.000000000000000);
        doubleSpinFBVertPos->setMaximum(25.000000000000000);
        doubleSpinFBVertPos->setSingleStep(0.500000000000000);
        doubleSpinFBVertPos->setValue(6.000000000000000);

        gridLayout_16->addWidget(doubleSpinFBVertPos, 2, 1, 1, 1);

        labelFBLineHeight = new QLabel(groupBox_figuredBass);
        labelFBLineHeight->setObjectName("labelFBLineHeight");
        labelFBLineHeight->setTextFormat(Qt::PlainText);

        gridLayout_16->addWidget(labelFBLineHeight, 3, 0, 1, 1);

        spinFBLineHeight = new QSpinBox(groupBox_figuredBass);
        spinFBLineHeight->setObjectName("spinFBLineHeight");
        spinFBLineHeight->setKeyboardTracking(false);
        spinFBLineHeight->setSuffix(QString::fromUtf8("%"));
        spinFBLineHeight->setMinimum(1);
        spinFBLineHeight->setMaximum(500);
        spinFBLineHeight->setSingleStep(10);
        spinFBLineHeight->setValue(100);

        gridLayout_16->addWidget(spinFBLineHeight, 3, 1, 1, 1);

        labelFBFont = new QLabel(groupBox_figuredBass);
        labelFBFont->setObjectName("labelFBFont");
        labelFBFont->setTextFormat(Qt::PlainText);

        gridLayout_16->addWidget(labelFBFont, 0, 0, 1, 1);

        comboFBFont = new QComboBox(groupBox_figuredBass);
        comboFBFont->setObjectName("comboFBFont");
        comboFBFont->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_16->addWidget(comboFBFont, 0, 1, 1, 1);

        labelFBVertPos = new QLabel(groupBox_figuredBass);
        labelFBVertPos->setObjectName("labelFBVertPos");
        labelFBVertPos->setTextFormat(Qt::PlainText);

        gridLayout_16->addWidget(labelFBVertPos, 2, 0, 1, 1);


        verticalLayout_32->addLayout(gridLayout_16);

        groupFBAlign = new QGroupBox(groupBox_figuredBass);
        groupFBAlign->setObjectName("groupFBAlign");
        verticalLayout_11 = new QVBoxLayout(groupFBAlign);
        verticalLayout_11->setObjectName("verticalLayout_11");
        radioFBTop = new QRadioButton(groupFBAlign);
        radioFBTop->setObjectName("radioFBTop");

        verticalLayout_11->addWidget(radioFBTop);

        radioFBBottom = new QRadioButton(groupFBAlign);
        radioFBBottom->setObjectName("radioFBBottom");

        verticalLayout_11->addWidget(radioFBBottom);


        verticalLayout_32->addWidget(groupFBAlign);

        groupFBStyle = new QGroupBox(groupBox_figuredBass);
        groupFBStyle->setObjectName("groupFBStyle");
        verticalLayout_33 = new QVBoxLayout(groupFBStyle);
        verticalLayout_33->setObjectName("verticalLayout_33");
        radioFBModern = new QRadioButton(groupFBStyle);
        radioFBModern->setObjectName("radioFBModern");

        verticalLayout_33->addWidget(radioFBModern);

        radioFBHistoric = new QRadioButton(groupFBStyle);
        radioFBHistoric->setObjectName("radioFBHistoric");

        verticalLayout_33->addWidget(radioFBHistoric);


        verticalLayout_32->addWidget(groupFBStyle);


        verticalLayout->addWidget(groupBox_figuredBass);

        verticalSpacer_16 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_16);

        pageStack->addWidget(PageFiguredBass);
        PageChordSymbols = new QWidget();
        PageChordSymbols->setObjectName("PageChordSymbols");
        verticalLayout_12 = new QVBoxLayout(PageChordSymbols);
        verticalLayout_12->setObjectName("verticalLayout_12");
        groupBox_chordSymbols = new QGroupBox(PageChordSymbols);
        groupBox_chordSymbols->setObjectName("groupBox_chordSymbols");
        gridLayout_13 = new QGridLayout(groupBox_chordSymbols);
        gridLayout_13->setObjectName("gridLayout_13");
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        scrollArea_chordSymbols = new QScrollArea(groupBox_chordSymbols);
        scrollArea_chordSymbols->setObjectName("scrollArea_chordSymbols");
        scrollArea_chordSymbols->setFrameShape(QFrame::NoFrame);
        scrollArea_chordSymbols->setWidgetResizable(true);
        scrollArea_chordSymbols_contents = new QWidget();
        scrollArea_chordSymbols_contents->setObjectName("scrollArea_chordSymbols_contents");
        scrollArea_chordSymbols_contents->setGeometry(QRect(0, 0, 673, 712));
        gridLayout_55 = new QGridLayout(scrollArea_chordSymbols_contents);
        gridLayout_55->setObjectName("gridLayout_55");
        label_60 = new QLabel(scrollArea_chordSymbols_contents);
        label_60->setObjectName("label_60");

        gridLayout_55->addWidget(label_60, 2, 1, 1, 1);

        capoPosition = new QSpinBox(scrollArea_chordSymbols_contents);
        capoPosition->setObjectName("capoPosition");
        capoPosition->setKeyboardTracking(false);
        capoPosition->setMaximum(11);

        gridLayout_55->addWidget(capoPosition, 2, 2, 1, 1);

        harmonyPlay = new QGroupBox(scrollArea_chordSymbols_contents);
        harmonyPlay->setObjectName("harmonyPlay");
        harmonyPlay->setCheckable(false);
        gridLayout_47 = new QGridLayout(harmonyPlay);
        gridLayout_47->setObjectName("gridLayout_47");
        voicingSelectWidget = new mu::notation::VoicingSelect(harmonyPlay);
        voicingSelectWidget->setObjectName("voicingSelectWidget");

        gridLayout_47->addWidget(voicingSelectWidget, 0, 0, 1, 1);


        gridLayout_55->addWidget(harmonyPlay, 1, 1, 1, 2);

        harmonyAppearance = new QGroupBox(scrollArea_chordSymbols_contents);
        harmonyAppearance->setObjectName("harmonyAppearance");
        gridLayout_45 = new QGridLayout(harmonyAppearance);
        gridLayout_45->setObjectName("gridLayout_45");
        modifierMag = new QDoubleSpinBox(harmonyAppearance);
        modifierMag->setObjectName("modifierMag");
        modifierMag->setKeyboardTracking(false);
        modifierMag->setSingleStep(0.100000000000000);

        gridLayout_45->addWidget(modifierMag, 1, 4, 1, 1);

        modifierAdjust = new QDoubleSpinBox(harmonyAppearance);
        modifierAdjust->setObjectName("modifierAdjust");
        modifierAdjust->setKeyboardTracking(false);
        modifierAdjust->setMinimum(-99.989999999999995);

        gridLayout_45->addWidget(modifierAdjust, 2, 4, 1, 1);

        extensionMag = new QDoubleSpinBox(harmonyAppearance);
        extensionMag->setObjectName("extensionMag");
        extensionMag->setKeyboardTracking(false);
        extensionMag->setSingleStep(0.100000000000000);

        gridLayout_45->addWidget(extensionMag, 1, 1, 1, 1);

        extensionAdjust = new QDoubleSpinBox(harmonyAppearance);
        extensionAdjust->setObjectName("extensionAdjust");
        extensionAdjust->setKeyboardTracking(false);
        extensionAdjust->setMinimum(-99.989999999999995);

        gridLayout_45->addWidget(extensionAdjust, 2, 1, 1, 1);

        resetExtensionAdjust = new QToolButton(harmonyAppearance);
        resetExtensionAdjust->setObjectName("resetExtensionAdjust");
        resetExtensionAdjust->setText(QString::fromUtf8(""));

        gridLayout_45->addWidget(resetExtensionAdjust, 2, 2, 1, 1);

        labelExtensionAdjust = new QLabel(harmonyAppearance);
        labelExtensionAdjust->setObjectName("labelExtensionAdjust");

        gridLayout_45->addWidget(labelExtensionAdjust, 2, 0, 1, 1);

        labelExtensionMag = new QLabel(harmonyAppearance);
        labelExtensionMag->setObjectName("labelExtensionMag");

        gridLayout_45->addWidget(labelExtensionMag, 1, 0, 1, 1);

        resetExtensionMag = new QToolButton(harmonyAppearance);
        resetExtensionMag->setObjectName("resetExtensionMag");
        resetExtensionMag->setText(QString::fromUtf8(""));

        gridLayout_45->addWidget(resetExtensionMag, 1, 2, 1, 1);

        labelModifierMag = new QLabel(harmonyAppearance);
        labelModifierMag->setObjectName("labelModifierMag");

        gridLayout_45->addWidget(labelModifierMag, 1, 3, 1, 1);

        labelModifierAdjust = new QLabel(harmonyAppearance);
        labelModifierAdjust->setObjectName("labelModifierAdjust");

        gridLayout_45->addWidget(labelModifierAdjust, 2, 3, 1, 1);

        resetModifierMag = new QToolButton(harmonyAppearance);
        resetModifierMag->setObjectName("resetModifierMag");
        resetModifierMag->setText(QString::fromUtf8(""));

        gridLayout_45->addWidget(resetModifierMag, 1, 5, 1, 1);

        resetModifierAdjust = new QToolButton(harmonyAppearance);
        resetModifierAdjust->setObjectName("resetModifierAdjust");
        resetModifierAdjust->setText(QString::fromUtf8(""));

        gridLayout_45->addWidget(resetModifierAdjust, 2, 5, 1, 1);

        automaticCapitalization = new QGroupBox(harmonyAppearance);
        automaticCapitalization->setObjectName("automaticCapitalization");
        automaticCapitalization->setCheckable(true);
        horizontalLayout_12 = new QHBoxLayout(automaticCapitalization);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        lowerCaseMinorChords = new QCheckBox(automaticCapitalization);
        lowerCaseMinorChords->setObjectName("lowerCaseMinorChords");

        horizontalLayout_12->addWidget(lowerCaseMinorChords);

        lowerCaseBassNotes = new QCheckBox(automaticCapitalization);
        lowerCaseBassNotes->setObjectName("lowerCaseBassNotes");

        horizontalLayout_12->addWidget(lowerCaseBassNotes);

        allCapsNoteNames = new QCheckBox(automaticCapitalization);
        allCapsNoteNames->setObjectName("allCapsNoteNames");

        horizontalLayout_12->addWidget(allCapsNoteNames);

        horizontalSpacer_17 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_17);


        gridLayout_45->addWidget(automaticCapitalization, 4, 0, 1, 6);

        harmonySpelling = new QGroupBox(harmonyAppearance);
        harmonySpelling->setObjectName("harmonySpelling");
        horizontalLayout_6 = new QHBoxLayout(harmonySpelling);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        useStandardNoteNames = new QRadioButton(harmonySpelling);
        useStandardNoteNames->setObjectName("useStandardNoteNames");
#if QT_CONFIG(tooltip)
        useStandardNoteNames->setToolTip(QString::fromUtf8("A, B\342\231\255, B, C, C\342\231\257, \342\200\246"));
#endif // QT_CONFIG(tooltip)
        useStandardNoteNames->setChecked(true);

        horizontalLayout_6->addWidget(useStandardNoteNames);

        useGermanNoteNames = new QRadioButton(harmonySpelling);
        useGermanNoteNames->setObjectName("useGermanNoteNames");
#if QT_CONFIG(tooltip)
        useGermanNoteNames->setToolTip(QString::fromUtf8("A, B\342\231\255, H, C, C\342\231\257, \342\200\246"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_6->addWidget(useGermanNoteNames);

        useFullGermanNoteNames = new QRadioButton(harmonySpelling);
        useFullGermanNoteNames->setObjectName("useFullGermanNoteNames");
#if QT_CONFIG(tooltip)
        useFullGermanNoteNames->setToolTip(QString::fromUtf8("A, B, H, C, Cis, \342\200\246"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_6->addWidget(useFullGermanNoteNames);

        useSolfeggioNoteNames = new QRadioButton(harmonySpelling);
        useSolfeggioNoteNames->setObjectName("useSolfeggioNoteNames");
#if QT_CONFIG(tooltip)
        useSolfeggioNoteNames->setToolTip(QString::fromUtf8("Do, Do\342\231\257, Re\342\231\255, Re, \342\200\246"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_6->addWidget(useSolfeggioNoteNames);

        useFrenchNoteNames = new QRadioButton(harmonySpelling);
        useFrenchNoteNames->setObjectName("useFrenchNoteNames");
#if QT_CONFIG(tooltip)
        useFrenchNoteNames->setToolTip(QString::fromUtf8("Do, Do\342\231\257, R\303\251\342\231\255, R\303\251, \342\200\246"));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_6->addWidget(useFrenchNoteNames);

        horizontalSpacer_12 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        gridLayout_45->addWidget(harmonySpelling, 3, 0, 1, 6);

        harmonyStyle = new QGroupBox(harmonyAppearance);
        harmonyStyle->setObjectName("harmonyStyle");
        horizontalLayout_7 = new QHBoxLayout(harmonyStyle);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        chordsStandard = new QRadioButton(harmonyStyle);
        chordsStandard->setObjectName("chordsStandard");
        chordsStandard->setChecked(true);

        horizontalLayout_7->addWidget(chordsStandard);

        chordsJazz = new QRadioButton(harmonyStyle);
        chordsJazz->setObjectName("chordsJazz");

        horizontalLayout_7->addWidget(chordsJazz);

        chordsCustom = new QRadioButton(harmonyStyle);
        chordsCustom->setObjectName("chordsCustom");

        horizontalLayout_7->addWidget(chordsCustom);

        chordDescriptionGroup = new QWidget(harmonyStyle);
        chordDescriptionGroup->setObjectName("chordDescriptionGroup");
        chordDescriptionLayout = new QGridLayout(chordDescriptionGroup);
        chordDescriptionLayout->setObjectName("chordDescriptionLayout");
        chordDescriptionLayout->setContentsMargins(0, 0, 0, 0);
        chordsXmlFile = new QCheckBox(chordDescriptionGroup);
        chordsXmlFile->setObjectName("chordsXmlFile");

        chordDescriptionLayout->addWidget(chordsXmlFile, 0, 3, 1, 1);

        chordDescriptionFileButton = new QToolButton(chordDescriptionGroup);
        chordDescriptionFileButton->setObjectName("chordDescriptionFileButton");
        chordDescriptionFileButton->setText(QString::fromUtf8(""));

        chordDescriptionLayout->addWidget(chordDescriptionFileButton, 0, 2, 1, 1);

        chordDescriptionFile = new QLineEdit(chordDescriptionGroup);
        chordDescriptionFile->setObjectName("chordDescriptionFile");

        chordDescriptionLayout->addWidget(chordDescriptionFile, 0, 1, 1, 1);


        horizontalLayout_7->addWidget(chordDescriptionGroup);


        gridLayout_45->addWidget(harmonyStyle, 0, 0, 1, 6);


        gridLayout_55->addWidget(harmonyAppearance, 0, 0, 1, 3);

        harmonyPositioning = new QGroupBox(scrollArea_chordSymbols_contents);
        harmonyPositioning->setObjectName("harmonyPositioning");
        gridLayout_15 = new QGridLayout(harmonyPositioning);
        gridLayout_15->setObjectName("gridLayout_15");
        label_1461 = new QLabel(harmonyPositioning);
        label_1461->setObjectName("label_1461");

        gridLayout_15->addWidget(label_1461, 4, 0, 1, 1);

        resetMaxChordShiftAbove = new QToolButton(harmonyPositioning);
        resetMaxChordShiftAbove->setObjectName("resetMaxChordShiftAbove");
        resetMaxChordShiftAbove->setText(QString::fromUtf8("\342\200\246"));

        gridLayout_15->addWidget(resetMaxChordShiftAbove, 3, 2, 1, 1);

        label_79 = new QLabel(harmonyPositioning);
        label_79->setObjectName("label_79");

        gridLayout_15->addWidget(label_79, 0, 0, 1, 1);

        label_1231 = new QLabel(harmonyPositioning);
        label_1231->setObjectName("label_1231");

        gridLayout_15->addWidget(label_1231, 3, 0, 1, 1);

        maxHarmonyBarDistance = new QDoubleSpinBox(harmonyPositioning);
        maxHarmonyBarDistance->setObjectName("maxHarmonyBarDistance");
        maxHarmonyBarDistance->setKeyboardTracking(false);
        maxHarmonyBarDistance->setMinimum(-50.000000000000000);
        maxHarmonyBarDistance->setMaximum(50.000000000000000);
        maxHarmonyBarDistance->setSingleStep(0.500000000000000);
        maxHarmonyBarDistance->setValue(3.000000000000000);

        gridLayout_15->addWidget(maxHarmonyBarDistance, 2, 1, 1, 1);

        label_1001 = new QLabel(harmonyPositioning);
        label_1001->setObjectName("label_1001");

        gridLayout_15->addWidget(label_1001, 1, 0, 1, 1);

        label_1002 = new QLabel(harmonyPositioning);
        label_1002->setObjectName("label_1002");

        gridLayout_15->addWidget(label_1002, 2, 0, 1, 1);

        resetMaxChordShiftBelow = new QToolButton(harmonyPositioning);
        resetMaxChordShiftBelow->setObjectName("resetMaxChordShiftBelow");
        resetMaxChordShiftBelow->setText(QString::fromUtf8("\342\200\246"));

        gridLayout_15->addWidget(resetMaxChordShiftBelow, 4, 2, 1, 1);

        harmonyFretDist = new QDoubleSpinBox(harmonyPositioning);
        harmonyFretDist->setObjectName("harmonyFretDist");
        harmonyFretDist->setEnabled(true);
        harmonyFretDist->setKeyboardTracking(false);
        harmonyFretDist->setMinimum(-10000.000000000000000);
        harmonyFretDist->setMaximum(10000.000000000000000);
        harmonyFretDist->setSingleStep(0.500000000000000);
        harmonyFretDist->setValue(0.500000000000000);

        gridLayout_15->addWidget(harmonyFretDist, 0, 1, 1, 1);

        minHarmonyDistance = new QDoubleSpinBox(harmonyPositioning);
        minHarmonyDistance->setObjectName("minHarmonyDistance");
        minHarmonyDistance->setKeyboardTracking(false);
        minHarmonyDistance->setMinimum(-50.000000000000000);
        minHarmonyDistance->setMaximum(10.000000000000000);
        minHarmonyDistance->setSingleStep(0.100000000000000);
        minHarmonyDistance->setValue(0.500000000000000);

        gridLayout_15->addWidget(minHarmonyDistance, 1, 1, 1, 1);

        maxChordShiftBelow = new QDoubleSpinBox(harmonyPositioning);
        maxChordShiftBelow->setObjectName("maxChordShiftBelow");
        maxChordShiftBelow->setKeyboardTracking(false);
        maxChordShiftBelow->setSingleStep(0.500000000000000);

        gridLayout_15->addWidget(maxChordShiftBelow, 4, 1, 1, 1);

        maxChordShiftAbove = new QDoubleSpinBox(harmonyPositioning);
        maxChordShiftAbove->setObjectName("maxChordShiftAbove");
        maxChordShiftAbove->setKeyboardTracking(false);
        maxChordShiftAbove->setSingleStep(0.500000000000000);
        maxChordShiftAbove->setValue(0.000000000000000);

        gridLayout_15->addWidget(maxChordShiftAbove, 3, 1, 1, 1);


        gridLayout_55->addWidget(harmonyPositioning, 1, 0, 3, 1);

        verticalSpacer_61 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_55->addItem(verticalSpacer_61, 4, 0, 1, 3);

        verticalSpacer_3411 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_55->addItem(verticalSpacer_3411, 3, 1, 1, 2);

        scrollArea_chordSymbols->setWidget(scrollArea_chordSymbols_contents);

        gridLayout_13->addWidget(scrollArea_chordSymbols, 0, 0, 1, 4);


        verticalLayout_12->addWidget(groupBox_chordSymbols);

        pageStack->addWidget(PageChordSymbols);
        PageFretboardDiagrams = new QWidget();
        PageFretboardDiagrams->setObjectName("PageFretboardDiagrams");
        verticalLayout_52 = new QVBoxLayout(PageFretboardDiagrams);
        verticalLayout_52->setObjectName("verticalLayout_52");
        groupBox_fretboardDiagrams = new QGroupBox(PageFretboardDiagrams);
        groupBox_fretboardDiagrams->setObjectName("groupBox_fretboardDiagrams");
        groupBox_fretboardDiagrams->setBaseSize(QSize(710, 316));
        gridLayout_471 = new QGridLayout(groupBox_fretboardDiagrams);
        gridLayout_471->setObjectName("gridLayout_471");
        label_1451 = new QLabel(groupBox_fretboardDiagrams);
        label_1451->setObjectName("label_1451");

        gridLayout_471->addWidget(label_1451, 9, 0, 1, 1);

        maxFretShiftAbove = new QDoubleSpinBox(groupBox_fretboardDiagrams);
        maxFretShiftAbove->setObjectName("maxFretShiftAbove");
        maxFretShiftAbove->setKeyboardTracking(false);
        maxFretShiftAbove->setSingleStep(0.500000000000000);

        gridLayout_471->addWidget(maxFretShiftAbove, 8, 1, 1, 1);

        resetMaxFretShiftAbove = new QToolButton(groupBox_fretboardDiagrams);
        resetMaxFretShiftAbove->setObjectName("resetMaxFretShiftAbove");
        resetMaxFretShiftAbove->setText(QString::fromUtf8("\342\200\246"));

        gridLayout_471->addWidget(resetMaxFretShiftAbove, 8, 2, 1, 1);

        fretNumMag = new QSpinBox(groupBox_fretboardDiagrams);
        fretNumMag->setObjectName("fretNumMag");
        fretNumMag->setKeyboardTracking(false);
        fretNumMag->setSuffix(QString::fromUtf8("%"));
        fretNumMag->setMaximum(500);
        fretNumMag->setSingleStep(10);
        fretNumMag->setValue(200);

        gridLayout_471->addWidget(fretNumMag, 3, 1, 1, 1);

        fretFretSpacing = new QDoubleSpinBox(groupBox_fretboardDiagrams);
        fretFretSpacing->setObjectName("fretFretSpacing");
        fretFretSpacing->setKeyboardTracking(false);
        fretFretSpacing->setMinimum(0.100000000000000);
        fretFretSpacing->setMaximum(2.000000000000000);
        fretFretSpacing->setSingleStep(0.100000000000000);
        fretFretSpacing->setValue(0.800000000000000);

        gridLayout_471->addWidget(fretFretSpacing, 7, 1, 1, 1);

        label_17 = new QLabel(groupBox_fretboardDiagrams);
        label_17->setObjectName("label_17");

        gridLayout_471->addWidget(label_17, 5, 0, 1, 1);

        label_5 = new QLabel(groupBox_fretboardDiagrams);
        label_5->setObjectName("label_5");

        gridLayout_471->addWidget(label_5, 1, 0, 1, 1);

        fretMag = new QDoubleSpinBox(groupBox_fretboardDiagrams);
        fretMag->setObjectName("fretMag");
        fretMag->setKeyboardTracking(false);
        fretMag->setMinimum(0.100000000000000);
        fretMag->setSingleStep(0.200000000000000);
        fretMag->setValue(1.000000000000000);

        gridLayout_471->addWidget(fretMag, 1, 1, 1, 1);

        label_601 = new QLabel(groupBox_fretboardDiagrams);
        label_601->setObjectName("label_601");

        gridLayout_471->addWidget(label_601, 3, 0, 1, 1);

        label_90 = new QLabel(groupBox_fretboardDiagrams);
        label_90->setObjectName("label_90");

        gridLayout_471->addWidget(label_90, 7, 0, 1, 1);

        fretY = new QDoubleSpinBox(groupBox_fretboardDiagrams);
        fretY->setObjectName("fretY");
        fretY->setKeyboardTracking(false);
        fretY->setDecimals(2);
        fretY->setMinimum(-10.000000000000000);
        fretY->setMaximum(10.000000000000000);
        fretY->setSingleStep(0.500000000000000);
        fretY->setValue(-2.000000000000000);

        gridLayout_471->addWidget(fretY, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_fretboardDiagrams);
        label_2->setObjectName("label_2");

        gridLayout_471->addWidget(label_2, 4, 0, 1, 1);

        label_54 = new QLabel(groupBox_fretboardDiagrams);
        label_54->setObjectName("label_54");

        gridLayout_471->addWidget(label_54, 6, 0, 1, 1);

        maxFretShiftBelow = new QDoubleSpinBox(groupBox_fretboardDiagrams);
        maxFretShiftBelow->setObjectName("maxFretShiftBelow");
        maxFretShiftBelow->setKeyboardTracking(false);
        maxFretShiftBelow->setSingleStep(0.500000000000000);

        gridLayout_471->addWidget(maxFretShiftBelow, 9, 1, 1, 1);

        barreLineWidth = new QDoubleSpinBox(groupBox_fretboardDiagrams);
        barreLineWidth->setObjectName("barreLineWidth");
        barreLineWidth->setKeyboardTracking(false);
        barreLineWidth->setMinimum(0.100000000000000);
        barreLineWidth->setMaximum(1.000000000000000);
        barreLineWidth->setSingleStep(0.100000000000000);
        barreLineWidth->setValue(1.000000000000000);

        gridLayout_471->addWidget(barreLineWidth, 4, 1, 1, 1);

        resetMaxFretShiftBelow = new QToolButton(groupBox_fretboardDiagrams);
        resetMaxFretShiftBelow->setObjectName("resetMaxFretShiftBelow");
        resetMaxFretShiftBelow->setText(QString::fromUtf8("\342\200\246"));

        gridLayout_471->addWidget(resetMaxFretShiftBelow, 9, 2, 1, 1);

        label_6011 = new QLabel(groupBox_fretboardDiagrams);
        label_6011->setObjectName("label_6011");

        gridLayout_471->addWidget(label_6011, 2, 0, 1, 1);

        label_1191 = new QLabel(groupBox_fretboardDiagrams);
        label_1191->setObjectName("label_1191");

        gridLayout_471->addWidget(label_1191, 8, 0, 1, 1);

        label_602 = new QLabel(groupBox_fretboardDiagrams);
        label_602->setObjectName("label_602");

        gridLayout_471->addWidget(label_602, 0, 0, 1, 1);

        fretStringSpacing = new QDoubleSpinBox(groupBox_fretboardDiagrams);
        fretStringSpacing->setObjectName("fretStringSpacing");
        fretStringSpacing->setKeyboardTracking(false);
        fretStringSpacing->setMinimum(0.100000000000000);
        fretStringSpacing->setMaximum(2.000000000000000);
        fretStringSpacing->setSingleStep(0.100000000000000);
        fretStringSpacing->setValue(0.700000000000000);

        gridLayout_471->addWidget(fretStringSpacing, 6, 1, 1, 1);

        horizontalSpacer_43 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_471->addItem(horizontalSpacer_43, 2, 4, 1, 1);

        fretDotSize = new QDoubleSpinBox(groupBox_fretboardDiagrams);
        fretDotSize->setObjectName("fretDotSize");
        fretDotSize->setKeyboardTracking(false);
        fretDotSize->setMinimum(0.100000000000000);
        fretDotSize->setMaximum(5.000000000000000);
        fretDotSize->setSingleStep(0.100000000000000);
        fretDotSize->setValue(1.000000000000000);

        gridLayout_471->addWidget(fretDotSize, 5, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        radioFretNumRight = new QRadioButton(groupBox_fretboardDiagrams);
        radioFretNumRight->setObjectName("radioFretNumRight");

        horizontalLayout_3->addWidget(radioFretNumRight);

        radioFretNumLeft = new QRadioButton(groupBox_fretboardDiagrams);
        radioFretNumLeft->setObjectName("radioFretNumLeft");

        horizontalLayout_3->addWidget(radioFretNumLeft);


        gridLayout_471->addLayout(horizontalLayout_3, 2, 1, 1, 3);


        verticalLayout_52->addWidget(groupBox_fretboardDiagrams);

        verticalSpacer_29 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_52->addItem(verticalSpacer_29);

        pageStack->addWidget(PageFretboardDiagrams);
        PageTablatureStyles = new QWidget();
        PageTablatureStyles->setObjectName("PageTablatureStyles");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(PageTablatureStyles->sizePolicy().hasHeightForWidth());
        PageTablatureStyles->setSizePolicy(sizePolicy10);
        verticalLayout_26 = new QVBoxLayout(PageTablatureStyles);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(12, -1, -1, -1);
        groupBox_tablature = new QGroupBox(PageTablatureStyles);
        groupBox_tablature->setObjectName("groupBox_tablature");
        verticalLayout_28 = new QVBoxLayout(groupBox_tablature);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(groupBox_tablature);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 533, 654));
        verticalLayout_40 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_40->setObjectName("verticalLayout_40");
        verticalLayout_40->setContentsMargins(12, 16, -1, -1);
        label = new QLabel(scrollAreaWidgetContents_3);
        label->setObjectName("label");
        label->setMargin(0);

        verticalLayout_40->addWidget(label);

        gridLayout_36 = new QGridLayout();
        gridLayout_36->setObjectName("gridLayout_36");
        gridLayout_36->setContentsMargins(-1, 0, 0, -1);
        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setObjectName("verticalLayout_38");
        verticalLayout_38->setContentsMargins(12, 8, 12, 12);
        gridLayout_60 = new QGridLayout();
        gridLayout_60->setObjectName("gridLayout_60");
        gridLayout_60->setHorizontalSpacing(0);
        gridLayout_60->setVerticalSpacing(6);
        gridLayout_60->setContentsMargins(0, 0, -1, -1);
        mordentShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        mordentShowTabSimple->setObjectName("mordentShowTabSimple");

        gridLayout_60->addWidget(mordentShowTabSimple, 14, 2, 1, 1);

        wahShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        wahShowTabSimple->setObjectName("wahShowTabSimple");

        gridLayout_60->addWidget(wahShowTabSimple, 16, 2, 1, 1);

        slurShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        slurShowTabCommon->setObjectName("slurShowTabCommon");
        slurShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(slurShowTabCommon, 4, 0, 1, 1);

        wahShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        wahShowTabCommon->setObjectName("wahShowTabCommon");
        wahShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(wahShowTabCommon, 16, 0, 1, 1);

        dynamicsShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        dynamicsShowTabCommon->setObjectName("dynamicsShowTabCommon");
        dynamicsShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(dynamicsShowTabCommon, 6, 0, 1, 1);

        mordentShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        mordentShowTabCommon->setObjectName("mordentShowTabCommon");

        gridLayout_60->addWidget(mordentShowTabCommon, 14, 0, 1, 1);

        staccatoShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        staccatoShowTabSimple->setObjectName("staccatoShowTabSimple");

        gridLayout_60->addWidget(staccatoShowTabSimple, 9, 2, 1, 1);

        label_215 = new QLabel(scrollAreaWidgetContents_3);
        label_215->setObjectName("label_215");

        gridLayout_60->addWidget(label_215, 17, 4, 1, 1);

        rasgueadoShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        rasgueadoShowTabSimple->setObjectName("rasgueadoShowTabSimple");

        gridLayout_60->addWidget(rasgueadoShowTabSimple, 13, 2, 1, 1);

        label_182 = new QLabel(scrollAreaWidgetContents_3);
        label_182->setObjectName("label_182");

        gridLayout_60->addWidget(label_182, 8, 4, 1, 1);

        horizontalSpacer_63 = new QSpacerItem(80, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_60->addItem(horizontalSpacer_63, 1, 1, 1, 1);

        golpeShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        golpeShowTabSimple->setObjectName("golpeShowTabSimple");

        gridLayout_60->addWidget(golpeShowTabSimple, 17, 2, 1, 1);

        label_175 = new QLabel(scrollAreaWidgetContents_3);
        label_175->setObjectName("label_175");

        gridLayout_60->addWidget(label_175, 6, 4, 1, 1);

        label_59 = new QLabel(scrollAreaWidgetContents_3);
        label_59->setObjectName("label_59");

        gridLayout_60->addWidget(label_59, 10, 4, 1, 1);

        label_181 = new QLabel(scrollAreaWidgetContents_3);
        label_181->setObjectName("label_181");

        gridLayout_60->addWidget(label_181, 7, 4, 1, 1);

        rasgueadoShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        rasgueadoShowTabCommon->setObjectName("rasgueadoShowTabCommon");
        rasgueadoShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(rasgueadoShowTabCommon, 13, 0, 1, 1);

        harmonicMarkShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        harmonicMarkShowTabSimple->setObjectName("harmonicMarkShowTabSimple");
        harmonicMarkShowTabSimple->setChecked(false);

        gridLayout_60->addWidget(harmonicMarkShowTabSimple, 10, 2, 1, 1);

        accentShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        accentShowTabSimple->setObjectName("accentShowTabSimple");

        gridLayout_60->addWidget(accentShowTabSimple, 8, 2, 1, 1);

        slurShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        slurShowTabSimple->setObjectName("slurShowTabSimple");

        gridLayout_60->addWidget(slurShowTabSimple, 4, 2, 1, 1);

        palmMuteShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        palmMuteShowTabCommon->setObjectName("palmMuteShowTabCommon");
        palmMuteShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(palmMuteShowTabCommon, 12, 0, 1, 1);

        turnShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        turnShowTabCommon->setObjectName("turnShowTabCommon");

        gridLayout_60->addWidget(turnShowTabCommon, 15, 0, 1, 1);

        fermataShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        fermataShowTabSimple->setObjectName("fermataShowTabSimple");

        gridLayout_60->addWidget(fermataShowTabSimple, 5, 2, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents_3);
        label_4->setObjectName("label_4");
        label_4->setMargin(0);
        label_4->setIndent(0);

        gridLayout_60->addWidget(label_4, 1, 0, 1, 1);

        accentShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        accentShowTabCommon->setObjectName("accentShowTabCommon");
        accentShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(accentShowTabCommon, 8, 0, 1, 1);

        hairpinShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        hairpinShowTabCommon->setObjectName("hairpinShowTabCommon");
        hairpinShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(hairpinShowTabCommon, 7, 0, 1, 1);

        fermataShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        fermataShowTabCommon->setObjectName("fermataShowTabCommon");
        fermataShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(fermataShowTabCommon, 5, 0, 1, 1);

        label_63 = new QLabel(scrollAreaWidgetContents_3);
        label_63->setObjectName("label_63");

        gridLayout_60->addWidget(label_63, 4, 4, 1, 1);

        verticalSpacer_37 = new QSpacerItem(20, 8, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_60->addItem(verticalSpacer_37, 2, 2, 1, 1);

        label_192 = new QLabel(scrollAreaWidgetContents_3);
        label_192->setObjectName("label_192");

        gridLayout_60->addWidget(label_192, 12, 4, 1, 1);

        label_199 = new QLabel(scrollAreaWidgetContents_3);
        label_199->setObjectName("label_199");

        gridLayout_60->addWidget(label_199, 14, 4, 1, 1);

        dynamicsShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        dynamicsShowTabSimple->setObjectName("dynamicsShowTabSimple");

        gridLayout_60->addWidget(dynamicsShowTabSimple, 6, 2, 1, 1);

        hairpinShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        hairpinShowTabSimple->setObjectName("hairpinShowTabSimple");

        gridLayout_60->addWidget(hairpinShowTabSimple, 7, 2, 1, 1);

        turnShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        turnShowTabSimple->setObjectName("turnShowTabSimple");

        gridLayout_60->addWidget(turnShowTabSimple, 15, 2, 1, 1);

        label_200 = new QLabel(scrollAreaWidgetContents_3);
        label_200->setObjectName("label_200");

        gridLayout_60->addWidget(label_200, 15, 4, 1, 1);

        letRingShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        letRingShowTabCommon->setObjectName("letRingShowTabCommon");
        letRingShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(letRingShowTabCommon, 11, 0, 1, 1);

        label_190 = new QLabel(scrollAreaWidgetContents_3);
        label_190->setObjectName("label_190");

        gridLayout_60->addWidget(label_190, 11, 4, 1, 1);

        label_57 = new QLabel(scrollAreaWidgetContents_3);
        label_57->setObjectName("label_57");

        gridLayout_60->addWidget(label_57, 1, 2, 1, 1);

        golpeShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        golpeShowTabCommon->setObjectName("golpeShowTabCommon");
        golpeShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(golpeShowTabCommon, 17, 0, 1, 1);

        label_201 = new QLabel(scrollAreaWidgetContents_3);
        label_201->setObjectName("label_201");

        gridLayout_60->addWidget(label_201, 16, 4, 1, 1);

        label_183 = new QLabel(scrollAreaWidgetContents_3);
        label_183->setObjectName("label_183");

        gridLayout_60->addWidget(label_183, 9, 4, 1, 1);

        harmonicMarkShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        harmonicMarkShowTabCommon->setObjectName("harmonicMarkShowTabCommon");
        harmonicMarkShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(harmonicMarkShowTabCommon, 10, 0, 1, 1);

        label_197 = new QLabel(scrollAreaWidgetContents_3);
        label_197->setObjectName("label_197");

        gridLayout_60->addWidget(label_197, 13, 4, 1, 1);

        staccatoShowTabCommon = new QCheckBox(scrollAreaWidgetContents_3);
        staccatoShowTabCommon->setObjectName("staccatoShowTabCommon");
        staccatoShowTabCommon->setChecked(false);

        gridLayout_60->addWidget(staccatoShowTabCommon, 9, 0, 1, 1);

        palmMuteShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        palmMuteShowTabSimple->setObjectName("palmMuteShowTabSimple");
        palmMuteShowTabSimple->setChecked(false);

        gridLayout_60->addWidget(palmMuteShowTabSimple, 12, 2, 1, 1);

        label_174 = new QLabel(scrollAreaWidgetContents_3);
        label_174->setObjectName("label_174");

        gridLayout_60->addWidget(label_174, 5, 4, 1, 1);

        letRingShowTabSimple = new QCheckBox(scrollAreaWidgetContents_3);
        letRingShowTabSimple->setObjectName("letRingShowTabSimple");
        letRingShowTabSimple->setChecked(false);

        gridLayout_60->addWidget(letRingShowTabSimple, 11, 2, 1, 1);

        horizontalSpacer_661 = new QSpacerItem(80, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_60->addItem(horizontalSpacer_661, 1, 3, 1, 1);


        verticalLayout_38->addLayout(gridLayout_60);

        verticalSpacer_39 = new QSpacerItem(1, 2, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_39);


        gridLayout_36->addLayout(verticalLayout_38, 0, 0, 1, 1);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_32, 0, 1, 1, 1);


        verticalLayout_40->addLayout(gridLayout_36);

        groupBox_tied_fret_marks = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_tied_fret_marks->setObjectName("groupBox_tied_fret_marks");
        verticalLayout_591 = new QVBoxLayout(groupBox_tied_fret_marks);
        verticalLayout_591->setObjectName("verticalLayout_591");
        tabShowTiesAndFret = new QRadioButton(groupBox_tied_fret_marks);
        tabShowTiesAndFret->setObjectName("tabShowTiesAndFret");

        verticalLayout_591->addWidget(tabShowTiesAndFret);

        tabShowTies = new QRadioButton(groupBox_tied_fret_marks);
        tabShowTies->setObjectName("tabShowTies");

        verticalLayout_591->addWidget(tabShowTies);

        tabShowNone = new QRadioButton(groupBox_tied_fret_marks);
        tabShowNone->setObjectName("tabShowNone");

        verticalLayout_591->addWidget(tabShowNone);


        verticalLayout_40->addWidget(groupBox_tied_fret_marks);

        tieParen = new QGroupBox(scrollAreaWidgetContents_3);
        tieParen->setObjectName("tieParen");
        verticalLayout_601 = new QVBoxLayout(tieParen);
        verticalLayout_601->setObjectName("verticalLayout_601");
        tabParenthSystem = new QRadioButton(tieParen);
        tabParenthSystem->setObjectName("tabParenthSystem");

        verticalLayout_601->addWidget(tabParenthSystem);

        tabParenthMeasure = new QRadioButton(tieParen);
        tabParenthMeasure->setObjectName("tabParenthMeasure");

        verticalLayout_601->addWidget(tabParenthMeasure);

        tabParenthNone = new QRadioButton(tieParen);
        tabParenthNone->setObjectName("tabParenthNone");

        verticalLayout_601->addWidget(tabParenthNone);

        tabParenthArticulation = new QCheckBox(tieParen);
        tabParenthArticulation->setObjectName("tabParenthArticulation");

        verticalLayout_601->addWidget(tabParenthArticulation);


        verticalLayout_40->addWidget(tieParen);

        scrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_28->addWidget(scrollArea);


        verticalLayout_26->addWidget(groupBox_tablature);

        pageStack->addWidget(PageTablatureStyles);
        PageTextStyles = new QWidget();
        PageTextStyles->setObjectName("PageTextStyles");
        gridLayout_41 = new QGridLayout(PageTextStyles);
        gridLayout_41->setObjectName("gridLayout_41");
        showMeasureNumber_8 = new QGroupBox(PageTextStyles);
        showMeasureNumber_8->setObjectName("showMeasureNumber_8");
        sizePolicy10.setHeightForWidth(showMeasureNumber_8->sizePolicy().hasHeightForWidth());
        showMeasureNumber_8->setSizePolicy(sizePolicy10);
        _12 = new QGridLayout(showMeasureNumber_8);
        _12->setObjectName("_12");
        groupBox_text_style = new QGroupBox(showMeasureNumber_8);
        groupBox_text_style->setObjectName("groupBox_text_style");
        gridLayout_38 = new QGridLayout(groupBox_text_style);
        gridLayout_38->setObjectName("gridLayout_38");
        label_202 = new QLabel(groupBox_text_style);
        label_202->setObjectName("label_202");

        gridLayout_38->addWidget(label_202, 0, 0, 1, 1);

        textStyleFrameType = new QComboBox(groupBox_text_style);
        textStyleFrameType->addItem(QString::fromUtf8("None"));
        textStyleFrameType->addItem(QString::fromUtf8("Rectangle"));
        textStyleFrameType->addItem(QString());
        textStyleFrameType->setObjectName("textStyleFrameType");

        gridLayout_38->addWidget(textStyleFrameType, 0, 1, 1, 1);

        resetTextStyleFrameType = new QToolButton(groupBox_text_style);
        resetTextStyleFrameType->setObjectName("resetTextStyleFrameType");
        resetTextStyleFrameType->setText(QString::fromUtf8(""));

        gridLayout_38->addWidget(resetTextStyleFrameType, 0, 2, 1, 1);

        frameWidget = new QWidget(groupBox_text_style);
        frameWidget->setObjectName("frameWidget");
        gridLayout_43 = new QGridLayout(frameWidget);
        gridLayout_43->setObjectName("gridLayout_43");
        gridLayout_43->setContentsMargins(0, 0, 0, 0);
        textStyleFrameForeground = new Awl::ColorLabel(frameWidget);
        textStyleFrameForeground->setObjectName("textStyleFrameForeground");

        gridLayout_43->addWidget(textStyleFrameForeground, 0, 1, 1, 1);

        label_205 = new QLabel(frameWidget);
        label_205->setObjectName("label_205");

        gridLayout_43->addWidget(label_205, 2, 0, 1, 1);

        textStyleFrameBorderRadius = new QDoubleSpinBox(frameWidget);
        textStyleFrameBorderRadius->setObjectName("textStyleFrameBorderRadius");
        textStyleFrameBorderRadius->setKeyboardTracking(false);
        textStyleFrameBorderRadius->setDecimals(0);

        gridLayout_43->addWidget(textStyleFrameBorderRadius, 4, 1, 1, 1);

        resetTextStyleFrameBackground = new QToolButton(frameWidget);
        resetTextStyleFrameBackground->setObjectName("resetTextStyleFrameBackground");
        resetTextStyleFrameBackground->setText(QString::fromUtf8(""));

        gridLayout_43->addWidget(resetTextStyleFrameBackground, 1, 2, 1, 1);

        resetTextStyleFrameForeground = new QToolButton(frameWidget);
        resetTextStyleFrameForeground->setObjectName("resetTextStyleFrameForeground");
        resetTextStyleFrameForeground->setText(QString::fromUtf8(""));

        gridLayout_43->addWidget(resetTextStyleFrameForeground, 0, 2, 1, 1);

        label_206 = new QLabel(frameWidget);
        label_206->setObjectName("label_206");

        gridLayout_43->addWidget(label_206, 3, 0, 1, 1);

        label_212 = new QLabel(frameWidget);
        label_212->setObjectName("label_212");

        gridLayout_43->addWidget(label_212, 4, 0, 1, 1);

        resetTextStyleFrameBorder = new QToolButton(frameWidget);
        resetTextStyleFrameBorder->setObjectName("resetTextStyleFrameBorder");
        resetTextStyleFrameBorder->setText(QString::fromUtf8(""));

        gridLayout_43->addWidget(resetTextStyleFrameBorder, 2, 2, 1, 1);

        textStyleFramePadding = new QDoubleSpinBox(frameWidget);
        textStyleFramePadding->setObjectName("textStyleFramePadding");
        textStyleFramePadding->setKeyboardTracking(false);

        gridLayout_43->addWidget(textStyleFramePadding, 3, 1, 1, 1);

        textStyleFrameBackground = new Awl::ColorLabel(frameWidget);
        textStyleFrameBackground->setObjectName("textStyleFrameBackground");

        gridLayout_43->addWidget(textStyleFrameBackground, 1, 1, 1, 1);

        resetTextStyleFramePadding = new QToolButton(frameWidget);
        resetTextStyleFramePadding->setObjectName("resetTextStyleFramePadding");
        resetTextStyleFramePadding->setText(QString::fromUtf8(""));

        gridLayout_43->addWidget(resetTextStyleFramePadding, 3, 2, 1, 1);

        textStyleFrameBorder = new QDoubleSpinBox(frameWidget);
        textStyleFrameBorder->setObjectName("textStyleFrameBorder");
        textStyleFrameBorder->setKeyboardTracking(false);

        gridLayout_43->addWidget(textStyleFrameBorder, 2, 1, 1, 1);

        label_203 = new QLabel(frameWidget);
        label_203->setObjectName("label_203");

        gridLayout_43->addWidget(label_203, 0, 0, 1, 1);

        label_204 = new QLabel(frameWidget);
        label_204->setObjectName("label_204");

        gridLayout_43->addWidget(label_204, 1, 0, 1, 1);

        resetTextStyleFrameBorderRadius = new QToolButton(frameWidget);
        resetTextStyleFrameBorderRadius->setObjectName("resetTextStyleFrameBorderRadius");
        resetTextStyleFrameBorderRadius->setText(QString::fromUtf8(""));

        gridLayout_43->addWidget(resetTextStyleFrameBorderRadius, 4, 2, 1, 1);


        gridLayout_38->addWidget(frameWidget, 1, 0, 1, 3);


        _12->addWidget(groupBox_text_style, 14, 0, 1, 3);

        textStyleOffset = new mu::notation::OffsetSelect(showMeasureNumber_8);
        textStyleOffset->setObjectName("textStyleOffset");
        textStyleOffset->setFocusPolicy(Qt::StrongFocus);

        _12->addWidget(textStyleOffset, 12, 1, 1, 1);

        textStyleColor = new Awl::ColorLabel(showMeasureNumber_8);
        textStyleColor->setObjectName("textStyleColor");

        _12->addWidget(textStyleColor, 11, 1, 1, 1);

        resetTextStyleFontStyle = new QToolButton(showMeasureNumber_8);
        resetTextStyleFontStyle->setObjectName("resetTextStyleFontStyle");
        resetTextStyleFontStyle->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleFontStyle, 9, 2, 1, 1);

        textStyleFontSize = new QDoubleSpinBox(showMeasureNumber_8);
        textStyleFontSize->setObjectName("textStyleFontSize");
        textStyleFontSize->setKeyboardTracking(false);
        textStyleFontSize->setMinimum(1.000000000000000);

        _12->addWidget(textStyleFontSize, 2, 1, 1, 1);

        label_208 = new QLabel(showMeasureNumber_8);
        label_208->setObjectName("label_208");

        _12->addWidget(label_208, 1, 0, 1, 1);

        resetTextStyleAlign = new QToolButton(showMeasureNumber_8);
        resetTextStyleAlign->setObjectName("resetTextStyleAlign");
        resetTextStyleAlign->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleAlign, 10, 2, 1, 1);

        resetTextStyleColor = new QToolButton(showMeasureNumber_8);
        resetTextStyleColor->setObjectName("resetTextStyleColor");
        resetTextStyleColor->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleColor, 11, 2, 1, 1);

        textStyleColorLabel = new QLabel(showMeasureNumber_8);
        textStyleColorLabel->setObjectName("textStyleColorLabel");

        _12->addWidget(textStyleColorLabel, 11, 0, 1, 1);

        textStyleFontStyle = new mu::notation::FontStyleSelect(showMeasureNumber_8);
        textStyleFontStyle->setObjectName("textStyleFontStyle");

        _12->addWidget(textStyleFontStyle, 9, 1, 1, 1);

        resetTextStyleFontSize = new QToolButton(showMeasureNumber_8);
        resetTextStyleFontSize->setObjectName("resetTextStyleFontSize");
        resetTextStyleFontSize->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleFontSize, 2, 2, 1, 1);

        styleName = new QLineEdit(showMeasureNumber_8);
        styleName->setObjectName("styleName");

        _12->addWidget(styleName, 0, 1, 1, 1);

        label_209 = new QLabel(showMeasureNumber_8);
        label_209->setObjectName("label_209");

        _12->addWidget(label_209, 9, 0, 1, 1);

        textStyleAlign = new mu::notation::AlignSelect(showMeasureNumber_8);
        textStyleAlign->setObjectName("textStyleAlign");

        _12->addWidget(textStyleAlign, 10, 1, 1, 1);

        resetTextStyleSpatiumDependent = new QToolButton(showMeasureNumber_8);
        resetTextStyleSpatiumDependent->setObjectName("resetTextStyleSpatiumDependent");
        resetTextStyleSpatiumDependent->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleSpatiumDependent, 6, 2, 1, 1);

        label_186 = new QLabel(showMeasureNumber_8);
        label_186->setObjectName("label_186");

        _12->addWidget(label_186, 12, 0, 1, 1);

        textStyleSpatiumDependent = new QCheckBox(showMeasureNumber_8);
        textStyleSpatiumDependent->setObjectName("textStyleSpatiumDependent");

        _12->addWidget(textStyleSpatiumDependent, 6, 0, 1, 2);

        resetTextStyleName = new QToolButton(showMeasureNumber_8);
        resetTextStyleName->setObjectName("resetTextStyleName");
        resetTextStyleName->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleName, 0, 2, 1, 1);

        resetTextStyleFontFace = new QToolButton(showMeasureNumber_8);
        resetTextStyleFontFace->setObjectName("resetTextStyleFontFace");
        resetTextStyleFontFace->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleFontFace, 1, 2, 1, 1);

        resetTextStyleOffset = new QToolButton(showMeasureNumber_8);
        resetTextStyleOffset->setObjectName("resetTextStyleOffset");
        resetTextStyleOffset->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleOffset, 12, 2, 1, 1);

        label_210 = new QLabel(showMeasureNumber_8);
        label_210->setObjectName("label_210");

        _12->addWidget(label_210, 10, 0, 1, 1);

        labelStyleName = new QLabel(showMeasureNumber_8);
        labelStyleName->setObjectName("labelStyleName");

        _12->addWidget(labelStyleName, 0, 0, 1, 1);

        textStyleFontFace = new QFontComboBox(showMeasureNumber_8);
        textStyleFontFace->setObjectName("textStyleFontFace");
        sizePolicy2.setHeightForWidth(textStyleFontFace->sizePolicy().hasHeightForWidth());
        textStyleFontFace->setSizePolicy(sizePolicy2);

        _12->addWidget(textStyleFontFace, 1, 1, 1, 1);

        label_207 = new QLabel(showMeasureNumber_8);
        label_207->setObjectName("label_207");

        _12->addWidget(label_207, 2, 0, 1, 1);

        textStyleLineSpacing = new QDoubleSpinBox(showMeasureNumber_8);
        textStyleLineSpacing->setObjectName("textStyleLineSpacing");
        textStyleLineSpacing->setKeyboardTracking(false);
        textStyleLineSpacing->setSingleStep(0.100000000000000);
        textStyleLineSpacing->setValue(1.000000000000000);

        _12->addWidget(textStyleLineSpacing, 3, 1, 1, 1);

        label_14711 = new QLabel(showMeasureNumber_8);
        label_14711->setObjectName("label_14711");

        _12->addWidget(label_14711, 3, 0, 1, 1);

        resetTextStyleLineSpacing = new QToolButton(showMeasureNumber_8);
        resetTextStyleLineSpacing->setObjectName("resetTextStyleLineSpacing");
        resetTextStyleLineSpacing->setText(QString::fromUtf8(""));

        _12->addWidget(resetTextStyleLineSpacing, 3, 2, 1, 1);

        tupletUseSymbols = new QCheckBox(showMeasureNumber_8);
        tupletUseSymbols->setObjectName("tupletUseSymbols");

        _12->addWidget(tupletUseSymbols, 7, 0, 1, 2);

        resetTupletUseSymbols = new QToolButton(showMeasureNumber_8);
        resetTupletUseSymbols->setObjectName("resetTupletUseSymbols");
        resetTupletUseSymbols->setText(QString::fromUtf8(""));

        _12->addWidget(resetTupletUseSymbols, 7, 2, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_14712 = new QLabel(showMeasureNumber_8);
        label_14712->setObjectName("label_14712");

        horizontalLayout_13->addWidget(label_14712);

        textStyleMusicalSymbolsScale = new QDoubleSpinBox(showMeasureNumber_8);
        textStyleMusicalSymbolsScale->setObjectName("textStyleMusicalSymbolsScale");
        textStyleMusicalSymbolsScale->setKeyboardTracking(false);
        textStyleMusicalSymbolsScale->setDecimals(0);
        textStyleMusicalSymbolsScale->setMaximum(1000.000000000000000);

        horizontalLayout_13->addWidget(textStyleMusicalSymbolsScale);

        resetTextStyleMusicalSymbolsScale = new QToolButton(showMeasureNumber_8);
        resetTextStyleMusicalSymbolsScale->setObjectName("resetTextStyleMusicalSymbolsScale");
        resetTextStyleMusicalSymbolsScale->setText(QString::fromUtf8(""));

        horizontalLayout_13->addWidget(resetTextStyleMusicalSymbolsScale);


        _12->addLayout(horizontalLayout_13, 8, 0, 1, 3);


        gridLayout_41->addWidget(showMeasureNumber_8, 0, 1, 1, 1);

        verticalSpacer_32 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_41->addItem(verticalSpacer_32, 1, 1, 1, 1);

        textStyles = new QListWidget(PageTextStyles);
        textStyles->setObjectName("textStyles");

        gridLayout_41->addWidget(textStyles, 0, 0, 2, 1);

        pageStack->addWidget(PageTextStyles);
        splitter->addWidget(pageStack);

        gridLayout_39->addWidget(splitter, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        buttonTogglePagelist = new QPushButton(EditStyleBase);
        buttonTogglePagelist->setObjectName("buttonTogglePagelist");
        buttonTogglePagelist->setMaximumSize(QSize(30, 16777215));
        buttonTogglePagelist->setFlat(true);

        hboxLayout->addWidget(buttonTogglePagelist);

        resetStylesButton = new QPushButton(EditStyleBase);
        resetStylesButton->setObjectName("resetStylesButton");

        hboxLayout->addWidget(resetStylesButton);

        buttonBox = new QDialogButtonBox(EditStyleBase);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout_39->addLayout(hboxLayout, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_musicalSymbolFont->setBuddy(musicalSymbolFont);
        label_musicalTextFont->setBuddy(musicalTextFont);
        label_staffLineWidth->setBuddy(staffLineWidth);
        label_indentation->setBuddy(indentationValue);
        label_3->setBuddy(swingBox);
        minVerticalDistance_label->setBuddy(minVerticalDistance);
        label_36->setBuddy(autoplaceVerticalAlignRange);
        label_69->setBuddy(staffDistance);
        label_191->setBuddy(maxSystemDistance);
        label_73->setBuddy(minSystemDistance);
        label_70->setBuddy(akkoladeDistance);
        label_78->setBuddy(staffLowerBorder);
        label_74->setBuddy(systemFrameDistance);
        label_75->setBuddy(frameSystemDistance);
        label_77->setBuddy(lastSystemFillThreshold);
        label_76->setBuddy(staffUpperBorder);
        label_160->setBuddy(maxAkkoladeDistance);
        label_155->setBuddy(maxStaffSpread);
        label_161->setBuddy(maxPageFillSpread);
        label_156->setBuddy(minStaffSpread);
        label_159->setBuddy(maxSystemSpread);
        label_162->setBuddy(minSystemSpread);
        label_157->setBuddy(spreadCurlyBracket);
        label_154->setBuddy(spreadSquareBracket);
        label_153->setBuddy(spreadSystem);
        label_38->setBuddy(smallStaffSize);
        label_44->setBuddy(smallNoteSize);
        label_39->setBuddy(graceNoteSize);
        label_45->setBuddy(smallClefSize);
        measureNumberPosAboveLabel->setBuddy(measureNumberPosAbove);
        measureNumberPosBelowLabel->setBuddy(measureNumberPosBelow);
        label_921->setBuddy(measureNumberVPlacement);
        label_93->setBuddy(measureNumberHPlacement);
        label_165->setBuddy(mmRestRangeVPlacement);
        mmRestRangePosAboveLabel->setBuddy(mmRestRangePosAbove);
        label_164->setBuddy(mmRestRangeBracketType);
        label_166->setBuddy(mmRestRangeHPlacement);
        mmRestRangePosBelowLabel->setBuddy(mmRestRangePosBelow);
        label_52->setBuddy(bracketDistance);
        braceThicknessLabel->setBuddy(akkoladeWidth);
        braceDistanceLabel->setBuddy(akkoladeBarDistance);
        label_91->setBuddy(bracketWidth);
        label_65->setBuddy(dividerLeftY);
        label_29->setBuddy(dividerLeftX);
        label_7->setBuddy(dividerLeftSym);
        label_68->setBuddy(dividerRightY);
        label_66->setBuddy(dividerRightSym);
        label_67->setBuddy(dividerRightX);
        label_147->setBuddy(accidentalsBracketsBadding);
        label_20->setBuddy(timesigLeftMargin);
        label_109->setBuddy(keyTimesigDistance);
        label_18->setBuddy(clefLeftMargin);
        label_113->setBuddy(timesigBarlineDistance);
        label_19->setBuddy(keysigLeftMargin);
        label_61->setBuddy(barGraceDistance);
        label_53->setBuddy(clefBarlineDistance);
        label_13->setBuddy(noteBarDistance);
        label_12->setBuddy(barNoteDistance);
        label_21->setBuddy(clefKeyRightMargin);
        label_94->setBuddy(clefKeyDistance);
        label_110->setBuddy(keyBarlineDistance);
        label_102->setBuddy(barAccidentalDistance);
        label_108->setBuddy(clefTimesigDistance);
        label_89->setBuddy(minMeasureWidth_2);
        label_11->setBuddy(measureSpacing);
        label_14->setBuddy(minNoteDistance);
        label_112->setBuddy(systemHeaderTimeSigDistance);
        label_111->setBuddy(systemHeaderDistance);
        label_85->setBuddy(doubleBarWidth);
        label_82->setBuddy(barWidth);
        label_84->setBuddy(endBarDistance);
        label_83->setBuddy(endBarWidth);
        repeatBarlineDotSeparationLbl->setBuddy(repeatBarlineDotSeparation);
        label_86->setBuddy(doubleBarDistance);
        label_101->setBuddy(dotMag);
        label_24->setBuddy(ledgerLineWidth);
        label_34->setBuddy(ledgerLineLength);
        label_22->setBuddy(noteDotDistance);
        label_100->setBuddy(stemWidth);
        label_23->setBuddy(dotDotDistance);
        label_43->setBuddy(accidentalDistance);
        label_47->setBuddy(shortestStem);
        label_25->setBuddy(accidentalNoteDistance);
        label_15->setBuddy(minEmptyMeasures);
        label_16->setBuddy(minMeasureWidth);
        label_92->setBuddy(mmRestNumberPos);
        label_119->setBuddy(mmRestHBarThickness);
        label_103->setBuddy(multiMeasureRestMargin);
        label_123->setBuddy(mmRestHBarVStrokeThickness);
        label_145->setBuddy(mmRestHBarVStrokeHeight);
        label_146->setBuddy(mmRestOldStyleMaxMeasures);
        label_1471->setBuddy(mmRestOldStyleSpacing);
        label_148->setBuddy(measureRepeatNumberPos);
        label_48->setBuddy(tupletMaxSlope);
        label_49->setBuddy(tupletVStemDistance);
        label_50->setBuddy(tupletVHeadDistance);
        label_114->setBuddy(tupletDirection);
        label_115->setBuddy(tupletNumberType);
        label_116->setBuddy(tupletBracketType);
        label_6->setBuddy(tupletBracketWidth);
        label_187->setBuddy(tupletBracketHookHeight);
        label_56->setBuddy(tupletStemRightDistance);
        label_58->setBuddy(tupletNoteRightDistance);
        label_51->setBuddy(tupletStemLeftDistance);
        label_55->setBuddy(tupletNoteLeftDistance);
        label_28->setBuddy(arpeggioHookLen);
        label_27->setBuddy(arpeggioLineWidth);
        label_26->setBuddy(arpeggioNoteDistance);
        label_30->setBuddy(slurEndLineWidth);
        label_31->setBuddy(slurMidLineWidth);
        label_33->setBuddy(slurDottedLineWidth);
        label_158->setBuddy(slurMinDistance);
        label_218->setBuddy(tieEndLineWidth);
        label_219->setBuddy(tieMidLineWidth);
        label_216->setBuddy(tieDottedLineWidth);
        label_217->setBuddy(tieMinDistance);
        minTieLengthLabel->setBuddy(minTieLength);
        label_95->setBuddy(hairpinPosAbove);
        label_117->setBuddy(autoplaceHairpinDynamicsDistance);
        label_9->setBuddy(hairpinHeight);
        label_8->setBuddy(hairpinLineWidth);
        label_129->setBuddy(hairpinPosBelow);
        label_10->setBuddy(hairpinContinueHeight);
        label_volta_lineStyle_dashSize->setBuddy(voltaLineStyle);
        label_40->setBuddy(voltaPosAbove);
        label_104->setBuddy(voltaLineStyle);
        label_42->setBuddy(voltaHook);
        label_64->setBuddy(voltaLineWidth);
        label_volta_lineStyle_gapSize->setBuddy(voltaLineStyle);
        label_ottava_lineStyle_dashSize->setBuddy(ottavaLineStyle);
        label_81->setBuddy(ottavaPosAbove);
        label_105->setBuddy(ottavaLineStyle);
        label_88->setBuddy(ottavaLineWidth);
        label_130->setBuddy(ottavaPosBelow);
        label_87->setBuddy(ottavaHookAbove);
        label_185->setBuddy(ottavaHookBelow);
        label_ottava_lineStyle_gapSize->setBuddy(ottavaLineStyle);
        label_106->setBuddy(pedalLineStyle);
        label_139->setBuddy(pedalLinePosBelow);
        label_107->setBuddy(pedalLineWidth);
        label_96->setBuddy(pedalLinePosAbove);
        label_124->setBuddy(pedalLinePlacement);
        label_pedalLine_lineStyle_dashSize->setBuddy(voltaLineStyle);
        label_pedalLine_lineStyle_gapSize->setBuddy(voltaLineStyle);
        label_97->setBuddy(trillLinePosAbove);
        label_125->setBuddy(trillLinePlacement);
        label_140->setBuddy(trillLinePosBelow);
        label_971->setBuddy(vibratoLinePosAbove);
        label_1251->setBuddy(vibratoLinePlacement);
        label_1401->setBuddy(vibratoLinePosBelow);
        label_171->setBuddy(bendLineWidth);
        label_184->setBuddy(bendArrowWidth);
        label_193->setBuddy(bendArrowHeight);
        label_179->setBuddy(bendLineWidthTab);
        label_135->setBuddy(textLinePosBelow);
        label_136->setBuddy(textLinePosAbove);
        label_72->setBuddy(textLinePlacement);
        label_211->setBuddy(systemTextLinePosBelow);
        label_213->setBuddy(systemTextLinePosAbove);
        label_214->setBuddy(textLinePlacement);
        label_37->setBuddy(articStemDist);
        label_32->setBuddy(articulationMag);
        label_41->setBuddy(articStaffDist);
        label_351->setBuddy(articNoteHeadDist);
        label_169->setBuddy(fermataMinDistance);
        label_168->setBuddy(fermataPosAbove);
        label_167->setBuddy(fermataPosBelow);
        label_178->setBuddy(staffTextPlacement);
        label_180->setBuddy(staffTextMinDistance);
        label_176->setBuddy(staffTextPosBelow);
        label_177->setBuddy(staffTextPosAbove);
        label_144->setBuddy(tempoTextMinDistance);
        label_142->setBuddy(tempoTextPosBelow);
        label_143->setBuddy(tempoTextPosAbove);
        label_128->setBuddy(tempoTextPlacement);
        label_minDistance->setBuddy(lyricsMinDistance);
        label_131->setBuddy(lyricsMinTopDistance);
        label_137->setBuddy(lyricsMinBottomDistance);
        label_71->setBuddy(lyricsPlacement);
        label_133->setBuddy(lyricsLineHeight);
        label_121->setBuddy(lyricsDashMaxDistance);
        label_195->setBuddy(lyricsDashPad);
        label_189->setBuddy(lyricsDashLineThickness);
        label_122->setBuddy(lyricsDashMinLength);
        label_120->setBuddy(lyricsDashMaxLength);
        label_196->setBuddy(lyricsDashYposRatio);
        label_80->setBuddy(lyricsLineThickness);
        label_188->setBuddy(lyricsMelismaPad);
        label_149->setBuddy(rehearsalMarkMinDistance);
        label_150->setBuddy(rehearsalMarkPosBelow);
        label_151->setBuddy(rehearsalMarkPosAbove);
        label_152->setBuddy(rehearsalMarkPlacement);
        labelFBSize->setBuddy(doubleSpinFBSize);
        labelFBLineHeight->setBuddy(spinFBLineHeight);
        labelFBFont->setBuddy(comboFBFont);
        labelFBVertPos->setBuddy(doubleSpinFBVertPos);
        label_60->setBuddy(capoPosition);
        labelExtensionAdjust->setBuddy(extensionAdjust);
        labelExtensionMag->setBuddy(extensionMag);
        labelModifierMag->setBuddy(modifierMag);
        labelModifierAdjust->setBuddy(modifierAdjust);
        label_1461->setBuddy(maxChordShiftBelow);
        label_79->setBuddy(harmonyFretDist);
        label_1231->setBuddy(maxChordShiftAbove);
        label_1001->setBuddy(minHarmonyDistance);
        label_1002->setBuddy(maxHarmonyBarDistance);
        label_1451->setBuddy(maxFretShiftBelow);
        label_17->setBuddy(fretDotSize);
        label_5->setBuddy(fretMag);
        label_601->setBuddy(fretNumMag);
        label_90->setBuddy(fretFretSpacing);
        label_2->setBuddy(barreLineWidth);
        label_54->setBuddy(fretStringSpacing);
        label_1191->setBuddy(maxFretShiftAbove);
        label_602->setBuddy(fretY);
        label_202->setBuddy(textStyleFrameType);
        label_205->setBuddy(textStyleFrameBorder);
        label_206->setBuddy(textStyleFramePadding);
        label_212->setBuddy(textStyleFrameBorderRadius);
        label_203->setBuddy(textStyleFrameForeground);
        label_204->setBuddy(textStyleFrameBackground);
        label_208->setBuddy(textStyleFontFace);
        textStyleColorLabel->setBuddy(textStyleColor);
        label_209->setBuddy(textStyleFontStyle);
        label_186->setBuddy(textStyleOffset);
        label_210->setBuddy(textStyleAlign);
        labelStyleName->setBuddy(styleName);
        label_207->setBuddy(textStyleFontSize);
        label_14711->setBuddy(textStyleLineSpacing);
        label_14712->setBuddy(textStyleMusicalSymbolsScale);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(pageList, scrollArea_score);
        QWidget::setTabOrder(scrollArea_score, musicalSymbolFont);
        QWidget::setTabOrder(musicalSymbolFont, optimizeStyleCheckbox);
        QWidget::setTabOrder(optimizeStyleCheckbox, musicalTextFont);
        QWidget::setTabOrder(musicalTextFont, staffLineWidth);
        QWidget::setTabOrder(staffLineWidth, resetStaffLineWidth);
        QWidget::setTabOrder(resetStaffLineWidth, concertPitch);
        QWidget::setTabOrder(concertPitch, enableIndentationOnFirstSystem);
        QWidget::setTabOrder(enableIndentationOnFirstSystem, indentationValue);
        QWidget::setTabOrder(indentationValue, resetFirstSystemIndentation);
        QWidget::setTabOrder(resetFirstSystemIndentation, hideEmptyStaves);
        QWidget::setTabOrder(hideEmptyStaves, dontHideStavesInFirstSystem);
        QWidget::setTabOrder(dontHideStavesInFirstSystem, alwaysShowBrackets);
        QWidget::setTabOrder(alwaysShowBrackets, crossMeasureValues);
        QWidget::setTabOrder(crossMeasureValues, firstLongBtn);
        QWidget::setTabOrder(firstLongBtn, firstShortBtn);
        QWidget::setTabOrder(firstShortBtn, firstHideBtn);
        QWidget::setTabOrder(firstHideBtn, resetFirstSystemLabel);
        QWidget::setTabOrder(resetFirstSystemLabel, subsLongBtn);
        QWidget::setTabOrder(subsLongBtn, subsShortBtn);
        QWidget::setTabOrder(subsShortBtn, subsHideBtn);
        QWidget::setTabOrder(subsHideBtn, resetSubsSystemLabel);
        QWidget::setTabOrder(resetSubsSystemLabel, swingOff);
        QWidget::setTabOrder(swingOff, swingEighth);
        QWidget::setTabOrder(swingEighth, swingSixteenth);
        QWidget::setTabOrder(swingSixteenth, swingBox);
        QWidget::setTabOrder(swingBox, autoplaceVerticalAlignRange);
        QWidget::setTabOrder(autoplaceVerticalAlignRange, resetAutoplaceVerticalAlignRange);
        QWidget::setTabOrder(resetAutoplaceVerticalAlignRange, minVerticalDistance);
        QWidget::setTabOrder(minVerticalDistance, resetMinVerticalDistance);
        QWidget::setTabOrder(resetMinVerticalDistance, scrollArea_page);
        QWidget::setTabOrder(scrollArea_page, staffUpperBorder);
        QWidget::setTabOrder(staffUpperBorder, resetStaffUpperBorder);
        QWidget::setTabOrder(resetStaffUpperBorder, staffLowerBorder);
        QWidget::setTabOrder(staffLowerBorder, resetStaffLowerBorder);
        QWidget::setTabOrder(resetStaffLowerBorder, enableVerticalSpread);
        QWidget::setTabOrder(enableVerticalSpread, spreadSystem);
        QWidget::setTabOrder(spreadSystem, resetSpreadSystem);
        QWidget::setTabOrder(resetSpreadSystem, spreadSquareBracket);
        QWidget::setTabOrder(spreadSquareBracket, resetSpreadSquareBracket);
        QWidget::setTabOrder(resetSpreadSquareBracket, spreadCurlyBracket);
        QWidget::setTabOrder(spreadCurlyBracket, resetSpreadCurlyBracket);
        QWidget::setTabOrder(resetSpreadCurlyBracket, minSystemSpread);
        QWidget::setTabOrder(minSystemSpread, resetMinSystemSpread);
        QWidget::setTabOrder(resetMinSystemSpread, maxSystemSpread);
        QWidget::setTabOrder(maxSystemSpread, resetMaxSystemSpread);
        QWidget::setTabOrder(resetMaxSystemSpread, minStaffSpread);
        QWidget::setTabOrder(minStaffSpread, resetMinStaffSpread);
        QWidget::setTabOrder(resetMinStaffSpread, maxStaffSpread);
        QWidget::setTabOrder(maxStaffSpread, resetMaxStaffSpread);
        QWidget::setTabOrder(resetMaxStaffSpread, maxAkkoladeDistance);
        QWidget::setTabOrder(maxAkkoladeDistance, resetMaxAkkoladeDistance);
        QWidget::setTabOrder(resetMaxAkkoladeDistance, maxPageFillSpread);
        QWidget::setTabOrder(maxPageFillSpread, resetMaxPageFillSpread);
        QWidget::setTabOrder(resetMaxPageFillSpread, disableVerticalSpread);
        QWidget::setTabOrder(disableVerticalSpread, staffDistance);
        QWidget::setTabOrder(staffDistance, resetStaffDistance);
        QWidget::setTabOrder(resetStaffDistance, akkoladeDistance);
        QWidget::setTabOrder(akkoladeDistance, resetAkkoladeDistance);
        QWidget::setTabOrder(resetAkkoladeDistance, minSystemDistance);
        QWidget::setTabOrder(minSystemDistance, resetMinSystemDistance);
        QWidget::setTabOrder(resetMinSystemDistance, maxSystemDistance);
        QWidget::setTabOrder(maxSystemDistance, resetMaxSystemDistance);
        QWidget::setTabOrder(resetMaxSystemDistance, systemFrameDistance);
        QWidget::setTabOrder(systemFrameDistance, resetSystemFrameDistance);
        QWidget::setTabOrder(resetSystemFrameDistance, frameSystemDistance);
        QWidget::setTabOrder(frameSystemDistance, resetFrameSystemDistance);
        QWidget::setTabOrder(resetFrameSystemDistance, lastSystemFillThreshold);
        QWidget::setTabOrder(lastSystemFillThreshold, resetLastSystemFillThreshold);
        QWidget::setTabOrder(resetLastSystemFillThreshold, smallStaffSize);
        QWidget::setTabOrder(smallStaffSize, resetSmallStaffSize);
        QWidget::setTabOrder(resetSmallStaffSize, smallNoteSize);
        QWidget::setTabOrder(smallNoteSize, resetSmallNoteSize);
        QWidget::setTabOrder(resetSmallNoteSize, graceNoteSize);
        QWidget::setTabOrder(graceNoteSize, resetGraceNoteSize);
        QWidget::setTabOrder(resetGraceNoteSize, smallClefSize);
        QWidget::setTabOrder(smallClefSize, resetSmallClefSize);
        QWidget::setTabOrder(resetSmallClefSize, scrollArea_headerFooter);
        QWidget::setTabOrder(scrollArea_headerFooter, showHeader);
        QWidget::setTabOrder(showHeader, showHeaderFirstPage);
        QWidget::setTabOrder(showHeaderFirstPage, headerOddEven);
        QWidget::setTabOrder(headerOddEven, oddHeaderL);
        QWidget::setTabOrder(oddHeaderL, oddHeaderC);
        QWidget::setTabOrder(oddHeaderC, oddHeaderR);
        QWidget::setTabOrder(oddHeaderR, evenHeaderL);
        QWidget::setTabOrder(evenHeaderL, evenHeaderC);
        QWidget::setTabOrder(evenHeaderC, evenHeaderR);
        QWidget::setTabOrder(evenHeaderR, showFooter);
        QWidget::setTabOrder(showFooter, showFooterFirstPage);
        QWidget::setTabOrder(showFooterFirstPage, footerOddEven);
        QWidget::setTabOrder(footerOddEven, oddFooterL);
        QWidget::setTabOrder(oddFooterL, oddFooterC);
        QWidget::setTabOrder(oddFooterC, oddFooterR);
        QWidget::setTabOrder(oddFooterR, evenFooterL);
        QWidget::setTabOrder(evenFooterL, evenFooterC);
        QWidget::setTabOrder(evenFooterC, evenFooterR);
        QWidget::setTabOrder(evenFooterR, showMeasureNumber);
        QWidget::setTabOrder(showMeasureNumber, showFirstMeasureNumber);
        QWidget::setTabOrder(showFirstMeasureNumber, showAllStavesMeasureNumber);
        QWidget::setTabOrder(showAllStavesMeasureNumber, showEverySystemMeasureNumber);
        QWidget::setTabOrder(showEverySystemMeasureNumber, showIntervalMeasureNumber);
        QWidget::setTabOrder(showIntervalMeasureNumber, intervalMeasureNumber);
        QWidget::setTabOrder(intervalMeasureNumber, measureNumberVPlacement);
        QWidget::setTabOrder(measureNumberVPlacement, resetMeasureNumberVPlacement);
        QWidget::setTabOrder(resetMeasureNumberVPlacement, measureNumberHPlacement);
        QWidget::setTabOrder(measureNumberHPlacement, resetMeasureNumberHPlacement);
        QWidget::setTabOrder(resetMeasureNumberHPlacement, measureNumberPosAbove);
        QWidget::setTabOrder(measureNumberPosAbove, resetMeasureNumberPosAbove);
        QWidget::setTabOrder(resetMeasureNumberPosAbove, measureNumberPosBelow);
        QWidget::setTabOrder(measureNumberPosBelow, resetMeasureNumberPosBelow);
        QWidget::setTabOrder(resetMeasureNumberPosBelow, mmRestShowMeasureNumberRange);
        QWidget::setTabOrder(mmRestShowMeasureNumberRange, mmRestRangeBracketType);
        QWidget::setTabOrder(mmRestRangeBracketType, resetMmRestRangeBracketType);
        QWidget::setTabOrder(resetMmRestRangeBracketType, mmRestRangeVPlacement);
        QWidget::setTabOrder(mmRestRangeVPlacement, resetMmRestRangeVPlacement);
        QWidget::setTabOrder(resetMmRestRangeVPlacement, mmRestRangeHPlacement);
        QWidget::setTabOrder(mmRestRangeHPlacement, resetMmRestRangeHPlacement);
        QWidget::setTabOrder(resetMmRestRangeHPlacement, mmRestRangePosAbove);
        QWidget::setTabOrder(mmRestRangePosAbove, resetMMRestRangePosAbove);
        QWidget::setTabOrder(resetMMRestRangePosAbove, mmRestRangePosBelow);
        QWidget::setTabOrder(mmRestRangePosBelow, resetMMRestRangePosBelow);
        QWidget::setTabOrder(resetMMRestRangePosBelow, bracketWidth);
        QWidget::setTabOrder(bracketWidth, resetBracketThickness);
        QWidget::setTabOrder(resetBracketThickness, bracketDistance);
        QWidget::setTabOrder(bracketDistance, resetBracketDistance);
        QWidget::setTabOrder(resetBracketDistance, akkoladeWidth);
        QWidget::setTabOrder(akkoladeWidth, resetBraceThickness);
        QWidget::setTabOrder(resetBraceThickness, akkoladeBarDistance);
        QWidget::setTabOrder(akkoladeBarDistance, resetBraceDistance);
        QWidget::setTabOrder(resetBraceDistance, dividerLeft);
        QWidget::setTabOrder(dividerLeft, dividerLeftSym);
        QWidget::setTabOrder(dividerLeftSym, dividerLeftX);
        QWidget::setTabOrder(dividerLeftX, dividerLeftY);
        QWidget::setTabOrder(dividerLeftY, dividerRight);
        QWidget::setTabOrder(dividerRight, dividerRightSym);
        QWidget::setTabOrder(dividerRightSym, dividerRightX);
        QWidget::setTabOrder(dividerRightX, dividerRightY);
        QWidget::setTabOrder(dividerRightY, radioShowAllClefs);
        QWidget::setTabOrder(radioShowAllClefs, radioHideClefs);
        QWidget::setTabOrder(radioHideClefs, hideTabClefs);
        QWidget::setTabOrder(hideTabClefs, genCourtesyClef);
        QWidget::setTabOrder(genCourtesyClef, clefTab1);
        QWidget::setTabOrder(clefTab1, clefTab2);
        QWidget::setTabOrder(clefTab2, radioShowAllKeys);
        QWidget::setTabOrder(radioShowAllKeys, radioHideKeys);
        QWidget::setTabOrder(radioHideKeys, genCourtesyKeysig);
        QWidget::setTabOrder(genCourtesyKeysig, genCourtesyTimesig);
        QWidget::setTabOrder(genCourtesyTimesig, accidentalsBracketsBadding);
        QWidget::setTabOrder(accidentalsBracketsBadding, resetAccidentalsBracketPadding);
        QWidget::setTabOrder(resetAccidentalsBracketPadding, accidentalTable);
        QWidget::setTabOrder(accidentalTable, radioKeySigNatNone);
        QWidget::setTabOrder(radioKeySigNatNone, radioKeySigNatBefore);
        QWidget::setTabOrder(radioKeySigNatBefore, radioKeySigNatAfter);
        QWidget::setTabOrder(radioKeySigNatAfter, scrollArea_measure);
        QWidget::setTabOrder(scrollArea_measure, minMeasureWidth_2);
        QWidget::setTabOrder(minMeasureWidth_2, resetMinMeasureWidth);
        QWidget::setTabOrder(resetMinMeasureWidth, measureSpacing);
        QWidget::setTabOrder(measureSpacing, resetMeasureSpacing);
        QWidget::setTabOrder(resetMeasureSpacing, minNoteDistance);
        QWidget::setTabOrder(minNoteDistance, resetMinNoteDistance);
        QWidget::setTabOrder(resetMinNoteDistance, clefKeyDistance);
        QWidget::setTabOrder(clefKeyDistance, resetClefKeyDistance);
        QWidget::setTabOrder(resetClefKeyDistance, clefTimesigDistance);
        QWidget::setTabOrder(clefTimesigDistance, resetClefTimesigDistance);
        QWidget::setTabOrder(resetClefTimesigDistance, keyTimesigDistance);
        QWidget::setTabOrder(keyTimesigDistance, resetKeyTimesigDistance);
        QWidget::setTabOrder(resetKeyTimesigDistance, clefKeyRightMargin);
        QWidget::setTabOrder(clefKeyRightMargin, resetClefKeyRightMargin);
        QWidget::setTabOrder(resetClefKeyRightMargin, noteBarDistance);
        QWidget::setTabOrder(noteBarDistance, resetNoteBarDistance);
        QWidget::setTabOrder(resetNoteBarDistance, barNoteDistance);
        QWidget::setTabOrder(barNoteDistance, resetBarNoteDistance);
        QWidget::setTabOrder(resetBarNoteDistance, barAccidentalDistance);
        QWidget::setTabOrder(barAccidentalDistance, resetBarAccidentalDistance);
        QWidget::setTabOrder(resetBarAccidentalDistance, barGraceDistance);
        QWidget::setTabOrder(barGraceDistance, resetBarGraceDistance);
        QWidget::setTabOrder(resetBarGraceDistance, clefLeftMargin);
        QWidget::setTabOrder(clefLeftMargin, resetClefLeftMargin);
        QWidget::setTabOrder(resetClefLeftMargin, clefBarlineDistance);
        QWidget::setTabOrder(clefBarlineDistance, resetClefBarlineDistance);
        QWidget::setTabOrder(resetClefBarlineDistance, keysigLeftMargin);
        QWidget::setTabOrder(keysigLeftMargin, resetKeysigLeftMargin);
        QWidget::setTabOrder(resetKeysigLeftMargin, keyBarlineDistance);
        QWidget::setTabOrder(keyBarlineDistance, resetKeyBarlineDistance);
        QWidget::setTabOrder(resetKeyBarlineDistance, timesigLeftMargin);
        QWidget::setTabOrder(timesigLeftMargin, resetTimesigLeftMargin);
        QWidget::setTabOrder(resetTimesigLeftMargin, timesigBarlineDistance);
        QWidget::setTabOrder(timesigBarlineDistance, resetTimesigBarlineDistance);
        QWidget::setTabOrder(resetTimesigBarlineDistance, systemHeaderDistance);
        QWidget::setTabOrder(systemHeaderDistance, resetSystemHeaderDistance);
        QWidget::setTabOrder(resetSystemHeaderDistance, systemHeaderTimeSigDistance);
        QWidget::setTabOrder(systemHeaderTimeSigDistance, resetSystemHeaderTimeSigDistance);
        QWidget::setTabOrder(resetSystemHeaderTimeSigDistance, showRepeatBarTips);
        QWidget::setTabOrder(showRepeatBarTips, resetShowRepeatBarTips);
        QWidget::setTabOrder(resetShowRepeatBarTips, showStartBarlineSingle);
        QWidget::setTabOrder(showStartBarlineSingle, resetShowStartBarlineSingle);
        QWidget::setTabOrder(resetShowStartBarlineSingle, showStartBarlineMultiple);
        QWidget::setTabOrder(showStartBarlineMultiple, resetShowStartBarlineMultiple);
        QWidget::setTabOrder(resetShowStartBarlineMultiple, scaleBarlines);
        QWidget::setTabOrder(scaleBarlines, resetScaleBarlines);
        QWidget::setTabOrder(resetScaleBarlines, barWidth);
        QWidget::setTabOrder(barWidth, resetBarWidth);
        QWidget::setTabOrder(resetBarWidth, endBarWidth);
        QWidget::setTabOrder(endBarWidth, resetEndBarWidth);
        QWidget::setTabOrder(resetEndBarWidth, endBarDistance);
        QWidget::setTabOrder(endBarDistance, resetEndBarDistance);
        QWidget::setTabOrder(resetEndBarDistance, doubleBarWidth);
        QWidget::setTabOrder(doubleBarWidth, resetDoubleBarWidth);
        QWidget::setTabOrder(resetDoubleBarWidth, doubleBarDistance);
        QWidget::setTabOrder(doubleBarDistance, resetDoubleBarDistance);
        QWidget::setTabOrder(resetDoubleBarDistance, repeatBarlineDotSeparation);
        QWidget::setTabOrder(repeatBarlineDotSeparation, resetRepeatBarlineDotSeparation);
        QWidget::setTabOrder(resetRepeatBarlineDotSeparation, radioKeySigCourtesyBarlineAlwaysDouble);
        QWidget::setTabOrder(radioKeySigCourtesyBarlineAlwaysDouble, radioKeySigCourtesyBarlineAlwaysSingle);
        QWidget::setTabOrder(radioKeySigCourtesyBarlineAlwaysSingle, radioKeySigCourtesyBarlineDoubleBeforeNewSystem);
        QWidget::setTabOrder(radioKeySigCourtesyBarlineDoubleBeforeNewSystem, radioTimeSigCourtesyBarlineAlwaysDouble);
        QWidget::setTabOrder(radioTimeSigCourtesyBarlineAlwaysDouble, radioTimeSigCourtesyBarlineAlwaysSingle);
        QWidget::setTabOrder(radioTimeSigCourtesyBarlineAlwaysSingle, radioTimeSigCourtesyBarlineDoubleBeforeNewSystem);
        QWidget::setTabOrder(radioTimeSigCourtesyBarlineDoubleBeforeNewSystem, shortenStem);
        QWidget::setTabOrder(shortenStem, shortestStem);
        QWidget::setTabOrder(shortestStem, accidentalNoteDistance);
        QWidget::setTabOrder(accidentalNoteDistance, accidentalDistance);
        QWidget::setTabOrder(accidentalDistance, dotMag);
        QWidget::setTabOrder(dotMag, noteDotDistance);
        QWidget::setTabOrder(noteDotDistance, dotDotDistance);
        QWidget::setTabOrder(dotDotDistance, stemWidth);
        QWidget::setTabOrder(stemWidth, ledgerLineWidth);
        QWidget::setTabOrder(ledgerLineWidth, ledgerLineLength);
        QWidget::setTabOrder(ledgerLineLength, multiMeasureRests);
        QWidget::setTabOrder(multiMeasureRests, minEmptyMeasures);
        QWidget::setTabOrder(minEmptyMeasures, minMeasureWidth);
        QWidget::setTabOrder(minMeasureWidth, resetMinMMRestWidth);
        QWidget::setTabOrder(resetMinMMRestWidth, mmRestNumberPos);
        QWidget::setTabOrder(mmRestNumberPos, resetMMRestNumberPos);
        QWidget::setTabOrder(resetMMRestNumberPos, mmRestNumberMaskHBar);
        QWidget::setTabOrder(mmRestNumberMaskHBar, resetMMRestNumberMaskHBar);
        QWidget::setTabOrder(resetMMRestNumberMaskHBar, mmRestHBarThickness);
        QWidget::setTabOrder(mmRestHBarThickness, resetMMRestHBarThickness);
        QWidget::setTabOrder(resetMMRestHBarThickness, multiMeasureRestMargin);
        QWidget::setTabOrder(multiMeasureRestMargin, resetMultiMeasureRestMargin);
        QWidget::setTabOrder(resetMultiMeasureRestMargin, mmRestHBarVStrokeThickness);
        QWidget::setTabOrder(mmRestHBarVStrokeThickness, resetMMRestHBarVStrokeThickness);
        QWidget::setTabOrder(resetMMRestHBarVStrokeThickness, mmRestHBarVStrokeHeight);
        QWidget::setTabOrder(mmRestHBarVStrokeHeight, resetMMRestHBarVStrokeHeight);
        QWidget::setTabOrder(resetMMRestHBarVStrokeHeight, oldStyleMultiMeasureRests);
        QWidget::setTabOrder(oldStyleMultiMeasureRests, mmRestOldStyleMaxMeasures);
        QWidget::setTabOrder(mmRestOldStyleMaxMeasures, resetMMRestOldStyleMaxMeasures);
        QWidget::setTabOrder(resetMMRestOldStyleMaxMeasures, mmRestOldStyleSpacing);
        QWidget::setTabOrder(mmRestOldStyleSpacing, resetMMRestOldStyleSpacing);
        QWidget::setTabOrder(resetMMRestOldStyleSpacing, measureRepeatNumberPos);
        QWidget::setTabOrder(measureRepeatNumberPos, resetMeasureRepeatNumberPos);
        QWidget::setTabOrder(resetMeasureRepeatNumberPos, oneMeasureRepeatShow1);
        QWidget::setTabOrder(oneMeasureRepeatShow1, resetOneMeasureRepeatShow1);
        QWidget::setTabOrder(resetOneMeasureRepeatShow1, fourMeasureRepeatShowExtenders);
        QWidget::setTabOrder(fourMeasureRepeatShowExtenders, resetFourMeasureRepeatShowExtenders);
        QWidget::setTabOrder(resetFourMeasureRepeatShowExtenders, mrNumberSeries);
        QWidget::setTabOrder(mrNumberSeries, mrNumberEveryXMeasures);
        QWidget::setTabOrder(mrNumberEveryXMeasures, resetMRNumberEveryXMeasures);
        QWidget::setTabOrder(resetMRNumberEveryXMeasures, mrNumberSeriesWithParentheses);
        QWidget::setTabOrder(mrNumberSeriesWithParentheses, resetMRNumberSeriesWithParentheses);
        QWidget::setTabOrder(resetMRNumberSeriesWithParentheses, scrollArea_tuplets);
        QWidget::setTabOrder(scrollArea_tuplets, tupletDirection);
        QWidget::setTabOrder(tupletDirection, resetTupletDirection);
        QWidget::setTabOrder(resetTupletDirection, tupletNumberType);
        QWidget::setTabOrder(tupletNumberType, resetTupletNumberType);
        QWidget::setTabOrder(resetTupletNumberType, tupletBracketType);
        QWidget::setTabOrder(tupletBracketType, resetTupletBracketType);
        QWidget::setTabOrder(resetTupletBracketType, tupletUseSymbols);
        QWidget::setTabOrder(tupletUseSymbols, tupletBracketWidth);
        QWidget::setTabOrder(tupletBracketWidth, resetTupletBracketWidth);
        QWidget::setTabOrder(resetTupletBracketWidth, tupletBracketHookHeight);
        QWidget::setTabOrder(tupletBracketHookHeight, resetTupletBracketHookHeight);
        QWidget::setTabOrder(resetTupletBracketHookHeight, tupletMaxSlope);
        QWidget::setTabOrder(tupletMaxSlope, resetTupletMaxSlope);
        QWidget::setTabOrder(resetTupletMaxSlope, tupletVStemDistance);
        QWidget::setTabOrder(tupletVStemDistance, resetTupletVStemDistance);
        QWidget::setTabOrder(resetTupletVStemDistance, tupletVHeadDistance);
        QWidget::setTabOrder(tupletVHeadDistance, resetTupletVHeadDistance);
        QWidget::setTabOrder(resetTupletVHeadDistance, tupletOutOfStaff);
        QWidget::setTabOrder(tupletOutOfStaff, tupletStemLeftDistance);
        QWidget::setTabOrder(tupletStemLeftDistance, resetTupletStemLeftDistance);
        QWidget::setTabOrder(resetTupletStemLeftDistance, tupletNoteLeftDistance);
        QWidget::setTabOrder(tupletNoteLeftDistance, resetTupletNoteLeftDistance);
        QWidget::setTabOrder(resetTupletNoteLeftDistance, tupletStemRightDistance);
        QWidget::setTabOrder(tupletStemRightDistance, resetTupletStemRightDistance);
        QWidget::setTabOrder(resetTupletStemRightDistance, tupletNoteRightDistance);
        QWidget::setTabOrder(tupletNoteRightDistance, resetTupletNoteRightDistance);
        QWidget::setTabOrder(resetTupletNoteRightDistance, arpeggioNoteDistance);
        QWidget::setTabOrder(arpeggioNoteDistance, arpeggioLineWidth);
        QWidget::setTabOrder(arpeggioLineWidth, arpeggioHookLen);
        QWidget::setTabOrder(arpeggioHookLen, arpeggioHiddenInStdIfTab);
        QWidget::setTabOrder(arpeggioHiddenInStdIfTab, slurEndLineWidth);
        QWidget::setTabOrder(slurEndLineWidth, resetSlurEndLineWidth);
        QWidget::setTabOrder(resetSlurEndLineWidth, slurMidLineWidth);
        QWidget::setTabOrder(slurMidLineWidth, resetSlurMidLineWidth);
        QWidget::setTabOrder(resetSlurMidLineWidth, slurDottedLineWidth);
        QWidget::setTabOrder(slurDottedLineWidth, resetSlurDottedLineWidth);
        QWidget::setTabOrder(resetSlurDottedLineWidth, slurMinDistance);
        QWidget::setTabOrder(slurMinDistance, resetSlurMinDistance);
        QWidget::setTabOrder(resetSlurMinDistance, tieEndLineWidth);
        QWidget::setTabOrder(tieEndLineWidth, resetTieEndLineWidth);
        QWidget::setTabOrder(resetTieEndLineWidth, tieMidLineWidth);
        QWidget::setTabOrder(tieMidLineWidth, resetTieMidLineWidth);
        QWidget::setTabOrder(resetTieMidLineWidth, tieDottedLineWidth);
        QWidget::setTabOrder(tieDottedLineWidth, resetTieDottedLineWidth);
        QWidget::setTabOrder(resetTieDottedLineWidth, tieMinDistance);
        QWidget::setTabOrder(tieMinDistance, resetTieMinDistance);
        QWidget::setTabOrder(resetTieMinDistance, minTieLength);
        QWidget::setTabOrder(minTieLength, resetMinTieLength);
        QWidget::setTabOrder(resetMinTieLength, hairpinPosAbove);
        QWidget::setTabOrder(hairpinPosAbove, resetHairpinPosAbove);
        QWidget::setTabOrder(resetHairpinPosAbove, hairpinPosBelow);
        QWidget::setTabOrder(hairpinPosBelow, resetHairpinPosBelow);
        QWidget::setTabOrder(resetHairpinPosBelow, hairpinHeight);
        QWidget::setTabOrder(hairpinHeight, resetHairpinHeight);
        QWidget::setTabOrder(resetHairpinHeight, hairpinContinueHeight);
        QWidget::setTabOrder(hairpinContinueHeight, resetHairpinContinueHeight);
        QWidget::setTabOrder(resetHairpinContinueHeight, autoplaceHairpinDynamicsDistance);
        QWidget::setTabOrder(autoplaceHairpinDynamicsDistance, resetAutoplaceHairpinDynamicsDistance);
        QWidget::setTabOrder(resetAutoplaceHairpinDynamicsDistance, hairpinLineWidth);
        QWidget::setTabOrder(hairpinLineWidth, resetHairpinLineWidth);
        QWidget::setTabOrder(resetHairpinLineWidth, voltaPosAbove);
        QWidget::setTabOrder(voltaPosAbove, resetVoltaPosAbove);
        QWidget::setTabOrder(resetVoltaPosAbove, voltaHook);
        QWidget::setTabOrder(voltaHook, resetVoltaHook);
        QWidget::setTabOrder(resetVoltaHook, voltaLineWidth);
        QWidget::setTabOrder(voltaLineWidth, resetVoltaLineWidth);
        QWidget::setTabOrder(resetVoltaLineWidth, voltaLineStyle);
        QWidget::setTabOrder(voltaLineStyle, resetVoltaLineStyle);
        QWidget::setTabOrder(resetVoltaLineStyle, voltaLineStyleDashSize);
        QWidget::setTabOrder(voltaLineStyleDashSize, resetVoltaLineStyleDashSize);
        QWidget::setTabOrder(resetVoltaLineStyleDashSize, voltaLineStyleGapSize);
        QWidget::setTabOrder(voltaLineStyleGapSize, resetVoltaLineStyleGapSize);
        QWidget::setTabOrder(resetVoltaLineStyleGapSize, ottavaNumbersOnly);
        QWidget::setTabOrder(ottavaNumbersOnly, resetOttavaNumbersOnly);
        QWidget::setTabOrder(resetOttavaNumbersOnly, ottavaPosAbove);
        QWidget::setTabOrder(ottavaPosAbove, resetOttavaPosAbove);
        QWidget::setTabOrder(resetOttavaPosAbove, ottavaPosBelow);
        QWidget::setTabOrder(ottavaPosBelow, resetOttavaPosBelow);
        QWidget::setTabOrder(resetOttavaPosBelow, ottavaHookAbove);
        QWidget::setTabOrder(ottavaHookAbove, resetOttavaHookAbove);
        QWidget::setTabOrder(resetOttavaHookAbove, ottavaHookBelow);
        QWidget::setTabOrder(ottavaHookBelow, resetOttavaHookBelow);
        QWidget::setTabOrder(resetOttavaHookBelow, ottavaLineWidth);
        QWidget::setTabOrder(ottavaLineWidth, resetOttavaLineWidth);
        QWidget::setTabOrder(resetOttavaLineWidth, ottavaLineStyle);
        QWidget::setTabOrder(ottavaLineStyle, resetOttavaLineStyle);
        QWidget::setTabOrder(resetOttavaLineStyle, ottavaLineStyleDashSize);
        QWidget::setTabOrder(ottavaLineStyleDashSize, resetOttavaLineStyleDashSize);
        QWidget::setTabOrder(resetOttavaLineStyleDashSize, ottavaLineStyleGapSize);
        QWidget::setTabOrder(ottavaLineStyleGapSize, resetOttavaLineStyleGapSize);
        QWidget::setTabOrder(resetOttavaLineStyleGapSize, pedalLinePlacement);
        QWidget::setTabOrder(pedalLinePlacement, resetPedalLinePlacement);
        QWidget::setTabOrder(resetPedalLinePlacement, pedalLinePosAbove);
        QWidget::setTabOrder(pedalLinePosAbove, resetPedalLinePosAbove);
        QWidget::setTabOrder(resetPedalLinePosAbove, pedalLinePosBelow);
        QWidget::setTabOrder(pedalLinePosBelow, resetPedalLinePosBelow);
        QWidget::setTabOrder(resetPedalLinePosBelow, pedalLineWidth);
        QWidget::setTabOrder(pedalLineWidth, resetPedalLineWidth);
        QWidget::setTabOrder(resetPedalLineWidth, pedalLineStyle);
        QWidget::setTabOrder(pedalLineStyle, resetPedalLineStyle);
        QWidget::setTabOrder(resetPedalLineStyle, pedalLineStyleDashSize);
        QWidget::setTabOrder(pedalLineStyleDashSize, resetPedalLineStyleDashSize);
        QWidget::setTabOrder(resetPedalLineStyleDashSize, pedalLineStyleGapSize);
        QWidget::setTabOrder(pedalLineStyleGapSize, resetPedalLineStyleGapSize);
        QWidget::setTabOrder(resetPedalLineStyleGapSize, trillLinePlacement);
        QWidget::setTabOrder(trillLinePlacement, resetTrillLinePlacement);
        QWidget::setTabOrder(resetTrillLinePlacement, trillLinePosAbove);
        QWidget::setTabOrder(trillLinePosAbove, resetTrillLinePosAbove);
        QWidget::setTabOrder(resetTrillLinePosAbove, trillLinePosBelow);
        QWidget::setTabOrder(trillLinePosBelow, resetTrillLinePosBelow);
        QWidget::setTabOrder(resetTrillLinePosBelow, vibratoLinePlacement);
        QWidget::setTabOrder(vibratoLinePlacement, resetVibratoLinePlacement);
        QWidget::setTabOrder(resetVibratoLinePlacement, vibratoLinePosAbove);
        QWidget::setTabOrder(vibratoLinePosAbove, resetVibratoLinePosAbove);
        QWidget::setTabOrder(resetVibratoLinePosAbove, vibratoLinePosBelow);
        QWidget::setTabOrder(vibratoLinePosBelow, resetVibratoLinePosBelow);
        QWidget::setTabOrder(resetVibratoLinePosBelow, bendLineWidth);
        QWidget::setTabOrder(bendLineWidth, resetBendLineWidth);
        QWidget::setTabOrder(resetBendLineWidth, bendLineWidthTab);
        QWidget::setTabOrder(bendLineWidthTab, resetBendLineWidthTab);
        QWidget::setTabOrder(resetBendLineWidthTab, bendArrowWidth);
        QWidget::setTabOrder(bendArrowWidth, resetBendArrowWidth);
        QWidget::setTabOrder(resetBendArrowWidth, bendArrowHeight);
        QWidget::setTabOrder(bendArrowHeight, resetBendArrowHeight);
        QWidget::setTabOrder(resetBendArrowHeight, guitarBendCueSizedGraceFrets);
        QWidget::setTabOrder(guitarBendCueSizedGraceFrets, textLinePlacement);
        QWidget::setTabOrder(textLinePlacement, resetTextLinePlacement);
        QWidget::setTabOrder(resetTextLinePlacement, textLinePosAbove);
        QWidget::setTabOrder(textLinePosAbove, resetTextLinePosAbove);
        QWidget::setTabOrder(resetTextLinePosAbove, textLinePosBelow);
        QWidget::setTabOrder(textLinePosBelow, resetTextLinePosBelow);
        QWidget::setTabOrder(resetTextLinePosBelow, systemTextLinePlacement);
        QWidget::setTabOrder(systemTextLinePlacement, resetSystemTextLinePlacement);
        QWidget::setTabOrder(resetSystemTextLinePlacement, systemTextLinePosAbove);
        QWidget::setTabOrder(systemTextLinePosAbove, resetSystemTextLinePosAbove);
        QWidget::setTabOrder(resetSystemTextLinePosAbove, systemTextLinePosBelow);
        QWidget::setTabOrder(systemTextLinePosBelow, resetSystemTextLinePosBelow);
        QWidget::setTabOrder(resetSystemTextLinePosBelow, articMinVerticalDist);
        QWidget::setTabOrder(articMinVerticalDist, resetArticMinVerticalDist);
        QWidget::setTabOrder(resetArticMinVerticalDist, articNoteHeadDist);
        QWidget::setTabOrder(articNoteHeadDist, resetArticNoteHeadDist);
        QWidget::setTabOrder(resetArticNoteHeadDist, articStemDist);
        QWidget::setTabOrder(articStemDist, resetArticStemDist);
        QWidget::setTabOrder(resetArticStemDist, articStaffDist);
        QWidget::setTabOrder(articStaffDist, resetArticStaffDist);
        QWidget::setTabOrder(resetArticStaffDist, articulationMag);
        QWidget::setTabOrder(articulationMag, resetArticulationMag);
        QWidget::setTabOrder(resetArticulationMag, radioArticAlignStem);
        QWidget::setTabOrder(radioArticAlignStem, radioArticAlignNoteHead);
        QWidget::setTabOrder(radioArticAlignNoteHead, radioArticAlignCenter);
        QWidget::setTabOrder(radioArticAlignCenter, radioArticKeepTogether);
        QWidget::setTabOrder(radioArticKeepTogether, radioArticAllowSeparate);
        QWidget::setTabOrder(radioArticAllowSeparate, fermataPosAbove);
        QWidget::setTabOrder(fermataPosAbove, resetFermataPosAbove);
        QWidget::setTabOrder(resetFermataPosAbove, fermataPosBelow);
        QWidget::setTabOrder(fermataPosBelow, resetFermataPosBelow);
        QWidget::setTabOrder(resetFermataPosBelow, fermataMinDistance);
        QWidget::setTabOrder(fermataMinDistance, resetFermataMinDistance);
        QWidget::setTabOrder(resetFermataMinDistance, staffTextPlacement);
        QWidget::setTabOrder(staffTextPlacement, resetStaffTextPlacement);
        QWidget::setTabOrder(resetStaffTextPlacement, staffTextPosAbove);
        QWidget::setTabOrder(staffTextPosAbove, resetStaffTextPosAbove);
        QWidget::setTabOrder(resetStaffTextPosAbove, staffTextPosBelow);
        QWidget::setTabOrder(staffTextPosBelow, resetStaffTextPosBelow);
        QWidget::setTabOrder(resetStaffTextPosBelow, staffTextMinDistance);
        QWidget::setTabOrder(staffTextMinDistance, resetStaffTextMinDistance);
        QWidget::setTabOrder(resetStaffTextMinDistance, tempoTextPlacement);
        QWidget::setTabOrder(tempoTextPlacement, resetTempoTextPlacement);
        QWidget::setTabOrder(resetTempoTextPlacement, tempoTextPosAbove);
        QWidget::setTabOrder(tempoTextPosAbove, resetTempoTextPosAbove);
        QWidget::setTabOrder(resetTempoTextPosAbove, tempoTextPosBelow);
        QWidget::setTabOrder(tempoTextPosBelow, resetTempoTextPosBelow);
        QWidget::setTabOrder(resetTempoTextPosBelow, tempoTextMinDistance);
        QWidget::setTabOrder(tempoTextMinDistance, resetTempoTextMinDistance);
        QWidget::setTabOrder(resetTempoTextMinDistance, scrollArea_lyrics);
        QWidget::setTabOrder(scrollArea_lyrics, lyricsPlacement);
        QWidget::setTabOrder(lyricsPlacement, resetLyricsPlacement);
        QWidget::setTabOrder(resetLyricsPlacement, resetLyricsPosAbove);
        QWidget::setTabOrder(resetLyricsPosAbove, resetLyricsPosBelow);
        QWidget::setTabOrder(resetLyricsPosBelow, lyricsLineHeight);
        QWidget::setTabOrder(lyricsLineHeight, resetLyricsLineHeight);
        QWidget::setTabOrder(resetLyricsLineHeight, lyricsMinTopDistance);
        QWidget::setTabOrder(lyricsMinTopDistance, resetLyricsMinTopDistance);
        QWidget::setTabOrder(resetLyricsMinTopDistance, lyricsMinBottomDistance);
        QWidget::setTabOrder(lyricsMinBottomDistance, resetLyricsMinBottomDistance);
        QWidget::setTabOrder(resetLyricsMinBottomDistance, lyricsMinDistance);
        QWidget::setTabOrder(lyricsMinDistance, resetLyricsMinDistance);
        QWidget::setTabOrder(resetLyricsMinDistance, lyricsAlignVerseNumber);
        QWidget::setTabOrder(lyricsAlignVerseNumber, resetLyricsAlignVerseNumber);
        QWidget::setTabOrder(resetLyricsAlignVerseNumber, lyricsDashMinLength);
        QWidget::setTabOrder(lyricsDashMinLength, resetLyricsDashMinLength);
        QWidget::setTabOrder(resetLyricsDashMinLength, lyricsDashMaxLength);
        QWidget::setTabOrder(lyricsDashMaxLength, resetLyricsDashMaxLength);
        QWidget::setTabOrder(resetLyricsDashMaxLength, lyricsDashMaxDistance);
        QWidget::setTabOrder(lyricsDashMaxDistance, resetLyricsDashMaxDistance);
        QWidget::setTabOrder(resetLyricsDashMaxDistance, lyricsDashLineThickness);
        QWidget::setTabOrder(lyricsDashLineThickness, resetLyricsDashLineThickness);
        QWidget::setTabOrder(resetLyricsDashLineThickness, lyricsDashPad);
        QWidget::setTabOrder(lyricsDashPad, resetLyricsDashPad);
        QWidget::setTabOrder(resetLyricsDashPad, lyricsDashYposRatio);
        QWidget::setTabOrder(lyricsDashYposRatio, resetLyricsDashYposRatio);
        QWidget::setTabOrder(resetLyricsDashYposRatio, lyricsDashForce);
        QWidget::setTabOrder(lyricsDashForce, resetLyricsDashForce);
        QWidget::setTabOrder(resetLyricsDashForce, lyricsLineThickness);
        QWidget::setTabOrder(lyricsLineThickness, resetLyricsLineThickness);
        QWidget::setTabOrder(resetLyricsLineThickness, lyricsMelismaPad);
        QWidget::setTabOrder(lyricsMelismaPad, resetLyricsMelismaPad);
        QWidget::setTabOrder(resetLyricsMelismaPad, snapExpression);
        QWidget::setTabOrder(snapExpression, resetSnapExpression);
        QWidget::setTabOrder(resetSnapExpression, rehearsalMarkPlacement);
        QWidget::setTabOrder(rehearsalMarkPlacement, resetRehearsalMarkPlacement);
        QWidget::setTabOrder(resetRehearsalMarkPlacement, rehearsalMarkPosAbove);
        QWidget::setTabOrder(rehearsalMarkPosAbove, resetRehearsalMarkPosAbove);
        QWidget::setTabOrder(resetRehearsalMarkPosAbove, rehearsalMarkPosBelow);
        QWidget::setTabOrder(rehearsalMarkPosBelow, resetRehearsalMarkPosBelow);
        QWidget::setTabOrder(resetRehearsalMarkPosBelow, rehearsalMarkMinDistance);
        QWidget::setTabOrder(rehearsalMarkMinDistance, resetRehearsalMarkMinDistance);
        QWidget::setTabOrder(resetRehearsalMarkMinDistance, comboFBFont);
        QWidget::setTabOrder(comboFBFont, doubleSpinFBSize);
        QWidget::setTabOrder(doubleSpinFBSize, doubleSpinFBVertPos);
        QWidget::setTabOrder(doubleSpinFBVertPos, spinFBLineHeight);
        QWidget::setTabOrder(spinFBLineHeight, radioFBTop);
        QWidget::setTabOrder(radioFBTop, radioFBBottom);
        QWidget::setTabOrder(radioFBBottom, radioFBModern);
        QWidget::setTabOrder(radioFBModern, radioFBHistoric);
        QWidget::setTabOrder(radioFBHistoric, scrollArea_chordSymbols);
        QWidget::setTabOrder(scrollArea_chordSymbols, chordsStandard);
        QWidget::setTabOrder(chordsStandard, chordsJazz);
        QWidget::setTabOrder(chordsJazz, chordsCustom);
        QWidget::setTabOrder(chordsCustom, chordDescriptionFile);
        QWidget::setTabOrder(chordDescriptionFile, chordDescriptionFileButton);
        QWidget::setTabOrder(chordDescriptionFileButton, chordsXmlFile);
        QWidget::setTabOrder(chordsXmlFile, extensionMag);
        QWidget::setTabOrder(extensionMag, resetExtensionMag);
        QWidget::setTabOrder(resetExtensionMag, extensionAdjust);
        QWidget::setTabOrder(extensionAdjust, resetExtensionAdjust);
        QWidget::setTabOrder(resetExtensionAdjust, modifierMag);
        QWidget::setTabOrder(modifierMag, resetModifierMag);
        QWidget::setTabOrder(resetModifierMag, modifierAdjust);
        QWidget::setTabOrder(modifierAdjust, resetModifierAdjust);
        QWidget::setTabOrder(resetModifierAdjust, useStandardNoteNames);
        QWidget::setTabOrder(useStandardNoteNames, useGermanNoteNames);
        QWidget::setTabOrder(useGermanNoteNames, useFullGermanNoteNames);
        QWidget::setTabOrder(useFullGermanNoteNames, useSolfeggioNoteNames);
        QWidget::setTabOrder(useSolfeggioNoteNames, useFrenchNoteNames);
        QWidget::setTabOrder(useFrenchNoteNames, automaticCapitalization);
        QWidget::setTabOrder(automaticCapitalization, lowerCaseMinorChords);
        QWidget::setTabOrder(lowerCaseMinorChords, lowerCaseBassNotes);
        QWidget::setTabOrder(lowerCaseBassNotes, allCapsNoteNames);
        QWidget::setTabOrder(allCapsNoteNames, harmonyFretDist);
        QWidget::setTabOrder(harmonyFretDist, minHarmonyDistance);
        QWidget::setTabOrder(minHarmonyDistance, maxHarmonyBarDistance);
        QWidget::setTabOrder(maxHarmonyBarDistance, maxChordShiftAbove);
        QWidget::setTabOrder(maxChordShiftAbove, resetMaxChordShiftAbove);
        QWidget::setTabOrder(resetMaxChordShiftAbove, maxChordShiftBelow);
        QWidget::setTabOrder(maxChordShiftBelow, resetMaxChordShiftBelow);
        QWidget::setTabOrder(resetMaxChordShiftBelow, capoPosition);
        QWidget::setTabOrder(capoPosition, fretY);
        QWidget::setTabOrder(fretY, fretMag);
        QWidget::setTabOrder(fretMag, radioFretNumRight);
        QWidget::setTabOrder(radioFretNumRight, radioFretNumLeft);
        QWidget::setTabOrder(radioFretNumLeft, fretNumMag);
        QWidget::setTabOrder(fretNumMag, barreLineWidth);
        QWidget::setTabOrder(barreLineWidth, fretDotSize);
        QWidget::setTabOrder(fretDotSize, fretStringSpacing);
        QWidget::setTabOrder(fretStringSpacing, fretFretSpacing);
        QWidget::setTabOrder(fretFretSpacing, maxFretShiftAbove);
        QWidget::setTabOrder(maxFretShiftAbove, resetMaxFretShiftAbove);
        QWidget::setTabOrder(resetMaxFretShiftAbove, maxFretShiftBelow);
        QWidget::setTabOrder(maxFretShiftBelow, resetMaxFretShiftBelow);
        QWidget::setTabOrder(resetMaxFretShiftBelow, scrollArea);
        QWidget::setTabOrder(scrollArea, slurShowTabCommon);
        QWidget::setTabOrder(slurShowTabCommon, slurShowTabSimple);
        QWidget::setTabOrder(slurShowTabSimple, fermataShowTabCommon);
        QWidget::setTabOrder(fermataShowTabCommon, fermataShowTabSimple);
        QWidget::setTabOrder(fermataShowTabSimple, dynamicsShowTabCommon);
        QWidget::setTabOrder(dynamicsShowTabCommon, dynamicsShowTabSimple);
        QWidget::setTabOrder(dynamicsShowTabSimple, hairpinShowTabCommon);
        QWidget::setTabOrder(hairpinShowTabCommon, hairpinShowTabSimple);
        QWidget::setTabOrder(hairpinShowTabSimple, accentShowTabCommon);
        QWidget::setTabOrder(accentShowTabCommon, accentShowTabSimple);
        QWidget::setTabOrder(accentShowTabSimple, staccatoShowTabCommon);
        QWidget::setTabOrder(staccatoShowTabCommon, staccatoShowTabSimple);
        QWidget::setTabOrder(staccatoShowTabSimple, harmonicMarkShowTabCommon);
        QWidget::setTabOrder(harmonicMarkShowTabCommon, harmonicMarkShowTabSimple);
        QWidget::setTabOrder(harmonicMarkShowTabSimple, letRingShowTabCommon);
        QWidget::setTabOrder(letRingShowTabCommon, letRingShowTabSimple);
        QWidget::setTabOrder(letRingShowTabSimple, palmMuteShowTabCommon);
        QWidget::setTabOrder(palmMuteShowTabCommon, palmMuteShowTabSimple);
        QWidget::setTabOrder(palmMuteShowTabSimple, rasgueadoShowTabCommon);
        QWidget::setTabOrder(rasgueadoShowTabCommon, rasgueadoShowTabSimple);
        QWidget::setTabOrder(rasgueadoShowTabSimple, mordentShowTabCommon);
        QWidget::setTabOrder(mordentShowTabCommon, mordentShowTabSimple);
        QWidget::setTabOrder(mordentShowTabSimple, turnShowTabCommon);
        QWidget::setTabOrder(turnShowTabCommon, turnShowTabSimple);
        QWidget::setTabOrder(turnShowTabSimple, wahShowTabCommon);
        QWidget::setTabOrder(wahShowTabCommon, wahShowTabSimple);
        QWidget::setTabOrder(wahShowTabSimple, golpeShowTabCommon);
        QWidget::setTabOrder(golpeShowTabCommon, golpeShowTabSimple);
        QWidget::setTabOrder(golpeShowTabSimple, textStyles);
        QWidget::setTabOrder(textStyles, styleName);
        QWidget::setTabOrder(styleName, resetTextStyleName);
        QWidget::setTabOrder(resetTextStyleName, textStyleFontFace);
        QWidget::setTabOrder(textStyleFontFace, resetTextStyleFontFace);
        QWidget::setTabOrder(resetTextStyleFontFace, textStyleFontSize);
        QWidget::setTabOrder(textStyleFontSize, resetTextStyleFontSize);
        QWidget::setTabOrder(resetTextStyleFontSize, textStyleLineSpacing);
        QWidget::setTabOrder(textStyleLineSpacing, resetTextStyleLineSpacing);
        QWidget::setTabOrder(resetTextStyleLineSpacing, textStyleSpatiumDependent);
        QWidget::setTabOrder(textStyleSpatiumDependent, resetTextStyleSpatiumDependent);
        QWidget::setTabOrder(resetTextStyleSpatiumDependent, textStyleMusicalSymbolsScale);
        QWidget::setTabOrder(textStyleMusicalSymbolsScale, resetTextStyleMusicalSymbolsScale);
        QWidget::setTabOrder(resetTextStyleMusicalSymbolsScale, resetTextStyleFontStyle);
        QWidget::setTabOrder(resetTextStyleFontStyle, resetTextStyleAlign);
        QWidget::setTabOrder(resetTextStyleAlign, textStyleColor);
        QWidget::setTabOrder(textStyleColor, resetTextStyleColor);
        QWidget::setTabOrder(resetTextStyleColor, textStyleOffset);
        QWidget::setTabOrder(textStyleOffset, resetTextStyleOffset);
        QWidget::setTabOrder(resetTextStyleOffset, textStyleFrameType);
        QWidget::setTabOrder(textStyleFrameType, resetTextStyleFrameType);
        QWidget::setTabOrder(resetTextStyleFrameType, textStyleFrameForeground);
        QWidget::setTabOrder(textStyleFrameForeground, resetTextStyleFrameForeground);
        QWidget::setTabOrder(resetTextStyleFrameForeground, textStyleFrameBackground);
        QWidget::setTabOrder(textStyleFrameBackground, resetTextStyleFrameBackground);
        QWidget::setTabOrder(resetTextStyleFrameBackground, textStyleFrameBorder);
        QWidget::setTabOrder(textStyleFrameBorder, resetTextStyleFrameBorder);
        QWidget::setTabOrder(resetTextStyleFrameBorder, textStyleFramePadding);
        QWidget::setTabOrder(textStyleFramePadding, resetTextStyleFramePadding);
        QWidget::setTabOrder(resetTextStyleFramePadding, textStyleFrameBorderRadius);
        QWidget::setTabOrder(textStyleFrameBorderRadius, resetTextStyleFrameBorderRadius);
        QWidget::setTabOrder(resetTextStyleFrameBorderRadius, buttonTogglePagelist);
        QWidget::setTabOrder(buttonTogglePagelist, resetStylesButton);
        QWidget::setTabOrder(resetStylesButton, tabShowTiesAndFret);
        QWidget::setTabOrder(tabShowTiesAndFret, tabShowTies);
        QWidget::setTabOrder(tabShowTies, tabShowNone);
        QWidget::setTabOrder(tabShowNone, tabParenthSystem);
        QWidget::setTabOrder(tabParenthSystem, tabParenthMeasure);
        QWidget::setTabOrder(tabParenthMeasure, tabParenthNone);
        QWidget::setTabOrder(tabParenthNone, tabParenthArticulation);
        QWidget::setTabOrder(tabParenthArticulation, resetTupletUseSymbols);

        retranslateUi(EditStyleBase);

        QMetaObject::connectSlotsByName(EditStyleBase);
    } // setupUi

    void retranslateUi(QDialog *EditStyleBase)
    {
        EditStyleBase->setWindowTitle(QCoreApplication::translate("EditStyleBase", "Style", nullptr));

        const bool __sortingEnabled = pageList->isSortingEnabled();
        pageList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = pageList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("EditStyleBase", "Score", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = pageList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("EditStyleBase", "Page", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = pageList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("EditStyleBase", "Sizes", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = pageList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("EditStyleBase", "Header & footer", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = pageList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("EditStyleBase", "Measure numbers", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = pageList->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("EditStyleBase", "System", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = pageList->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("EditStyleBase", "Clefs, key & time signatures", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = pageList->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("EditStyleBase", "Accidentals", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = pageList->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("EditStyleBase", "Measures", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = pageList->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("EditStyleBase", "Barlines", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = pageList->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("EditStyleBase", "Notes", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = pageList->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("EditStyleBase", "Rests", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = pageList->item(12);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("EditStyleBase", "Measure repeats", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = pageList->item(13);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("EditStyleBase", "Beams", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = pageList->item(14);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("EditStyleBase", "Tuplets", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = pageList->item(15);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("EditStyleBase", "Arpeggios", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = pageList->item(16);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("EditStyleBase", "Slurs & ties", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = pageList->item(17);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("EditStyleBase", "Dynamics & hairpins", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = pageList->item(18);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("EditStyleBase", "Voltas", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = pageList->item(19);
        ___qlistwidgetitem19->setText(QCoreApplication::translate("EditStyleBase", "Ottavas", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = pageList->item(20);
        ___qlistwidgetitem20->setText(QCoreApplication::translate("EditStyleBase", "Pedal lines", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = pageList->item(21);
        ___qlistwidgetitem21->setText(QCoreApplication::translate("EditStyleBase", "Trill lines", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = pageList->item(22);
        ___qlistwidgetitem22->setText(QCoreApplication::translate("EditStyleBase", "Vibrato lines", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = pageList->item(23);
        ___qlistwidgetitem23->setText(QCoreApplication::translate("EditStyleBase", "Bends", nullptr));
        QListWidgetItem *___qlistwidgetitem24 = pageList->item(24);
        ___qlistwidgetitem24->setText(QCoreApplication::translate("EditStyleBase", "Text lines", nullptr));
        QListWidgetItem *___qlistwidgetitem25 = pageList->item(25);
        ___qlistwidgetitem25->setText(QCoreApplication::translate("EditStyleBase", "System text lines", nullptr));
        QListWidgetItem *___qlistwidgetitem26 = pageList->item(26);
        ___qlistwidgetitem26->setText(QCoreApplication::translate("EditStyleBase", "Articulations & ornaments", nullptr));
        QListWidgetItem *___qlistwidgetitem27 = pageList->item(27);
        ___qlistwidgetitem27->setText(QCoreApplication::translate("EditStyleBase", "Fermatas", nullptr));
        QListWidgetItem *___qlistwidgetitem28 = pageList->item(28);
        ___qlistwidgetitem28->setText(QCoreApplication::translate("EditStyleBase", "Staff text", nullptr));
        QListWidgetItem *___qlistwidgetitem29 = pageList->item(29);
        ___qlistwidgetitem29->setText(QCoreApplication::translate("EditStyleBase", "Tempo text", nullptr));
        QListWidgetItem *___qlistwidgetitem30 = pageList->item(30);
        ___qlistwidgetitem30->setText(QCoreApplication::translate("EditStyleBase", "Lyrics", nullptr));
        QListWidgetItem *___qlistwidgetitem31 = pageList->item(31);
        ___qlistwidgetitem31->setText(QCoreApplication::translate("EditStyleBase", "Expression text", nullptr));
        QListWidgetItem *___qlistwidgetitem32 = pageList->item(32);
        ___qlistwidgetitem32->setText(QCoreApplication::translate("EditStyleBase", "Rehearsal marks", nullptr));
        QListWidgetItem *___qlistwidgetitem33 = pageList->item(33);
        ___qlistwidgetitem33->setText(QCoreApplication::translate("EditStyleBase", "Figured bass", nullptr));
        QListWidgetItem *___qlistwidgetitem34 = pageList->item(34);
        ___qlistwidgetitem34->setText(QCoreApplication::translate("EditStyleBase", "Chord symbols", nullptr));
        QListWidgetItem *___qlistwidgetitem35 = pageList->item(35);
        ___qlistwidgetitem35->setText(QCoreApplication::translate("EditStyleBase", "Fretboard diagrams", nullptr));
        QListWidgetItem *___qlistwidgetitem36 = pageList->item(36);
        ___qlistwidgetitem36->setText(QCoreApplication::translate("EditStyleBase", "Tablature", nullptr));
        QListWidgetItem *___qlistwidgetitem37 = pageList->item(37);
        ___qlistwidgetitem37->setText(QCoreApplication::translate("EditStyleBase", "Text styles", nullptr));
        pageList->setSortingEnabled(__sortingEnabled);

        groupBox_score->setTitle(QCoreApplication::translate("EditStyleBase", "Score", nullptr));
        label_musicalSymbolFont->setText(QCoreApplication::translate("EditStyleBase", "Musical symbols font:", nullptr));

#if QT_CONFIG(tooltip)
        optimizeStyleCheckbox->setToolTip(QCoreApplication::translate("EditStyleBase", "MuseScore Studio will change the style to suit the font better", nullptr));
#endif // QT_CONFIG(tooltip)
        optimizeStyleCheckbox->setText(QCoreApplication::translate("EditStyleBase", "Automatically load style settings based on font", nullptr));
        label_musicalTextFont->setText(QCoreApplication::translate("EditStyleBase", "Musical text font:", nullptr));

        label_staffLineWidth->setText(QCoreApplication::translate("EditStyleBase", "Staff line thickness:", nullptr));
        staffLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetStaffLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetStaffLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Staff line thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        concertPitch->setText(QCoreApplication::translate("EditStyleBase", "Display in concert pitch", nullptr));
        enableIndentationOnFirstSystem->setTitle(QCoreApplication::translate("EditStyleBase", "Enable indentation on first system", nullptr));
        label_indentation->setText(QCoreApplication::translate("EditStyleBase", "First system indentation:", nullptr));
        indentationValue->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetFirstSystemIndentation->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetFirstSystemIndentation->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'First system indentation' value", nullptr));
#endif // QT_CONFIG(accessibility)
        hideEmptyStaves->setTitle(QCoreApplication::translate("EditStyleBase", "Hide empty staves within systems", nullptr));
        dontHideStavesInFirstSystem->setText(QCoreApplication::translate("EditStyleBase", "Don\342\200\231t hide empty staves in first system", nullptr));
        alwaysShowBrackets->setText(QCoreApplication::translate("EditStyleBase", "Show brackets when spanning a single staff", nullptr));
        crossMeasureValues->setText(QCoreApplication::translate("EditStyleBase", "Display note values across measure boundaries (EXPERIMENTAL, early music only!)", nullptr));
        instrumentLabel_box->setTitle(QCoreApplication::translate("EditStyleBase", "Instrument names", nullptr));
        hideInstrumentNameIfOneInstrument->setText(QCoreApplication::translate("EditStyleBase", "Hide if there is only 1 instrument", nullptr));
        subsLongBtn->setText(QCoreApplication::translate("EditStyleBase", "Long name", nullptr));
#if QT_CONFIG(tooltip)
        resetSubsSystemLabel->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSubsSystemLabel->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Instrument labels on subsequent systems' value", nullptr));
#endif // QT_CONFIG(accessibility)
        firstLongBtn->setText(QCoreApplication::translate("EditStyleBase", "Long name", nullptr));
#if QT_CONFIG(tooltip)
        resetFirstSystemLabel->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetFirstSystemLabel->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Instrument labels on first system of sections' value", nullptr));
#endif // QT_CONFIG(accessibility)
        subsHideBtn->setText(QCoreApplication::translate("EditStyleBase", "Hide", nullptr));
        subsSystemLabel_label->setText(QCoreApplication::translate("EditStyleBase", "On subsequent systems:", nullptr));
        firstSystemLabel_label->setText(QCoreApplication::translate("EditStyleBase", "On first system of sections:", nullptr));
        subsShortBtn->setText(QCoreApplication::translate("EditStyleBase", "Short name", nullptr));
        firstShortBtn->setText(QCoreApplication::translate("EditStyleBase", "Short name", nullptr));
        firstHideBtn->setText(QCoreApplication::translate("EditStyleBase", "Hide", nullptr));
        swingSettings->setTitle(QCoreApplication::translate("EditStyleBase", "Swing settings", nullptr));
        SwingLabel->setText(QCoreApplication::translate("EditStyleBase", "Swing:", nullptr));
        swingOff->setText(QCoreApplication::translate("EditStyleBase", "Off", nullptr));
        swingEighth->setText(QCoreApplication::translate("EditStyleBase", "Eighth note", nullptr));
        swingSixteenth->setText(QCoreApplication::translate("EditStyleBase", "Sixteenth note", nullptr));
        label_3->setText(QCoreApplication::translate("EditStyleBase", "Select swing ratio:", nullptr));
        swingBox->setSuffix(QCoreApplication::translate("EditStyleBase", "%", nullptr));
        groupBox_score_autoplace->setTitle(QCoreApplication::translate("EditStyleBase", "Autoplace", nullptr));
        minVerticalDistance_label->setText(QCoreApplication::translate("EditStyleBase", "Min. vertical distance:", nullptr));
        minVerticalDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMinVerticalDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMinVerticalDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Min. vertical distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_36->setText(QCoreApplication::translate("EditStyleBase", "Vertical align range:", nullptr));
#if QT_CONFIG(tooltip)
        resetAutoplaceVerticalAlignRange->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetAutoplaceVerticalAlignRange->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Vertical align range' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_page->setTitle(QCoreApplication::translate("EditStyleBase", "Page", nullptr));
        disableVerticalSpread->setTitle(QCoreApplication::translate("EditStyleBase", "Disable vertical justification of staves", nullptr));
        staffDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetAkkoladeDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetAkkoladeDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Grand staff distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_69->setText(QCoreApplication::translate("EditStyleBase", "Staff distance:", nullptr));
#if QT_CONFIG(tooltip)
        resetMinSystemDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMinSystemDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Min. system distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetMaxSystemDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMaxSystemDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Max. system distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetStaffDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetStaffDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Staff distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        minSystemDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_191->setText(QCoreApplication::translate("EditStyleBase", "Max. system distance:", nullptr));
        label_73->setText(QCoreApplication::translate("EditStyleBase", "Min. system distance:", nullptr));
        akkoladeDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_70->setText(QCoreApplication::translate("EditStyleBase", "Grand staff distance:", nullptr));
        maxSystemDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_78->setText(QCoreApplication::translate("EditStyleBase", "Music bottom margin:", nullptr));
#if QT_CONFIG(tooltip)
        resetStaffLowerBorder->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetStaffLowerBorder->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Music bottom margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetSystemFrameDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSystemFrameDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Vertical frame top margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        staffUpperBorder->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        frameSystemDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_74->setText(QCoreApplication::translate("EditStyleBase", "Vertical frame top margin:", nullptr));
#if QT_CONFIG(tooltip)
        resetFrameSystemDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetFrameSystemDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Vertical frame bottom margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_75->setText(QCoreApplication::translate("EditStyleBase", "Vertical frame bottom margin:", nullptr));
#if QT_CONFIG(tooltip)
        resetLastSystemFillThreshold->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLastSystemFillThreshold->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Last system fill threshold' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_77->setText(QCoreApplication::translate("EditStyleBase", "Last system fill threshold:", nullptr));
        systemFrameDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetStaffUpperBorder->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetStaffUpperBorder->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Music top margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_76->setText(QCoreApplication::translate("EditStyleBase", "Music top margin:", nullptr));
        enableVerticalSpread->setTitle(QCoreApplication::translate("EditStyleBase", "Enable vertical justification of staves", nullptr));
        maxPageFillSpread->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_160->setText(QCoreApplication::translate("EditStyleBase", "Max. grand staff distance:", nullptr));
        minStaffSpread->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_155->setText(QCoreApplication::translate("EditStyleBase", "Max. staff distance:", nullptr));
#if QT_CONFIG(accessibility)
        resetMinSystemSpread->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Min. system distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        spreadSquareBracket->setSuffix(QString());
#if QT_CONFIG(tooltip)
        resetSpreadSquareBracket->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSpreadSquareBracket->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Factor for distance above/below bracket' value", nullptr));
#endif // QT_CONFIG(accessibility)
        maxAkkoladeDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMinStaffSpread->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMinStaffSpread->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Min. staff distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_161->setText(QCoreApplication::translate("EditStyleBase", "Max. page fill distance:", nullptr));
#if QT_CONFIG(tooltip)
        resetSpreadCurlyBracket->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSpreadCurlyBracket->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Factor for distance above/below brace' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetMaxStaffSpread->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMaxStaffSpread->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Max. staff distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        resetMaxAkkoladeDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Max. grand staff distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_156->setText(QCoreApplication::translate("EditStyleBase", "Min. staff distance:", nullptr));
        label_159->setText(QCoreApplication::translate("EditStyleBase", "Max. system distance:", nullptr));
        maxStaffSpread->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        spreadSystem->setSuffix(QString());
        label_162->setText(QCoreApplication::translate("EditStyleBase", "Min. system distance:", nullptr));
        label_157->setText(QCoreApplication::translate("EditStyleBase", "Factor for distance above/below brace:", nullptr));
        label_154->setText(QCoreApplication::translate("EditStyleBase", "Factor for distance above/below bracket:", nullptr));
        maxSystemSpread->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        minSystemSpread->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(accessibility)
        resetMaxSystemSpread->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Max. system distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        resetMaxPageFillSpread->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Max. page fill distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        spreadCurlyBracket->setSuffix(QString());
#if QT_CONFIG(tooltip)
        resetSpreadSystem->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSpreadSystem->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Factor for distance between systems' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_153->setText(QCoreApplication::translate("EditStyleBase", "Factor for distance between systems:", nullptr));
        staffLowerBorder->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        groupBox_sizes->setTitle(QCoreApplication::translate("EditStyleBase", "Sizes", nullptr));
        label_38->setText(QCoreApplication::translate("EditStyleBase", "Small staff size:", nullptr));
#if QT_CONFIG(tooltip)
        resetSmallStaffSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSmallStaffSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Small staff size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_44->setText(QCoreApplication::translate("EditStyleBase", "Small note size:", nullptr));
#if QT_CONFIG(tooltip)
        resetSmallNoteSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSmallNoteSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Small note size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_39->setText(QCoreApplication::translate("EditStyleBase", "Grace note size:", nullptr));
#if QT_CONFIG(tooltip)
        resetGraceNoteSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetGraceNoteSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Grace note size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_45->setText(QCoreApplication::translate("EditStyleBase", "Small clef size:", nullptr));
#if QT_CONFIG(tooltip)
        resetSmallClefSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSmallClefSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Small clef size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        showHeader->setTitle(QCoreApplication::translate("EditStyleBase", "Header", nullptr));
#if QT_CONFIG(tooltip)
        showHeaderFirstPage->setToolTip(QCoreApplication::translate("EditStyleBase", "Show header also on first page", nullptr));
#endif // QT_CONFIG(tooltip)
        showHeaderFirstPage->setText(QCoreApplication::translate("EditStyleBase", "Show on first page", nullptr));
#if QT_CONFIG(tooltip)
        headerOddEven->setToolTip(QCoreApplication::translate("EditStyleBase", "Use odd/even page header", nullptr));
#endif // QT_CONFIG(tooltip)
        headerOddEven->setText(QCoreApplication::translate("EditStyleBase", "Different odd/even pages", nullptr));
        labelLeftHeader->setText(QCoreApplication::translate("EditStyleBase", "Left", nullptr));
        labelEvenHeader->setText(QCoreApplication::translate("EditStyleBase", "Even", nullptr));
        labelMiddleHeader->setText(QCoreApplication::translate("EditStyleBase", "Middle", nullptr));
        labelPageHeader->setText(QCoreApplication::translate("EditStyleBase", "Page", nullptr));
        labelOddHeader->setText(QCoreApplication::translate("EditStyleBase", "Odd", nullptr));
        labelRightHeader->setText(QCoreApplication::translate("EditStyleBase", "Right", nullptr));
        showFooter->setTitle(QCoreApplication::translate("EditStyleBase", "Footer", nullptr));
#if QT_CONFIG(tooltip)
        showFooterFirstPage->setToolTip(QCoreApplication::translate("EditStyleBase", "Show footer also on first page", nullptr));
#endif // QT_CONFIG(tooltip)
        showFooterFirstPage->setText(QCoreApplication::translate("EditStyleBase", "Show on first page", nullptr));
#if QT_CONFIG(tooltip)
        footerOddEven->setToolTip(QCoreApplication::translate("EditStyleBase", "Use odd/even page footer", nullptr));
#endif // QT_CONFIG(tooltip)
        footerOddEven->setText(QCoreApplication::translate("EditStyleBase", "Different odd/even pages", nullptr));
        labelOddFooter->setText(QCoreApplication::translate("EditStyleBase", "Odd", nullptr));
        labelMiddleFooter->setText(QCoreApplication::translate("EditStyleBase", "Middle", nullptr));
        labelEvenFooter->setText(QCoreApplication::translate("EditStyleBase", "Even", nullptr));
        labelLeftFooter->setText(QCoreApplication::translate("EditStyleBase", "Left", nullptr));
        labelPageFooter->setText(QCoreApplication::translate("EditStyleBase", "Page", nullptr));
        labelRightFooter->setText(QCoreApplication::translate("EditStyleBase", "Right", nullptr));
        showMeasureNumber->setTitle(QCoreApplication::translate("EditStyleBase", "Measure numbers", nullptr));
        showFirstMeasureNumber->setText(QCoreApplication::translate("EditStyleBase", "Show first", nullptr));
        measureNumberPosAboveLabel->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
        showIntervalMeasureNumber->setText(QCoreApplication::translate("EditStyleBase", "Interval:", nullptr));
        measureNumberPosBelowLabel->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetMeasureNumberPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMeasureNumberPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_921->setText(QCoreApplication::translate("EditStyleBase", "Vertical placement:", nullptr));
#if QT_CONFIG(tooltip)
        resetMeasureNumberPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMeasureNumberPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_93->setText(QCoreApplication::translate("EditStyleBase", "Horizontal placement:", nullptr));
#if QT_CONFIG(tooltip)
        resetMeasureNumberHPlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMeasureNumberHPlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Horizontal placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        showEverySystemMeasureNumber->setText(QCoreApplication::translate("EditStyleBase", "Every system", nullptr));
#if QT_CONFIG(tooltip)
        resetMeasureNumberVPlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMeasureNumberVPlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Vertical placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        showAllStavesMeasureNumber->setText(QCoreApplication::translate("EditStyleBase", "All staves", nullptr));
        mmRestShowMeasureNumberRange->setTitle(QCoreApplication::translate("EditStyleBase", "Show measure number range at multimeasure rests", nullptr));
#if QT_CONFIG(tooltip)
        resetMmRestRangeBracketType->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMmRestRangeBracketType->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Bracket type' value", "Bracket type for measure number ranges for multi-measure rests"));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetMMRestRangePosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMMRestRangePosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_165->setText(QCoreApplication::translate("EditStyleBase", "Vertical placement:", nullptr));
        mmRestRangePosAboveLabel->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
        label_164->setText(QCoreApplication::translate("EditStyleBase", "Bracket type:", "Bracket type for measure number ranges for multi-measure rests"));
#if QT_CONFIG(tooltip)
        resetMmRestRangeVPlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMmRestRangeVPlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Vertical placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_166->setText(QCoreApplication::translate("EditStyleBase", "Horizontal placement:", nullptr));
#if QT_CONFIG(tooltip)
        resetMmRestRangeHPlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMmRestRangeHPlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Horizontal placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        mmRestRangePosBelowLabel->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetMMRestRangePosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMMRestRangePosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_systemBrackets->setTitle(QCoreApplication::translate("EditStyleBase", "System brackets", nullptr));
        bracketWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_52->setText(QCoreApplication::translate("EditStyleBase", "Bracket distance:", "System bracket"));
        bracketDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetBracketDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBracketDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Bracket distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        akkoladeBarDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        braceThicknessLabel->setText(QCoreApplication::translate("EditStyleBase", "Brace thickness:", nullptr));
        akkoladeWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetBraceThickness->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBraceThickness->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Brace thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        braceDistanceLabel->setText(QCoreApplication::translate("EditStyleBase", "Brace distance:", nullptr));
#if QT_CONFIG(tooltip)
        resetBraceDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBraceDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Brace distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_91->setText(QCoreApplication::translate("EditStyleBase", "Bracket thickness:", "System bracket"));
#if QT_CONFIG(tooltip)
        resetBracketThickness->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBracketThickness->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Bracket thickness' value", "System bracket"));
#endif // QT_CONFIG(accessibility)
        groupBox_systemDividers->setTitle(QCoreApplication::translate("EditStyleBase", "System dividers", nullptr));
        dividerLeft->setTitle(QCoreApplication::translate("EditStyleBase", "Left", nullptr));
        dividerLeftY->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        dividerLeftX->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_65->setText(QCoreApplication::translate("EditStyleBase", "Vertical offset:", nullptr));
        label_29->setText(QCoreApplication::translate("EditStyleBase", "Horizontal offset:", nullptr));
        label_7->setText(QCoreApplication::translate("EditStyleBase", "Symbol:", nullptr));
        dividerRight->setTitle(QCoreApplication::translate("EditStyleBase", "Right", nullptr));
        label_68->setText(QCoreApplication::translate("EditStyleBase", "Vertical offset:", nullptr));
        dividerRightY->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_66->setText(QCoreApplication::translate("EditStyleBase", "Symbol:", nullptr));
        label_67->setText(QCoreApplication::translate("EditStyleBase", "Horizontal offset:", nullptr));
        dividerRightX->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        groupBox_clefSettings->setTitle(QCoreApplication::translate("EditStyleBase", "Clefs", nullptr));
        label_173->setText(QCoreApplication::translate("EditStyleBase", "Visibility", nullptr));
        radioShowAllClefs->setText(QCoreApplication::translate("EditStyleBase", "Show all clefs on every system", nullptr));
        radioHideClefs->setText(QCoreApplication::translate("EditStyleBase", "Hide all clefs after the first system where they appear", nullptr));
        hideTabClefs->setText(QCoreApplication::translate("EditStyleBase", "Hide TAB clefs after the first system where they appear", nullptr));
        genCourtesyClef->setText(QCoreApplication::translate("EditStyleBase", "Show courtesy clefs", nullptr));
        groupBox_TABClef->setTitle(QCoreApplication::translate("EditStyleBase", "Default TAB clef", nullptr));
        clefTab1->setText(QCoreApplication::translate("EditStyleBase", "Standard TAB clef", nullptr));
        clefTab2->setText(QCoreApplication::translate("EditStyleBase", "Serif TAB clef", nullptr));
        groupBox_keySigSettings->setTitle(QCoreApplication::translate("EditStyleBase", "Key signatures", nullptr));
        label_194->setText(QCoreApplication::translate("EditStyleBase", "Visibility", nullptr));
        radioShowAllKeys->setText(QCoreApplication::translate("EditStyleBase", "Show on every system", nullptr));
        radioHideKeys->setText(QCoreApplication::translate("EditStyleBase", "Hide after the first system where they appear", nullptr));
        genCourtesyKeysig->setText(QCoreApplication::translate("EditStyleBase", "Show courtesy key signatures", nullptr));
        groupBox_timeSigSettings->setTitle(QCoreApplication::translate("EditStyleBase", "Time signatures", nullptr));
        genCourtesyTimesig->setText(QCoreApplication::translate("EditStyleBase", "Show courtesy time signatures", nullptr));
        groupBox_accidentals->setTitle(QCoreApplication::translate("EditStyleBase", "Accidentals", nullptr));
#if QT_CONFIG(tooltip)
        resetAccidentalsBracketPadding->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset padding inside parentheses to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetAccidentalsBracketPadding->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Padding inside parentheses' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        accidentalsBracketsBadding->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Set value for padding inside parentheses around accidentals", nullptr));
#endif // QT_CONFIG(accessibility)
        accidentalsBracketsBadding->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        label_147->setToolTip(QCoreApplication::translate("EditStyleBase", "Bracketed accidentals have a margin between the accidental and the brackets.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_147->setText(QCoreApplication::translate("EditStyleBase", "Padding inside parentheses:", nullptr));
        accidentalsGroup->setTitle(QCoreApplication::translate("EditStyleBase", "Tuning", nullptr));
        QTableWidgetItem *___qtablewidgetitem = accidentalTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("EditStyleBase", "Accidental", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = accidentalTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("EditStyleBase", "Semitones offset", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = accidentalTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("EditStyleBase", "Cents offset", nullptr));
        keySigNaturalsGroup->setTitle(QCoreApplication::translate("EditStyleBase", "\342\231\256 in key signatures", nullptr));
        radioKeySigNatNone->setText(QCoreApplication::translate("EditStyleBase", "Only for a change to C Maj / A min", nullptr));
        radioKeySigNatBefore->setText(QCoreApplication::translate("EditStyleBase", "Before key signature if changing to fewer \342\231\257 or \342\231\255", nullptr));
        radioKeySigNatAfter->setText(QCoreApplication::translate("EditStyleBase", "After key signature if changing to fewer \342\231\257 or \342\231\255. Before if changing between \342\231\257 and \342\231\255", nullptr));
        groupBoxAccidentalStacking->setTitle(QCoreApplication::translate("EditStyleBase", "Multiple accidentals in chords", nullptr));
        groupBox_measure->setTitle(QCoreApplication::translate("EditStyleBase", "Measures", nullptr));
        groupBox_padding->setTitle(QCoreApplication::translate("EditStyleBase", "Padding", nullptr));
        label_20->setText(QCoreApplication::translate("EditStyleBase", "Barline to time signature:", nullptr));
        label_109->setText(QCoreApplication::translate("EditStyleBase", "Key signature to time signature:", nullptr));
#if QT_CONFIG(tooltip)
        resetTimesigBarlineDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTimesigBarlineDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Time signature to barline distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetNoteBarDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetNoteBarDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Note to barline distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        barGraceDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetTimesigLeftMargin->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTimesigLeftMargin->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Time signature left margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        barAccidentalDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_18->setText(QCoreApplication::translate("EditStyleBase", "Barline to clef:", nullptr));
        label_113->setText(QCoreApplication::translate("EditStyleBase", "Time signature to barline:", nullptr));
#if QT_CONFIG(tooltip)
        resetClefTimesigDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetClefTimesigDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Clef to time signature distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetClefKeyDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetClefKeyDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Clef to key distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        timesigLeftMargin->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        clefBarlineDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetClefBarlineDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetClefBarlineDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Clef to barline distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_19->setText(QCoreApplication::translate("EditStyleBase", "Barline to key signature:", nullptr));
        clefTimesigDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_61->setText(QCoreApplication::translate("EditStyleBase", "Barline to grace note:", nullptr));
        label_53->setText(QCoreApplication::translate("EditStyleBase", "Clef to barline:", nullptr));
#if QT_CONFIG(tooltip)
        resetClefLeftMargin->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetClefLeftMargin->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Clef left margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        clefKeyDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_13->setText(QCoreApplication::translate("EditStyleBase", "Note to barline:", nullptr));
#if QT_CONFIG(tooltip)
        resetBarNoteDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBarNoteDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Note left margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_12->setText(QCoreApplication::translate("EditStyleBase", "Barline to note:", nullptr));
#if QT_CONFIG(tooltip)
        resetKeysigLeftMargin->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetKeysigLeftMargin->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Key signature left margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        clefLeftMargin->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetClefKeyRightMargin->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetClefKeyRightMargin->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Clef/Key right margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        keyTimesigDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetKeyBarlineDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetKeyBarlineDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Key to barline distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        noteBarDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        clefKeyRightMargin->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_21->setText(QCoreApplication::translate("EditStyleBase", "Clef to note:", nullptr));
        label_94->setText(QCoreApplication::translate("EditStyleBase", "Clef to key signature:", nullptr));
        label_110->setText(QCoreApplication::translate("EditStyleBase", "Key signature to barline:", nullptr));
        timesigBarlineDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetBarAccidentalDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBarAccidentalDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Barline to accidental distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_102->setText(QCoreApplication::translate("EditStyleBase", "Barline to accidental:", nullptr));
#if QT_CONFIG(tooltip)
        resetKeyTimesigDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetKeyTimesigDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Key to time signature distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        barNoteDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetBarGraceDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBarGraceDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Barline to grace note distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        keysigLeftMargin->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        keyBarlineDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_108->setText(QCoreApplication::translate("EditStyleBase", "Clef to time signature:", nullptr));
        minMeasureWidth_2->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMeasureSpacing->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMeasureSpacing->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Spacing' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_89->setText(QCoreApplication::translate("EditStyleBase", "Minimum measure width:", nullptr));
#if QT_CONFIG(tooltip)
        resetMinNoteDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMinNoteDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Minimum note distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        minNoteDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMinMeasureWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMinMeasureWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Minimum measure width' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_11->setText(QCoreApplication::translate("EditStyleBase", "Spacing ratio:", nullptr));
        label_14->setText(QCoreApplication::translate("EditStyleBase", "Minimum note distance:", nullptr));
        groupBox_systemHeader->setTitle(QCoreApplication::translate("EditStyleBase", "System header", nullptr));
        systemHeaderTimeSigDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        systemHeaderDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_112->setText(QCoreApplication::translate("EditStyleBase", "Time signature to first note:", nullptr));
        label_111->setText(QCoreApplication::translate("EditStyleBase", "Clef/key signature to first note:", nullptr));
#if QT_CONFIG(tooltip)
        resetSystemHeaderTimeSigDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSystemHeaderTimeSigDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'System header with time signature distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetSystemHeaderDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSystemHeaderDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'System header distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_barlines->setTitle(QCoreApplication::translate("EditStyleBase", "Barlines", nullptr));
        label_85->setText(QCoreApplication::translate("EditStyleBase", "Double barline thickness:", nullptr));
        barWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetEndBarWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetEndBarWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Thin barline thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetRepeatBarlineDotSeparation->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetRepeatBarlineDotSeparation->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Show repeat barline tips (\342\200\234winged\342\200\235 repeats)' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_82->setText(QCoreApplication::translate("EditStyleBase", "Thin barline thickness:", nullptr));
#if QT_CONFIG(tooltip)
        resetDoubleBarWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetDoubleBarWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Barline at start of multiple staves' value", nullptr));
#endif // QT_CONFIG(accessibility)
        showStartBarlineMultiple->setText(QCoreApplication::translate("EditStyleBase", "Barline at start of multiple staves", nullptr));
        doubleBarWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        doubleBarDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        repeatBarlineDotSeparation->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetShowRepeatBarTips->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetShowRepeatBarTips->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Repeat barline to dots distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        showRepeatBarTips->setText(QCoreApplication::translate("EditStyleBase", "Show repeat barline tips (\342\200\234winged\342\200\235 repeats)", nullptr));
#if QT_CONFIG(tooltip)
        resetScaleBarlines->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetScaleBarlines->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Thick barline distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        endBarDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_84->setText(QCoreApplication::translate("EditStyleBase", "Thick barline distance:", nullptr));
        scaleBarlines->setText(QCoreApplication::translate("EditStyleBase", "Scale barlines to staff size", nullptr));
#if QT_CONFIG(tooltip)
        resetShowStartBarlineSingle->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetShowStartBarlineSingle->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Double barline distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetDoubleBarDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetDoubleBarDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Barline at start of single staff' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetEndBarDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetEndBarDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Scale barlines to staff size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        endBarWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetShowStartBarlineMultiple->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetShowStartBarlineMultiple->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Double barline thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_83->setText(QCoreApplication::translate("EditStyleBase", "Thick barline thickness:", nullptr));
        repeatBarlineDotSeparationLbl->setText(QCoreApplication::translate("EditStyleBase", "Repeat barline to dots distance:", nullptr));
        label_86->setText(QCoreApplication::translate("EditStyleBase", "Double barline distance:", nullptr));
#if QT_CONFIG(tooltip)
        resetBarWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBarWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Thick barline thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        showStartBarlineSingle->setText(QCoreApplication::translate("EditStyleBase", "Barline at start of single staff", nullptr));
        keySigCourtesyBarlineGroup->setTitle(QCoreApplication::translate("EditStyleBase", "Use double barlines before key signatures", nullptr));
        radioKeySigCourtesyBarlineAlwaysDouble->setText(QCoreApplication::translate("EditStyleBase", "Always", nullptr));
        radioKeySigCourtesyBarlineAlwaysSingle->setText(QCoreApplication::translate("EditStyleBase", "Never", nullptr));
        radioKeySigCourtesyBarlineDoubleBeforeNewSystem->setText(QCoreApplication::translate("EditStyleBase", "Only before courtesy key signatures", nullptr));
        timeSigCourtesyBarlineGroup->setTitle(QCoreApplication::translate("EditStyleBase", "Use double barlines before time signatures", nullptr));
        radioTimeSigCourtesyBarlineAlwaysDouble->setText(QCoreApplication::translate("EditStyleBase", "Always", nullptr));
        radioTimeSigCourtesyBarlineAlwaysSingle->setText(QCoreApplication::translate("EditStyleBase", "Never", nullptr));
        radioTimeSigCourtesyBarlineDoubleBeforeNewSystem->setText(QCoreApplication::translate("EditStyleBase", "Only before courtesy time signatures", nullptr));
        groupBox_noteFlags->setTitle(QCoreApplication::translate("EditStyleBase", "Flag style", nullptr));
        groupBox_notes->setTitle(QCoreApplication::translate("EditStyleBase", "Notes", nullptr));
        label_101->setText(QCoreApplication::translate("EditStyleBase", "Dot size:", nullptr));
        label_24->setText(QCoreApplication::translate("EditStyleBase", "Ledger line thickness:", nullptr));
        stemWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_34->setText(QCoreApplication::translate("EditStyleBase", "Ledger line length:", nullptr));
        accidentalDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        ledgerLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        dotDotDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        ledgerLineLength->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        noteDotDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        accidentalNoteDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_22->setText(QCoreApplication::translate("EditStyleBase", "Note to dot distance:", nullptr));
        label_100->setText(QCoreApplication::translate("EditStyleBase", "Stem thickness:", nullptr));
        label_23->setText(QCoreApplication::translate("EditStyleBase", "Dot to dot distance:", nullptr));
        label_43->setText(QCoreApplication::translate("EditStyleBase", "Accidental to accidental distance:", nullptr));
        shortenStem->setTitle(QCoreApplication::translate("EditStyleBase", "Shorten stems", nullptr));
        label_47->setText(QCoreApplication::translate("EditStyleBase", "Shortest stem:", nullptr));
        shortestStem->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_25->setText(QCoreApplication::translate("EditStyleBase", "Accidental to note distance:", nullptr));
        groupBox_alignment->setTitle(QCoreApplication::translate("EditStyleBase", "Alignment in chords", nullptr));
        combineVoices->setText(QCoreApplication::translate("EditStyleBase", "Combine voices that share the same stem direction", nullptr));
#if QT_CONFIG(tooltip)
        resetCombineVoices->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetCombineVoices->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_rests->setTitle(QCoreApplication::translate("EditStyleBase", "Rests (multiple voices)", nullptr));
        label_46->setText(QCoreApplication::translate("EditStyleBase", "Default vertical offset:", nullptr));
        multiMeasureRests->setTitle(QCoreApplication::translate("EditStyleBase", "Multimeasure rests", nullptr));
        label_15->setText(QCoreApplication::translate("EditStyleBase", "Minimum number of empty measures:", nullptr));
        label_16->setText(QCoreApplication::translate("EditStyleBase", "Minimum width:", nullptr));
        minMeasureWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMinMMRestWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMinMMRestWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Minimum width of measure' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_92->setText(QCoreApplication::translate("EditStyleBase", "Vertical position of number:", nullptr));
        mmRestNumberPos->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMMRestNumberPos->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMMRestNumberPos->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Vertical position of number' value", nullptr));
#endif // QT_CONFIG(accessibility)
        mmRestNumberMaskHBar->setText(QCoreApplication::translate("EditStyleBase", "Break H-bar if it collides with number", nullptr));
#if QT_CONFIG(tooltip)
        resetMMRestNumberMaskHBar->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMMRestNumberMaskHBar->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Break H-bar if it collides with number' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_119->setText(QCoreApplication::translate("EditStyleBase", "H-bar horizontal stroke thickness:", nullptr));
        mmRestHBarThickness->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMMRestHBarThickness->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMMRestHBarThickness->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'H-bar horizontal stroke thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_103->setText(QCoreApplication::translate("EditStyleBase", "H-bar margin within barlines:", nullptr));
        multiMeasureRestMargin->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMultiMeasureRestMargin->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMultiMeasureRestMargin->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'H-bar margin within barlines' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_123->setText(QCoreApplication::translate("EditStyleBase", "H-bar vertical stroke thickness:", nullptr));
        mmRestHBarVStrokeThickness->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMMRestHBarVStrokeThickness->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMMRestHBarVStrokeThickness->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'H-bar vertical stroke thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_145->setText(QCoreApplication::translate("EditStyleBase", "H-bar vertical stroke height:", nullptr));
        mmRestHBarVStrokeHeight->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMMRestHBarVStrokeHeight->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMMRestHBarVStrokeHeight->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'H-bar vertical stroke height' value", nullptr));
#endif // QT_CONFIG(accessibility)
        oldStyleMultiMeasureRests->setTitle(QCoreApplication::translate("EditStyleBase", "Old-style multimeasure rests", nullptr));
        label_146->setText(QCoreApplication::translate("EditStyleBase", "Maximum number of measures:", nullptr));
#if QT_CONFIG(tooltip)
        resetMMRestOldStyleMaxMeasures->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
        mmRestOldStyleSpacing->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_1471->setText(QCoreApplication::translate("EditStyleBase", "Spacing of symbols:", nullptr));
#if QT_CONFIG(tooltip)
        resetMMRestOldStyleSpacing->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_measure_repeats->setTitle(QCoreApplication::translate("EditStyleBase", "Measure repeats", nullptr));
        fourMeasureRepeatShowExtenders->setText(QCoreApplication::translate("EditStyleBase", "Show extenders on 4-measure repeats", nullptr));
        mrNumberSeries->setTitle(QCoreApplication::translate("EditStyleBase", "Number consecutive measure repeats", nullptr));
        label_163->setText(QCoreApplication::translate("EditStyleBase", "Every", nullptr));
        label_170->setText(QCoreApplication::translate("EditStyleBase", "measures", nullptr));
        mrNumberSeriesWithParentheses->setText(QCoreApplication::translate("EditStyleBase", "With parentheses", nullptr));
#if QT_CONFIG(tooltip)
        resetFourMeasureRepeatShowExtenders->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetFourMeasureRepeatShowExtenders->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Time signature to barline distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_148->setText(QCoreApplication::translate("EditStyleBase", "Number position:", nullptr));
        measureRepeatNumberPos->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        groupBox_beams->setTitle(QCoreApplication::translate("EditStyleBase", "Beams", nullptr));
        groupBox_tuplets->setTitle(QCoreApplication::translate("EditStyleBase", "Tuplets", nullptr));
        verticalDistance->setTitle(QCoreApplication::translate("EditStyleBase", "Vertical distance from notes", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletMaxSlope->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletMaxSlope->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Maximum slope' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_48->setText(QCoreApplication::translate("EditStyleBase", "Maximum slope:", nullptr));
        tupletMaxSlope->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_49->setText(QCoreApplication::translate("EditStyleBase", "Vertical distance from stem:", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletVStemDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletVStemDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Vertical distance from stem' value", nullptr));
#endif // QT_CONFIG(accessibility)
        tupletVHeadDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletVHeadDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletVHeadDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Vertical distance from notehead' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_50->setText(QCoreApplication::translate("EditStyleBase", "Vertical distance from notehead:", nullptr));
        tupletVStemDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        tupletOutOfStaff->setText(QCoreApplication::translate("EditStyleBase", "Avoid staves", nullptr));
        groupBox_tuplets_properties->setTitle(QCoreApplication::translate("EditStyleBase", "Properties", nullptr));
        label_114->setText(QCoreApplication::translate("EditStyleBase", "Direction:", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletNumberType->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletNumberType->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Number type' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTupletDirection->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletDirection->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Direction' value", nullptr));
#endif // QT_CONFIG(accessibility)
        tupletNumberType->setItemText(0, QCoreApplication::translate("EditStyleBase", "Number", nullptr));
        tupletNumberType->setItemText(1, QCoreApplication::translate("EditStyleBase", "Ratio", nullptr));
        tupletNumberType->setItemText(2, QCoreApplication::translate("EditStyleBase", "None", "no tuplet number"));

        tupletDirection->setItemText(0, QCoreApplication::translate("EditStyleBase", "Auto", nullptr));
        tupletDirection->setItemText(1, QCoreApplication::translate("EditStyleBase", "Up", nullptr));
        tupletDirection->setItemText(2, QCoreApplication::translate("EditStyleBase", "Down", nullptr));

        label_115->setText(QCoreApplication::translate("EditStyleBase", "Number type:", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletBracketType->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletBracketType->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Bracket type' value", "Bracket type for tuplets"));
#endif // QT_CONFIG(accessibility)
        label_116->setText(QCoreApplication::translate("EditStyleBase", "Bracket type:", "Bracket type for tuplets"));
        tupletBracketType->setItemText(0, QCoreApplication::translate("EditStyleBase", "Auto", nullptr));
        tupletBracketType->setItemText(1, QCoreApplication::translate("EditStyleBase", "Bracket", nullptr));
        tupletBracketType->setItemText(2, QCoreApplication::translate("EditStyleBase", "None", "no tuplet bracket"));

        groupBox_tuplets_brackets->setTitle(QCoreApplication::translate("EditStyleBase", "Brackets", nullptr));
        label_6->setText(QCoreApplication::translate("EditStyleBase", "Bracket thickness:", "Tuplet bracket"));
        tupletBracketHookHeight->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_187->setText(QCoreApplication::translate("EditStyleBase", "Bracket hook height:", "Tuplet bracket"));
#if QT_CONFIG(tooltip)
        resetTupletBracketWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletBracketWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Bracket hook height' value", nullptr));
#endif // QT_CONFIG(accessibility)
        tupletBracketWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletBracketHookHeight->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletBracketHookHeight->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Bracket thickness' value", "Tuplet bracket"));
#endif // QT_CONFIG(accessibility)
        groupBox_tuplets_horizontalDist->setTitle(QCoreApplication::translate("EditStyleBase", "Horizontal distance from notes", nullptr));
        tupletNoteLeftDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_56->setText(QCoreApplication::translate("EditStyleBase", "Distance after stem of last note:", nullptr));
        tupletStemLeftDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        tupletStemRightDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_58->setText(QCoreApplication::translate("EditStyleBase", "Distance after head of last note:", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletNoteRightDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletNoteRightDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Distance after head of last note' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTupletNoteLeftDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletNoteLeftDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Distance before head of first note' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTupletStemLeftDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletStemLeftDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Distance before stem of first note' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_51->setText(QCoreApplication::translate("EditStyleBase", "Distance before stem of first note:", nullptr));
        tupletNoteRightDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_55->setText(QCoreApplication::translate("EditStyleBase", "Distance before head of first note:", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletStemRightDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletStemRightDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Distance after stem of last note' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_arpeggios->setTitle(QCoreApplication::translate("EditStyleBase", "Arpeggios", nullptr));
        label_28->setText(QCoreApplication::translate("EditStyleBase", "Hook length:", nullptr));
        arpeggioNoteDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        arpeggioHookLen->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        arpeggioLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_27->setText(QCoreApplication::translate("EditStyleBase", "Line thickness:", nullptr));
        label_26->setText(QCoreApplication::translate("EditStyleBase", "Distance to note:", nullptr));
        arpeggioHiddenInStdIfTab->setText(QCoreApplication::translate("EditStyleBase", "Do not show arpeggios in standard notation when displayed in tablature", nullptr));
        groupBox_slursTies->setTitle(QCoreApplication::translate("EditStyleBase", "Slurs && ties", nullptr));
        groupBox_slurs->setTitle(QCoreApplication::translate("EditStyleBase", "Slurs", nullptr));
        label_30->setText(QCoreApplication::translate("EditStyleBase", "Line thickness at end:", nullptr));
        slurEndLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetSlurEndLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSlurEndLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness at end' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_31->setText(QCoreApplication::translate("EditStyleBase", "Line thickness middle:", nullptr));
        slurMidLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetSlurMidLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSlurMidLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness middle' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_33->setText(QCoreApplication::translate("EditStyleBase", "Dotted line thickness:", nullptr));
        slurDottedLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetSlurDottedLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSlurDottedLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Dotted line thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_158->setText(QCoreApplication::translate("EditStyleBase", "Autoplace min. distance:", nullptr));
        slurMinDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetSlurMinDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSlurMinDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Autoplace min. distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_ties_2->setTitle(QCoreApplication::translate("EditStyleBase", "Ties", nullptr));
        label_218->setText(QCoreApplication::translate("EditStyleBase", "Line thickness at end:", nullptr));
        tieEndLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetTieEndLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTieEndLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness at end' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_219->setText(QCoreApplication::translate("EditStyleBase", "Line thickness middle:", nullptr));
        tieMidLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetTieMidLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTieMidLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness middle' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_216->setText(QCoreApplication::translate("EditStyleBase", "Dotted line thickness:", nullptr));
        tieDottedLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetTieDottedLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTieDottedLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Dotted line thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_217->setText(QCoreApplication::translate("EditStyleBase", "Autoplace min. distance:", nullptr));
        tieMinDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetTieMinDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTieMinDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Autoplace min. distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_ties->setTitle(QCoreApplication::translate("EditStyleBase", "Ties", nullptr));
        minTieLengthLabel->setText(QCoreApplication::translate("EditStyleBase", "Minimum tie length:", nullptr));
        minTieLength->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetMinTieLength->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetMinTieLength->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Minimum tie length' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_dynamic_hairpin->setTitle(QCoreApplication::translate("EditStyleBase", "Default positions of dynamics and hairpins", nullptr));
        label_62->setText(QCoreApplication::translate("EditStyleBase", "Position:", nullptr));
        dynamicsAndHairpinPosDescription->setText(QCoreApplication::translate("EditStyleBase", "Voices 1 & 3 above staff, voices 2 & 4 below staff", nullptr));
        resetDynamicsAndHairpinPos->setText(QCoreApplication::translate("EditStyleBase", "...", nullptr));
        dynamicsAndHairpinsAboveOnVocalStaves->setText(QCoreApplication::translate("EditStyleBase", "Place above the staff on vocal instruments", nullptr));
        dynamicsAndHairpinsCenterOnGrandStaff->setText(QCoreApplication::translate("EditStyleBase", "Center on grand staff instruments automatically", nullptr));
        groupBox_dynamics->setTitle(QCoreApplication::translate("EditStyleBase", "Dynamics", nullptr));
        label_220->setText(QCoreApplication::translate("EditStyleBase", "Autoplace min. distance:", nullptr));
        label_223->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetDynamicsPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetDynamicsPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetDynamicsSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetDynamicsSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Scale' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetAvoidBarLines->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetAvoidBarLines->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Avoid barlines' setting", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetDynamicsMinDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetDynamicsMinDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Autoplace min. distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_221->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
        dynamicsSize->setSuffix(QCoreApplication::translate("EditStyleBase", "%", nullptr));
        dynamicsMinDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        avoidBarLines->setText(QCoreApplication::translate("EditStyleBase", "Avoid barlines", nullptr));
#if QT_CONFIG(tooltip)
        resetDynamicsPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetDynamicsPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_225->setText(QCoreApplication::translate("EditStyleBase", "Scale:", nullptr));
        dynamicsOverrideFont->setTitle(QCoreApplication::translate("EditStyleBase", "Override score font", nullptr));
        label_224->setText(QCoreApplication::translate("EditStyleBase", "Font:", nullptr));
        groupBox_hairpins->setTitle(QCoreApplication::translate("EditStyleBase", "Hairpins", nullptr));
#if QT_CONFIG(tooltip)
        resetAutoplaceHairpinDynamicsDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetAutoplaceHairpinDynamicsDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Autoplace, distance to dynamics' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_95->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
        hairpinHeight->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_117->setText(QCoreApplication::translate("EditStyleBase", "Autoplace, distance to dynamics:", nullptr));
#if QT_CONFIG(tooltip)
        resetHairpinPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetHairpinPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetHairpinContinueHeight->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetHairpinContinueHeight->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Continue height' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_9->setText(QCoreApplication::translate("EditStyleBase", "Height:", nullptr));
        label_8->setText(QCoreApplication::translate("EditStyleBase", "Line thickness:", nullptr));
        autoplaceHairpinDynamicsDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetHairpinPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetHairpinPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        hairpinLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_129->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetHairpinLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetHairpinLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        hairpinContinueHeight->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_10->setText(QCoreApplication::translate("EditStyleBase", "Continue height:", nullptr));
#if QT_CONFIG(tooltip)
        resetHairpinHeight->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetHairpinHeight->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Height' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_volta->setTitle(QCoreApplication::translate("EditStyleBase", "Voltas", nullptr));
#if QT_CONFIG(tooltip)
        resetVoltaPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVoltaPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetVoltaLineStyleDashSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVoltaLineStyleDashSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetVoltaHook->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVoltaHook->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Hook height' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_volta_lineStyle_dashSize->setText(QCoreApplication::translate("EditStyleBase", "Dash size:", nullptr));
        voltaHook->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_40->setText(QCoreApplication::translate("EditStyleBase", "Position:", nullptr));
#if QT_CONFIG(tooltip)
        resetVoltaLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVoltaLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        voltaLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetVoltaLineStyle->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVoltaLineStyle->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_104->setText(QCoreApplication::translate("EditStyleBase", "Line style:", nullptr));
        label_42->setText(QCoreApplication::translate("EditStyleBase", "Hook height:", nullptr));
        label_64->setText(QCoreApplication::translate("EditStyleBase", "Line thickness:", nullptr));
        voltaLineStyle->setItemText(0, QCoreApplication::translate("EditStyleBase", "Continuous", nullptr));
        voltaLineStyle->setItemText(1, QCoreApplication::translate("EditStyleBase", "Dashed", nullptr));
        voltaLineStyle->setItemText(2, QCoreApplication::translate("EditStyleBase", "Dotted", nullptr));
        voltaLineStyle->setItemText(3, QCoreApplication::translate("EditStyleBase", "Dash-dotted", nullptr));
        voltaLineStyle->setItemText(4, QCoreApplication::translate("EditStyleBase", "Dash-dot-dotted", nullptr));

        label_volta_lineStyle_gapSize->setText(QCoreApplication::translate("EditStyleBase", "Gap size:", nullptr));
#if QT_CONFIG(tooltip)
        resetVoltaLineStyleGapSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVoltaLineStyleGapSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_ottava->setTitle(QCoreApplication::translate("EditStyleBase", "Ottavas", nullptr));
        label_ottava_lineStyle_dashSize->setText(QCoreApplication::translate("EditStyleBase", "Dash size:", nullptr));
        label_81->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetOttavaPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        ottavaHookBelow->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_105->setText(QCoreApplication::translate("EditStyleBase", "Line style:", nullptr));
        label_88->setText(QCoreApplication::translate("EditStyleBase", "Line thickness:", nullptr));
        label_130->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetOttavaHookBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaHookBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Hook height' value", nullptr));
#endif // QT_CONFIG(accessibility)
        ottavaLineStyle->setItemText(0, QCoreApplication::translate("EditStyleBase", "Continuous", nullptr));
        ottavaLineStyle->setItemText(1, QCoreApplication::translate("EditStyleBase", "Dashed", nullptr));
        ottavaLineStyle->setItemText(2, QCoreApplication::translate("EditStyleBase", "Dotted", nullptr));
        ottavaLineStyle->setItemText(3, QCoreApplication::translate("EditStyleBase", "Dash-dotted", nullptr));
        ottavaLineStyle->setItemText(4, QCoreApplication::translate("EditStyleBase", "Dash-dot-dotted", nullptr));

        label_87->setText(QCoreApplication::translate("EditStyleBase", "Hook height above:", nullptr));
        ottavaNumbersOnly->setText(QCoreApplication::translate("EditStyleBase", "Numbers only", nullptr));
        ottavaHookAbove->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetOttavaHookAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaHookAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Hook height' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_185->setText(QCoreApplication::translate("EditStyleBase", "Hook height below:", nullptr));
#if QT_CONFIG(tooltip)
        resetOttavaLineStyle->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaLineStyle->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetOttavaNumbersOnly->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaNumbersOnly->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Numbers only' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_ottava_lineStyle_gapSize->setText(QCoreApplication::translate("EditStyleBase", "Gap size:", nullptr));
#if QT_CONFIG(tooltip)
        resetOttavaLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetOttavaPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        ottavaLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetOttavaLineStyleGapSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaLineStyleGapSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetOttavaLineStyleDashSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetOttavaLineStyleDashSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_pedalLine->setTitle(QCoreApplication::translate("EditStyleBase", "Pedal lines", nullptr));

        pedalLineWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetPedalLinePosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetPedalLinePosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetPedalLineStyle->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetPedalLineStyle->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_106->setText(QCoreApplication::translate("EditStyleBase", "Line style:", nullptr));
        label_139->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetPedalLinePlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetPedalLinePlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_107->setText(QCoreApplication::translate("EditStyleBase", "Line thickness:", nullptr));
        label_96->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
        pedalLineStyle->setItemText(0, QCoreApplication::translate("EditStyleBase", "Continuous", nullptr));
        pedalLineStyle->setItemText(1, QCoreApplication::translate("EditStyleBase", "Dashed", nullptr));
        pedalLineStyle->setItemText(2, QCoreApplication::translate("EditStyleBase", "Dotted", nullptr));
        pedalLineStyle->setItemText(3, QCoreApplication::translate("EditStyleBase", "Dash-dotted", nullptr));
        pedalLineStyle->setItemText(4, QCoreApplication::translate("EditStyleBase", "Dash-dot-dotted", nullptr));

        label_124->setText(QCoreApplication::translate("EditStyleBase", "Placement:", nullptr));
#if QT_CONFIG(tooltip)
        resetPedalLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetPedalLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetPedalLinePosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetPedalLinePosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_pedalLine_lineStyle_dashSize->setText(QCoreApplication::translate("EditStyleBase", "Dash size:", nullptr));
        label_pedalLine_lineStyle_gapSize->setText(QCoreApplication::translate("EditStyleBase", "Gap size:", nullptr));
#if QT_CONFIG(tooltip)
        resetPedalLineStyleDashSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetPedalLineStyleDashSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetPedalLineStyleGapSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetPedalLineStyleGapSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line style' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_trillLine->setTitle(QCoreApplication::translate("EditStyleBase", "Trill lines", nullptr));
        label_97->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetTrillLinePosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTrillLinePosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)

        label_125->setText(QCoreApplication::translate("EditStyleBase", "Placement:", nullptr));
#if QT_CONFIG(tooltip)
        resetTrillLinePlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTrillLinePlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_140->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetTrillLinePosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTrillLinePosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_vibratoLine->setTitle(QCoreApplication::translate("EditStyleBase", "Vibrato lines", nullptr));
        label_971->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetVibratoLinePosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVibratoLinePosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)

        label_1251->setText(QCoreApplication::translate("EditStyleBase", "Placement:", nullptr));
#if QT_CONFIG(tooltip)
        resetVibratoLinePlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVibratoLinePlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_1401->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetVibratoLinePosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetVibratoLinePosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        fullBendStyleBoxSelector->setTitle(QCoreApplication::translate("EditStyleBase", "Label for full bends", nullptr));
        groupBox_bend->setTitle(QCoreApplication::translate("EditStyleBase", "Bends", nullptr));
        groupBox_bendsStandardStaff->setTitle(QCoreApplication::translate("EditStyleBase", "Standard staff", nullptr));
#if QT_CONFIG(accessibility)
        label_171->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Line thickness on standard staves:", nullptr));
#endif // QT_CONFIG(accessibility)
        label_171->setText(QCoreApplication::translate("EditStyleBase", "Line thickness:", nullptr));
#if QT_CONFIG(tooltip)
        resetBendLineWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBendLineWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness on standard staves' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_bendsTablature->setTitle(QCoreApplication::translate("EditStyleBase", "Tablature", nullptr));
        label_184->setText(QCoreApplication::translate("EditStyleBase", "Arrow width:", nullptr));
#if QT_CONFIG(tooltip)
        resetBendArrowWidth->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBendArrowWidth->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Arrow width' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_193->setText(QCoreApplication::translate("EditStyleBase", "Arrow height:", nullptr));
        bendArrowWidth->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetBendArrowHeight->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBendArrowHeight->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Arrow height' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_179->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Line thickness on tablature staves:", nullptr));
#endif // QT_CONFIG(accessibility)
        label_179->setText(QCoreApplication::translate("EditStyleBase", "Line thickness:", nullptr));
        bendLineWidthTab->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetBendLineWidthTab->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetBendLineWidthTab->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line thickness on tablature staves' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_FretNumbers->setTitle(QCoreApplication::translate("EditStyleBase", "Tablature fret numbers", nullptr));
        guitarBendCueSizedGraceFrets->setText(QCoreApplication::translate("EditStyleBase", "Use cue sized numbers for grace note bends", nullptr));
        groupBox_textLine->setTitle(QCoreApplication::translate("EditStyleBase", "Text lines", nullptr));
        label_135->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));

#if QT_CONFIG(tooltip)
        resetTextLinePlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextLinePlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTextLinePosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextLinePosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_136->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetTextLinePosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextLinePosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_72->setText(QCoreApplication::translate("EditStyleBase", "Placement:", nullptr));
        groupBox_systemTextLine->setTitle(QCoreApplication::translate("EditStyleBase", "System text lines", nullptr));
        label_211->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));

#if QT_CONFIG(tooltip)
        resetSystemTextLinePlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSystemTextLinePlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetSystemTextLinePosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSystemTextLinePosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_213->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetSystemTextLinePosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSystemTextLinePosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_214->setText(QCoreApplication::translate("EditStyleBase", "Placement:", nullptr));
        groupBox_articulationsOrnaments->setTitle(QCoreApplication::translate("EditStyleBase", "Articulations && ornaments", nullptr));
#if QT_CONFIG(accessibility)
        resetArticStaffDist->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Articulation distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        articNoteHeadDist->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", "space unit"));
        label_37->setText(QCoreApplication::translate("EditStyleBase", "Distance from stem:", nullptr));
        label_32->setText(QCoreApplication::translate("EditStyleBase", "Articulation size:", nullptr));
        articStaffDist->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", "space unit"));
        articStemDist->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", "space unit"));
#if QT_CONFIG(accessibility)
        resetArticStemDist->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Stem distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        resetArticNoteHeadDist->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Notehead distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_41->setText(QCoreApplication::translate("EditStyleBase", "Distance from staff:", nullptr));
        label_351->setText(QCoreApplication::translate("EditStyleBase", "Distance from notehead:", nullptr));
#if QT_CONFIG(accessibility)
        resetArticulationMag->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Articulation size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_35->setText(QCoreApplication::translate("EditStyleBase", "Minimum vertical distance:", nullptr));
        articMinVerticalDist->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        resetArticMinVerticalDist->setText(QString());
        groupBox_stemSideArticAlign->setTitle(QCoreApplication::translate("EditStyleBase", "Articulation alignment when positioned at the stem", nullptr));
        radioArticAlignStem->setText(QCoreApplication::translate("EditStyleBase", "Align with stem", nullptr));
        radioArticAlignNoteHead->setText(QCoreApplication::translate("EditStyleBase", "Align with notehead", nullptr));
        radioArticAlignCenter->setText(QCoreApplication::translate("EditStyleBase", "Center between stem and notehead", nullptr));
        groupBox_combinedArtic->setTitle(QCoreApplication::translate("EditStyleBase", "Combined articulation", nullptr));
        radioArticKeepTogether->setText(QCoreApplication::translate("EditStyleBase", "Always keep together", nullptr));
        radioArticAllowSeparate->setText(QCoreApplication::translate("EditStyleBase", "Prefer closeness to notehead (combined articulations may become separated)", nullptr));
        groupBox_fermatas->setTitle(QCoreApplication::translate("EditStyleBase", "Fermatas", nullptr));
        label_169->setText(QCoreApplication::translate("EditStyleBase", "Autoplace min. distance:", nullptr));
        fermataMinDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_168->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetFermataMinDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetFermataMinDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Autoplace min. distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetFermataPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetFermataPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_167->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));
#if QT_CONFIG(tooltip)
        resetFermataPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetFermataPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_staffText->setTitle(QCoreApplication::translate("EditStyleBase", "Staff text", nullptr));
#if QT_CONFIG(tooltip)
        resetStaffTextPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetStaffTextPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_178->setText(QCoreApplication::translate("EditStyleBase", "Placement:", nullptr));
        label_180->setText(QCoreApplication::translate("EditStyleBase", "Autoplace min. distance:", nullptr));
        staffTextMinDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetStaffTextPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetStaffTextPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetStaffTextPlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetStaffTextPlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_176->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));

        label_177->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetStaffTextMinDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetStaffTextMinDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_tempoText->setTitle(QCoreApplication::translate("EditStyleBase", "Tempo text", nullptr));
        label_144->setText(QCoreApplication::translate("EditStyleBase", "Autoplace min. distance:", nullptr));
        label_142->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));

#if QT_CONFIG(tooltip)
        resetTempoTextPlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTempoTextPlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTempoTextPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTempoTextPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_143->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetTempoTextPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTempoTextPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_128->setText(QCoreApplication::translate("EditStyleBase", "Placement:", nullptr));
        tempoTextMinDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetTempoTextMinDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTempoTextMinDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Autoplace min. distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_4->setTitle(QCoreApplication::translate("EditStyleBase", "Lyrics text", nullptr));
        editLyricsTextStyleButton->setText(QCoreApplication::translate("EditStyleBase", "Edit lyrics text style", nullptr));
        yLyricsPosBelow->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_minDistance->setText(QCoreApplication::translate("EditStyleBase", "Min. gap between lyrics:", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsLineHeight->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsLineHeight->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Line height' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_134->setText(QCoreApplication::translate("EditStyleBase", "Y position below:", nullptr));
        lyricsMinDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_131->setText(QCoreApplication::translate("EditStyleBase", "Min. margin to current staff:", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        yLyricsPosAbove->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        lyricsMinBottomDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        lyricsMinTopDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_137->setText(QCoreApplication::translate("EditStyleBase", "Min. margin to other staves:", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsPlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsPlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
        lyricsAlignVerseNumber->setText(QCoreApplication::translate("EditStyleBase", "Align verse number", nullptr));

        lyricsLineHeight->setSuffix(QCoreApplication::translate("EditStyleBase", "%", nullptr));
        label_132->setText(QCoreApplication::translate("EditStyleBase", "Y position above:", nullptr));
        label_71->setText(QCoreApplication::translate("EditStyleBase", "Position:", nullptr));
        label_133->setText(QCoreApplication::translate("EditStyleBase", "Line height (% of text size):", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsAlignVerseNumber->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsAlignVerseNumber->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Align verse number' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetLyricsMinTopDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsMinTopDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Min. top margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetLyricsMinDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsMinDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Min. distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetLyricsMinBottomDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsMinBottomDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Min. bottom margin' value", nullptr));
#endif // QT_CONFIG(accessibility)
        lyricsDashBox->setTitle(QCoreApplication::translate("EditStyleBase", "Dash", nullptr));
        lyricsDashMinLength->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        lyricsDashLineThickness->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_121->setText(QCoreApplication::translate("EditStyleBase", "Max. dash gap:", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsDashLineThickness->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsDashLineThickness->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Dash thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetLyricsDashPad->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsDashPad->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Dash pad' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_195->setText(QCoreApplication::translate("EditStyleBase", "Min. dash gap:", nullptr));
        lyricsDashPad->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_189->setText(QCoreApplication::translate("EditStyleBase", "Dash thickness:", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsDashMaxLength->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsDashMaxLength->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Max. dash length' value", nullptr));
#endif // QT_CONFIG(accessibility)
        lyricsDashMaxLength->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsDashMaxDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsDashMaxDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Max. dash distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_122->setText(QCoreApplication::translate("EditStyleBase", "Min. dash length:", nullptr));
        lyricsDashMaxDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_120->setText(QCoreApplication::translate("EditStyleBase", "Max. dash length:", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsDashMinLength->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsDashMinLength->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Min. dash length' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_196->setText(QCoreApplication::translate("EditStyleBase", "Vertical position (% of \n"
"text x-height)", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsDashYposRatio->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsDashYposRatio->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Dash Y position ratio' value", nullptr));
#endif // QT_CONFIG(accessibility)
        lyricsDashForce->setText(QCoreApplication::translate("EditStyleBase", "Omit dash when space is limited", nullptr));
        resetLyricsShowDashIfSyllableOnFirstNote->setText(QCoreApplication::translate("EditStyleBase", "...", nullptr));
        lyricsShowDashIfSyllableOnFirstNote->setText(QCoreApplication::translate("EditStyleBase", "Restate dash before syllable on \n"
"first note of the system", nullptr));
        label_198->setText(QCoreApplication::translate("EditStyleBase", "Dash placement at the start of the system:", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsDashForce->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsDashForce->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Always force dash' value", nullptr));
#endif // QT_CONFIG(accessibility)
        resetLyricsDashStartSystemPlacement->setText(QCoreApplication::translate("EditStyleBase", "...", nullptr));
        lyricsMelismaBox->setTitle(QCoreApplication::translate("EditStyleBase", "Underscore line", nullptr));
        minMelismaLength->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsLineThickness->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsLineThickness->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Melisma thickness' value", nullptr));
#endif // QT_CONFIG(accessibility)
        resetMinMelismaLength->setText(QCoreApplication::translate("EditStyleBase", "...", nullptr));
        lyricsLineThickness->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_222->setText(QCoreApplication::translate("EditStyleBase", "Min. underscore length:", nullptr));
        label_80->setText(QCoreApplication::translate("EditStyleBase", "Underscore thickness:", nullptr));
        label_188->setText(QCoreApplication::translate("EditStyleBase", "Underscore gap:", nullptr));
        lyricsMelismaPad->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetLyricsMelismaPad->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetLyricsMelismaPad->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Melisma pad' value", nullptr));
#endif // QT_CONFIG(accessibility)
        lyricsMelismaForce->setText(QCoreApplication::translate("EditStyleBase", "Omit underscore when space is limited", nullptr));
        resetLyricsMelismaForce->setText(QCoreApplication::translate("EditStyleBase", "...", nullptr));
        groupBox_expression->setTitle(QCoreApplication::translate("EditStyleBase", "Expression text", nullptr));
        snapExpression->setText(QCoreApplication::translate("EditStyleBase", "Snap to dynamics", nullptr));
#if QT_CONFIG(tooltip)
        resetSnapExpression->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetSnapExpression->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Snap to dynamics' setting", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_rehearsalMarks->setTitle(QCoreApplication::translate("EditStyleBase", "Rehearsal marks", nullptr));
        label_149->setText(QCoreApplication::translate("EditStyleBase", "Autoplace min. distance:", nullptr));
        label_150->setText(QCoreApplication::translate("EditStyleBase", "Position below:", nullptr));

#if QT_CONFIG(tooltip)
        resetRehearsalMarkPlacement->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetRehearsalMarkPlacement->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Placement' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetRehearsalMarkPosBelow->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetRehearsalMarkPosBelow->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position below' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_151->setText(QCoreApplication::translate("EditStyleBase", "Position above:", nullptr));
#if QT_CONFIG(tooltip)
        resetRehearsalMarkPosAbove->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetRehearsalMarkPosAbove->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Position above' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_152->setText(QCoreApplication::translate("EditStyleBase", "Placement:", nullptr));
        rehearsalMarkMinDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(tooltip)
        resetRehearsalMarkMinDistance->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetRehearsalMarkMinDistance->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Autoplace min. distance' value", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_figuredBass->setTitle(QCoreApplication::translate("EditStyleBase", "Figured bass", nullptr));
        labelFBSize->setText(QCoreApplication::translate("EditStyleBase", "Size:", nullptr));
        doubleSpinFBSize->setSuffix(QCoreApplication::translate("EditStyleBase", "pt", nullptr));
        label_98->setText(QCoreApplication::translate("EditStyleBase", "from top of staff", nullptr));
        label_99->setText(QCoreApplication::translate("EditStyleBase", "of font height", nullptr));
        doubleSpinFBVertPos->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        labelFBLineHeight->setText(QCoreApplication::translate("EditStyleBase", "Line height:", nullptr));
        labelFBFont->setText(QCoreApplication::translate("EditStyleBase", "Font:", nullptr));
        labelFBVertPos->setText(QCoreApplication::translate("EditStyleBase", "Vertical position:", nullptr));
        groupFBAlign->setTitle(QCoreApplication::translate("EditStyleBase", "Alignment", nullptr));
        radioFBTop->setText(QCoreApplication::translate("EditStyleBase", "Top", nullptr));
        radioFBBottom->setText(QCoreApplication::translate("EditStyleBase", "Bottom", nullptr));
        groupFBStyle->setTitle(QCoreApplication::translate("EditStyleBase", "Style", nullptr));
        radioFBModern->setText(QCoreApplication::translate("EditStyleBase", "Modern", nullptr));
        radioFBHistoric->setText(QCoreApplication::translate("EditStyleBase", "Historic", nullptr));
        groupBox_chordSymbols->setTitle(QCoreApplication::translate("EditStyleBase", "Chord symbols", nullptr));
        label_60->setText(QCoreApplication::translate("EditStyleBase", "Capo fret position:", nullptr));
        harmonyPlay->setTitle(QCoreApplication::translate("EditStyleBase", "Playback", nullptr));
        harmonyAppearance->setTitle(QCoreApplication::translate("EditStyleBase", "Appearance", nullptr));
#if QT_CONFIG(tooltip)
        resetExtensionAdjust->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetExtensionAdjust->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Extension vertical offset' value", nullptr));
#endif // QT_CONFIG(accessibility)
        labelExtensionAdjust->setText(QCoreApplication::translate("EditStyleBase", "Extension vertical offset:", nullptr));
        labelExtensionMag->setText(QCoreApplication::translate("EditStyleBase", "Extension scaling:", nullptr));
#if QT_CONFIG(tooltip)
        resetExtensionMag->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetExtensionMag->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Extension scaling' value", nullptr));
#endif // QT_CONFIG(accessibility)
        labelModifierMag->setText(QCoreApplication::translate("EditStyleBase", "Modifier scaling:", nullptr));
        labelModifierAdjust->setText(QCoreApplication::translate("EditStyleBase", "Modifier vertical offset:", nullptr));
#if QT_CONFIG(tooltip)
        resetModifierMag->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetModifierMag->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Modifier scaling' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetModifierAdjust->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetModifierAdjust->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Modifier vertical offset' value", nullptr));
#endif // QT_CONFIG(accessibility)
        automaticCapitalization->setTitle(QCoreApplication::translate("EditStyleBase", "Automatic capitalization", nullptr));
        lowerCaseMinorChords->setText(QCoreApplication::translate("EditStyleBase", "Lower case minor chords", nullptr));
        lowerCaseBassNotes->setText(QCoreApplication::translate("EditStyleBase", "Lower case bass notes", nullptr));
        allCapsNoteNames->setText(QCoreApplication::translate("EditStyleBase", "All caps note names", nullptr));
        harmonySpelling->setTitle(QCoreApplication::translate("EditStyleBase", "Spelling", nullptr));
        useStandardNoteNames->setText(QCoreApplication::translate("EditStyleBase", "Standard", nullptr));
        useGermanNoteNames->setText(QCoreApplication::translate("EditStyleBase", "German", nullptr));
        useFullGermanNoteNames->setText(QCoreApplication::translate("EditStyleBase", "Full German", nullptr));
        useSolfeggioNoteNames->setText(QCoreApplication::translate("EditStyleBase", "Solfeggio", nullptr));
        useFrenchNoteNames->setText(QCoreApplication::translate("EditStyleBase", "French", nullptr));
        harmonyStyle->setTitle(QCoreApplication::translate("EditStyleBase", "Style", nullptr));
        chordsStandard->setText(QCoreApplication::translate("EditStyleBase", "Standard", nullptr));
        chordsJazz->setText(QCoreApplication::translate("EditStyleBase", "Jazz", nullptr));
        chordsCustom->setText(QCoreApplication::translate("EditStyleBase", "Custom", nullptr));
        chordsXmlFile->setText(QCoreApplication::translate("EditStyleBase", "Load XML", nullptr));
        harmonyPositioning->setTitle(QCoreApplication::translate("EditStyleBase", "Positioning", nullptr));
        label_1461->setText(QCoreApplication::translate("EditStyleBase", "Maximum shift below:", nullptr));
        label_79->setText(QCoreApplication::translate("EditStyleBase", "Distance to fretboard diagram:", nullptr));
        label_1231->setText(QCoreApplication::translate("EditStyleBase", "Maximum shift above:", nullptr));
        maxHarmonyBarDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_1001->setText(QCoreApplication::translate("EditStyleBase", "Minimum chord spacing:", nullptr));
        label_1002->setText(QCoreApplication::translate("EditStyleBase", "Maximum barline distance:", nullptr));
        harmonyFretDist->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        minHarmonyDistance->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        maxChordShiftBelow->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        maxChordShiftAbove->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        groupBox_fretboardDiagrams->setTitle(QCoreApplication::translate("EditStyleBase", "Fretboard diagrams", nullptr));
        label_1451->setText(QCoreApplication::translate("EditStyleBase", "Maximum shift below:", nullptr));
        maxFretShiftAbove->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(accessibility)
        fretNumMag->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Fret number font size", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        fretFretSpacing->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Fret spacing", nullptr));
#endif // QT_CONFIG(accessibility)
        fretFretSpacing->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_17->setText(QCoreApplication::translate("EditStyleBase", "Relative dot size:", nullptr));
        label_5->setText(QCoreApplication::translate("EditStyleBase", "Scale:", nullptr));
#if QT_CONFIG(accessibility)
        fretMag->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Scale", nullptr));
#endif // QT_CONFIG(accessibility)
        label_601->setText(QCoreApplication::translate("EditStyleBase", "Fret number font size:", nullptr));
        label_90->setText(QCoreApplication::translate("EditStyleBase", "Fret spacing:", nullptr));
#if QT_CONFIG(accessibility)
        fretY->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Default vertical position", nullptr));
#endif // QT_CONFIG(accessibility)
        fretY->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(accessibility)
        label_2->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Barre line thickness", nullptr));
#endif // QT_CONFIG(accessibility)
        label_2->setText(QCoreApplication::translate("EditStyleBase", "Barre line thickness:", nullptr));
        label_54->setText(QCoreApplication::translate("EditStyleBase", "String spacing:", nullptr));
        maxFretShiftBelow->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
        label_6011->setText(QCoreApplication::translate("EditStyleBase", "Fret number position:", nullptr));
        label_1191->setText(QCoreApplication::translate("EditStyleBase", "Maximum shift above:", nullptr));
        label_602->setText(QCoreApplication::translate("EditStyleBase", "Default vertical position:", nullptr));
#if QT_CONFIG(accessibility)
        fretStringSpacing->setAccessibleName(QCoreApplication::translate("EditStyleBase", "String spacing", nullptr));
#endif // QT_CONFIG(accessibility)
        fretStringSpacing->setSuffix(QCoreApplication::translate("EditStyleBase", "sp", nullptr));
#if QT_CONFIG(accessibility)
        fretDotSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Relative dot size", nullptr));
#endif // QT_CONFIG(accessibility)
        radioFretNumRight->setText(QCoreApplication::translate("EditStyleBase", "Right", nullptr));
        radioFretNumLeft->setText(QCoreApplication::translate("EditStyleBase", "Left", nullptr));
        groupBox_tablature->setTitle(QCoreApplication::translate("EditStyleBase", "Tablature", nullptr));
        label->setText(QCoreApplication::translate("EditStyleBase", "Select the elements you would like displayed in common and simple tablature staves", nullptr));
        mordentShowTabSimple->setText(QString());
        wahShowTabSimple->setText(QString());
        slurShowTabCommon->setText(QString());
        wahShowTabCommon->setText(QString());
        dynamicsShowTabCommon->setText(QString());
        mordentShowTabCommon->setText(QString());
        staccatoShowTabSimple->setText(QString());
        label_215->setText(QCoreApplication::translate("EditStyleBase", "Golpe", nullptr));
        rasgueadoShowTabSimple->setText(QString());
        label_182->setText(QCoreApplication::translate("EditStyleBase", "Accent and marcato marks", nullptr));
        golpeShowTabSimple->setText(QString());
        label_175->setText(QCoreApplication::translate("EditStyleBase", "Dynamics", nullptr));
        label_59->setText(QCoreApplication::translate("EditStyleBase", "Harmonic marks", nullptr));
        label_181->setText(QCoreApplication::translate("EditStyleBase", "Crescendo and diminuendo lines", nullptr));
        rasgueadoShowTabCommon->setText(QString());
        harmonicMarkShowTabSimple->setText(QString());
        accentShowTabSimple->setText(QString());
        slurShowTabSimple->setText(QString());
        palmMuteShowTabCommon->setText(QString());
        turnShowTabCommon->setText(QString());
        fermataShowTabSimple->setText(QString());
        label_4->setText(QCoreApplication::translate("EditStyleBase", "Common", nullptr));
        accentShowTabCommon->setText(QString());
        hairpinShowTabCommon->setText(QString());
        fermataShowTabCommon->setText(QString());
        label_63->setText(QCoreApplication::translate("EditStyleBase", "Slurs", nullptr));
        label_192->setText(QCoreApplication::translate("EditStyleBase", "Palm mute (P.M.)", nullptr));
        label_199->setText(QCoreApplication::translate("EditStyleBase", "Mordents", nullptr));
        dynamicsShowTabSimple->setText(QString());
        hairpinShowTabSimple->setText(QString());
        turnShowTabSimple->setText(QString());
        label_200->setText(QCoreApplication::translate("EditStyleBase", "Turns", nullptr));
        letRingShowTabCommon->setText(QString());
        label_190->setText(QCoreApplication::translate("EditStyleBase", "Let ring", nullptr));
        label_57->setText(QCoreApplication::translate("EditStyleBase", "Simple", nullptr));
        golpeShowTabCommon->setText(QString());
        label_201->setText(QCoreApplication::translate("EditStyleBase", "Wah open/close", nullptr));
        label_183->setText(QCoreApplication::translate("EditStyleBase", "Staccato", nullptr));
        harmonicMarkShowTabCommon->setText(QString());
        label_197->setText(QCoreApplication::translate("EditStyleBase", "Rasgueado", nullptr));
        staccatoShowTabCommon->setText(QString());
        palmMuteShowTabSimple->setText(QString());
        label_174->setText(QCoreApplication::translate("EditStyleBase", "Fermatas", nullptr));
        letRingShowTabSimple->setText(QString());
        groupBox_tied_fret_marks->setTitle(QCoreApplication::translate("EditStyleBase", "Tied fret marks", nullptr));
        tabShowTiesAndFret->setText(QCoreApplication::translate("EditStyleBase", "Show ties and repeat fret marks", nullptr));
        tabShowTies->setText(QCoreApplication::translate("EditStyleBase", "Show ties only", nullptr));
        tabShowNone->setText(QCoreApplication::translate("EditStyleBase", "Show initial fret mark only", nullptr));
        tieParen->setTitle(QCoreApplication::translate("EditStyleBase", "Parentheses indicating ties", nullptr));
        tabParenthSystem->setText(QCoreApplication::translate("EditStyleBase", "Only show at the start of a system", nullptr));
        tabParenthMeasure->setText(QCoreApplication::translate("EditStyleBase", "Always show at the start of a measure", nullptr));
        tabParenthNone->setText(QCoreApplication::translate("EditStyleBase", "Never show", nullptr));
        tabParenthArticulation->setText(QCoreApplication::translate("EditStyleBase", "Always show parenthesized fret marks when articulation markings are present", nullptr));
        showMeasureNumber_8->setTitle(QCoreApplication::translate("EditStyleBase", "Edit text style", nullptr));
        groupBox_text_style->setTitle(QString());
        label_202->setText(QCoreApplication::translate("EditStyleBase", "Frame:", nullptr));
        textStyleFrameType->setItemText(2, QCoreApplication::translate("EditStyleBase", "Circle", nullptr));

#if QT_CONFIG(tooltip)
        resetTextStyleFrameType->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFrameType->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Frame' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_205->setText(QCoreApplication::translate("EditStyleBase", "Thickness:", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleFrameBackground->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFrameBackground->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Background' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTextStyleFrameForeground->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFrameForeground->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Border' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_206->setText(QCoreApplication::translate("EditStyleBase", "Padding:", nullptr));
        label_212->setText(QCoreApplication::translate("EditStyleBase", "Corner radius:", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleFrameBorder->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFrameBorder->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Border' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTextStyleFramePadding->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFramePadding->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Padding' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_203->setText(QCoreApplication::translate("EditStyleBase", "Border:", nullptr));
        label_204->setText(QCoreApplication::translate("EditStyleBase", "Highlight:", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleFrameBorderRadius->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFrameBorderRadius->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Corner radius' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTextStyleFontStyle->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFontStyle->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Font style' values", nullptr));
#endif // QT_CONFIG(accessibility)
        textStyleFontSize->setSuffix(QCoreApplication::translate("EditStyleBase", "pt", nullptr));
        label_208->setText(QCoreApplication::translate("EditStyleBase", "Font:", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleAlign->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleAlign->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Align' values", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTextStyleColor->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleColor->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Color' value", nullptr));
#endif // QT_CONFIG(accessibility)
        textStyleColorLabel->setText(QCoreApplication::translate("EditStyleBase", "Color:", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleFontSize->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFontSize->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Font size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_209->setText(QCoreApplication::translate("EditStyleBase", "Style:", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleSpatiumDependent->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleSpatiumDependent->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Follow staff size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_186->setText(QCoreApplication::translate("EditStyleBase", "Offset:", nullptr));
        textStyleSpatiumDependent->setText(QCoreApplication::translate("EditStyleBase", "Follow staff size", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleName->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleName->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Name' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTextStyleFontFace->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleFontFace->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Font face' value", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        resetTextStyleOffset->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleOffset->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Offset' values", nullptr));
#endif // QT_CONFIG(accessibility)
        label_210->setText(QCoreApplication::translate("EditStyleBase", "Align:", nullptr));
        labelStyleName->setText(QCoreApplication::translate("EditStyleBase", "Name:", nullptr));
        label_207->setText(QCoreApplication::translate("EditStyleBase", "Size:", nullptr));
        textStyleLineSpacing->setSuffix(QCoreApplication::translate("EditStyleBase", "li", nullptr));
        label_14711->setText(QCoreApplication::translate("EditStyleBase", "Line spacing:", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleLineSpacing->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleLineSpacing->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Font size' value", nullptr));
#endif // QT_CONFIG(accessibility)
        tupletUseSymbols->setText(QCoreApplication::translate("EditStyleBase", "Use musical symbols font for tuplet numbers", nullptr));
#if QT_CONFIG(tooltip)
        resetTupletUseSymbols->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTupletUseSymbols->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Use musical symbols font for tuplet numbers' value", nullptr));
#endif // QT_CONFIG(accessibility)
        label_14712->setText(QCoreApplication::translate("EditStyleBase", "Musical symbols scale:", nullptr));
        textStyleMusicalSymbolsScale->setSuffix(QCoreApplication::translate("EditStyleBase", "%", nullptr));
#if QT_CONFIG(tooltip)
        resetTextStyleMusicalSymbolsScale->setToolTip(QCoreApplication::translate("EditStyleBase", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        resetTextStyleMusicalSymbolsScale->setAccessibleName(QCoreApplication::translate("EditStyleBase", "Reset 'Musical symbols scale' value", nullptr));
#endif // QT_CONFIG(accessibility)
        buttonTogglePagelist->setText(QString());
        resetStylesButton->setText(QCoreApplication::translate("EditStyleBase", "Reset all styles to default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStyleBase: public Ui_EditStyleBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTYLE_H
