/********************************************************************************
** Form generated from reading UI file 'breaksdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREAKSDIALOG_H
#define UI_BREAKSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
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
            BreaksDialog->setObjectName("BreaksDialog");
        BreaksDialog->resize(272, 167);
        verticalLayout_2 = new QVBoxLayout(BreaksDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        intervalButton = new QRadioButton(BreaksDialog);
        intervalButton->setObjectName("intervalButton");
        intervalButton->setText(QString::fromUtf8("[Break systems every]"));

        horizontalLayout->addWidget(intervalButton);

        intervalBox = new QSpinBox(BreaksDialog);
        intervalBox->setObjectName("intervalBox");
        intervalBox->setMinimum(1);
        intervalBox->setValue(4);

        horizontalLayout->addWidget(intervalBox);

        intervalLabel2 = new QLabel(BreaksDialog);
        intervalLabel2->setObjectName("intervalLabel2");
        intervalLabel2->setText(QString::fromUtf8("[measures]"));

        horizontalLayout->addWidget(intervalLabel2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        lockButton = new QRadioButton(BreaksDialog);
        lockButton->setObjectName("lockButton");

        verticalLayout->addWidget(lockButton);

        removeButton = new QRadioButton(BreaksDialog);
        removeButton->setObjectName("removeButton");

        verticalLayout->addWidget(removeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(BreaksDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(intervalButton, intervalBox);
        QWidget::setTabOrder(intervalBox, lockButton);
        QWidget::setTabOrder(lockButton, removeButton);

        retranslateUi(BreaksDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BreaksDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BreaksDialog, qOverload<>(&QDialog::reject));

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
