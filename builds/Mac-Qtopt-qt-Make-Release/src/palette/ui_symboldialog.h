/********************************************************************************
** Form generated from reading UI file 'symboldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMBOLDIALOG_H
#define UI_SYMBOLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SymbolDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *search;
    QPushButton *clearSearch;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QCheckBox *systemFlag;
    QSpacerItem *spacerItem;
    QLabel *label;
    QComboBox *fontList;

    void setupUi(QWidget *SymbolDialogBase)
    {
        if (SymbolDialogBase->objectName().isEmpty())
            SymbolDialogBase->setObjectName("SymbolDialogBase");
        SymbolDialogBase->resize(711, 532);
        vboxLayout = new QVBoxLayout(SymbolDialogBase);
        vboxLayout->setObjectName("vboxLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        search = new QLineEdit(SymbolDialogBase);
        search->setObjectName("search");

        horizontalLayout->addWidget(search);

        clearSearch = new QPushButton(SymbolDialogBase);
        clearSearch->setObjectName("clearSearch");

        horizontalLayout->addWidget(clearSearch);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        vboxLayout->addLayout(horizontalLayout);

        frame = new QFrame(SymbolDialogBase);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        systemFlag = new QCheckBox(SymbolDialogBase);
        systemFlag->setObjectName("systemFlag");

        hboxLayout->addWidget(systemFlag);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);

        label = new QLabel(SymbolDialogBase);
        label->setObjectName("label");

        hboxLayout->addWidget(label);

        fontList = new QComboBox(SymbolDialogBase);
        fontList->setObjectName("fontList");

        hboxLayout->addWidget(fontList);


        vboxLayout->addLayout(hboxLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(fontList);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SymbolDialogBase);

        QMetaObject::connectSlotsByName(SymbolDialogBase);
    } // setupUi

    void retranslateUi(QWidget *SymbolDialogBase)
    {
        SymbolDialogBase->setWindowTitle(QCoreApplication::translate("SymbolDialogBase", "Symbols", nullptr));
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("SymbolDialogBase", "Search", nullptr));
        clearSearch->setText(QCoreApplication::translate("SymbolDialogBase", "Clear", nullptr));
        systemFlag->setText(QCoreApplication::translate("SymbolDialogBase", "System flag", nullptr));
        label->setText(QCoreApplication::translate("SymbolDialogBase", "Font:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SymbolDialogBase: public Ui_SymbolDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMBOLDIALOG_H
