/********************************************************************************
** Form generated from reading UI file 'realizeharmonydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALIZEHARMONYDIALOG_H
#define UI_REALIZEHARMONYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "notation/view/widgets/voicingSelect.h"

QT_BEGIN_NAMESPACE

class Ui_RealizeHarmonyDialogBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *chordLabel;
    QGroupBox *optionsBox;
    QVBoxLayout *verticalLayout;
    mu::notation::VoicingSelect *voicingSelect;
    QSpacerItem *verticalSpacer;
    QTableWidget *chordTable;
    QWidget *buttonBar;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *showButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RealizeHarmonyDialogBase)
    {
        if (RealizeHarmonyDialogBase->objectName().isEmpty())
            RealizeHarmonyDialogBase->setObjectName(QString::fromUtf8("RealizeHarmonyDialogBase"));
        RealizeHarmonyDialogBase->resize(548, 368);
        verticalLayout_3 = new QVBoxLayout(RealizeHarmonyDialogBase);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(RealizeHarmonyDialogBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        chordLabel = new QLabel(widget_2);
        chordLabel->setObjectName(QString::fromUtf8("chordLabel"));
        sizePolicy.setHeightForWidth(chordLabel->sizePolicy().hasHeightForWidth());
        chordLabel->setSizePolicy(sizePolicy);
        chordLabel->setText(QString::fromUtf8("chordLabel"));
        chordLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        chordLabel->setWordWrap(true);

        horizontalLayout->addWidget(chordLabel);


        verticalLayout_2->addWidget(widget_2);

        optionsBox = new QGroupBox(widget);
        optionsBox->setObjectName(QString::fromUtf8("optionsBox"));
        sizePolicy.setHeightForWidth(optionsBox->sizePolicy().hasHeightForWidth());
        optionsBox->setSizePolicy(sizePolicy);
        optionsBox->setCheckable(true);
        optionsBox->setChecked(false);
        verticalLayout = new QVBoxLayout(optionsBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        voicingSelect = new mu::notation::VoicingSelect(optionsBox);
        voicingSelect->setObjectName(QString::fromUtf8("voicingSelect"));

        verticalLayout->addWidget(voicingSelect);


        verticalLayout_2->addWidget(optionsBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        chordTable = new QTableWidget(widget);
        chordTable->setObjectName(QString::fromUtf8("chordTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(chordTable->sizePolicy().hasHeightForWidth());
        chordTable->setSizePolicy(sizePolicy2);
        chordTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        chordTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        chordTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        chordTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(chordTable);

        buttonBar = new QWidget(widget);
        buttonBar->setObjectName(QString::fromUtf8("buttonBar"));
        sizePolicy.setHeightForWidth(buttonBar->sizePolicy().hasHeightForWidth());
        buttonBar->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(buttonBar);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        showButton = new QPushButton(buttonBar);
        showButton->setObjectName(QString::fromUtf8("showButton"));

        horizontalLayout_2->addWidget(showButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(buttonBar);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addWidget(buttonBar);


        verticalLayout_3->addWidget(widget);


        retranslateUi(RealizeHarmonyDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), RealizeHarmonyDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RealizeHarmonyDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(RealizeHarmonyDialogBase);
    } // setupUi

    void retranslateUi(QDialog *RealizeHarmonyDialogBase)
    {
        RealizeHarmonyDialogBase->setWindowTitle(QCoreApplication::translate("RealizeHarmonyDialogBase", "Realize chord symbols", nullptr));
#if QT_CONFIG(tooltip)
        RealizeHarmonyDialogBase->setToolTip(QCoreApplication::translate("RealizeHarmonyDialogBase", "Convert chord symbols into notes", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("RealizeHarmonyDialogBase", "Chord symbols to be realized:", nullptr));
        optionsBox->setTitle(QCoreApplication::translate("RealizeHarmonyDialogBase", "Override with custom options", nullptr));
        showButton->setText(QCoreApplication::translate("RealizeHarmonyDialogBase", "Show more\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RealizeHarmonyDialogBase: public Ui_RealizeHarmonyDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALIZEHARMONYDIALOG_H
