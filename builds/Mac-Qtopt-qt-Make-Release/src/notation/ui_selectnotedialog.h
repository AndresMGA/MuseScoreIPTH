/********************************************************************************
** Form generated from reading UI file 'selectnotedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTNOTEDIALOG_H
#define UI_SELECTNOTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectNoteDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *select;
    QGridLayout *gridLayout_2;
    QCheckBox *sameType;
    QLabel *durationTicks;
    QCheckBox *sameVoice;
    QCheckBox *samePitch;
    QLabel *durationType;
    QCheckBox *sameStaff;
    QCheckBox *sameName;
    QLabel *type;
    QLabel *name;
    QCheckBox *sameDurationTicks;
    QCheckBox *sameNotehead;
    QCheckBox *inSelection;
    QLabel *pitch;
    QLabel *notehead;
    QCheckBox *sameSystem;
    QCheckBox *sameString;
    QCheckBox *sameDurationType;
    QLabel *string;
    QCheckBox *sameBeat;
    QCheckBox *sameMeasure;
    QGroupBox *action;
    QGridLayout *gridLayout;
    QRadioButton *replace;
    QRadioButton *add;
    QRadioButton *fromSelection;
    QRadioButton *subtract;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectNoteDialog)
    {
        if (SelectNoteDialog->objectName().isEmpty())
            SelectNoteDialog->setObjectName("SelectNoteDialog");
        SelectNoteDialog->resize(403, 454);
        horizontalLayout = new QHBoxLayout(SelectNoteDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        select = new QGroupBox(SelectNoteDialog);
        select->setObjectName("select");
        gridLayout_2 = new QGridLayout(select);
        gridLayout_2->setObjectName("gridLayout_2");
        sameType = new QCheckBox(select);
        sameType->setObjectName("sameType");

        gridLayout_2->addWidget(sameType, 3, 0, 1, 1);

        durationTicks = new QLabel(select);
        durationTicks->setObjectName("durationTicks");

        gridLayout_2->addWidget(durationTicks, 5, 1, 1, 1);

        sameVoice = new QCheckBox(select);
        sameVoice->setObjectName("sameVoice");

        gridLayout_2->addWidget(sameVoice, 8, 0, 1, 1);

        samePitch = new QCheckBox(select);
        samePitch->setObjectName("samePitch");

        gridLayout_2->addWidget(samePitch, 1, 0, 1, 1);

        durationType = new QLabel(select);
        durationType->setObjectName("durationType");

        gridLayout_2->addWidget(durationType, 4, 1, 1, 1);

        sameStaff = new QCheckBox(select);
        sameStaff->setObjectName("sameStaff");

        gridLayout_2->addWidget(sameStaff, 7, 0, 1, 1);

        sameName = new QCheckBox(select);
        sameName->setObjectName("sameName");

        gridLayout_2->addWidget(sameName, 6, 0, 1, 1);

        type = new QLabel(select);
        type->setObjectName("type");

        gridLayout_2->addWidget(type, 3, 1, 1, 1);

        name = new QLabel(select);
        name->setObjectName("name");

        gridLayout_2->addWidget(name, 6, 1, 1, 1);

        sameDurationTicks = new QCheckBox(select);
        sameDurationTicks->setObjectName("sameDurationTicks");

        gridLayout_2->addWidget(sameDurationTicks, 5, 0, 1, 1);

        sameNotehead = new QCheckBox(select);
        sameNotehead->setObjectName("sameNotehead");

        gridLayout_2->addWidget(sameNotehead, 0, 0, 1, 1);

        inSelection = new QCheckBox(select);
        inSelection->setObjectName("inSelection");

        gridLayout_2->addWidget(inSelection, 7, 1, 1, 1);

        pitch = new QLabel(select);
        pitch->setObjectName("pitch");

        gridLayout_2->addWidget(pitch, 1, 1, 1, 1);

        notehead = new QLabel(select);
        notehead->setObjectName("notehead");

        gridLayout_2->addWidget(notehead, 0, 1, 1, 1);

        sameSystem = new QCheckBox(select);
        sameSystem->setObjectName("sameSystem");

        gridLayout_2->addWidget(sameSystem, 8, 1, 1, 2);

        sameString = new QCheckBox(select);
        sameString->setObjectName("sameString");

        gridLayout_2->addWidget(sameString, 2, 0, 1, 1);

        sameDurationType = new QCheckBox(select);
        sameDurationType->setObjectName("sameDurationType");

        gridLayout_2->addWidget(sameDurationType, 4, 0, 1, 1);

        string = new QLabel(select);
        string->setObjectName("string");

        gridLayout_2->addWidget(string, 2, 1, 1, 1);

        sameBeat = new QCheckBox(select);
        sameBeat->setObjectName("sameBeat");

        gridLayout_2->addWidget(sameBeat, 9, 0, 1, 1);

        sameMeasure = new QCheckBox(select);
        sameMeasure->setObjectName("sameMeasure");

        gridLayout_2->addWidget(sameMeasure, 9, 1, 1, 1);


        verticalLayout->addWidget(select);

        action = new QGroupBox(SelectNoteDialog);
        action->setObjectName("action");
        gridLayout = new QGridLayout(action);
        gridLayout->setObjectName("gridLayout");
        replace = new QRadioButton(action);
        replace->setObjectName("replace");
        replace->setChecked(true);

        gridLayout->addWidget(replace, 0, 0, 1, 1);

        add = new QRadioButton(action);
        add->setObjectName("add");

        gridLayout->addWidget(add, 0, 1, 1, 1);

        fromSelection = new QRadioButton(action);
        fromSelection->setObjectName("fromSelection");
        fromSelection->setVisible(false);

        gridLayout->addWidget(fromSelection, 1, 0, 1, 1);

        subtract = new QRadioButton(action);
        subtract->setObjectName("subtract");

        gridLayout->addWidget(subtract, 1, 1, 1, 1);


        verticalLayout->addWidget(action);

        buttonBox = new QDialogButtonBox(SelectNoteDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout);

        QWidget::setTabOrder(sameNotehead, samePitch);
        QWidget::setTabOrder(samePitch, sameString);
        QWidget::setTabOrder(sameString, sameType);
        QWidget::setTabOrder(sameType, sameDurationType);
        QWidget::setTabOrder(sameDurationType, sameDurationTicks);
        QWidget::setTabOrder(sameDurationTicks, sameName);
        QWidget::setTabOrder(sameName, sameStaff);
        QWidget::setTabOrder(sameStaff, inSelection);
        QWidget::setTabOrder(inSelection, sameVoice);
        QWidget::setTabOrder(sameVoice, sameSystem);
        QWidget::setTabOrder(sameSystem, sameBeat);
        QWidget::setTabOrder(sameBeat, sameMeasure);
        QWidget::setTabOrder(sameMeasure, replace);
        QWidget::setTabOrder(replace, add);
        QWidget::setTabOrder(add, subtract);

        retranslateUi(SelectNoteDialog);

        QMetaObject::connectSlotsByName(SelectNoteDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectNoteDialog)
    {
        SelectNoteDialog->setWindowTitle(QCoreApplication::translate("SelectNoteDialog", "Select notes", nullptr));
        select->setTitle(QCoreApplication::translate("SelectNoteDialog", "Select", nullptr));
        sameType->setText(QCoreApplication::translate("SelectNoteDialog", "Same type:", nullptr));
        durationTicks->setText(QString());
        sameVoice->setText(QCoreApplication::translate("SelectNoteDialog", "Same voice", nullptr));
        samePitch->setText(QCoreApplication::translate("SelectNoteDialog", "Same pitch:", nullptr));
        durationType->setText(QString());
        sameStaff->setText(QCoreApplication::translate("SelectNoteDialog", "Same staff", nullptr));
        sameName->setText(QCoreApplication::translate("SelectNoteDialog", "Same note name:", nullptr));
        type->setText(QString());
        name->setText(QString());
        sameDurationTicks->setText(QCoreApplication::translate("SelectNoteDialog", "Same duration:", nullptr));
        sameNotehead->setText(QCoreApplication::translate("SelectNoteDialog", "Same notehead:", nullptr));
        inSelection->setText(QCoreApplication::translate("SelectNoteDialog", "In selection", nullptr));
        pitch->setText(QString());
        notehead->setText(QString());
        sameSystem->setText(QCoreApplication::translate("SelectNoteDialog", "Same system", nullptr));
        sameString->setText(QCoreApplication::translate("SelectNoteDialog", "Same string:", nullptr));
        sameDurationType->setText(QCoreApplication::translate("SelectNoteDialog", "Same note type:", nullptr));
        string->setText(QString());
        sameBeat->setText(QCoreApplication::translate("SelectNoteDialog", "Same beat", nullptr));
        sameMeasure->setText(QCoreApplication::translate("SelectNoteDialog", "Same measure", nullptr));
        action->setTitle(QCoreApplication::translate("SelectNoteDialog", "Action", nullptr));
        replace->setText(QCoreApplication::translate("SelectNoteDialog", "Replace selection", nullptr));
        add->setText(QCoreApplication::translate("SelectNoteDialog", "Add to selection", nullptr));
        fromSelection->setText(QCoreApplication::translate("SelectNoteDialog", "Search in selection", nullptr));
        subtract->setText(QCoreApplication::translate("SelectNoteDialog", "Subtract from selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectNoteDialog: public Ui_SelectNoteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTNOTEDIALOG_H
