/********************************************************************************
** Form generated from reading UI file 'editdrumsetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDRUMSETDIALOG_H
#define UI_EDITDRUMSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "palette/view/widgets/palettewidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditDrumsetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QTreeWidget *pitchList;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QComboBox *noteHead;
    QGroupBox *customGbox;
    QFormLayout *formLayout_2;
    QLabel *quarterLbl;
    QComboBox *quarterCmb;
    QLabel *halfLbl;
    QComboBox *halfCmb;
    QLabel *wholeLbl;
    QComboBox *wholeCmb;
    QLabel *doubleWholeLbl;
    QComboBox *doubleWholeCmb;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    mu::palette::PaletteWidget *drumNote;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label_5;
    QComboBox *voice;
    QLabel *label_3;
    QSpinBox *staffLine;
    QLabel *label_6;
    QComboBox *shortcut;
    QLabel *label_4;
    QComboBox *stemDirection;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadButton;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditDrumsetDialog)
    {
        if (EditDrumsetDialog->objectName().isEmpty())
            EditDrumsetDialog->setObjectName(QString::fromUtf8("EditDrumsetDialog"));
        EditDrumsetDialog->resize(704, 396);
        verticalLayout = new QVBoxLayout(EditDrumsetDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pitchList = new QTreeWidget(EditDrumsetDialog);
        new QTreeWidgetItem(pitchList);
        pitchList->setObjectName(QString::fromUtf8("pitchList"));
        pitchList->setMinimumSize(QSize(250, 250));
        pitchList->setAlternatingRowColors(true);
        pitchList->setIndentation(0);
        pitchList->setRootIsDecorated(false);
        pitchList->setSortingEnabled(true);
        pitchList->setAllColumnsShowFocus(true);
        pitchList->header()->setMinimumSectionSize(20);
        pitchList->header()->setDefaultSectionSize(56);

        horizontalLayout_4->addWidget(pitchList);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label = new QLabel(EditDrumsetDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(EditDrumsetDialog);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, name);

        label_2 = new QLabel(EditDrumsetDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_2);

        noteHead = new QComboBox(EditDrumsetDialog);
        noteHead->setObjectName(QString::fromUtf8("noteHead"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, noteHead);

        customGbox = new QGroupBox(EditDrumsetDialog);
        customGbox->setObjectName(QString::fromUtf8("customGbox"));
        customGbox->setCheckable(true);
        customGbox->setChecked(false);
        formLayout_2 = new QFormLayout(customGbox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        quarterLbl = new QLabel(customGbox);
        quarterLbl->setObjectName(QString::fromUtf8("quarterLbl"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, quarterLbl);

        quarterCmb = new QComboBox(customGbox);
        quarterCmb->setObjectName(QString::fromUtf8("quarterCmb"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, quarterCmb);

        halfLbl = new QLabel(customGbox);
        halfLbl->setObjectName(QString::fromUtf8("halfLbl"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, halfLbl);

        halfCmb = new QComboBox(customGbox);
        halfCmb->setObjectName(QString::fromUtf8("halfCmb"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, halfCmb);

        wholeLbl = new QLabel(customGbox);
        wholeLbl->setObjectName(QString::fromUtf8("wholeLbl"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, wholeLbl);

        wholeCmb = new QComboBox(customGbox);
        wholeCmb->setObjectName(QString::fromUtf8("wholeCmb"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, wholeCmb);

        doubleWholeLbl = new QLabel(customGbox);
        doubleWholeLbl->setObjectName(QString::fromUtf8("doubleWholeLbl"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, doubleWholeLbl);

        doubleWholeCmb = new QComboBox(customGbox);
        doubleWholeCmb->setObjectName(QString::fromUtf8("doubleWholeCmb"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, doubleWholeCmb);


        formLayout_3->setWidget(2, QFormLayout::SpanningRole, customGbox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        drumNote = new mu::palette::PaletteWidget(EditDrumsetDialog);
        drumNote->setObjectName(QString::fromUtf8("drumNote"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(drumNote->sizePolicy().hasHeightForWidth());
        drumNote->setSizePolicy(sizePolicy);
        drumNote->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(drumNote);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(EditDrumsetDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        voice = new QComboBox(EditDrumsetDialog);
        voice->addItem(QString());
        voice->addItem(QString());
        voice->addItem(QString());
        voice->addItem(QString());
        voice->setObjectName(QString::fromUtf8("voice"));
        voice->setMinimumSize(QSize(50, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, voice);

        label_3 = new QLabel(EditDrumsetDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        staffLine = new QSpinBox(EditDrumsetDialog);
        staffLine->setObjectName(QString::fromUtf8("staffLine"));
        staffLine->setMinimumSize(QSize(50, 0));
        staffLine->setMinimum(-12);

        formLayout->setWidget(1, QFormLayout::FieldRole, staffLine);

        label_6 = new QLabel(EditDrumsetDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        shortcut = new QComboBox(EditDrumsetDialog);
        shortcut->addItem(QString::fromUtf8("A"));
        shortcut->addItem(QString::fromUtf8("B"));
        shortcut->addItem(QString::fromUtf8("C"));
        shortcut->addItem(QString::fromUtf8("D"));
        shortcut->addItem(QString::fromUtf8("E"));
        shortcut->addItem(QString::fromUtf8("F"));
        shortcut->addItem(QString::fromUtf8("G"));
        shortcut->addItem(QString::fromUtf8("--"));
        shortcut->setObjectName(QString::fromUtf8("shortcut"));
        shortcut->setMinimumSize(QSize(50, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, shortcut);

        label_4 = new QLabel(EditDrumsetDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        stemDirection = new QComboBox(EditDrumsetDialog);
        stemDirection->addItem(QString());
        stemDirection->addItem(QString());
        stemDirection->addItem(QString());
        stemDirection->setObjectName(QString::fromUtf8("stemDirection"));
        stemDirection->setMinimumSize(QSize(50, 0));

        formLayout->setWidget(3, QFormLayout::FieldRole, stemDirection);


        horizontalLayout_2->addLayout(formLayout);


        formLayout_3->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_2);


        horizontalLayout_4->addLayout(formLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loadButton = new QPushButton(EditDrumsetDialog);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        horizontalLayout->addWidget(loadButton);

        saveButton = new QPushButton(EditDrumsetDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(EditDrumsetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(name);
        label_2->setBuddy(noteHead);
        quarterLbl->setBuddy(quarterCmb);
        halfLbl->setBuddy(halfCmb);
        wholeLbl->setBuddy(wholeCmb);
        doubleWholeLbl->setBuddy(doubleWholeCmb);
        label_5->setBuddy(voice);
        label_3->setBuddy(staffLine);
        label_6->setBuddy(shortcut);
        label_4->setBuddy(stemDirection);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(pitchList, name);
        QWidget::setTabOrder(name, noteHead);
        QWidget::setTabOrder(noteHead, customGbox);
        QWidget::setTabOrder(customGbox, quarterCmb);
        QWidget::setTabOrder(quarterCmb, halfCmb);
        QWidget::setTabOrder(halfCmb, wholeCmb);
        QWidget::setTabOrder(wholeCmb, doubleWholeCmb);
        QWidget::setTabOrder(doubleWholeCmb, voice);
        QWidget::setTabOrder(voice, staffLine);
        QWidget::setTabOrder(staffLine, shortcut);
        QWidget::setTabOrder(shortcut, stemDirection);
        QWidget::setTabOrder(stemDirection, loadButton);
        QWidget::setTabOrder(loadButton, saveButton);

        retranslateUi(EditDrumsetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditDrumsetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditDrumsetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditDrumsetDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDrumsetDialog)
    {
        EditDrumsetDialog->setWindowTitle(QCoreApplication::translate("EditDrumsetDialog", "Edit Drumset", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = pitchList->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("EditDrumsetDialog", "Name", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("EditDrumsetDialog", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("EditDrumsetDialog", "Note", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("EditDrumsetDialog", "No.", nullptr));

        const bool __sortingEnabled = pitchList->isSortingEnabled();
        pitchList->setSortingEnabled(false);
        pitchList->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("EditDrumsetDialog", "Name:", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("EditDrumsetDialog", "Enter a name to enable pitch editing", nullptr));
        label_2->setText(QCoreApplication::translate("EditDrumsetDialog", "Notehead group:", nullptr));
        customGbox->setTitle(QCoreApplication::translate("EditDrumsetDialog", "Edit noteheads", nullptr));
        quarterLbl->setText(QCoreApplication::translate("EditDrumsetDialog", "Quarter note", nullptr));
        halfLbl->setText(QCoreApplication::translate("EditDrumsetDialog", "Half note", nullptr));
        wholeLbl->setText(QCoreApplication::translate("EditDrumsetDialog", "Whole note", nullptr));
        doubleWholeLbl->setText(QCoreApplication::translate("EditDrumsetDialog", "Double whole note", nullptr));
        label_5->setText(QCoreApplication::translate("EditDrumsetDialog", "Default voice:", nullptr));
        voice->setItemText(0, QCoreApplication::translate("EditDrumsetDialog", "1", nullptr));
        voice->setItemText(1, QCoreApplication::translate("EditDrumsetDialog", "2", nullptr));
        voice->setItemText(2, QCoreApplication::translate("EditDrumsetDialog", "3", nullptr));
        voice->setItemText(3, QCoreApplication::translate("EditDrumsetDialog", "4", nullptr));

        label_3->setText(QCoreApplication::translate("EditDrumsetDialog", "Staff line:", nullptr));
        label_6->setText(QCoreApplication::translate("EditDrumsetDialog", "Shortcut:", nullptr));

        label_4->setText(QCoreApplication::translate("EditDrumsetDialog", "Stem direction:", nullptr));
        stemDirection->setItemText(0, QCoreApplication::translate("EditDrumsetDialog", "Auto", nullptr));
        stemDirection->setItemText(1, QCoreApplication::translate("EditDrumsetDialog", "Up", nullptr));
        stemDirection->setItemText(2, QCoreApplication::translate("EditDrumsetDialog", "Down", nullptr));

        loadButton->setText(QCoreApplication::translate("EditDrumsetDialog", "Load\342\200\246", nullptr));
        saveButton->setText(QCoreApplication::translate("EditDrumsetDialog", "Save as\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDrumsetDialog: public Ui_EditDrumsetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDRUMSETDIALOG_H
