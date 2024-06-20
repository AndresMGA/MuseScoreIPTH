/********************************************************************************
** Form generated from reading UI file 'timesignaturepropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMESIGNATUREPROPERTIESDIALOG_H
#define UI_TIMESIGNATUREPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "palette/view/widgets/noteGroups.h"

QT_BEGIN_NAMESPACE

class Ui_TimeSigProperties
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    mu::palette::NoteGroups *groups;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QRadioButton *otherButton;
    QRadioButton *textButton;
    QRadioButton *allaBreveButton;
    QRadioButton *fourfourButton;
    QHBoxLayout *horizontalLayout;
    QLineEdit *zText;
    QLabel *label;
    QLineEdit *nText;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *otherCombo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TimeSigProperties)
    {
        if (TimeSigProperties->objectName().isEmpty())
            TimeSigProperties->setObjectName("TimeSigProperties");
        TimeSigProperties->resize(779, 560);
        verticalLayout_2 = new QVBoxLayout(TimeSigProperties);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(TimeSigProperties);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, -1, 24, -1);
        groups = new mu::palette::NoteGroups(groupBox);
        groups->setObjectName("groups");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groups->sizePolicy().hasHeightForWidth());
        groups->setSizePolicy(sizePolicy);

        gridLayout->addWidget(groups, 1, 0, 1, 3);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setVerticalSpacing(0);
        otherButton = new QRadioButton(groupBox_3);
        otherButton->setObjectName("otherButton");

        gridLayout_3->addWidget(otherButton, 3, 0, 1, 1);

        textButton = new QRadioButton(groupBox_3);
        textButton->setObjectName("textButton");
        textButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(textButton, 0, 0, 1, 1);

        allaBreveButton = new QRadioButton(groupBox_3);
        allaBreveButton->setObjectName("allaBreveButton");
        allaBreveButton->setText(QString::fromUtf8(""));

        gridLayout_3->addWidget(allaBreveButton, 2, 0, 1, 1);

        fourfourButton = new QRadioButton(groupBox_3);
        fourfourButton->setObjectName("fourfourButton");
        fourfourButton->setText(QString::fromUtf8(""));

        gridLayout_3->addWidget(fourfourButton, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        zText = new QLineEdit(groupBox_3);
        zText->setObjectName("zText");

        horizontalLayout->addWidget(zText);

        label = new QLabel(groupBox_3);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        nText = new QLineEdit(groupBox_3);
        nText->setObjectName("nText");

        horizontalLayout->addWidget(nText);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        otherCombo = new QComboBox(groupBox_3);
        otherCombo->setObjectName("otherCombo");
        otherCombo->setMaxVisibleItems(12);
        otherCombo->setMaxCount(24);

        horizontalLayout_4->addWidget(otherCombo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_4, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(TimeSigProperties);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);

        QWidget::setTabOrder(textButton, zText);
        QWidget::setTabOrder(zText, nText);
        QWidget::setTabOrder(nText, fourfourButton);
        QWidget::setTabOrder(fourfourButton, allaBreveButton);
        QWidget::setTabOrder(allaBreveButton, otherButton);
        QWidget::setTabOrder(otherButton, otherCombo);
        QWidget::setTabOrder(otherCombo, buttonBox);

        retranslateUi(TimeSigProperties);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TimeSigProperties, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TimeSigProperties, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TimeSigProperties);
    } // setupUi

    void retranslateUi(QDialog *TimeSigProperties)
    {
        TimeSigProperties->setWindowTitle(QCoreApplication::translate("TimeSigProperties", "Time Signature Properties", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TimeSigProperties", "Time Signature Properties", nullptr));
        groups->setTitle(QCoreApplication::translate("TimeSigProperties", "Beam groups", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TimeSigProperties", "Appearance (visual only; will not affect actual measure duration)", nullptr));
        otherButton->setText(QCoreApplication::translate("TimeSigProperties", "Other:", nullptr));
        textButton->setText(QCoreApplication::translate("TimeSigProperties", "Text:", nullptr));
        label->setText(QCoreApplication::translate("TimeSigProperties", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeSigProperties: public Ui_TimeSigProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMESIGNATUREPROPERTIESDIALOG_H
