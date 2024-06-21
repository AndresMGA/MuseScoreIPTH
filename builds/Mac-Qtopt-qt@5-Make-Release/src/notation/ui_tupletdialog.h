/********************************************************************************
** Form generated from reading UI file 'tupletdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUPLETDIALOG_H
#define UI_TUPLETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TupletDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *actualNotes;
    QLabel *label_2;
    QSpinBox *normalNotes;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QGroupBox *formatGroupBox;
    QHBoxLayout *hboxLayout;
    QGroupBox *numberGroupBox;
    QVBoxLayout *vboxLayout;
    QRadioButton *number;
    QRadioButton *relation;
    QRadioButton *noNumber;
    QGroupBox *bracketGroupBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *autoBracket;
    QRadioButton *bracket;
    QRadioButton *noBracket;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TupletDialog)
    {
        if (TupletDialog->objectName().isEmpty())
            TupletDialog->setObjectName(QString::fromUtf8("TupletDialog"));
        TupletDialog->resize(303, 300);
        gridLayout = new QGridLayout(TupletDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        groupBox = new QGroupBox(TupletDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        actualNotes = new QSpinBox(groupBox);
        actualNotes->setObjectName(QString::fromUtf8("actualNotes"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(actualNotes->sizePolicy().hasHeightForWidth());
        actualNotes->setSizePolicy(sizePolicy);
        actualNotes->setMinimum(1);
        actualNotes->setMaximum(9999);
        actualNotes->setValue(3);

        horizontalLayout->addWidget(actualNotes);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        normalNotes = new QSpinBox(groupBox);
        normalNotes->setObjectName(QString::fromUtf8("normalNotes"));
        sizePolicy.setHeightForWidth(normalNotes->sizePolicy().hasHeightForWidth());
        normalNotes->setSizePolicy(sizePolicy);
        normalNotes->setMinimum(1);
        normalNotes->setMaximum(9999);
        normalNotes->setValue(2);

        horizontalLayout->addWidget(normalNotes);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout1->addWidget(groupBox, 0, 0, 1, 1);

        formatGroupBox = new QGroupBox(TupletDialog);
        formatGroupBox->setObjectName(QString::fromUtf8("formatGroupBox"));
        hboxLayout = new QHBoxLayout(formatGroupBox);
        hboxLayout->setSpacing(9);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(6, 6, 6, 6);
        numberGroupBox = new QGroupBox(formatGroupBox);
        numberGroupBox->setObjectName(QString::fromUtf8("numberGroupBox"));
        vboxLayout = new QVBoxLayout(numberGroupBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        number = new QRadioButton(numberGroupBox);
        number->setObjectName(QString::fromUtf8("number"));
        number->setChecked(true);

        vboxLayout->addWidget(number);

        relation = new QRadioButton(numberGroupBox);
        relation->setObjectName(QString::fromUtf8("relation"));

        vboxLayout->addWidget(relation);

        noNumber = new QRadioButton(numberGroupBox);
        noNumber->setObjectName(QString::fromUtf8("noNumber"));

        vboxLayout->addWidget(noNumber);


        hboxLayout->addWidget(numberGroupBox);

        bracketGroupBox = new QGroupBox(formatGroupBox);
        bracketGroupBox->setObjectName(QString::fromUtf8("bracketGroupBox"));
        vboxLayout1 = new QVBoxLayout(bracketGroupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(6, 6, 6, 6);
        autoBracket = new QRadioButton(bracketGroupBox);
        autoBracket->setObjectName(QString::fromUtf8("autoBracket"));
        autoBracket->setChecked(true);

        vboxLayout1->addWidget(autoBracket);

        bracket = new QRadioButton(bracketGroupBox);
        bracket->setObjectName(QString::fromUtf8("bracket"));

        vboxLayout1->addWidget(bracket);

        noBracket = new QRadioButton(bracketGroupBox);
        noBracket->setObjectName(QString::fromUtf8("noBracket"));

        vboxLayout1->addWidget(noBracket);


        hboxLayout->addWidget(bracketGroupBox);


        gridLayout1->addWidget(formatGroupBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TupletDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout1->addWidget(buttonBox, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(actualNotes);
        label_2->setBuddy(normalNotes);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TupletDialog);

        QMetaObject::connectSlotsByName(TupletDialog);
    } // setupUi

    void retranslateUi(QDialog *TupletDialog)
    {
        TupletDialog->setWindowTitle(QCoreApplication::translate("TupletDialog", "Create tuplet", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TupletDialog", "Type", nullptr));
        label->setText(QCoreApplication::translate("TupletDialog", "Ratio:", nullptr));
        label_2->setText(QCoreApplication::translate("TupletDialog", "/", nullptr));
        formatGroupBox->setTitle(QCoreApplication::translate("TupletDialog", "Format", nullptr));
        numberGroupBox->setTitle(QCoreApplication::translate("TupletDialog", "Number", nullptr));
        number->setText(QCoreApplication::translate("TupletDialog", "Number", nullptr));
        relation->setText(QCoreApplication::translate("TupletDialog", "Ratio", nullptr));
        noNumber->setText(QCoreApplication::translate("TupletDialog", "None", "no tuplet number style"));
        bracketGroupBox->setTitle(QCoreApplication::translate("TupletDialog", "Bracket", nullptr));
        autoBracket->setText(QCoreApplication::translate("TupletDialog", "Auto", nullptr));
        bracket->setText(QCoreApplication::translate("TupletDialog", "Bracket", nullptr));
        noBracket->setText(QCoreApplication::translate("TupletDialog", "None", "no tuplet bracket style"));
    } // retranslateUi

};

namespace Ui {
    class TupletDialog: public Ui_TupletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUPLETDIALOG_H
