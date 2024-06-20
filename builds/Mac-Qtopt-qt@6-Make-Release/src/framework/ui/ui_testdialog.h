/********************************************************************************
** Form generated from reading UI file 'testdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDIALOG_H
#define UI_TESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TestDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *labelTestParam;

    void setupUi(QDialog *TestDialog)
    {
        if (TestDialog->objectName().isEmpty())
            TestDialog->setObjectName(QString::fromUtf8("TestDialog"));
        TestDialog->resize(400, 300);
        TestDialog->setWindowTitle(QString::fromUtf8("TestDialog"));
        gridLayout = new QGridLayout(TestDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(TestDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        label = new QLabel(TestDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("Hello from QDialog!!!"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        labelTestParam = new QLabel(TestDialog);
        labelTestParam->setObjectName(QString::fromUtf8("labelTestParam"));
        labelTestParam->setText(QString::fromUtf8("Test param"));
        labelTestParam->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelTestParam, 1, 0, 1, 1);


        retranslateUi(TestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TestDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TestDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TestDialog);
    } // setupUi

    void retranslateUi(QDialog *TestDialog)
    {
        (void)TestDialog;
    } // retranslateUi

};

namespace Ui {
    class TestDialog: public Ui_TestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDIALOG_H
