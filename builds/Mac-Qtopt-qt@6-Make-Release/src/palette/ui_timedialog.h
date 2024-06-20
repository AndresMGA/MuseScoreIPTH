/********************************************************************************
** Form generated from reading UI file 'timedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEDIALOG_H
#define UI_TIMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "palette/view/widgets/noteGroups.h"

QT_BEGIN_NAMESPACE

class Ui_TimeDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QFrame *frame;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QSpinBox *zNominal;
    QLabel *label_9;
    QComboBox *nNominal;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *zText;
    QLabel *label_8;
    QLineEdit *nText;
    QSpacerItem *horizontalSpacer;
    mu::palette::NoteGroups *groups;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addButton;

    void setupUi(QWidget *TimeDialogBase)
    {
        if (TimeDialogBase->objectName().isEmpty())
            TimeDialogBase->setObjectName(QString::fromUtf8("TimeDialogBase"));
        TimeDialogBase->resize(892, 560);
        verticalLayout = new QVBoxLayout(TimeDialogBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(TimeDialogBase);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        splitter->addWidget(frame);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label_7);

        zNominal = new QSpinBox(groupBox);
        zNominal->setObjectName(QString::fromUtf8("zNominal"));
        sizePolicy2.setHeightForWidth(zNominal->sizePolicy().hasHeightForWidth());
        zNominal->setSizePolicy(sizePolicy2);
        zNominal->setMaximumSize(QSize(60, 16777215));
        zNominal->setMinimum(1);
        zNominal->setMaximum(999999);
        zNominal->setValue(4);

        horizontalLayout->addWidget(zNominal);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label_9);

        nNominal = new QComboBox(groupBox);
        nNominal->addItem(QString());
        nNominal->addItem(QString());
        nNominal->addItem(QString());
        nNominal->addItem(QString());
        nNominal->addItem(QString());
        nNominal->addItem(QString());
        nNominal->addItem(QString());
        nNominal->addItem(QString());
        nNominal->setObjectName(QString::fromUtf8("nNominal"));

        horizontalLayout->addWidget(nNominal);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_3);

        zText = new QLineEdit(groupBox);
        zText->setObjectName(QString::fromUtf8("zText"));
        sizePolicy2.setHeightForWidth(zText->sizePolicy().hasHeightForWidth());
        zText->setSizePolicy(sizePolicy2);
        zText->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(zText);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_8);

        nText = new QLineEdit(groupBox);
        nText->setObjectName(QString::fromUtf8("nText"));
        sizePolicy2.setHeightForWidth(nText->sizePolicy().hasHeightForWidth());
        nText->setSizePolicy(sizePolicy2);
        nText->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(nText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groups = new mu::palette::NoteGroups(groupBox);
        groups->setObjectName(QString::fromUtf8("groups"));
        sizePolicy.setHeightForWidth(groups->sizePolicy().hasHeightForWidth());
        groups->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(groups);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        sizePolicy2.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(addButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        splitter->addWidget(groupBox);

        verticalLayout->addWidget(splitter);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(zNominal);
        label_9->setBuddy(nNominal);
        label_3->setBuddy(zText);
        label_8->setBuddy(nText);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TimeDialogBase);

        nNominal->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TimeDialogBase);
    } // setupUi

    void retranslateUi(QWidget *TimeDialogBase)
    {
        TimeDialogBase->setWindowTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("TimeDialogBase", "Create time signature", nullptr));
        label_7->setText(QCoreApplication::translate("TimeDialogBase", "Value:", nullptr));
        label_9->setText(QCoreApplication::translate("TimeDialogBase", "/", nullptr));
        nNominal->setItemText(0, QCoreApplication::translate("TimeDialogBase", "1", nullptr));
        nNominal->setItemText(1, QCoreApplication::translate("TimeDialogBase", "2", nullptr));
        nNominal->setItemText(2, QCoreApplication::translate("TimeDialogBase", "4", nullptr));
        nNominal->setItemText(3, QCoreApplication::translate("TimeDialogBase", "8", nullptr));
        nNominal->setItemText(4, QCoreApplication::translate("TimeDialogBase", "16", nullptr));
        nNominal->setItemText(5, QCoreApplication::translate("TimeDialogBase", "32", nullptr));
        nNominal->setItemText(6, QCoreApplication::translate("TimeDialogBase", "64", nullptr));
        nNominal->setItemText(7, QCoreApplication::translate("TimeDialogBase", "128", nullptr));

        label_3->setText(QCoreApplication::translate("TimeDialogBase", "Text:", nullptr));
        zText->setText(QCoreApplication::translate("TimeDialogBase", "4", nullptr));
        label_8->setText(QCoreApplication::translate("TimeDialogBase", "/", nullptr));
        nText->setText(QCoreApplication::translate("TimeDialogBase", "4", nullptr));
#if QT_CONFIG(tooltip)
        addButton->setToolTip(QCoreApplication::translate("TimeDialogBase", "Add time signature to master palette", nullptr));
#endif // QT_CONFIG(tooltip)
        addButton->setText(QCoreApplication::translate("TimeDialogBase", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeDialogBase: public Ui_TimeDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEDIALOG_H
