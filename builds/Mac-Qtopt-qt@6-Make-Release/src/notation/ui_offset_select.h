/********************************************************************************
** Form generated from reading UI file 'offset_select.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFSET_SELECT_H
#define UI_OFFSET_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OffsetSelect
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *xVal;
    QDoubleSpinBox *yVal;
    QLabel *label_2;

    void setupUi(QWidget *OffsetSelect)
    {
        if (OffsetSelect->objectName().isEmpty())
            OffsetSelect->setObjectName(QString::fromUtf8("OffsetSelect"));
        gridLayout = new QGridLayout(OffsetSelect);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(OffsetSelect);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        xVal = new QDoubleSpinBox(OffsetSelect);
        xVal->setObjectName(QString::fromUtf8("xVal"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xVal->sizePolicy().hasHeightForWidth());
        xVal->setSizePolicy(sizePolicy);
        xVal->setMinimum(-999.000000000000000);
        xVal->setMaximum(999.990000000000009);
        xVal->setSingleStep(0.500000000000000);

        gridLayout->addWidget(xVal, 0, 1, 1, 1);

        yVal = new QDoubleSpinBox(OffsetSelect);
        yVal->setObjectName(QString::fromUtf8("yVal"));
        sizePolicy.setHeightForWidth(yVal->sizePolicy().hasHeightForWidth());
        yVal->setSizePolicy(sizePolicy);
        yVal->setMinimum(-999.000000000000000);
        yVal->setMaximum(999.990000000000009);
        yVal->setSingleStep(0.500000000000000);

        gridLayout->addWidget(yVal, 1, 1, 1, 1);

        label_2 = new QLabel(OffsetSelect);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(OffsetSelect);

        QMetaObject::connectSlotsByName(OffsetSelect);
    } // setupUi

    void retranslateUi(QWidget *OffsetSelect)
    {
        label->setText(QCoreApplication::translate("OffsetSelect", "X:", nullptr));
#if QT_CONFIG(accessibility)
        xVal->setAccessibleName(QCoreApplication::translate("OffsetSelect", "Horizontal offset", nullptr));
#endif // QT_CONFIG(accessibility)
        xVal->setSuffix(QCoreApplication::translate("OffsetSelect", "sp", nullptr));
#if QT_CONFIG(accessibility)
        yVal->setAccessibleName(QCoreApplication::translate("OffsetSelect", "Vertical offset", nullptr));
#endif // QT_CONFIG(accessibility)
        yVal->setSuffix(QCoreApplication::translate("OffsetSelect", "sp", nullptr));
        label_2->setText(QCoreApplication::translate("OffsetSelect", "Y:", nullptr));
        (void)OffsetSelect;
    } // retranslateUi

};

namespace Ui {
    class OffsetSelect: public Ui_OffsetSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFSET_SELECT_H
