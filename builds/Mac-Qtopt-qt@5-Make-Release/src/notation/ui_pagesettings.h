/********************************************************************************
** Form generated from reading UI file 'pagesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGESETTINGS_H
#define UI_PAGESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PageSettingsBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *resetPageStyleButton;
    QSpacerItem *spacerItem;
    QPushButton *buttonApplyToAllParts;
    QDialogButtonBox *buttonBox;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QRadioButton *portraitButton;
    QComboBox *pageGroup;
    QCheckBox *twosided;
    QRadioButton *landscapeButton;
    QDoubleSpinBox *pageWidth;
    QDoubleSpinBox *pageHeight;
    QLabel *label_3;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QDoubleSpinBox *spatiumEntry;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_1;
    QRadioButton *inchButton;
    QRadioButton *mmButton;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *oddPageLeftMargin;
    QDoubleSpinBox *oddPageRightMargin;
    QDoubleSpinBox *oddPageBottomMargin;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *oddPageTopMargin;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *evenPageRightMargin;
    QDoubleSpinBox *evenPageBottomMargin;
    QDoubleSpinBox *evenPageLeftMargin;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *evenPageTopMargin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QSpinBox *pageOffsetEntry;

    void setupUi(QDialog *PageSettingsBase)
    {
        if (PageSettingsBase->objectName().isEmpty())
            PageSettingsBase->setObjectName(QString::fromUtf8("PageSettingsBase"));
        PageSettingsBase->resize(611, 387);
        PageSettingsBase->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(PageSettingsBase);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(8, 8, 8, 8);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        resetPageStyleButton = new QPushButton(PageSettingsBase);
        resetPageStyleButton->setObjectName(QString::fromUtf8("resetPageStyleButton"));

        hboxLayout->addWidget(resetPageStyleButton);

        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonApplyToAllParts = new QPushButton(PageSettingsBase);
        buttonApplyToAllParts->setObjectName(QString::fromUtf8("buttonApplyToAllParts"));

        hboxLayout->addWidget(buttonApplyToAllParts);

        buttonBox = new QDialogButtonBox(PageSettingsBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(PageSettingsBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        portraitButton = new QRadioButton(groupBox);
        portraitButton->setObjectName(QString::fromUtf8("portraitButton"));

        gridLayout1->addWidget(portraitButton, 3, 0, 1, 1);

        pageGroup = new QComboBox(groupBox);
        pageGroup->setObjectName(QString::fromUtf8("pageGroup"));

        gridLayout1->addWidget(pageGroup, 0, 0, 1, 2);

        twosided = new QCheckBox(groupBox);
        twosided->setObjectName(QString::fromUtf8("twosided"));

        gridLayout1->addWidget(twosided, 4, 0, 1, 1);

        landscapeButton = new QRadioButton(groupBox);
        landscapeButton->setObjectName(QString::fromUtf8("landscapeButton"));

        gridLayout1->addWidget(landscapeButton, 3, 1, 1, 1);

        pageWidth = new QDoubleSpinBox(groupBox);
        pageWidth->setObjectName(QString::fromUtf8("pageWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pageWidth->sizePolicy().hasHeightForWidth());
        pageWidth->setSizePolicy(sizePolicy);
        pageWidth->setKeyboardTracking(false);
        pageWidth->setMaximum(2000.000000000000000);

        gridLayout1->addWidget(pageWidth, 1, 1, 1, 1);

        pageHeight = new QDoubleSpinBox(groupBox);
        pageHeight->setObjectName(QString::fromUtf8("pageHeight"));
        sizePolicy.setHeightForWidth(pageHeight->sizePolicy().hasHeightForWidth());
        pageHeight->setSizePolicy(sizePolicy);
        pageHeight->setKeyboardTracking(false);
        pageHeight->setMaximum(2000.000000000000000);

        gridLayout1->addWidget(pageHeight, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(PageSettingsBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout1 = new QHBoxLayout(groupBox_2);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        spatiumEntry = new QDoubleSpinBox(groupBox_2);
        spatiumEntry->setObjectName(QString::fromUtf8("spatiumEntry"));
        sizePolicy.setHeightForWidth(spatiumEntry->sizePolicy().hasHeightForWidth());
        spatiumEntry->setSizePolicy(sizePolicy);
        spatiumEntry->setKeyboardTracking(false);
        spatiumEntry->setDecimals(3);
        spatiumEntry->setMinimum(0.001000000000000);
        spatiumEntry->setMaximum(999.990000000000009);
        spatiumEntry->setSingleStep(0.200000000000000);
        spatiumEntry->setValue(2.001000000000000);

        hboxLayout1->addWidget(spatiumEntry);


        vboxLayout->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(PageSettingsBase);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_1 = new QGridLayout(groupBox_6);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        inchButton = new QRadioButton(groupBox_6);
        inchButton->setObjectName(QString::fromUtf8("inchButton"));

        gridLayout_1->addWidget(inchButton, 0, 0, 1, 1);

        mmButton = new QRadioButton(groupBox_6);
        mmButton->setObjectName(QString::fromUtf8("mmButton"));

        gridLayout_1->addWidget(mmButton, 0, 1, 1, 1);


        vboxLayout->addWidget(groupBox_6);


        gridLayout->addLayout(vboxLayout, 0, 0, 2, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(PageSettingsBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        oddPageLeftMargin = new QDoubleSpinBox(groupBox_3);
        oddPageLeftMargin->setObjectName(QString::fromUtf8("oddPageLeftMargin"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(oddPageLeftMargin->sizePolicy().hasHeightForWidth());
        oddPageLeftMargin->setSizePolicy(sizePolicy1);
        oddPageLeftMargin->setKeyboardTracking(false);
        oddPageLeftMargin->setMaximum(2000.000000000000000);

        gridLayout_3->addWidget(oddPageLeftMargin, 1, 0, 1, 2);

        oddPageRightMargin = new QDoubleSpinBox(groupBox_3);
        oddPageRightMargin->setObjectName(QString::fromUtf8("oddPageRightMargin"));
        sizePolicy1.setHeightForWidth(oddPageRightMargin->sizePolicy().hasHeightForWidth());
        oddPageRightMargin->setSizePolicy(sizePolicy1);
        oddPageRightMargin->setKeyboardTracking(false);
        oddPageRightMargin->setMaximum(2000.000000000000000);

        gridLayout_3->addWidget(oddPageRightMargin, 1, 3, 1, 2);

        oddPageBottomMargin = new QDoubleSpinBox(groupBox_3);
        oddPageBottomMargin->setObjectName(QString::fromUtf8("oddPageBottomMargin"));
        sizePolicy1.setHeightForWidth(oddPageBottomMargin->sizePolicy().hasHeightForWidth());
        oddPageBottomMargin->setSizePolicy(sizePolicy1);
        oddPageBottomMargin->setKeyboardTracking(false);
        oddPageBottomMargin->setMaximum(2000.000000000000000);

        gridLayout_3->addWidget(oddPageBottomMargin, 2, 1, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        oddPageTopMargin = new QDoubleSpinBox(groupBox_3);
        oddPageTopMargin->setObjectName(QString::fromUtf8("oddPageTopMargin"));
        sizePolicy1.setHeightForWidth(oddPageTopMargin->sizePolicy().hasHeightForWidth());
        oddPageTopMargin->setSizePolicy(sizePolicy1);
        oddPageTopMargin->setKeyboardTracking(false);
        oddPageTopMargin->setMaximum(2000.000000000000000);

        gridLayout_3->addWidget(oddPageTopMargin, 0, 1, 1, 3);


        vboxLayout1->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(PageSettingsBase);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        evenPageRightMargin = new QDoubleSpinBox(groupBox_4);
        evenPageRightMargin->setObjectName(QString::fromUtf8("evenPageRightMargin"));
        sizePolicy1.setHeightForWidth(evenPageRightMargin->sizePolicy().hasHeightForWidth());
        evenPageRightMargin->setSizePolicy(sizePolicy1);
        evenPageRightMargin->setKeyboardTracking(false);
        evenPageRightMargin->setMaximum(2000.000000000000000);

        gridLayout_2->addWidget(evenPageRightMargin, 1, 3, 1, 2);

        evenPageBottomMargin = new QDoubleSpinBox(groupBox_4);
        evenPageBottomMargin->setObjectName(QString::fromUtf8("evenPageBottomMargin"));
        sizePolicy1.setHeightForWidth(evenPageBottomMargin->sizePolicy().hasHeightForWidth());
        evenPageBottomMargin->setSizePolicy(sizePolicy1);
        evenPageBottomMargin->setKeyboardTracking(false);
        evenPageBottomMargin->setMaximum(2000.000000000000000);

        gridLayout_2->addWidget(evenPageBottomMargin, 2, 1, 1, 3);

        evenPageLeftMargin = new QDoubleSpinBox(groupBox_4);
        evenPageLeftMargin->setObjectName(QString::fromUtf8("evenPageLeftMargin"));
        sizePolicy1.setHeightForWidth(evenPageLeftMargin->sizePolicy().hasHeightForWidth());
        evenPageLeftMargin->setSizePolicy(sizePolicy1);
        evenPageLeftMargin->setKeyboardTracking(false);
        evenPageLeftMargin->setMaximum(2000.000000000000000);

        gridLayout_2->addWidget(evenPageLeftMargin, 1, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        evenPageTopMargin = new QDoubleSpinBox(groupBox_4);
        evenPageTopMargin->setObjectName(QString::fromUtf8("evenPageTopMargin"));
        sizePolicy1.setHeightForWidth(evenPageTopMargin->sizePolicy().hasHeightForWidth());
        evenPageTopMargin->setSizePolicy(sizePolicy1);
        evenPageTopMargin->setKeyboardTracking(false);
        evenPageTopMargin->setMaximum(2000.000000000000000);

        gridLayout_2->addWidget(evenPageTopMargin, 0, 1, 1, 3);


        vboxLayout1->addWidget(groupBox_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_12 = new QLabel(PageSettingsBase);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_2->addWidget(label_12);

        pageOffsetEntry = new QSpinBox(PageSettingsBase);
        pageOffsetEntry->setObjectName(QString::fromUtf8("pageOffsetEntry"));
        pageOffsetEntry->setKeyboardTracking(false);
        pageOffsetEntry->setMinimum(-99);
        pageOffsetEntry->setMaximum(999);

        horizontalLayout_2->addWidget(pageOffsetEntry);


        vboxLayout1->addLayout(horizontalLayout_2);


        gridLayout->addLayout(vboxLayout1, 0, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(pageHeight);
        label_2->setBuddy(pageWidth);
        label->setBuddy(spatiumEntry);
        label_12->setBuddy(pageOffsetEntry);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(pageGroup, pageWidth);
        QWidget::setTabOrder(pageWidth, pageHeight);
        QWidget::setTabOrder(pageHeight, portraitButton);
        QWidget::setTabOrder(portraitButton, landscapeButton);
        QWidget::setTabOrder(landscapeButton, twosided);
        QWidget::setTabOrder(twosided, spatiumEntry);
        QWidget::setTabOrder(spatiumEntry, inchButton);
        QWidget::setTabOrder(inchButton, mmButton);
        QWidget::setTabOrder(mmButton, oddPageTopMargin);
        QWidget::setTabOrder(oddPageTopMargin, oddPageLeftMargin);
        QWidget::setTabOrder(oddPageLeftMargin, oddPageRightMargin);
        QWidget::setTabOrder(oddPageRightMargin, oddPageBottomMargin);
        QWidget::setTabOrder(oddPageBottomMargin, evenPageTopMargin);
        QWidget::setTabOrder(evenPageTopMargin, evenPageLeftMargin);
        QWidget::setTabOrder(evenPageLeftMargin, evenPageRightMargin);
        QWidget::setTabOrder(evenPageRightMargin, evenPageBottomMargin);
        QWidget::setTabOrder(evenPageBottomMargin, pageOffsetEntry);
        QWidget::setTabOrder(pageOffsetEntry, resetPageStyleButton);
        QWidget::setTabOrder(resetPageStyleButton, buttonApplyToAllParts);

        retranslateUi(PageSettingsBase);

        QMetaObject::connectSlotsByName(PageSettingsBase);
    } // setupUi

    void retranslateUi(QDialog *PageSettingsBase)
    {
        PageSettingsBase->setWindowTitle(QCoreApplication::translate("PageSettingsBase", "Page settings", nullptr));
        resetPageStyleButton->setText(QCoreApplication::translate("PageSettingsBase", "Reset all page settings to default", nullptr));
        buttonApplyToAllParts->setText(QCoreApplication::translate("PageSettingsBase", "Apply to all parts", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PageSettingsBase", "Page size", nullptr));
        portraitButton->setText(QCoreApplication::translate("PageSettingsBase", "Portrait", nullptr));
        twosided->setText(QCoreApplication::translate("PageSettingsBase", "Two sided", nullptr));
        landscapeButton->setText(QCoreApplication::translate("PageSettingsBase", "Landscape", nullptr));
        label_3->setText(QCoreApplication::translate("PageSettingsBase", "Height:", nullptr));
        label_2->setText(QCoreApplication::translate("PageSettingsBase", "Width:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PageSettingsBase", "Scaling", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("PageSettingsBase", "Distance between two lines on a standard 5-line staff", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("PageSettingsBase", "Distance between two lines on a standard 5-line staff", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("PageSettingsBase", "Staff space (sp):", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("PageSettingsBase", "Unit", nullptr));
        inchButton->setText(QCoreApplication::translate("PageSettingsBase", "Inch (in)", nullptr));
        mmButton->setText(QCoreApplication::translate("PageSettingsBase", "Millimeter (mm)", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PageSettingsBase", "Odd page margins", nullptr));
#if QT_CONFIG(accessibility)
        oddPageLeftMargin->setAccessibleName(QCoreApplication::translate("PageSettingsBase", "Left", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        oddPageRightMargin->setAccessibleName(QCoreApplication::translate("PageSettingsBase", "Right", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        oddPageBottomMargin->setAccessibleName(QCoreApplication::translate("PageSettingsBase", "Bottom", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        oddPageTopMargin->setAccessibleName(QCoreApplication::translate("PageSettingsBase", "Top", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_4->setTitle(QCoreApplication::translate("PageSettingsBase", "Even page margins", nullptr));
#if QT_CONFIG(accessibility)
        evenPageRightMargin->setAccessibleName(QCoreApplication::translate("PageSettingsBase", "Right", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        evenPageBottomMargin->setAccessibleName(QCoreApplication::translate("PageSettingsBase", "Bottom", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        evenPageLeftMargin->setAccessibleName(QCoreApplication::translate("PageSettingsBase", "Left", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        evenPageTopMargin->setAccessibleName(QCoreApplication::translate("PageSettingsBase", "Top", nullptr));
#endif // QT_CONFIG(accessibility)
        label_12->setText(QCoreApplication::translate("PageSettingsBase", "First page number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageSettingsBase: public Ui_PageSettingsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGESETTINGS_H
