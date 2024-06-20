/********************************************************************************
** Form generated from reading UI file 'specialcharactersdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIALCHARACTERSDIALOG_H
#define UI_SPECIALCHARACTERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpecialCharactersDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;

    void setupUi(QWidget *SpecialCharactersDialog)
    {
        if (SpecialCharactersDialog->objectName().isEmpty())
            SpecialCharactersDialog->setObjectName("SpecialCharactersDialog");
        SpecialCharactersDialog->resize(700, 500);
        verticalLayout_2 = new QVBoxLayout(SpecialCharactersDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tabWidget = new QTabWidget(SpecialCharactersDialog);
        tabWidget->setObjectName("tabWidget");

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(SpecialCharactersDialog);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SpecialCharactersDialog);
    } // setupUi

    void retranslateUi(QWidget *SpecialCharactersDialog)
    {
        SpecialCharactersDialog->setWindowTitle(QCoreApplication::translate("SpecialCharactersDialog", "Special characters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpecialCharactersDialog: public Ui_SpecialCharactersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIALCHARACTERSDIALOG_H
