/********************************************************************************
** Form generated from reading UI file 'editstafftype.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTAFFTYPE_H
#define UI_EDITSTAFFTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "notation/view/widgets/exampleview.h"

QT_BEGIN_NAMESPACE

class Ui_EditStaffType
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *groupName;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpinBox *lines;
    QLabel *label_4;
    QDoubleSpinBox *lineDistance;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_4;
    QCheckBox *genClef;
    QCheckBox *genTimesig;
    QCheckBox *showBarlines;
    QStackedWidget *stack;
    QWidget *page;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_2;
    QCheckBox *genKeysigPitched;
    QCheckBox *showLedgerLinesPitched;
    QCheckBox *stemlessPitched;
    QComboBox *noteHeadScheme;
    QLabel *label;
    QGroupBox *groupPreviewStandard;
    QVBoxLayout *verticalLayout_49;
    mu::notation::ExampleView *standardPreview;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_3;
    QCheckBox *genKeysigPercussion;
    QCheckBox *stemlessPercussion;
    QCheckBox *showLedgerLinesPercussion;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *upsideDown;
    QSpacerItem *horizontalSpacer_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_3;
    QLabel *fretFontLabel;
    QComboBox *fretFontName;
    QFormLayout *formLayout_4;
    QLabel *fretFontSizeLabel;
    QDoubleSpinBox *fretFontSize;
    QFormLayout *formLayout_5;
    QLabel *fretYLabel;
    QDoubleSpinBox *fretY;
    QGridLayout *gridLayout;
    QLabel *onStringsLabel;
    QRadioButton *onLinesRadio;
    QRadioButton *linesThroughRadio;
    QLabel *linesThroughLabel;
    QRadioButton *numbersRadio;
    QLabel *numbersLabel;
    QRadioButton *lettersRadio;
    QRadioButton *aboveLinesRadio;
    QRadioButton *linesBrokenRadio;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *showTabFingering;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *durFontLabel;
    QComboBox *durFontName;
    QLabel *durFontSizeLabel;
    QDoubleSpinBox *durFontSize;
    QLabel *durYLabel;
    QDoubleSpinBox *durY;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *durSymLabel;
    QRadioButton *noteValuesNone;
    QRadioButton *noteValuesSymb;
    QRadioButton *noteValuesStems;
    QSpacerItem *horizontalSpacer_13;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5_2;
    QLabel *valuesRepeatLabel;
    QRadioButton *valuesRepeatNever;
    QRadioButton *valuesRepeatSystem;
    QRadioButton *valuesRepeatMeasure;
    QRadioButton *valuesRepeatAlways;
    QSpacerItem *horizontalSpacer_13_2;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *stemStyleLabel;
    QRadioButton *stemBesideRadio;
    QRadioButton *stemThroughRadio;
    QSpacerItem *horizontalSpacer_11;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_15;
    QLabel *stemPosLabel;
    QRadioButton *stemAboveRadio;
    QRadioButton *stemBelowRadio;
    QSpacerItem *horizontalSpacer_10;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_18;
    QLabel *minimLabels;
    QRadioButton *minimNoneRadio;
    QRadioButton *minimShortRadio;
    QRadioButton *minimSlashedRadio;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *showRests;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *groupPreview;
    QVBoxLayout *verticalLayout_9;
    mu::notation::ExampleView *tabPreview;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *templateCombo;
    QPushButton *templateReset;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *addToTemplates;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QButtonGroup *NumLettersButtGroup;
    QButtonGroup *OnAboveLinesButtGroup;
    QButtonGroup *ContinuousBrokenLinesbuttGroup;

    void setupUi(QDialog *EditStaffType)
    {
        if (EditStaffType->objectName().isEmpty())
            EditStaffType->setObjectName(QString::fromUtf8("EditStaffType"));
        EditStaffType->resize(662, 649);
        EditStaffType->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(EditStaffType);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupName = new QLabel(EditStaffType);
        groupName->setObjectName(QString::fromUtf8("groupName"));
        QFont font;
        font.setBold(true);
        groupName->setFont(font);
        groupName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(groupName);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        name = new QLineEdit(EditStaffType);
        name->setObjectName(QString::fromUtf8("name"));
        name->setReadOnly(true);

        horizontalLayout_11->addWidget(name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_3 = new QLabel(EditStaffType);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_3);

        lines = new QSpinBox(EditStaffType);
        lines->setObjectName(QString::fromUtf8("lines"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lines->sizePolicy().hasHeightForWidth());
        lines->setSizePolicy(sizePolicy1);
        lines->setMinimum(1);
        lines->setMaximum(14);
        lines->setValue(5);

        horizontalLayout_4->addWidget(lines);

        label_4 = new QLabel(EditStaffType);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_4);

        lineDistance = new QDoubleSpinBox(EditStaffType);
        lineDistance->setObjectName(QString::fromUtf8("lineDistance"));
        sizePolicy1.setHeightForWidth(lineDistance->sizePolicy().hasHeightForWidth());
        lineDistance->setSizePolicy(sizePolicy1);
        lineDistance->setSingleStep(0.250000000000000);

        horizontalLayout_4->addWidget(lineDistance);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, -1);
        genClef = new QCheckBox(EditStaffType);
        genClef->setObjectName(QString::fromUtf8("genClef"));

        gridLayout_4->addWidget(genClef, 0, 0, 1, 1);

        genTimesig = new QCheckBox(EditStaffType);
        genTimesig->setObjectName(QString::fromUtf8("genTimesig"));

        gridLayout_4->addWidget(genTimesig, 0, 1, 1, 1);

        showBarlines = new QCheckBox(EditStaffType);
        showBarlines->setObjectName(QString::fromUtf8("showBarlines"));

        gridLayout_4->addWidget(showBarlines, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        stack = new QStackedWidget(EditStaffType);
        stack->setObjectName(QString::fromUtf8("stack"));
        stack->setFrameShape(QFrame::NoFrame);
        stack->setFrameShadow(QFrame::Plain);
        stack->setLineWidth(0);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_7 = new QVBoxLayout(page);
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        genKeysigPitched = new QCheckBox(page);
        genKeysigPitched->setObjectName(QString::fromUtf8("genKeysigPitched"));

        gridLayout_2->addWidget(genKeysigPitched, 2, 0, 1, 1);

        showLedgerLinesPitched = new QCheckBox(page);
        showLedgerLinesPitched->setObjectName(QString::fromUtf8("showLedgerLinesPitched"));

        gridLayout_2->addWidget(showLedgerLinesPitched, 2, 1, 1, 1);

        stemlessPitched = new QCheckBox(page);
        stemlessPitched->setObjectName(QString::fromUtf8("stemlessPitched"));

        gridLayout_2->addWidget(stemlessPitched, 2, 2, 1, 1);

        noteHeadScheme = new QComboBox(page);
        noteHeadScheme->setObjectName(QString::fromUtf8("noteHeadScheme"));

        gridLayout_2->addWidget(noteHeadScheme, 3, 1, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        groupPreviewStandard = new QGroupBox(page);
        groupPreviewStandard->setObjectName(QString::fromUtf8("groupPreviewStandard"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupPreviewStandard->sizePolicy().hasHeightForWidth());
        groupPreviewStandard->setSizePolicy(sizePolicy2);
        groupPreviewStandard->setMinimumSize(QSize(0, 150));
        verticalLayout_49 = new QVBoxLayout(groupPreviewStandard);
        verticalLayout_49->setObjectName(QString::fromUtf8("verticalLayout_49"));
        verticalLayout_49->setContentsMargins(0, 0, 0, 0);
        standardPreview = new mu::notation::ExampleView(groupPreviewStandard);
        standardPreview->setObjectName(QString::fromUtf8("standardPreview"));
        sizePolicy2.setHeightForWidth(standardPreview->sizePolicy().hasHeightForWidth());
        standardPreview->setSizePolicy(sizePolicy2);
        standardPreview->setProperty("lineWidth", QVariant(2));

        verticalLayout_49->addWidget(standardPreview);


        verticalLayout_7->addWidget(groupPreviewStandard);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        stack->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_5 = new QVBoxLayout(page_3);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        genKeysigPercussion = new QCheckBox(page_3);
        genKeysigPercussion->setObjectName(QString::fromUtf8("genKeysigPercussion"));

        gridLayout_3->addWidget(genKeysigPercussion, 0, 0, 1, 1);

        stemlessPercussion = new QCheckBox(page_3);
        stemlessPercussion->setObjectName(QString::fromUtf8("stemlessPercussion"));

        gridLayout_3->addWidget(stemlessPercussion, 0, 2, 1, 1);

        showLedgerLinesPercussion = new QCheckBox(page_3);
        showLedgerLinesPercussion->setObjectName(QString::fromUtf8("showLedgerLinesPercussion"));

        gridLayout_3->addWidget(showLedgerLinesPercussion, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        stack->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_2 = new QWidget(page_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        upsideDown = new QCheckBox(widget_2);
        upsideDown->setObjectName(QString::fromUtf8("upsideDown"));

        horizontalLayout_16->addWidget(upsideDown);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_16);

        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        fretFontLabel = new QLabel(tab);
        fretFontLabel->setObjectName(QString::fromUtf8("fretFontLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, fretFontLabel);

        fretFontName = new QComboBox(tab);
        fretFontName->setObjectName(QString::fromUtf8("fretFontName"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, fretFontName);


        horizontalLayout_6->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        fretFontSizeLabel = new QLabel(tab);
        fretFontSizeLabel->setObjectName(QString::fromUtf8("fretFontSizeLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, fretFontSizeLabel);

        fretFontSize = new QDoubleSpinBox(tab);
        fretFontSize->setObjectName(QString::fromUtf8("fretFontSize"));
        fretFontSize->setDecimals(1);
        fretFontSize->setMinimum(5.000000000000000);
        fretFontSize->setValue(10.000000000000000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, fretFontSize);


        horizontalLayout_6->addLayout(formLayout_4);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        fretYLabel = new QLabel(tab);
        fretYLabel->setObjectName(QString::fromUtf8("fretYLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, fretYLabel);

        fretY = new QDoubleSpinBox(tab);
        fretY->setObjectName(QString::fromUtf8("fretY"));
        fretY->setMinimum(-99.989999999999995);
        fretY->setSingleStep(0.250000000000000);
        fretY->setValue(0.000000000000000);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, fretY);


        horizontalLayout_6->addLayout(formLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        onStringsLabel = new QLabel(tab);
        onStringsLabel->setObjectName(QString::fromUtf8("onStringsLabel"));
        onStringsLabel->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(onStringsLabel, 1, 0, 1, 1);

        onLinesRadio = new QRadioButton(tab);
        OnAboveLinesButtGroup = new QButtonGroup(EditStaffType);
        OnAboveLinesButtGroup->setObjectName(QString::fromUtf8("OnAboveLinesButtGroup"));
        OnAboveLinesButtGroup->addButton(onLinesRadio);
        onLinesRadio->setObjectName(QString::fromUtf8("onLinesRadio"));
        onLinesRadio->setMinimumSize(QSize(110, 0));
        onLinesRadio->setChecked(false);
        onLinesRadio->setAutoExclusive(true);

        gridLayout->addWidget(onLinesRadio, 1, 1, 1, 1);

        linesThroughRadio = new QRadioButton(tab);
        ContinuousBrokenLinesbuttGroup = new QButtonGroup(EditStaffType);
        ContinuousBrokenLinesbuttGroup->setObjectName(QString::fromUtf8("ContinuousBrokenLinesbuttGroup"));
        ContinuousBrokenLinesbuttGroup->addButton(linesThroughRadio);
        linesThroughRadio->setObjectName(QString::fromUtf8("linesThroughRadio"));
        linesThroughRadio->setMinimumSize(QSize(110, 0));
        linesThroughRadio->setChecked(false);
        linesThroughRadio->setAutoExclusive(true);

        gridLayout->addWidget(linesThroughRadio, 2, 1, 1, 1);

        linesThroughLabel = new QLabel(tab);
        linesThroughLabel->setObjectName(QString::fromUtf8("linesThroughLabel"));
        linesThroughLabel->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(linesThroughLabel, 2, 0, 1, 1);

        numbersRadio = new QRadioButton(tab);
        NumLettersButtGroup = new QButtonGroup(EditStaffType);
        NumLettersButtGroup->setObjectName(QString::fromUtf8("NumLettersButtGroup"));
        NumLettersButtGroup->addButton(numbersRadio);
        numbersRadio->setObjectName(QString::fromUtf8("numbersRadio"));
        numbersRadio->setMinimumSize(QSize(110, 0));
        numbersRadio->setChecked(true);
        numbersRadio->setAutoExclusive(true);

        gridLayout->addWidget(numbersRadio, 0, 1, 1, 1);

        numbersLabel = new QLabel(tab);
        numbersLabel->setObjectName(QString::fromUtf8("numbersLabel"));
        numbersLabel->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(numbersLabel, 0, 0, 1, 1);

        lettersRadio = new QRadioButton(tab);
        NumLettersButtGroup->addButton(lettersRadio);
        lettersRadio->setObjectName(QString::fromUtf8("lettersRadio"));
        lettersRadio->setAutoExclusive(true);

        gridLayout->addWidget(lettersRadio, 0, 2, 1, 1);

        aboveLinesRadio = new QRadioButton(tab);
        OnAboveLinesButtGroup->addButton(aboveLinesRadio);
        aboveLinesRadio->setObjectName(QString::fromUtf8("aboveLinesRadio"));
        aboveLinesRadio->setAutoExclusive(true);

        gridLayout->addWidget(aboveLinesRadio, 1, 2, 1, 1);

        linesBrokenRadio = new QRadioButton(tab);
        ContinuousBrokenLinesbuttGroup->addButton(linesBrokenRadio);
        linesBrokenRadio->setObjectName(QString::fromUtf8("linesBrokenRadio"));
        linesBrokenRadio->setChecked(true);
        linesBrokenRadio->setAutoExclusive(true);

        gridLayout->addWidget(linesBrokenRadio, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        showTabFingering = new QCheckBox(tab);
        showTabFingering->setObjectName(QString::fromUtf8("showTabFingering"));

        horizontalLayout_3->addWidget(showTabFingering);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_11 = new QVBoxLayout(tab_2);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        durFontLabel = new QLabel(tab_2);
        durFontLabel->setObjectName(QString::fromUtf8("durFontLabel"));
        durFontLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_10->addWidget(durFontLabel);

        durFontName = new QComboBox(tab_2);
        durFontName->setObjectName(QString::fromUtf8("durFontName"));

        horizontalLayout_10->addWidget(durFontName);

        durFontSizeLabel = new QLabel(tab_2);
        durFontSizeLabel->setObjectName(QString::fromUtf8("durFontSizeLabel"));
        durFontSizeLabel->setTextFormat(Qt::PlainText);
        durFontSizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(durFontSizeLabel);

        durFontSize = new QDoubleSpinBox(tab_2);
        durFontSize->setObjectName(QString::fromUtf8("durFontSize"));
        durFontSize->setDecimals(1);
        durFontSize->setMinimum(5.000000000000000);
        durFontSize->setValue(15.000000000000000);

        horizontalLayout_10->addWidget(durFontSize);

        durYLabel = new QLabel(tab_2);
        durYLabel->setObjectName(QString::fromUtf8("durYLabel"));
        durYLabel->setTextFormat(Qt::PlainText);
        durYLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(durYLabel);

        durY = new QDoubleSpinBox(tab_2);
        durY->setObjectName(QString::fromUtf8("durY"));
        durY->setMinimum(-99.989999999999995);
        durY->setSingleStep(0.250000000000000);

        horizontalLayout_10->addWidget(durY);


        verticalLayout_11->addLayout(horizontalLayout_10);

        frame_4 = new QFrame(tab_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(frame_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        durSymLabel = new QLabel(frame_4);
        durSymLabel->setObjectName(QString::fromUtf8("durSymLabel"));
        durSymLabel->setMinimumSize(QSize(115, 0));
        durSymLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_5->addWidget(durSymLabel);

        noteValuesNone = new QRadioButton(frame_4);
        noteValuesNone->setObjectName(QString::fromUtf8("noteValuesNone"));
        noteValuesNone->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(noteValuesNone);

        noteValuesSymb = new QRadioButton(frame_4);
        noteValuesSymb->setObjectName(QString::fromUtf8("noteValuesSymb"));
        noteValuesSymb->setMinimumSize(QSize(120, 0));

        horizontalLayout_5->addWidget(noteValuesSymb);

        noteValuesStems = new QRadioButton(frame_4);
        noteValuesStems->setObjectName(QString::fromUtf8("noteValuesStems"));

        horizontalLayout_5->addWidget(noteValuesStems);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);


        verticalLayout_11->addWidget(frame_4);

        frame_5 = new QFrame(tab_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Plain);
        horizontalLayout_5_2 = new QHBoxLayout(frame_5);
        horizontalLayout_5_2->setObjectName(QString::fromUtf8("horizontalLayout_5_2"));
        horizontalLayout_5_2->setContentsMargins(0, 0, 0, 0);
        valuesRepeatLabel = new QLabel(frame_5);
        valuesRepeatLabel->setObjectName(QString::fromUtf8("valuesRepeatLabel"));
        valuesRepeatLabel->setMinimumSize(QSize(115, 0));

        horizontalLayout_5_2->addWidget(valuesRepeatLabel);

        valuesRepeatNever = new QRadioButton(frame_5);
        valuesRepeatNever->setObjectName(QString::fromUtf8("valuesRepeatNever"));
        valuesRepeatNever->setMinimumSize(QSize(100, 0));

        horizontalLayout_5_2->addWidget(valuesRepeatNever);

        valuesRepeatSystem = new QRadioButton(frame_5);
        valuesRepeatSystem->setObjectName(QString::fromUtf8("valuesRepeatSystem"));
        valuesRepeatSystem->setMinimumSize(QSize(120, 0));

        horizontalLayout_5_2->addWidget(valuesRepeatSystem);

        valuesRepeatMeasure = new QRadioButton(frame_5);
        valuesRepeatMeasure->setObjectName(QString::fromUtf8("valuesRepeatMeasure"));
        valuesRepeatMeasure->setMinimumSize(QSize(110, 0));

        horizontalLayout_5_2->addWidget(valuesRepeatMeasure);

        valuesRepeatAlways = new QRadioButton(frame_5);
        valuesRepeatAlways->setObjectName(QString::fromUtf8("valuesRepeatAlways"));

        horizontalLayout_5_2->addWidget(valuesRepeatAlways);

        horizontalSpacer_13_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5_2->addItem(horizontalSpacer_13_2);


        verticalLayout_11->addWidget(frame_5);

        frame_6 = new QFrame(tab_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Plain);
        horizontalLayout_17 = new QHBoxLayout(frame_6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        stemStyleLabel = new QLabel(frame_6);
        stemStyleLabel->setObjectName(QString::fromUtf8("stemStyleLabel"));
        stemStyleLabel->setMinimumSize(QSize(115, 0));

        horizontalLayout_17->addWidget(stemStyleLabel);

        stemBesideRadio = new QRadioButton(frame_6);
        stemBesideRadio->setObjectName(QString::fromUtf8("stemBesideRadio"));
        stemBesideRadio->setMinimumSize(QSize(100, 0));

        horizontalLayout_17->addWidget(stemBesideRadio);

        stemThroughRadio = new QRadioButton(frame_6);
        stemThroughRadio->setObjectName(QString::fromUtf8("stemThroughRadio"));

        horizontalLayout_17->addWidget(stemThroughRadio);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_11);


        verticalLayout_11->addWidget(frame_6);

        frame_7 = new QFrame(tab_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Plain);
        horizontalLayout_15 = new QHBoxLayout(frame_7);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        stemPosLabel = new QLabel(frame_7);
        stemPosLabel->setObjectName(QString::fromUtf8("stemPosLabel"));
        stemPosLabel->setMinimumSize(QSize(115, 0));

        horizontalLayout_15->addWidget(stemPosLabel);

        stemAboveRadio = new QRadioButton(frame_7);
        stemAboveRadio->setObjectName(QString::fromUtf8("stemAboveRadio"));
        stemAboveRadio->setMinimumSize(QSize(100, 0));

        horizontalLayout_15->addWidget(stemAboveRadio);

        stemBelowRadio = new QRadioButton(frame_7);
        stemBelowRadio->setObjectName(QString::fromUtf8("stemBelowRadio"));

        horizontalLayout_15->addWidget(stemBelowRadio);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_10);


        verticalLayout_11->addWidget(frame_7);

        frame_8 = new QFrame(tab_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Plain);
        horizontalLayout_18 = new QHBoxLayout(frame_8);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        minimLabels = new QLabel(frame_8);
        minimLabels->setObjectName(QString::fromUtf8("minimLabels"));
        minimLabels->setMinimumSize(QSize(115, 0));

        horizontalLayout_18->addWidget(minimLabels);

        minimNoneRadio = new QRadioButton(frame_8);
        minimNoneRadio->setObjectName(QString::fromUtf8("minimNoneRadio"));
        minimNoneRadio->setEnabled(true);
        minimNoneRadio->setMinimumSize(QSize(100, 0));

        horizontalLayout_18->addWidget(minimNoneRadio);

        minimShortRadio = new QRadioButton(frame_8);
        minimShortRadio->setObjectName(QString::fromUtf8("minimShortRadio"));
        minimShortRadio->setEnabled(true);
        minimShortRadio->setMinimumSize(QSize(120, 0));

        horizontalLayout_18->addWidget(minimShortRadio);

        minimSlashedRadio = new QRadioButton(frame_8);
        minimSlashedRadio->setObjectName(QString::fromUtf8("minimSlashedRadio"));
        minimSlashedRadio->setEnabled(true);

        horizontalLayout_18->addWidget(minimSlashedRadio);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_14);


        verticalLayout_11->addWidget(frame_8);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        showRests = new QCheckBox(tab_2);
        showRests->setObjectName(QString::fromUtf8("showRests"));
        showRests->setEnabled(true);

        horizontalLayout_20->addWidget(showRests);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_12);


        verticalLayout_11->addLayout(horizontalLayout_20);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout_6->addWidget(widget_2);

        groupPreview = new QGroupBox(page_2);
        groupPreview->setObjectName(QString::fromUtf8("groupPreview"));
        sizePolicy2.setHeightForWidth(groupPreview->sizePolicy().hasHeightForWidth());
        groupPreview->setSizePolicy(sizePolicy2);
        groupPreview->setMinimumSize(QSize(0, 170));
        verticalLayout_9 = new QVBoxLayout(groupPreview);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        tabPreview = new mu::notation::ExampleView(groupPreview);
        tabPreview->setObjectName(QString::fromUtf8("tabPreview"));
        sizePolicy2.setHeightForWidth(tabPreview->sizePolicy().hasHeightForWidth());
        tabPreview->setSizePolicy(sizePolicy2);
        tabPreview->setProperty("lineWidth", QVariant(2));

        verticalLayout_9->addWidget(tabPreview);


        verticalLayout_6->addWidget(groupPreview);

        stack->addWidget(page_2);

        verticalLayout->addWidget(stack);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(EditStaffType);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(label_5);

        templateCombo = new QComboBox(EditStaffType);
        templateCombo->setObjectName(QString::fromUtf8("templateCombo"));

        horizontalLayout->addWidget(templateCombo);

        templateReset = new QPushButton(EditStaffType);
        templateReset->setObjectName(QString::fromUtf8("templateReset"));

        horizontalLayout->addWidget(templateReset);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_16);

        addToTemplates = new QPushButton(EditStaffType);
        addToTemplates->setObjectName(QString::fromUtf8("addToTemplates"));
        addToTemplates->setEnabled(false);

        horizontalLayout->addWidget(addToTemplates);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(EditStaffType);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

#if QT_CONFIG(shortcut)
        groupName->setBuddy(name);
        label_3->setBuddy(lines);
        label_4->setBuddy(lineDistance);
        label->setBuddy(noteHeadScheme);
        fretFontLabel->setBuddy(fretFontName);
        fretFontSizeLabel->setBuddy(fretFontSize);
        fretYLabel->setBuddy(fretY);
        onStringsLabel->setBuddy(onLinesRadio);
        linesThroughLabel->setBuddy(linesThroughRadio);
        numbersLabel->setBuddy(numbersRadio);
        durFontLabel->setBuddy(durFontName);
        durFontSizeLabel->setBuddy(durFontSize);
        durYLabel->setBuddy(durY);
        durSymLabel->setBuddy(noteValuesNone);
        valuesRepeatLabel->setBuddy(valuesRepeatNever);
        stemStyleLabel->setBuddy(stemBesideRadio);
        stemPosLabel->setBuddy(stemAboveRadio);
        minimLabels->setBuddy(minimNoneRadio);
        label_5->setBuddy(templateCombo);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(name, lines);
        QWidget::setTabOrder(lines, lineDistance);
        QWidget::setTabOrder(lineDistance, genClef);
        QWidget::setTabOrder(genClef, genTimesig);
        QWidget::setTabOrder(genTimesig, showBarlines);
        QWidget::setTabOrder(showBarlines, genKeysigPitched);
        QWidget::setTabOrder(genKeysigPitched, showLedgerLinesPitched);
        QWidget::setTabOrder(showLedgerLinesPitched, stemlessPitched);
        QWidget::setTabOrder(stemlessPitched, noteHeadScheme);
        QWidget::setTabOrder(noteHeadScheme, genKeysigPercussion);
        QWidget::setTabOrder(genKeysigPercussion, showLedgerLinesPercussion);
        QWidget::setTabOrder(showLedgerLinesPercussion, stemlessPercussion);
        QWidget::setTabOrder(stemlessPercussion, upsideDown);
        QWidget::setTabOrder(upsideDown, tabWidget);
        QWidget::setTabOrder(tabWidget, fretFontName);
        QWidget::setTabOrder(fretFontName, fretFontSize);
        QWidget::setTabOrder(fretFontSize, fretY);
        QWidget::setTabOrder(fretY, numbersRadio);
        QWidget::setTabOrder(numbersRadio, lettersRadio);
        QWidget::setTabOrder(lettersRadio, onLinesRadio);
        QWidget::setTabOrder(onLinesRadio, aboveLinesRadio);
        QWidget::setTabOrder(aboveLinesRadio, linesThroughRadio);
        QWidget::setTabOrder(linesThroughRadio, linesBrokenRadio);
        QWidget::setTabOrder(linesBrokenRadio, showTabFingering);
        QWidget::setTabOrder(showTabFingering, durFontName);
        QWidget::setTabOrder(durFontName, durFontSize);
        QWidget::setTabOrder(durFontSize, durY);
        QWidget::setTabOrder(durY, noteValuesNone);
        QWidget::setTabOrder(noteValuesNone, noteValuesSymb);
        QWidget::setTabOrder(noteValuesSymb, noteValuesStems);
        QWidget::setTabOrder(noteValuesStems, valuesRepeatNever);
        QWidget::setTabOrder(valuesRepeatNever, valuesRepeatSystem);
        QWidget::setTabOrder(valuesRepeatSystem, valuesRepeatMeasure);
        QWidget::setTabOrder(valuesRepeatMeasure, valuesRepeatAlways);
        QWidget::setTabOrder(valuesRepeatAlways, stemBesideRadio);
        QWidget::setTabOrder(stemBesideRadio, stemThroughRadio);
        QWidget::setTabOrder(stemThroughRadio, stemAboveRadio);
        QWidget::setTabOrder(stemAboveRadio, stemBelowRadio);
        QWidget::setTabOrder(stemBelowRadio, minimNoneRadio);
        QWidget::setTabOrder(minimNoneRadio, minimShortRadio);
        QWidget::setTabOrder(minimShortRadio, minimSlashedRadio);
        QWidget::setTabOrder(minimSlashedRadio, showRests);
        QWidget::setTabOrder(showRests, templateCombo);
        QWidget::setTabOrder(templateCombo, templateReset);
        QWidget::setTabOrder(templateReset, addToTemplates);

        retranslateUi(EditStaffType);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditStaffType, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditStaffType, SLOT(reject()));

        stack->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditStaffType);
    } // setupUi

    void retranslateUi(QDialog *EditStaffType)
    {
        EditStaffType->setWindowTitle(QCoreApplication::translate("EditStaffType", "Edit staff type", nullptr));
        groupName->setText(QCoreApplication::translate("EditStaffType", "STANDARD STAFF", nullptr));
        label_3->setText(QCoreApplication::translate("EditStaffType", "Lines:", nullptr));
        label_4->setText(QCoreApplication::translate("EditStaffType", "Line distance:", nullptr));
        lineDistance->setSuffix(QCoreApplication::translate("EditStaffType", "sp", nullptr));
        genClef->setText(QCoreApplication::translate("EditStaffType", "Show clef", nullptr));
        genTimesig->setText(QCoreApplication::translate("EditStaffType", "Show time signature", nullptr));
        showBarlines->setText(QCoreApplication::translate("EditStaffType", "Show barlines", nullptr));
        genKeysigPitched->setText(QCoreApplication::translate("EditStaffType", "Show key signature", nullptr));
        showLedgerLinesPitched->setText(QCoreApplication::translate("EditStaffType", "Show ledger lines", nullptr));
        stemlessPitched->setText(QCoreApplication::translate("EditStaffType", "Stemless", nullptr));
        label->setText(QCoreApplication::translate("EditStaffType", "Notehead scheme:", nullptr));
        groupPreviewStandard->setTitle(QCoreApplication::translate("EditStaffType", "Preview", nullptr));
        genKeysigPercussion->setText(QCoreApplication::translate("EditStaffType", "Show key signature", nullptr));
        stemlessPercussion->setText(QCoreApplication::translate("EditStaffType", "Stemless", nullptr));
        showLedgerLinesPercussion->setText(QCoreApplication::translate("EditStaffType", "Show ledger lines", nullptr));
        upsideDown->setText(QCoreApplication::translate("EditStaffType", "Upside down", nullptr));
        fretFontLabel->setText(QCoreApplication::translate("EditStaffType", "Font:", nullptr));
        fretFontSizeLabel->setText(QCoreApplication::translate("EditStaffType", "Size:", nullptr));
        fretFontSize->setSuffix(QCoreApplication::translate("EditStaffType", "pt", nullptr));
        fretYLabel->setText(QCoreApplication::translate("EditStaffType", "Vertical offset:", nullptr));
        fretY->setSuffix(QCoreApplication::translate("EditStaffType", "sp", nullptr));
        onStringsLabel->setText(QCoreApplication::translate("EditStaffType", "Marks are drawn:", nullptr));
        onLinesRadio->setText(QCoreApplication::translate("EditStaffType", "On lines", nullptr));
        linesThroughRadio->setText(QCoreApplication::translate("EditStaffType", "Continuous", nullptr));
        linesThroughLabel->setText(QCoreApplication::translate("EditStaffType", "Lines are:", nullptr));
        numbersRadio->setText(QCoreApplication::translate("EditStaffType", "Numbers", nullptr));
        numbersLabel->setText(QCoreApplication::translate("EditStaffType", "Marks are:", nullptr));
        lettersRadio->setText(QCoreApplication::translate("EditStaffType", "Letters", nullptr));
        aboveLinesRadio->setText(QCoreApplication::translate("EditStaffType", "Above lines", nullptr));
        linesBrokenRadio->setText(QCoreApplication::translate("EditStaffType", "Broken", nullptr));
        showTabFingering->setText(QCoreApplication::translate("EditStaffType", "Show fingering in tablature", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("EditStaffType", "Fret marks", nullptr));
        durFontLabel->setText(QCoreApplication::translate("EditStaffType", "Font:", nullptr));
        durFontSizeLabel->setText(QCoreApplication::translate("EditStaffType", "Size:", nullptr));
        durFontSize->setSuffix(QCoreApplication::translate("EditStaffType", "pt", nullptr));
        durYLabel->setText(QCoreApplication::translate("EditStaffType", "Vertical offset:", nullptr));
        durY->setSuffix(QCoreApplication::translate("EditStaffType", "sp", nullptr));
        durSymLabel->setText(QCoreApplication::translate("EditStaffType", "Shown as:", nullptr));
        noteValuesNone->setText(QCoreApplication::translate("EditStaffType", "None", "neither note symbols nor stems and beams"));
        noteValuesSymb->setText(QCoreApplication::translate("EditStaffType", "Note symbols", nullptr));
        noteValuesStems->setText(QCoreApplication::translate("EditStaffType", "Stems and beams", nullptr));
        valuesRepeatLabel->setText(QCoreApplication::translate("EditStaffType", "Repeat:", nullptr));
        valuesRepeatNever->setText(QCoreApplication::translate("EditStaffType", "Never", nullptr));
        valuesRepeatSystem->setText(QCoreApplication::translate("EditStaffType", "At new system", nullptr));
        valuesRepeatMeasure->setText(QCoreApplication::translate("EditStaffType", "At new meas.", nullptr));
        valuesRepeatAlways->setText(QCoreApplication::translate("EditStaffType", "Always", nullptr));
        stemStyleLabel->setText(QCoreApplication::translate("EditStaffType", "Stem style:", nullptr));
        stemBesideRadio->setText(QCoreApplication::translate("EditStaffType", "Beside staff", nullptr));
        stemThroughRadio->setText(QCoreApplication::translate("EditStaffType", "Through staff", nullptr));
        stemPosLabel->setText(QCoreApplication::translate("EditStaffType", "Stem position:", nullptr));
        stemAboveRadio->setText(QCoreApplication::translate("EditStaffType", "Above", nullptr));
        stemBelowRadio->setText(QCoreApplication::translate("EditStaffType", "Below", nullptr));
        minimLabels->setText(QCoreApplication::translate("EditStaffType", "Half notes:", nullptr));
        minimNoneRadio->setText(QCoreApplication::translate("EditStaffType", "None", "neither short nor slashed stem"));
        minimShortRadio->setText(QCoreApplication::translate("EditStaffType", "As short stem", nullptr));
        minimSlashedRadio->setText(QCoreApplication::translate("EditStaffType", "As slashed stem", nullptr));
        showRests->setText(QCoreApplication::translate("EditStaffType", "Show rests", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("EditStaffType", "Note values", nullptr));
        groupPreview->setTitle(QCoreApplication::translate("EditStaffType", "Preview", nullptr));
        label_5->setText(QCoreApplication::translate("EditStaffType", "Template:", nullptr));
        templateReset->setText(QCoreApplication::translate("EditStaffType", "< Reset to template", nullptr));
#if QT_CONFIG(tooltip)
        addToTemplates->setToolTip(QCoreApplication::translate("EditStaffType", "Create a new staff type of current group.", nullptr));
#endif // QT_CONFIG(tooltip)
        addToTemplates->setText(QCoreApplication::translate("EditStaffType", "Add to templates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStaffType: public Ui_EditStaffType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTAFFTYPE_H
