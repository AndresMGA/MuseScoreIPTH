/********************************************************************************
** Form generated from reading UI file 'breaksdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREAKSDIALOG_H
#define UI_BREAKSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BreaksDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *intervalButton;
    QSpinBox *intervalBox;
    QLabel *intervalLabel2;
    QSpacerItem *horizontalSpacer;
    QRadioButton *lockButton;
    QRadioButton *removeButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BreaksDialog)
    {
        if (BreaksDialog->objectName().isEmpty())
            BreaksDialog->setObjectName(QString::fromUtf8("BreaksDialog"));
        BreaksDialog->resize(272, 167);
        verticalLayout_2 = new QVBoxLayout(BreaksDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        intervalButton = new QRadioButton(BreaksDialog);
        intervalButton->setObjectName(QString::fromUtf8("intervalButton"));
        intervalButton->setText(QString::fromUtf8("[Break systems every]"));

        horizontalLayout->addWidget(intervalButton);

        intervalBox = new QSpinBox(BreaksDialog);
        intervalBox->setObjectName(QString::fromUtf8("intervalBox"));
        intervalBox->setMinimum(1);
        intervalBox->setValue(4);

        horizontalLayout->addWidget(intervalBox);

        intervalLabel2 = new QLabel(BreaksDialog);
        intervalLabel2->setObjectName(QString::fromUtf8("intervalLabel2"));
        intervalLabel2->setText(QString::fromUtf8("[measures]"));

        horizontalLayout->addWidget(intervalLabel2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        lockButton = new QRadioButton(BreaksDialog);
        lockButton->setObjectName(QString::fromUtf8("lockButton"));

        verticalLayout->addWidget(lockButton);

        removeButton = new QRadioButton(BreaksDialog);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout->addWidget(removeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(BreaksDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(intervalButton, intervalBox);
        QWidget::setTabOrder(intervalBox, lockButton);
        QWidget::setTabOrder(lockButton, removeButton);

        retranslateUi(BreaksDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BreaksDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BreaksDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BreaksDialog);
    } // setupUi

    void retranslateUi(QDialog *BreaksDialog)
    {
        BreaksDialog->setWindowTitle(QCoreApplication::translate("BreaksDialog", "Add/remove system breaks", nullptr));
#if QT_CONFIG(accessibility)
        intervalButton->setAccessibleName(QCoreApplication::translate("BreaksDialog", "Break systems every X measures", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        intervalBox->setAccessibleName(QCoreApplication::translate("BreaksDialog", "Number of measures", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        lockButton->setAccessibleName(QCoreApplication::translate("BreaksDialog", "Add system break at end of each system", nullptr));
#endif // QT_CONFIG(accessibility)
        lockButton->setText(QCoreApplication::translate("BreaksDialog", "Add system break at end of each system", nullptr));
#if QT_CONFIG(accessibility)
        removeButton->setAccessibleName(QCoreApplication::translate("BreaksDialog", "Remove current system breaks", nullptr));
#endif // QT_CONFIG(accessibility)
        removeButton->setText(QCoreApplication::translate("BreaksDialog", "Remove current system breaks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BreaksDialog: public Ui_BreaksDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BREAKSDIALOG_H
