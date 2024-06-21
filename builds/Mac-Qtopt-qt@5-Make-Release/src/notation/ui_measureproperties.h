/********************************************************************************
** Form generated from reading UI file 'measureproperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREPROPERTIES_H
#define UI_MEASUREPROPERTIES_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MeasurePropertiesBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QTableWidget *staves;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *actualZ;
    QLabel *label_4;
    QSpacerItem *spacerItem;
    QComboBox *actualN;
    QLabel *nominalN;
    QLabel *nominalZ;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QCheckBox *irregular;
    QCheckBox *breakMultiMeasureRest;
    QLabel *labelCount;
    QSpinBox *count;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QDoubleSpinBox *layoutStretch;
    QLabel *label_7;
    QSpinBox *measureNumberOffset;
    QLabel *label_9;
    QComboBox *measureNumberMode;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *previousButton;
    QToolButton *nextButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MeasurePropertiesBase)
    {
        if (MeasurePropertiesBase->objectName().isEmpty())
            MeasurePropertiesBase->setObjectName(QString::fromUtf8("MeasurePropertiesBase"));
        MeasurePropertiesBase->setWindowModality(Qt::NonModal);
        MeasurePropertiesBase->resize(632, 426);
        verticalLayout_3 = new QVBoxLayout(MeasurePropertiesBase);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(MeasurePropertiesBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        staves = new QTableWidget(groupBox_3);
        if (staves->columnCount() < 3)
            staves->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        staves->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        staves->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        staves->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (staves->rowCount() < 1)
            staves->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        staves->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setCheckState(Qt::Unchecked);
        __qtablewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        staves->setItem(0, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setCheckState(Qt::Checked);
        staves->setItem(0, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setCheckState(Qt::Unchecked);
        staves->setItem(0, 2, __qtablewidgetitem6);
        staves->setObjectName(QString::fromUtf8("staves"));
        staves->setEditTriggers(QAbstractItemView::NoEditTriggers);
        staves->setAlternatingRowColors(true);
        staves->setSelectionMode(QAbstractItemView::NoSelection);
        staves->setSelectionBehavior(QAbstractItemView::SelectRows);
        staves->setShowGrid(false);
        staves->setCornerButtonEnabled(false);

        verticalLayout->addWidget(staves);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox = new QGroupBox(MeasurePropertiesBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        actualZ = new QSpinBox(groupBox);
        actualZ->setObjectName(QString::fromUtf8("actualZ"));
        actualZ->setMinimum(1);
        actualZ->setMaximum(10000);

        gridLayout->addWidget(actualZ, 1, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 6, 1, 1);

        actualN = new QComboBox(groupBox);
        actualN->addItem(QString());
        actualN->addItem(QString());
        actualN->addItem(QString());
        actualN->addItem(QString());
        actualN->addItem(QString());
        actualN->addItem(QString());
        actualN->addItem(QString());
        actualN->addItem(QString());
        actualN->setObjectName(QString::fromUtf8("actualN"));

        gridLayout->addWidget(actualN, 1, 4, 1, 2);

        nominalN = new QLabel(groupBox);
        nominalN->setObjectName(QString::fromUtf8("nominalN"));
        nominalN->setAutoFillBackground(false);
        nominalN->setFrameShape(QFrame::StyledPanel);
        nominalN->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(nominalN, 0, 4, 1, 2);

        nominalZ = new QLabel(groupBox);
        nominalZ->setObjectName(QString::fromUtf8("nominalZ"));
        nominalZ->setAutoFillBackground(false);
        nominalZ->setFrameShape(QFrame::StyledPanel);
        nominalZ->setFrameShadow(QFrame::Sunken);
        nominalZ->setText(QString::fromUtf8(""));

        gridLayout->addWidget(nominalZ, 0, 1, 1, 2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MeasurePropertiesBase);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 0));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setHorizontalSpacing(6);
        irregular = new QCheckBox(groupBox_2);
        irregular->setObjectName(QString::fromUtf8("irregular"));

        gridLayout1->addWidget(irregular, 0, 0, 1, 2);

        breakMultiMeasureRest = new QCheckBox(groupBox_2);
        breakMultiMeasureRest->setObjectName(QString::fromUtf8("breakMultiMeasureRest"));

        gridLayout1->addWidget(breakMultiMeasureRest, 0, 3, 1, 1);

        labelCount = new QLabel(groupBox_2);
        labelCount->setObjectName(QString::fromUtf8("labelCount"));
        sizePolicy.setHeightForWidth(labelCount->sizePolicy().hasHeightForWidth());
        labelCount->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(labelCount, 2, 3, 1, 1);

        count = new QSpinBox(groupBox_2);
        count->setObjectName(QString::fromUtf8("count"));
        sizePolicy.setHeightForWidth(count->sizePolicy().hasHeightForWidth());
        count->setSizePolicy(sizePolicy);
        count->setMinimum(1);
        count->setMaximum(9999);

        gridLayout1->addWidget(count, 2, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer, 1, 2, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label_8, 1, 3, 1, 1);

        layoutStretch = new QDoubleSpinBox(groupBox_2);
        layoutStretch->setObjectName(QString::fromUtf8("layoutStretch"));
        sizePolicy.setHeightForWidth(layoutStretch->sizePolicy().hasHeightForWidth());
        layoutStretch->setSizePolicy(sizePolicy);
        layoutStretch->setMinimum(0.000000000000000);
        layoutStretch->setSingleStep(0.100000000000000);
        layoutStretch->setValue(1.000000000000000);

        gridLayout1->addWidget(layoutStretch, 1, 4, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label_7, 2, 0, 1, 1);

        measureNumberOffset = new QSpinBox(groupBox_2);
        measureNumberOffset->setObjectName(QString::fromUtf8("measureNumberOffset"));
        sizePolicy.setHeightForWidth(measureNumberOffset->sizePolicy().hasHeightForWidth());
        measureNumberOffset->setSizePolicy(sizePolicy);
        measureNumberOffset->setMinimum(-9999);
        measureNumberOffset->setMaximum(9999);

        gridLayout1->addWidget(measureNumberOffset, 2, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout1->addWidget(label_9, 1, 0, 1, 1);

        measureNumberMode = new QComboBox(groupBox_2);
        measureNumberMode->addItem(QString());
        measureNumberMode->addItem(QString());
        measureNumberMode->addItem(QString());
        measureNumberMode->setObjectName(QString::fromUtf8("measureNumberMode"));

        gridLayout1->addWidget(measureNumberMode, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer_2, 1, 5, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        previousButton = new QToolButton(MeasurePropertiesBase);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy2);
        previousButton->setText(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(previousButton);

        nextButton = new QToolButton(MeasurePropertiesBase);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        sizePolicy2.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy2);
        nextButton->setText(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(nextButton);

        buttonBox = new QDialogButtonBox(MeasurePropertiesBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(actualZ);
        label_4->setBuddy(actualN);
        labelCount->setBuddy(count);
        label_8->setBuddy(layoutStretch);
        label_7->setBuddy(measureNumberOffset);
        label_9->setBuddy(measureNumberMode);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(staves, actualZ);
        QWidget::setTabOrder(actualZ, actualN);
        QWidget::setTabOrder(actualN, irregular);
        QWidget::setTabOrder(irregular, breakMultiMeasureRest);
        QWidget::setTabOrder(breakMultiMeasureRest, measureNumberMode);
        QWidget::setTabOrder(measureNumberMode, layoutStretch);
        QWidget::setTabOrder(layoutStretch, measureNumberOffset);
        QWidget::setTabOrder(measureNumberOffset, count);
        QWidget::setTabOrder(count, previousButton);
        QWidget::setTabOrder(previousButton, nextButton);

        retranslateUi(MeasurePropertiesBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), MeasurePropertiesBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MeasurePropertiesBase, SLOT(reject()));

        actualN->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MeasurePropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *MeasurePropertiesBase)
    {
        MeasurePropertiesBase->setWindowTitle(QCoreApplication::translate("MeasurePropertiesBase", "Measure properties", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MeasurePropertiesBase", "Staves", nullptr));
        QTableWidgetItem *___qtablewidgetitem = staves->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MeasurePropertiesBase", "Staff", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = staves->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MeasurePropertiesBase", "Visible", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = staves->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MeasurePropertiesBase", "Stemless", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = staves->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MeasurePropertiesBase", "New row", nullptr));

        const bool __sortingEnabled = staves->isSortingEnabled();
        staves->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = staves->item(0, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MeasurePropertiesBase", "a", nullptr));
        staves->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QCoreApplication::translate("MeasurePropertiesBase", "Measure duration", nullptr));
        label->setText(QCoreApplication::translate("MeasurePropertiesBase", "Nominal:", nullptr));
        label_3->setText(QCoreApplication::translate("MeasurePropertiesBase", "/", nullptr));
        label_2->setText(QCoreApplication::translate("MeasurePropertiesBase", "Actual:", nullptr));
        label_4->setText(QCoreApplication::translate("MeasurePropertiesBase", "/", nullptr));
        actualN->setItemText(0, QCoreApplication::translate("MeasurePropertiesBase", "1", nullptr));
        actualN->setItemText(1, QCoreApplication::translate("MeasurePropertiesBase", "2", nullptr));
        actualN->setItemText(2, QCoreApplication::translate("MeasurePropertiesBase", "4", nullptr));
        actualN->setItemText(3, QCoreApplication::translate("MeasurePropertiesBase", "8", nullptr));
        actualN->setItemText(4, QCoreApplication::translate("MeasurePropertiesBase", "16", nullptr));
        actualN->setItemText(5, QCoreApplication::translate("MeasurePropertiesBase", "32", nullptr));
        actualN->setItemText(6, QCoreApplication::translate("MeasurePropertiesBase", "64", nullptr));
        actualN->setItemText(7, QCoreApplication::translate("MeasurePropertiesBase", "128", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("MeasurePropertiesBase", "Other", nullptr));
#if QT_CONFIG(tooltip)
        irregular->setToolTip(QCoreApplication::translate("MeasurePropertiesBase", "Do not count", nullptr));
#endif // QT_CONFIG(tooltip)
        irregular->setText(QCoreApplication::translate("MeasurePropertiesBase", "Exclude from measure count", nullptr));
        breakMultiMeasureRest->setText(QCoreApplication::translate("MeasurePropertiesBase", "Break multimeasure rest", nullptr));
        labelCount->setText(QCoreApplication::translate("MeasurePropertiesBase", "Play count:", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("MeasurePropertiesBase", "Layout stretch factor", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("MeasurePropertiesBase", "Layout stretch:", nullptr));
        label_7->setText(QCoreApplication::translate("MeasurePropertiesBase", "Add to measure number:", nullptr));
        label_9->setText(QCoreApplication::translate("MeasurePropertiesBase", "Measure number mode:", nullptr));
        measureNumberMode->setItemText(0, QCoreApplication::translate("MeasurePropertiesBase", "Auto", nullptr));
        measureNumberMode->setItemText(1, QCoreApplication::translate("MeasurePropertiesBase", "Always show", nullptr));
        measureNumberMode->setItemText(2, QCoreApplication::translate("MeasurePropertiesBase", "Always hide", nullptr));

#if QT_CONFIG(tooltip)
        previousButton->setToolTip(QCoreApplication::translate("MeasurePropertiesBase", "Go to previous measure", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        nextButton->setToolTip(QCoreApplication::translate("MeasurePropertiesBase", "Go to next measure", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class MeasurePropertiesBase: public Ui_MeasurePropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREPROPERTIES_H
