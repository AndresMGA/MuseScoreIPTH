/********************************************************************************
** Form generated from reading UI file 'note_groups.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_GROUPS_H
#define UI_NOTE_GROUPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <palette/view/widgets/notegroupsexampleview.h>
#include "palette/view/widgets/palettewidget.h"

QT_BEGIN_NAMESPACE

class Ui_NoteGroups
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    mu::palette::PaletteWidget *iconPalette;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *changeShorterCheckBox;
    QGridLayout *gridLayout;
    QLabel *label_10;
    mu::palette::NoteGroupsExampleView *view16;
    QLabel *label_11;
    mu::palette::NoteGroupsExampleView *view32;
    mu::palette::NoteGroupsExampleView *view8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *resetGroups;
    QSpacerItem *horizontalSpacer;

    void setupUi(QGroupBox *NoteGroups)
    {
        if (NoteGroups->objectName().isEmpty())
            NoteGroups->setObjectName(QString::fromUtf8("NoteGroups"));
        NoteGroups->resize(680, 255);
        verticalLayout = new QVBoxLayout(NoteGroups);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(NoteGroups);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setBaseSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        iconPalette = new mu::palette::PaletteWidget(groupBox);
        iconPalette->setObjectName(QString::fromUtf8("iconPalette"));
        sizePolicy.setHeightForWidth(iconPalette->sizePolicy().hasHeightForWidth());
        iconPalette->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(iconPalette);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        changeShorterCheckBox = new QCheckBox(NoteGroups);
        changeShorterCheckBox->setObjectName(QString::fromUtf8("changeShorterCheckBox"));
        changeShorterCheckBox->setChecked(false);

        horizontalLayout->addWidget(changeShorterCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        label_10 = new QLabel(NoteGroups);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_10, 1, 0, 1, 2);

        view16 = new mu::palette::NoteGroupsExampleView(NoteGroups);
        view16->setObjectName(QString::fromUtf8("view16"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(view16->sizePolicy().hasHeightForWidth());
        view16->setSizePolicy(sizePolicy2);
        view16->setFrameShape(QFrame::NoFrame);
        view16->setFrameShadow(QFrame::Raised);
        view16->setLineWidth(2);

        gridLayout->addWidget(view16, 1, 2, 1, 1);

        label_11 = new QLabel(NoteGroups);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_11, 2, 0, 1, 2);

        view32 = new mu::palette::NoteGroupsExampleView(NoteGroups);
        view32->setObjectName(QString::fromUtf8("view32"));
        sizePolicy2.setHeightForWidth(view32->sizePolicy().hasHeightForWidth());
        view32->setSizePolicy(sizePolicy2);
        view32->setFrameShape(QFrame::NoFrame);
        view32->setFrameShadow(QFrame::Raised);
        view32->setLineWidth(2);

        gridLayout->addWidget(view32, 2, 2, 1, 1);

        view8 = new mu::palette::NoteGroupsExampleView(NoteGroups);
        view8->setObjectName(QString::fromUtf8("view8"));
        sizePolicy2.setHeightForWidth(view8->sizePolicy().hasHeightForWidth());
        view8->setSizePolicy(sizePolicy2);
        view8->setFrameShape(QFrame::NoFrame);
        view8->setFrameShadow(QFrame::Raised);
        view8->setLineWidth(2);

        gridLayout->addWidget(view8, 0, 2, 1, 1);

        label_9 = new QLabel(NoteGroups);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_9, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        resetGroups = new QPushButton(NoteGroups);
        resetGroups->setObjectName(QString::fromUtf8("resetGroups"));

        horizontalLayout_2->addWidget(resetGroups);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(NoteGroups);

        QMetaObject::connectSlotsByName(NoteGroups);
    } // setupUi

    void retranslateUi(QGroupBox *NoteGroups)
    {
        NoteGroups->setWindowTitle(QCoreApplication::translate("NoteGroups", "Note Groups", nullptr));
        NoteGroups->setTitle(QCoreApplication::translate("NoteGroups", "Beam groups", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NoteGroups", "Beam selector", nullptr));
        changeShorterCheckBox->setText(QCoreApplication::translate("NoteGroups", "Also change shorter notes", nullptr));
        label_10->setText(QCoreApplication::translate("NoteGroups", "1/16", nullptr));
        label_11->setText(QCoreApplication::translate("NoteGroups", "1/32", nullptr));
        label_9->setText(QCoreApplication::translate("NoteGroups", "1/8", nullptr));
#if QT_CONFIG(tooltip)
        resetGroups->setToolTip(QCoreApplication::translate("NoteGroups", "Reset note grouping", nullptr));
#endif // QT_CONFIG(tooltip)
        resetGroups->setText(QCoreApplication::translate("NoteGroups", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteGroups: public Ui_NoteGroups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_GROUPS_H
