/********************************************************************************
** Form generated from reading UI file 'transposedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPOSEDIALOG_H
#define UI_TRANSPOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "uicomponents/view/widgets/radiobuttongroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_TransposeDialogBase
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    mu::uicomponents::RadioButtonGroupBox *chromaticBox;
    QVBoxLayout *verticalLayout_3;
    mu::uicomponents::RadioButtonGroupBox *transposeByKey;
    QGridLayout *gridLayout;
    QComboBox *keyList;
    QRadioButton *upKey;
    QRadioButton *downKey;
    QRadioButton *closestKey;
    mu::uicomponents::RadioButtonGroupBox *transposeByInterval;
    QGridLayout *gridLayout_2;
    QRadioButton *upInterval;
    QComboBox *intervalList;
    QRadioButton *downInterval;
    QCheckBox *transposeKeys;
    mu::uicomponents::RadioButtonGroupBox *diatonicBox;
    QGridLayout *gridLayout_3;
    QRadioButton *upDiatonic;
    QComboBox *degreeList;
    QRadioButton *downDiatonic;
    QCheckBox *keepDegreeAlterations;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QCheckBox *transposeChordNames;
    QComboBox *accidentalOptions;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TransposeDialogBase)
    {
        if (TransposeDialogBase->objectName().isEmpty())
            TransposeDialogBase->setObjectName(QString::fromUtf8("TransposeDialogBase"));
        TransposeDialogBase->resize(500, 517);
        horizontalLayout = new QHBoxLayout(TransposeDialogBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(TransposeDialogBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chromaticBox = new mu::uicomponents::RadioButtonGroupBox(widget);
        chromaticBox->setObjectName(QString::fromUtf8("chromaticBox"));
        chromaticBox->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(chromaticBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        transposeByKey = new mu::uicomponents::RadioButtonGroupBox(chromaticBox);
        transposeByKey->setObjectName(QString::fromUtf8("transposeByKey"));
        transposeByKey->setCheckable(true);
        gridLayout = new QGridLayout(transposeByKey);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 2, -1, 4);
        keyList = new QComboBox(transposeByKey);
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->addItem(QString());
        keyList->setObjectName(QString::fromUtf8("keyList"));

        gridLayout->addWidget(keyList, 0, 1, 1, 1);

        upKey = new QRadioButton(transposeByKey);
        upKey->setObjectName(QString::fromUtf8("upKey"));

        gridLayout->addWidget(upKey, 1, 0, 1, 1);

        downKey = new QRadioButton(transposeByKey);
        downKey->setObjectName(QString::fromUtf8("downKey"));

        gridLayout->addWidget(downKey, 2, 0, 1, 1);

        closestKey = new QRadioButton(transposeByKey);
        closestKey->setObjectName(QString::fromUtf8("closestKey"));
        closestKey->setChecked(true);

        gridLayout->addWidget(closestKey, 0, 0, 1, 1);


        verticalLayout_3->addWidget(transposeByKey);

        transposeByInterval = new mu::uicomponents::RadioButtonGroupBox(chromaticBox);
        transposeByInterval->setObjectName(QString::fromUtf8("transposeByInterval"));
        transposeByInterval->setCheckable(true);
        transposeByInterval->setChecked(false);
        gridLayout_2 = new QGridLayout(transposeByInterval);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(-1, 2, -1, 4);
        upInterval = new QRadioButton(transposeByInterval);
        upInterval->setObjectName(QString::fromUtf8("upInterval"));
        upInterval->setChecked(true);

        gridLayout_2->addWidget(upInterval, 0, 0, 1, 1);

        intervalList = new QComboBox(transposeByInterval);
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->addItem(QString());
        intervalList->setObjectName(QString::fromUtf8("intervalList"));

        gridLayout_2->addWidget(intervalList, 0, 1, 1, 1);

        downInterval = new QRadioButton(transposeByInterval);
        downInterval->setObjectName(QString::fromUtf8("downInterval"));

        gridLayout_2->addWidget(downInterval, 1, 0, 1, 1);


        verticalLayout_3->addWidget(transposeByInterval);

        transposeKeys = new QCheckBox(chromaticBox);
        transposeKeys->setObjectName(QString::fromUtf8("transposeKeys"));
        transposeKeys->setChecked(true);

        verticalLayout_3->addWidget(transposeKeys);


        verticalLayout_2->addWidget(chromaticBox);

        diatonicBox = new mu::uicomponents::RadioButtonGroupBox(widget);
        diatonicBox->setObjectName(QString::fromUtf8("diatonicBox"));
        diatonicBox->setCheckable(true);
        diatonicBox->setChecked(false);
        gridLayout_3 = new QGridLayout(diatonicBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(-1, 2, -1, 4);
        upDiatonic = new QRadioButton(diatonicBox);
        upDiatonic->setObjectName(QString::fromUtf8("upDiatonic"));
        upDiatonic->setChecked(true);

        gridLayout_3->addWidget(upDiatonic, 0, 0, 1, 1);

        degreeList = new QComboBox(diatonicBox);
        degreeList->addItem(QString());
        degreeList->addItem(QString());
        degreeList->addItem(QString());
        degreeList->addItem(QString());
        degreeList->addItem(QString());
        degreeList->addItem(QString());
        degreeList->setObjectName(QString::fromUtf8("degreeList"));

        gridLayout_3->addWidget(degreeList, 0, 1, 1, 1);

        downDiatonic = new QRadioButton(diatonicBox);
        downDiatonic->setObjectName(QString::fromUtf8("downDiatonic"));

        gridLayout_3->addWidget(downDiatonic, 1, 0, 1, 1);

        keepDegreeAlterations = new QCheckBox(diatonicBox);
        keepDegreeAlterations->setObjectName(QString::fromUtf8("keepDegreeAlterations"));
        keepDegreeAlterations->setChecked(true);

        gridLayout_3->addWidget(keepDegreeAlterations, 2, 0, 1, 1);


        verticalLayout_2->addWidget(diatonicBox);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 2, -1, -1);
        transposeChordNames = new QCheckBox(groupBox_3);
        transposeChordNames->setObjectName(QString::fromUtf8("transposeChordNames"));
        transposeChordNames->setChecked(true);

        verticalLayout->addWidget(transposeChordNames);

        accidentalOptions = new QComboBox(groupBox_3);
        accidentalOptions->addItem(QString());
        accidentalOptions->addItem(QString());
        accidentalOptions->setObjectName(QString::fromUtf8("accidentalOptions"));

        verticalLayout->addWidget(accidentalOptions);


        verticalLayout_2->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout->addWidget(widget);

        QWidget::setTabOrder(chromaticBox, transposeByKey);
        QWidget::setTabOrder(transposeByKey, closestKey);
        QWidget::setTabOrder(closestKey, keyList);
        QWidget::setTabOrder(keyList, upKey);
        QWidget::setTabOrder(upKey, downKey);
        QWidget::setTabOrder(downKey, transposeByInterval);
        QWidget::setTabOrder(transposeByInterval, upInterval);
        QWidget::setTabOrder(upInterval, intervalList);
        QWidget::setTabOrder(intervalList, downInterval);
        QWidget::setTabOrder(downInterval, transposeKeys);
        QWidget::setTabOrder(transposeKeys, diatonicBox);
        QWidget::setTabOrder(diatonicBox, upDiatonic);
        QWidget::setTabOrder(upDiatonic, degreeList);
        QWidget::setTabOrder(degreeList, downDiatonic);
        QWidget::setTabOrder(downDiatonic, keepDegreeAlterations);
        QWidget::setTabOrder(keepDegreeAlterations, transposeChordNames);
        QWidget::setTabOrder(transposeChordNames, accidentalOptions);

        retranslateUi(TransposeDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), TransposeDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TransposeDialogBase, SLOT(reject()));

        keyList->setCurrentIndex(0);
        accidentalOptions->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TransposeDialogBase);
    } // setupUi

    void retranslateUi(QDialog *TransposeDialogBase)
    {
        TransposeDialogBase->setWindowTitle(QCoreApplication::translate("TransposeDialogBase", "Transpose", nullptr));
        chromaticBox->setTitle(QCoreApplication::translate("TransposeDialogBase", "Transpose chromatically", nullptr));
#if QT_CONFIG(tooltip)
        transposeByKey->setToolTip(QCoreApplication::translate("TransposeDialogBase", "Transpose to key (specified at concert pitch)", nullptr));
#endif // QT_CONFIG(tooltip)
        transposeByKey->setTitle(QCoreApplication::translate("TransposeDialogBase", "To Key", nullptr));
        keyList->setItemText(0, QCoreApplication::translate("TransposeDialogBase", "C\342\231\255 major / A\342\231\255 minor", nullptr));
        keyList->setItemText(1, QCoreApplication::translate("TransposeDialogBase", "G\342\231\255 major / E\342\231\255 minor", nullptr));
        keyList->setItemText(2, QCoreApplication::translate("TransposeDialogBase", "D\342\231\255 major / B\342\231\255 minor", nullptr));
        keyList->setItemText(3, QCoreApplication::translate("TransposeDialogBase", "A\342\231\255 major / F minor", nullptr));
        keyList->setItemText(4, QCoreApplication::translate("TransposeDialogBase", "E\342\231\255 major / C minor", nullptr));
        keyList->setItemText(5, QCoreApplication::translate("TransposeDialogBase", "B\342\231\255 major / G minor", nullptr));
        keyList->setItemText(6, QCoreApplication::translate("TransposeDialogBase", "F major / D minor", nullptr));
        keyList->setItemText(7, QCoreApplication::translate("TransposeDialogBase", "C major / A minor", nullptr));
        keyList->setItemText(8, QCoreApplication::translate("TransposeDialogBase", "G major / E minor", nullptr));
        keyList->setItemText(9, QCoreApplication::translate("TransposeDialogBase", "D major / B minor", nullptr));
        keyList->setItemText(10, QCoreApplication::translate("TransposeDialogBase", "A major / F\342\231\257 minor", nullptr));
        keyList->setItemText(11, QCoreApplication::translate("TransposeDialogBase", "E major / C\342\231\257 minor", nullptr));
        keyList->setItemText(12, QCoreApplication::translate("TransposeDialogBase", "B major / G\342\231\257 minor", nullptr));
        keyList->setItemText(13, QCoreApplication::translate("TransposeDialogBase", "F\342\231\257 major / D\342\231\257 minor", nullptr));
        keyList->setItemText(14, QCoreApplication::translate("TransposeDialogBase", "C\342\231\257 major / A\342\231\257 minor", nullptr));

#if QT_CONFIG(accessibility)
        upKey->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Up", nullptr));
#endif // QT_CONFIG(accessibility)
        upKey->setText(QCoreApplication::translate("TransposeDialogBase", "Up", nullptr));
#if QT_CONFIG(accessibility)
        downKey->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Down", nullptr));
#endif // QT_CONFIG(accessibility)
        downKey->setText(QCoreApplication::translate("TransposeDialogBase", "Down", nullptr));
#if QT_CONFIG(accessibility)
        closestKey->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Closest", nullptr));
#endif // QT_CONFIG(accessibility)
        closestKey->setText(QCoreApplication::translate("TransposeDialogBase", "Closest", nullptr));
#if QT_CONFIG(tooltip)
        transposeByInterval->setToolTip(QCoreApplication::translate("TransposeDialogBase", "Transpose by interval", nullptr));
#endif // QT_CONFIG(tooltip)
        transposeByInterval->setTitle(QCoreApplication::translate("TransposeDialogBase", "By interval", nullptr));
#if QT_CONFIG(accessibility)
        upInterval->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Up", nullptr));
#endif // QT_CONFIG(accessibility)
        upInterval->setText(QCoreApplication::translate("TransposeDialogBase", "Up", nullptr));
        intervalList->setItemText(0, QCoreApplication::translate("TransposeDialogBase", "Perfect unison", nullptr));
        intervalList->setItemText(1, QCoreApplication::translate("TransposeDialogBase", "Augmented unison", nullptr));
        intervalList->setItemText(2, QCoreApplication::translate("TransposeDialogBase", "Diminished second", nullptr));
        intervalList->setItemText(3, QCoreApplication::translate("TransposeDialogBase", "Minor second", nullptr));
        intervalList->setItemText(4, QCoreApplication::translate("TransposeDialogBase", "Major second", nullptr));
        intervalList->setItemText(5, QCoreApplication::translate("TransposeDialogBase", "Augmented second", nullptr));
        intervalList->setItemText(6, QCoreApplication::translate("TransposeDialogBase", "Diminished third", nullptr));
        intervalList->setItemText(7, QCoreApplication::translate("TransposeDialogBase", "Minor third", nullptr));
        intervalList->setItemText(8, QCoreApplication::translate("TransposeDialogBase", "Major third", nullptr));
        intervalList->setItemText(9, QCoreApplication::translate("TransposeDialogBase", "Augmented third", nullptr));
        intervalList->setItemText(10, QCoreApplication::translate("TransposeDialogBase", "Diminished fourth", nullptr));
        intervalList->setItemText(11, QCoreApplication::translate("TransposeDialogBase", "Perfect fourth", nullptr));
        intervalList->setItemText(12, QCoreApplication::translate("TransposeDialogBase", "Augmented fourth", nullptr));
        intervalList->setItemText(13, QCoreApplication::translate("TransposeDialogBase", "Diminished fifth", nullptr));
        intervalList->setItemText(14, QCoreApplication::translate("TransposeDialogBase", "Perfect fifth", nullptr));
        intervalList->setItemText(15, QCoreApplication::translate("TransposeDialogBase", "Augmented fifth", nullptr));
        intervalList->setItemText(16, QCoreApplication::translate("TransposeDialogBase", "Diminished sixth", nullptr));
        intervalList->setItemText(17, QCoreApplication::translate("TransposeDialogBase", "Minor sixth", nullptr));
        intervalList->setItemText(18, QCoreApplication::translate("TransposeDialogBase", "Major sixth", nullptr));
        intervalList->setItemText(19, QCoreApplication::translate("TransposeDialogBase", "Augmented sixth", nullptr));
        intervalList->setItemText(20, QCoreApplication::translate("TransposeDialogBase", "Diminished seventh", nullptr));
        intervalList->setItemText(21, QCoreApplication::translate("TransposeDialogBase", "Minor seventh", nullptr));
        intervalList->setItemText(22, QCoreApplication::translate("TransposeDialogBase", "Major seventh", nullptr));
        intervalList->setItemText(23, QCoreApplication::translate("TransposeDialogBase", "Augmented seventh", nullptr));
        intervalList->setItemText(24, QCoreApplication::translate("TransposeDialogBase", "Diminished octave", nullptr));
        intervalList->setItemText(25, QCoreApplication::translate("TransposeDialogBase", "Perfect octave", nullptr));

#if QT_CONFIG(accessibility)
        intervalList->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Interval type", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        downInterval->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Down", nullptr));
#endif // QT_CONFIG(accessibility)
        downInterval->setText(QCoreApplication::translate("TransposeDialogBase", "Down", nullptr));
        transposeKeys->setText(QCoreApplication::translate("TransposeDialogBase", "Transpose key signatures", nullptr));
        diatonicBox->setTitle(QCoreApplication::translate("TransposeDialogBase", "Transpose diatonically", nullptr));
#if QT_CONFIG(accessibility)
        upDiatonic->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Up", nullptr));
#endif // QT_CONFIG(accessibility)
        upDiatonic->setText(QCoreApplication::translate("TransposeDialogBase", "Up", nullptr));
        degreeList->setItemText(0, QCoreApplication::translate("TransposeDialogBase", "Second", nullptr));
        degreeList->setItemText(1, QCoreApplication::translate("TransposeDialogBase", "Third", nullptr));
        degreeList->setItemText(2, QCoreApplication::translate("TransposeDialogBase", "Fourth", nullptr));
        degreeList->setItemText(3, QCoreApplication::translate("TransposeDialogBase", "Fifth", nullptr));
        degreeList->setItemText(4, QCoreApplication::translate("TransposeDialogBase", "Sixth", nullptr));
        degreeList->setItemText(5, QCoreApplication::translate("TransposeDialogBase", "Seventh", nullptr));

#if QT_CONFIG(accessibility)
        degreeList->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Degree type", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        downDiatonic->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Down", nullptr));
#endif // QT_CONFIG(accessibility)
        downDiatonic->setText(QCoreApplication::translate("TransposeDialogBase", "Down", nullptr));
#if QT_CONFIG(accessibility)
        keepDegreeAlterations->setAccessibleName(QCoreApplication::translate("TransposeDialogBase", "Keep degree alterations", nullptr));
#endif // QT_CONFIG(accessibility)
        keepDegreeAlterations->setText(QCoreApplication::translate("TransposeDialogBase", "Keep degree alterations", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TransposeDialogBase", "Options", nullptr));
        transposeChordNames->setText(QCoreApplication::translate("TransposeDialogBase", "Transpose chord symbols", nullptr));
        accidentalOptions->setItemText(0, QCoreApplication::translate("TransposeDialogBase", "Single \342\231\257 and \342\231\255 only", nullptr));
        accidentalOptions->setItemText(1, QCoreApplication::translate("TransposeDialogBase", "Use double \342\231\257 and \342\231\255", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TransposeDialogBase: public Ui_TransposeDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPOSEDIALOG_H
