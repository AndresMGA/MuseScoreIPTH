/********************************************************************************
** Form generated from reading UI file 'selectdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDIALOG_H
#define UI_SELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *select;
    QGridLayout *gridLayout_2;
    QCheckBox *sameSubtype;
    QLineEdit *type;
    QCheckBox *sameStaff;
    QCheckBox *sameVoice;
    QCheckBox *sameDuration;
    QLineEdit *subtype;
    QLabel *label;
    QCheckBox *sameBeat;
    QCheckBox *sameMeasure;
    QCheckBox *sameSystem;
    QCheckBox *inSelection;
    QGroupBox *action;
    QGridLayout *gridLayout;
    QRadioButton *replace;
    QRadioButton *add;
    QRadioButton *fromSelection;
    QRadioButton *subtract;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectDialog)
    {
        if (SelectDialog->objectName().isEmpty())
            SelectDialog->setObjectName(QString::fromUtf8("SelectDialog"));
        SelectDialog->resize(395, 346);
        horizontalLayout = new QHBoxLayout(SelectDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        select = new QGroupBox(SelectDialog);
        select->setObjectName(QString::fromUtf8("select"));
        gridLayout_2 = new QGridLayout(select);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sameSubtype = new QCheckBox(select);
        sameSubtype->setObjectName(QString::fromUtf8("sameSubtype"));

        gridLayout_2->addWidget(sameSubtype, 1, 0, 1, 1);

        type = new QLineEdit(select);
        type->setObjectName(QString::fromUtf8("type"));
        type->setReadOnly(true);

        gridLayout_2->addWidget(type, 0, 1, 1, 2);

        sameStaff = new QCheckBox(select);
        sameStaff->setObjectName(QString::fromUtf8("sameStaff"));

        gridLayout_2->addWidget(sameStaff, 2, 0, 1, 1);

        sameVoice = new QCheckBox(select);
        sameVoice->setObjectName(QString::fromUtf8("sameVoice"));

        gridLayout_2->addWidget(sameVoice, 3, 0, 1, 1);

        sameDuration = new QCheckBox(select);
        sameDuration->setObjectName(QString::fromUtf8("sameDuration"));

        gridLayout_2->addWidget(sameDuration, 4, 0, 1, 1);

        subtype = new QLineEdit(select);
        subtype->setObjectName(QString::fromUtf8("subtype"));
        subtype->setReadOnly(true);

        gridLayout_2->addWidget(subtype, 1, 1, 1, 2);

        label = new QLabel(select);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        sameBeat = new QCheckBox(select);
        sameBeat->setObjectName(QString::fromUtf8("sameBeat"));

        gridLayout_2->addWidget(sameBeat, 5, 0, 1, 1);

        sameMeasure = new QCheckBox(select);
        sameMeasure->setObjectName(QString::fromUtf8("sameMeasure"));

        gridLayout_2->addWidget(sameMeasure, 5, 1, 1, 1);

        sameSystem = new QCheckBox(select);
        sameSystem->setObjectName(QString::fromUtf8("sameSystem"));

        gridLayout_2->addWidget(sameSystem, 4, 1, 1, 1);

        inSelection = new QCheckBox(select);
        inSelection->setObjectName(QString::fromUtf8("inSelection"));

        gridLayout_2->addWidget(inSelection, 3, 1, 1, 1);


        verticalLayout->addWidget(select);

        action = new QGroupBox(SelectDialog);
        action->setObjectName(QString::fromUtf8("action"));
        gridLayout = new QGridLayout(action);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        replace = new QRadioButton(action);
        replace->setObjectName(QString::fromUtf8("replace"));
        replace->setChecked(true);

        gridLayout->addWidget(replace, 0, 0, 1, 1);

        add = new QRadioButton(action);
        add->setObjectName(QString::fromUtf8("add"));

        gridLayout->addWidget(add, 0, 1, 1, 1);

        fromSelection = new QRadioButton(action);
        fromSelection->setObjectName(QString::fromUtf8("fromSelection"));
        fromSelection->setVisible(false);

        gridLayout->addWidget(fromSelection, 1, 0, 1, 1);

        subtract = new QRadioButton(action);
        subtract->setObjectName(QString::fromUtf8("subtract"));

        gridLayout->addWidget(subtract, 1, 1, 1, 1);


        verticalLayout->addWidget(action);

        buttonBox = new QDialogButtonBox(SelectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(type);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(type, sameSubtype);
        QWidget::setTabOrder(sameSubtype, subtype);
        QWidget::setTabOrder(subtype, sameStaff);
        QWidget::setTabOrder(sameStaff, sameVoice);
        QWidget::setTabOrder(sameVoice, inSelection);
        QWidget::setTabOrder(inSelection, sameDuration);
        QWidget::setTabOrder(sameDuration, sameSystem);
        QWidget::setTabOrder(sameSystem, sameBeat);
        QWidget::setTabOrder(sameBeat, sameMeasure);
        QWidget::setTabOrder(sameMeasure, replace);
        QWidget::setTabOrder(replace, add);
        QWidget::setTabOrder(add, subtract);

        retranslateUi(SelectDialog);

        QMetaObject::connectSlotsByName(SelectDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectDialog)
    {
        SelectDialog->setWindowTitle(QCoreApplication::translate("SelectDialog", "Select", nullptr));
        select->setTitle(QCoreApplication::translate("SelectDialog", "Select", nullptr));
        sameSubtype->setText(QCoreApplication::translate("SelectDialog", "Same subtype:", nullptr));
        sameStaff->setText(QCoreApplication::translate("SelectDialog", "Same staff", nullptr));
        sameVoice->setText(QCoreApplication::translate("SelectDialog", "Same voice", nullptr));
        sameDuration->setText(QCoreApplication::translate("SelectDialog", "Same duration", nullptr));
        label->setText(QCoreApplication::translate("SelectDialog", "Element type:", nullptr));
        sameBeat->setText(QCoreApplication::translate("SelectDialog", "Same beat", nullptr));
        sameMeasure->setText(QCoreApplication::translate("SelectDialog", "Same measure", nullptr));
        sameSystem->setText(QCoreApplication::translate("SelectDialog", "Same system", nullptr));
        inSelection->setText(QCoreApplication::translate("SelectDialog", "In selection", nullptr));
        action->setTitle(QCoreApplication::translate("SelectDialog", "Action", nullptr));
        replace->setText(QCoreApplication::translate("SelectDialog", "Replace selection", nullptr));
        add->setText(QCoreApplication::translate("SelectDialog", "Add to selection", nullptr));
        fromSelection->setText(QCoreApplication::translate("SelectDialog", "Search in selection", nullptr));
        subtract->setText(QCoreApplication::translate("SelectDialog", "Subtract from selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectDialog: public Ui_SelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDIALOG_H
