/********************************************************************************
** Form generated from reading UI file 'editstaff.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTAFF_H
#define UI_EDITSTAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "notation/view/widgets/colorlabel.h"

QT_BEGIN_NAMESPACE

class Ui_EditStaffBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupStaffProps;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *grid_StaffProps;
    QCheckBox *showBarlines;
    QCheckBox *showClef;
    QCheckBox *showTimesig;
    QCheckBox *showIfEmpty;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *hideMode;
    QHBoxLayout *hLayout_LineColor;
    QLabel *labelColor;
    Awl::ColorLabel *color;
    QCheckBox *invisible;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *hideSystemBarLine;
    QCheckBox *cutaway;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *mergeMatchingRests;
    QCheckBox *isSmallCheckbox;
    QFormLayout *formLayout;
    QLabel *staffGroupName;
    QLabel *labelNumOfLines;
    QSpinBox *lines;
    QLabel *labelLineDist;
    QDoubleSpinBox *lineDistance;
    QLabel *labelExtraDist;
    QDoubleSpinBox *spinExtraDistance;
    QLabel *label;
    QDoubleSpinBox *mag;
    QLabel *labelStaffGroup;
    QPushButton *changeStaffType;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupPartProps;
    QVBoxLayout *verticalLayout;
    QGridLayout *grid_PartProps;
    QHBoxLayout *horizontalLayout_2;
    QLabel *instrumentName;
    QPushButton *changeInstrument;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelInstrName;
    QGridLayout *grid_InstrNames;
    QLabel *labelLongName;
    QLabel *labelShortName;
    QTextEdit *longName;
    QTextEdit *shortName;
    QLabel *labelPitchRanges;
    QHBoxLayout *hLayout_PitchRanges;
    QLabel *label_7;
    QLineEdit *minPitchA;
    QToolButton *minPitchASelect;
    QLabel *label_9;
    QLineEdit *maxPitchA;
    QToolButton *maxPitchASelect;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QLineEdit *minPitchP;
    QToolButton *minPitchPSelect;
    QLabel *label_10;
    QLineEdit *maxPitchP;
    QToolButton *maxPitchPSelect;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line;
    QVBoxLayout *vLayout_Transposition;
    QHBoxLayout *transp_Main;
    QLabel *labelTransp;
    QSpinBox *octave;
    QLabel *label_11;
    QComboBox *iList;
    QRadioButton *up;
    QRadioButton *down;
    QSpacerItem *horizontalSpacer_1;
    QWidget *transp_PreferSharpFlat;
    QHBoxLayout *transp_PreferSharpFlat_Layout;
    QLabel *labelPreferSharpFlat;
    QComboBox *preferSharpFlat;
    QSpacerItem *horizontalSpacer_7;
    QFrame *stringDataFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelNumOfStrings;
    QLabel *numOfStrings;
    QPushButton *editStringData;
    QCheckBox *noReflectTranspositionInLinkedTab;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *groupPrevNextButtons;
    QToolButton *previousButton;
    QToolButton *nextButton;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditStaffBase)
    {
        if (EditStaffBase->objectName().isEmpty())
            EditStaffBase->setObjectName("EditStaffBase");
        EditStaffBase->resize(788, 659);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditStaffBase->sizePolicy().hasHeightForWidth());
        EditStaffBase->setSizePolicy(sizePolicy);
        EditStaffBase->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(EditStaffBase);
        gridLayout->setObjectName("gridLayout");
        groupStaffProps = new QGroupBox(EditStaffBase);
        groupStaffProps->setObjectName("groupStaffProps");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupStaffProps->sizePolicy().hasHeightForWidth());
        groupStaffProps->setSizePolicy(sizePolicy1);
        groupStaffProps->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupStaffProps);
        verticalLayout_2->setObjectName("verticalLayout_2");
        grid_StaffProps = new QGridLayout();
        grid_StaffProps->setObjectName("grid_StaffProps");
        showBarlines = new QCheckBox(groupStaffProps);
        showBarlines->setObjectName("showBarlines");

        grid_StaffProps->addWidget(showBarlines, 3, 2, 1, 1);

        showClef = new QCheckBox(groupStaffProps);
        showClef->setObjectName("showClef");

        grid_StaffProps->addWidget(showClef, 1, 2, 1, 1);

        showTimesig = new QCheckBox(groupStaffProps);
        showTimesig->setObjectName("showTimesig");

        grid_StaffProps->addWidget(showTimesig, 2, 2, 1, 1);

        showIfEmpty = new QCheckBox(groupStaffProps);
        showIfEmpty->setObjectName("showIfEmpty");

        grid_StaffProps->addWidget(showIfEmpty, 0, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupStaffProps);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        hideMode = new QComboBox(groupStaffProps);
        hideMode->addItem(QString());
        hideMode->addItem(QString());
        hideMode->addItem(QString());
        hideMode->addItem(QString());
        hideMode->setObjectName("hideMode");

        horizontalLayout->addWidget(hideMode);


        grid_StaffProps->addLayout(horizontalLayout, 0, 2, 1, 1);

        hLayout_LineColor = new QHBoxLayout();
        hLayout_LineColor->setObjectName("hLayout_LineColor");
        labelColor = new QLabel(groupStaffProps);
        labelColor->setObjectName("labelColor");

        hLayout_LineColor->addWidget(labelColor);

        color = new Awl::ColorLabel(groupStaffProps);
        color->setObjectName("color");
        color->setFocusPolicy(Qt::TabFocus);

        hLayout_LineColor->addWidget(color);


        grid_StaffProps->addLayout(hLayout_LineColor, 3, 4, 1, 1);

        invisible = new QCheckBox(groupStaffProps);
        invisible->setObjectName("invisible");

        grid_StaffProps->addWidget(invisible, 2, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        grid_StaffProps->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        hideSystemBarLine = new QCheckBox(groupStaffProps);
        hideSystemBarLine->setObjectName("hideSystemBarLine");

        grid_StaffProps->addWidget(hideSystemBarLine, 4, 2, 1, 1);

        cutaway = new QCheckBox(groupStaffProps);
        cutaway->setObjectName("cutaway");

        grid_StaffProps->addWidget(cutaway, 4, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        grid_StaffProps->addItem(horizontalSpacer_6, 0, 3, 1, 1);

        mergeMatchingRests = new QCheckBox(groupStaffProps);
        mergeMatchingRests->setObjectName("mergeMatchingRests");

        grid_StaffProps->addWidget(mergeMatchingRests, 5, 2, 1, 1);

        isSmallCheckbox = new QCheckBox(groupStaffProps);
        isSmallCheckbox->setObjectName("isSmallCheckbox");

        grid_StaffProps->addWidget(isSmallCheckbox, 1, 4, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(6);
        staffGroupName = new QLabel(groupStaffProps);
        staffGroupName->setObjectName("staffGroupName");

        formLayout->setWidget(0, QFormLayout::FieldRole, staffGroupName);

        labelNumOfLines = new QLabel(groupStaffProps);
        labelNumOfLines->setObjectName("labelNumOfLines");
        labelNumOfLines->setTextFormat(Qt::PlainText);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNumOfLines);

        lines = new QSpinBox(groupStaffProps);
        lines->setObjectName("lines");
        lines->setMinimum(1);
        lines->setMaximum(14);
        lines->setValue(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, lines);

        labelLineDist = new QLabel(groupStaffProps);
        labelLineDist->setObjectName("labelLineDist");

        formLayout->setWidget(2, QFormLayout::LabelRole, labelLineDist);

        lineDistance = new QDoubleSpinBox(groupStaffProps);
        lineDistance->setObjectName("lineDistance");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineDistance->sizePolicy().hasHeightForWidth());
        lineDistance->setSizePolicy(sizePolicy2);
        lineDistance->setSingleStep(0.250000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineDistance);

        labelExtraDist = new QLabel(groupStaffProps);
        labelExtraDist->setObjectName("labelExtraDist");

        formLayout->setWidget(4, QFormLayout::LabelRole, labelExtraDist);

        spinExtraDistance = new QDoubleSpinBox(groupStaffProps);
        spinExtraDistance->setObjectName("spinExtraDistance");
        spinExtraDistance->setMinimum(-50.000000000000000);
        spinExtraDistance->setMaximum(50.000000000000000);
        spinExtraDistance->setSingleStep(0.250000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinExtraDistance);

        label = new QLabel(groupStaffProps);
        label->setObjectName("label");

        formLayout->setWidget(5, QFormLayout::LabelRole, label);

        mag = new QDoubleSpinBox(groupStaffProps);
        mag->setObjectName("mag");
        mag->setDecimals(1);
        mag->setMinimum(10.000000000000000);
        mag->setMaximum(1000.000000000000000);
        mag->setValue(100.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, mag);

        labelStaffGroup = new QLabel(groupStaffProps);
        labelStaffGroup->setObjectName("labelStaffGroup");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelStaffGroup);


        grid_StaffProps->addLayout(formLayout, 0, 0, 6, 1);

        changeStaffType = new QPushButton(groupStaffProps);
        changeStaffType->setObjectName("changeStaffType");

        grid_StaffProps->addWidget(changeStaffType, 5, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        grid_StaffProps->addItem(horizontalSpacer_8, 0, 5, 1, 1);


        verticalLayout_2->addLayout(grid_StaffProps);


        gridLayout->addWidget(groupStaffProps, 0, 0, 1, 2);

        groupPartProps = new QGroupBox(EditStaffBase);
        groupPartProps->setObjectName("groupPartProps");
        sizePolicy1.setHeightForWidth(groupPartProps->sizePolicy().hasHeightForWidth());
        groupPartProps->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupPartProps);
        verticalLayout->setObjectName("verticalLayout");
        grid_PartProps = new QGridLayout();
        grid_PartProps->setObjectName("grid_PartProps");
        grid_PartProps->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        instrumentName = new QLabel(groupPartProps);
        instrumentName->setObjectName("instrumentName");

        horizontalLayout_2->addWidget(instrumentName);

        changeInstrument = new QPushButton(groupPartProps);
        changeInstrument->setObjectName("changeInstrument");

        horizontalLayout_2->addWidget(changeInstrument);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        grid_PartProps->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        labelInstrName = new QLabel(groupPartProps);
        labelInstrName->setObjectName("labelInstrName");

        grid_PartProps->addWidget(labelInstrName, 3, 0, 1, 1);


        verticalLayout->addLayout(grid_PartProps);

        grid_InstrNames = new QGridLayout();
        grid_InstrNames->setObjectName("grid_InstrNames");
        labelLongName = new QLabel(groupPartProps);
        labelLongName->setObjectName("labelLongName");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelLongName->sizePolicy().hasHeightForWidth());
        labelLongName->setSizePolicy(sizePolicy3);

        grid_InstrNames->addWidget(labelLongName, 0, 0, 1, 1);

        labelShortName = new QLabel(groupPartProps);
        labelShortName->setObjectName("labelShortName");
        sizePolicy3.setHeightForWidth(labelShortName->sizePolicy().hasHeightForWidth());
        labelShortName->setSizePolicy(sizePolicy3);

        grid_InstrNames->addWidget(labelShortName, 0, 1, 1, 1);

        longName = new QTextEdit(groupPartProps);
        longName->setObjectName("longName");
        longName->setMinimumSize(QSize(0, 40));
        longName->setTabChangesFocus(true);

        grid_InstrNames->addWidget(longName, 1, 0, 1, 1);

        shortName = new QTextEdit(groupPartProps);
        shortName->setObjectName("shortName");
        shortName->setMinimumSize(QSize(0, 40));
        shortName->setTabChangesFocus(true);

        grid_InstrNames->addWidget(shortName, 1, 1, 1, 1);


        verticalLayout->addLayout(grid_InstrNames);

        labelPitchRanges = new QLabel(groupPartProps);
        labelPitchRanges->setObjectName("labelPitchRanges");

        verticalLayout->addWidget(labelPitchRanges);

        hLayout_PitchRanges = new QHBoxLayout();
        hLayout_PitchRanges->setObjectName("hLayout_PitchRanges");
        label_7 = new QLabel(groupPartProps);
        label_7->setObjectName("label_7");

        hLayout_PitchRanges->addWidget(label_7);

        minPitchA = new QLineEdit(groupPartProps);
        minPitchA->setObjectName("minPitchA");
        minPitchA->setMaxLength(4);
        minPitchA->setReadOnly(true);

        hLayout_PitchRanges->addWidget(minPitchA);

        minPitchASelect = new QToolButton(groupPartProps);
        minPitchASelect->setObjectName("minPitchASelect");
        minPitchASelect->setText(QString::fromUtf8(""));

        hLayout_PitchRanges->addWidget(minPitchASelect);

        label_9 = new QLabel(groupPartProps);
        label_9->setObjectName("label_9");
        label_9->setText(QString::fromUtf8("-"));

        hLayout_PitchRanges->addWidget(label_9);

        maxPitchA = new QLineEdit(groupPartProps);
        maxPitchA->setObjectName("maxPitchA");
        maxPitchA->setMaxLength(4);
        maxPitchA->setReadOnly(true);

        hLayout_PitchRanges->addWidget(maxPitchA);

        maxPitchASelect = new QToolButton(groupPartProps);
        maxPitchASelect->setObjectName("maxPitchASelect");
        maxPitchASelect->setText(QString::fromUtf8(""));

        hLayout_PitchRanges->addWidget(maxPitchASelect);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayout_PitchRanges->addItem(horizontalSpacer);

        label_8 = new QLabel(groupPartProps);
        label_8->setObjectName("label_8");

        hLayout_PitchRanges->addWidget(label_8);

        minPitchP = new QLineEdit(groupPartProps);
        minPitchP->setObjectName("minPitchP");
        minPitchP->setMaxLength(4);
        minPitchP->setReadOnly(true);

        hLayout_PitchRanges->addWidget(minPitchP);

        minPitchPSelect = new QToolButton(groupPartProps);
        minPitchPSelect->setObjectName("minPitchPSelect");
        minPitchPSelect->setText(QString::fromUtf8(""));

        hLayout_PitchRanges->addWidget(minPitchPSelect);

        label_10 = new QLabel(groupPartProps);
        label_10->setObjectName("label_10");
        label_10->setText(QString::fromUtf8("-"));

        hLayout_PitchRanges->addWidget(label_10);

        maxPitchP = new QLineEdit(groupPartProps);
        maxPitchP->setObjectName("maxPitchP");
        maxPitchP->setMaxLength(4);
        maxPitchP->setReadOnly(true);

        hLayout_PitchRanges->addWidget(maxPitchP);

        maxPitchPSelect = new QToolButton(groupPartProps);
        maxPitchPSelect->setObjectName("maxPitchPSelect");
        maxPitchPSelect->setText(QString::fromUtf8(""));

        hLayout_PitchRanges->addWidget(maxPitchPSelect);

        horizontalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayout_PitchRanges->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(hLayout_PitchRanges);

        line = new QFrame(groupPartProps);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        vLayout_Transposition = new QVBoxLayout();
        vLayout_Transposition->setObjectName("vLayout_Transposition");
        transp_Main = new QHBoxLayout();
        transp_Main->setObjectName("transp_Main");
        labelTransp = new QLabel(groupPartProps);
        labelTransp->setObjectName("labelTransp");

        transp_Main->addWidget(labelTransp);

        octave = new QSpinBox(groupPartProps);
        octave->setObjectName("octave");
        octave->setMaximum(10);

        transp_Main->addWidget(octave);

        label_11 = new QLabel(groupPartProps);
        label_11->setObjectName("label_11");

        transp_Main->addWidget(label_11);

        iList = new QComboBox(groupPartProps);
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->addItem(QString());
        iList->setObjectName("iList");
        sizePolicy2.setHeightForWidth(iList->sizePolicy().hasHeightForWidth());
        iList->setSizePolicy(sizePolicy2);

        transp_Main->addWidget(iList);

        up = new QRadioButton(groupPartProps);
        up->setObjectName("up");

        transp_Main->addWidget(up);

        down = new QRadioButton(groupPartProps);
        down->setObjectName("down");

        transp_Main->addWidget(down);

        horizontalSpacer_1 = new QSpacerItem(17, 18, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        transp_Main->addItem(horizontalSpacer_1);


        vLayout_Transposition->addLayout(transp_Main);

        transp_PreferSharpFlat = new QWidget(groupPartProps);
        transp_PreferSharpFlat->setObjectName("transp_PreferSharpFlat");
        transp_PreferSharpFlat_Layout = new QHBoxLayout(transp_PreferSharpFlat);
        transp_PreferSharpFlat_Layout->setSpacing(6);
        transp_PreferSharpFlat_Layout->setObjectName("transp_PreferSharpFlat_Layout");
        transp_PreferSharpFlat_Layout->setContentsMargins(0, 0, 0, 0);
        labelPreferSharpFlat = new QLabel(transp_PreferSharpFlat);
        labelPreferSharpFlat->setObjectName("labelPreferSharpFlat");

        transp_PreferSharpFlat_Layout->addWidget(labelPreferSharpFlat);

        preferSharpFlat = new QComboBox(transp_PreferSharpFlat);
        preferSharpFlat->addItem(QString());
        preferSharpFlat->addItem(QString());
        preferSharpFlat->addItem(QString());
        preferSharpFlat->addItem(QString());
        preferSharpFlat->setObjectName("preferSharpFlat");

        transp_PreferSharpFlat_Layout->addWidget(preferSharpFlat);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        transp_PreferSharpFlat_Layout->addItem(horizontalSpacer_7);


        vLayout_Transposition->addWidget(transp_PreferSharpFlat);


        verticalLayout->addLayout(vLayout_Transposition);

        stringDataFrame = new QFrame(groupPartProps);
        stringDataFrame->setObjectName("stringDataFrame");
        horizontalLayout_4 = new QHBoxLayout(stringDataFrame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelNumOfStrings = new QLabel(stringDataFrame);
        labelNumOfStrings->setObjectName("labelNumOfStrings");

        horizontalLayout_4->addWidget(labelNumOfStrings);

        numOfStrings = new QLabel(stringDataFrame);
        numOfStrings->setObjectName("numOfStrings");

        horizontalLayout_4->addWidget(numOfStrings);

        editStringData = new QPushButton(stringDataFrame);
        editStringData->setObjectName("editStringData");

        horizontalLayout_4->addWidget(editStringData);

        noReflectTranspositionInLinkedTab = new QCheckBox(stringDataFrame);
        noReflectTranspositionInLinkedTab->setObjectName("noReflectTranspositionInLinkedTab");
        noReflectTranspositionInLinkedTab->setChecked(true);

        horizontalLayout_4->addWidget(noReflectTranspositionInLinkedTab);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(stringDataFrame);

        verticalLayout->setStretch(1, 1);

        gridLayout->addWidget(groupPartProps, 1, 0, 1, 2);

        groupPrevNextButtons = new QHBoxLayout();
        groupPrevNextButtons->setObjectName("groupPrevNextButtons");
        previousButton = new QToolButton(EditStaffBase);
        previousButton->setObjectName("previousButton");
        previousButton->setMinimumSize(QSize(29, 29));
        previousButton->setText(QString::fromUtf8(""));

        groupPrevNextButtons->addWidget(previousButton);

        nextButton = new QToolButton(EditStaffBase);
        nextButton->setObjectName("nextButton");
        nextButton->setMinimumSize(QSize(29, 29));
        nextButton->setText(QString::fromUtf8(""));

        groupPrevNextButtons->addWidget(nextButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        groupPrevNextButtons->addItem(horizontalSpacer_3);


        gridLayout->addLayout(groupPrevNextButtons, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(EditStaffBase);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(hideMode);
        labelColor->setBuddy(color);
        labelNumOfLines->setBuddy(lines);
        labelLineDist->setBuddy(lineDistance);
        labelExtraDist->setBuddy(spinExtraDistance);
        label->setBuddy(mag);
        labelStaffGroup->setBuddy(staffGroupName);
        instrumentName->setBuddy(changeInstrument);
        labelInstrName->setBuddy(instrumentName);
        labelLongName->setBuddy(longName);
        labelShortName->setBuddy(shortName);
        label_7->setBuddy(minPitchA);
        label_9->setBuddy(maxPitchA);
        label_8->setBuddy(minPitchP);
        label_10->setBuddy(maxPitchP);
        labelTransp->setBuddy(iList);
        label_11->setBuddy(octave);
        labelPreferSharpFlat->setBuddy(preferSharpFlat);
        labelNumOfStrings->setBuddy(numOfStrings);
        numOfStrings->setBuddy(editStringData);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lines, lineDistance);
        QWidget::setTabOrder(lineDistance, spinExtraDistance);
        QWidget::setTabOrder(spinExtraDistance, mag);
        QWidget::setTabOrder(mag, hideMode);
        QWidget::setTabOrder(hideMode, showClef);
        QWidget::setTabOrder(showClef, showTimesig);
        QWidget::setTabOrder(showTimesig, showBarlines);
        QWidget::setTabOrder(showBarlines, hideSystemBarLine);
        QWidget::setTabOrder(hideSystemBarLine, mergeMatchingRests);
        QWidget::setTabOrder(mergeMatchingRests, showIfEmpty);
        QWidget::setTabOrder(showIfEmpty, isSmallCheckbox);
        QWidget::setTabOrder(isSmallCheckbox, invisible);
        QWidget::setTabOrder(invisible, color);
        QWidget::setTabOrder(color, cutaway);
        QWidget::setTabOrder(cutaway, changeStaffType);
        QWidget::setTabOrder(changeStaffType, changeInstrument);
        QWidget::setTabOrder(changeInstrument, longName);
        QWidget::setTabOrder(longName, shortName);
        QWidget::setTabOrder(shortName, minPitchA);
        QWidget::setTabOrder(minPitchA, minPitchASelect);
        QWidget::setTabOrder(minPitchASelect, maxPitchA);
        QWidget::setTabOrder(maxPitchA, maxPitchASelect);
        QWidget::setTabOrder(maxPitchASelect, minPitchP);
        QWidget::setTabOrder(minPitchP, minPitchPSelect);
        QWidget::setTabOrder(minPitchPSelect, maxPitchP);
        QWidget::setTabOrder(maxPitchP, maxPitchPSelect);
        QWidget::setTabOrder(maxPitchPSelect, octave);
        QWidget::setTabOrder(octave, iList);
        QWidget::setTabOrder(iList, up);
        QWidget::setTabOrder(up, down);
        QWidget::setTabOrder(down, preferSharpFlat);
        QWidget::setTabOrder(preferSharpFlat, editStringData);
        QWidget::setTabOrder(editStringData, previousButton);
        QWidget::setTabOrder(previousButton, nextButton);

        retranslateUi(EditStaffBase);

        QMetaObject::connectSlotsByName(EditStaffBase);
    } // setupUi

    void retranslateUi(QDialog *EditStaffBase)
    {
        EditStaffBase->setWindowTitle(QCoreApplication::translate("EditStaffBase", "Staff/Part properties", nullptr));
        groupStaffProps->setTitle(QCoreApplication::translate("EditStaffBase", "Staff properties", nullptr));
        showBarlines->setText(QCoreApplication::translate("EditStaffBase", "Show barlines", nullptr));
        showClef->setText(QCoreApplication::translate("EditStaffBase", "Show clef", nullptr));
        showTimesig->setText(QCoreApplication::translate("EditStaffBase", "Show time signature", nullptr));
        showIfEmpty->setText(QCoreApplication::translate("EditStaffBase", "Do not hide if system is empty", nullptr));
        label_2->setText(QCoreApplication::translate("EditStaffBase", "Hide when empty:", nullptr));
        hideMode->setItemText(0, QCoreApplication::translate("EditStaffBase", "Auto", nullptr));
        hideMode->setItemText(1, QCoreApplication::translate("EditStaffBase", "Always", nullptr));
        hideMode->setItemText(2, QCoreApplication::translate("EditStaffBase", "Never", nullptr));
        hideMode->setItemText(3, QCoreApplication::translate("EditStaffBase", "Instrument", nullptr));

        labelColor->setText(QCoreApplication::translate("EditStaffBase", "Staff line color:", nullptr));
        invisible->setText(QCoreApplication::translate("EditStaffBase", "Invisible staff lines", nullptr));
        hideSystemBarLine->setText(QCoreApplication::translate("EditStaffBase", "Hide system barline", nullptr));
        cutaway->setText(QCoreApplication::translate("EditStaffBase", "Cutaway", nullptr));
        mergeMatchingRests->setText(QCoreApplication::translate("EditStaffBase", "Merge matching rests", nullptr));
        isSmallCheckbox->setText(QCoreApplication::translate("EditStaffBase", "Small staff", nullptr));
        labelNumOfLines->setText(QCoreApplication::translate("EditStaffBase", "Lines:", nullptr));
        labelLineDist->setText(QCoreApplication::translate("EditStaffBase", "Line distance:", nullptr));
        lineDistance->setSuffix(QCoreApplication::translate("EditStaffBase", "sp", nullptr));
        labelExtraDist->setText(QCoreApplication::translate("EditStaffBase", "Extra distance above staff:", nullptr));
        spinExtraDistance->setSuffix(QCoreApplication::translate("EditStaffBase", "sp", nullptr));
        label->setText(QCoreApplication::translate("EditStaffBase", "Scale:", nullptr));
        mag->setSuffix(QCoreApplication::translate("EditStaffBase", "%", nullptr));
        labelStaffGroup->setText(QCoreApplication::translate("EditStaffBase", "Style group:", nullptr));
        changeStaffType->setText(QCoreApplication::translate("EditStaffBase", "Advanced style properties\342\200\246", nullptr));
        groupPartProps->setTitle(QCoreApplication::translate("EditStaffBase", "Part properties", nullptr));
        changeInstrument->setText(QCoreApplication::translate("EditStaffBase", "Replace instrument\342\200\246", nullptr));
        labelInstrName->setText(QCoreApplication::translate("EditStaffBase", "Instrument:", nullptr));
        labelLongName->setText(QCoreApplication::translate("EditStaffBase", "Long instrument name:", nullptr));
        labelShortName->setText(QCoreApplication::translate("EditStaffBase", "Short instrument name:", nullptr));
        labelPitchRanges->setText(QCoreApplication::translate("EditStaffBase", "Usable pitch range:", nullptr));
        label_7->setText(QCoreApplication::translate("EditStaffBase", "Amateur:", nullptr));
#if QT_CONFIG(accessibility)
        minPitchASelect->setAccessibleName(QCoreApplication::translate("EditStaffBase", "Edit", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        maxPitchASelect->setAccessibleName(QCoreApplication::translate("EditStaffBase", "Edit", nullptr));
#endif // QT_CONFIG(accessibility)
        label_8->setText(QCoreApplication::translate("EditStaffBase", "Professional:", nullptr));
#if QT_CONFIG(accessibility)
        minPitchPSelect->setAccessibleName(QCoreApplication::translate("EditStaffBase", "Edit", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        maxPitchPSelect->setAccessibleName(QCoreApplication::translate("EditStaffBase", "Edit", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        labelTransp->setToolTip(QCoreApplication::translate("EditStaffBase", "Interval from written to sounding pitch", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTransp->setText(QCoreApplication::translate("EditStaffBase", "Transposition:", nullptr));
#if QT_CONFIG(accessibility)
        octave->setAccessibleName(QCoreApplication::translate("EditStaffBase", "Octave", nullptr));
#endif // QT_CONFIG(accessibility)
        label_11->setText(QCoreApplication::translate("EditStaffBase", "Octave(s) +", nullptr));
        iList->setItemText(0, QCoreApplication::translate("EditStaffBase", "0 - Perfect unison", nullptr));
        iList->setItemText(1, QCoreApplication::translate("EditStaffBase", "1 - Augmented unison", nullptr));
        iList->setItemText(2, QCoreApplication::translate("EditStaffBase", "0 - Diminished second", nullptr));
        iList->setItemText(3, QCoreApplication::translate("EditStaffBase", "1 - Minor second", nullptr));
        iList->setItemText(4, QCoreApplication::translate("EditStaffBase", "2 - Major second", nullptr));
        iList->setItemText(5, QCoreApplication::translate("EditStaffBase", "3 - Augmented second", nullptr));
        iList->setItemText(6, QCoreApplication::translate("EditStaffBase", "2 - Diminished third", nullptr));
        iList->setItemText(7, QCoreApplication::translate("EditStaffBase", "3 - Minor third", nullptr));
        iList->setItemText(8, QCoreApplication::translate("EditStaffBase", "4 - Major third", nullptr));
        iList->setItemText(9, QCoreApplication::translate("EditStaffBase", "5 - Augmented third", nullptr));
        iList->setItemText(10, QCoreApplication::translate("EditStaffBase", "4 - Diminished fourth", nullptr));
        iList->setItemText(11, QCoreApplication::translate("EditStaffBase", "5 - Perfect fourth", nullptr));
        iList->setItemText(12, QCoreApplication::translate("EditStaffBase", "6 - Augmented fourth", nullptr));
        iList->setItemText(13, QCoreApplication::translate("EditStaffBase", "6 - Diminished fifth", nullptr));
        iList->setItemText(14, QCoreApplication::translate("EditStaffBase", "7 - Perfect fifth", nullptr));
        iList->setItemText(15, QCoreApplication::translate("EditStaffBase", "8 - Augmented fifth", nullptr));
        iList->setItemText(16, QCoreApplication::translate("EditStaffBase", "7 - Diminished sixth", nullptr));
        iList->setItemText(17, QCoreApplication::translate("EditStaffBase", "8 - Minor sixth", nullptr));
        iList->setItemText(18, QCoreApplication::translate("EditStaffBase", "9 - Major sixth", nullptr));
        iList->setItemText(19, QCoreApplication::translate("EditStaffBase", "10 - Augmented sixth", nullptr));
        iList->setItemText(20, QCoreApplication::translate("EditStaffBase", "9 - Diminished seventh", nullptr));
        iList->setItemText(21, QCoreApplication::translate("EditStaffBase", "10 - Minor seventh", nullptr));
        iList->setItemText(22, QCoreApplication::translate("EditStaffBase", "11 - Major seventh", nullptr));
        iList->setItemText(23, QCoreApplication::translate("EditStaffBase", "12 - Augmented seventh", nullptr));
        iList->setItemText(24, QCoreApplication::translate("EditStaffBase", "11 - Diminished octave", nullptr));
        iList->setItemText(25, QCoreApplication::translate("EditStaffBase", "12 - Perfect octave", nullptr));

#if QT_CONFIG(accessibility)
        iList->setAccessibleName(QCoreApplication::translate("EditStaffBase", "Interval", nullptr));
#endif // QT_CONFIG(accessibility)
        up->setText(QCoreApplication::translate("EditStaffBase", "Up", nullptr));
        down->setText(QCoreApplication::translate("EditStaffBase", "Down", nullptr));
        labelPreferSharpFlat->setText(QCoreApplication::translate("EditStaffBase", "Prefer sharps or flats for transposed key signatures:", nullptr));
        preferSharpFlat->setItemText(0, QCoreApplication::translate("EditStaffBase", "None", nullptr));
        preferSharpFlat->setItemText(1, QCoreApplication::translate("EditStaffBase", "Sharps", nullptr));
        preferSharpFlat->setItemText(2, QCoreApplication::translate("EditStaffBase", "Flats", nullptr));
        preferSharpFlat->setItemText(3, QCoreApplication::translate("EditStaffBase", "Auto", nullptr));

        labelNumOfStrings->setText(QCoreApplication::translate("EditStaffBase", "Number of strings:", nullptr));
        editStringData->setText(QCoreApplication::translate("EditStaffBase", "Edit string data\342\200\246", nullptr));
        noReflectTranspositionInLinkedTab->setText(QCoreApplication::translate("EditStaffBase", "Don\342\200\231t reflect transposition in linked tablature staves", nullptr));
#if QT_CONFIG(tooltip)
        previousButton->setToolTip(QCoreApplication::translate("EditStaffBase", "Go to previous staff", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        previousButton->setAccessibleName(QCoreApplication::translate("EditStaffBase", "Go to previous staff", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        nextButton->setToolTip(QCoreApplication::translate("EditStaffBase", "Go to next staff", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        nextButton->setAccessibleName(QCoreApplication::translate("EditStaffBase", "Go to next staff", nullptr));
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class EditStaffBase: public Ui_EditStaffBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTAFF_H
