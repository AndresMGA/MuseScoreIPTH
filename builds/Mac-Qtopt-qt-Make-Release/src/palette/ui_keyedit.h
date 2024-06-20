/********************************************************************************
** Form generated from reading UI file 'keyedit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYEDIT_H
#define UI_KEYEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "palette/view/widgets/keycanvas.h"

QT_BEGIN_NAMESPACE

class Ui_KeyEdit
{
public:
    QVBoxLayout *verticalLayout_1;
    QSplitter *splitter;
    QFrame *keySigframe;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    mu::palette::KeyCanvas *canvas;
    QFrame *accidentalsFrame;
    QHBoxLayout *hboxLayout;
    QPushButton *clearButton;
    QSpacerItem *spacerItem;
    QPushButton *addButton;

    void setupUi(QWidget *KeyEdit)
    {
        if (KeyEdit->objectName().isEmpty())
            KeyEdit->setObjectName("KeyEdit");
        KeyEdit->resize(636, 360);
        verticalLayout_1 = new QVBoxLayout(KeyEdit);
        verticalLayout_1->setObjectName("verticalLayout_1");
        splitter = new QSplitter(KeyEdit);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        keySigframe = new QFrame(splitter);
        keySigframe->setObjectName("keySigframe");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(keySigframe->sizePolicy().hasHeightForWidth());
        keySigframe->setSizePolicy(sizePolicy);
        splitter->addWidget(keySigframe);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        canvas = new mu::palette::KeyCanvas(groupBox);
        canvas->setObjectName("canvas");
        sizePolicy.setHeightForWidth(canvas->sizePolicy().hasHeightForWidth());
        canvas->setSizePolicy(sizePolicy);
        canvas->setMinimumSize(QSize(0, 80));
        canvas->setFrameShape(QFrame::StyledPanel);
        canvas->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(canvas);

        accidentalsFrame = new QFrame(groupBox);
        accidentalsFrame->setObjectName("accidentalsFrame");
        sizePolicy.setHeightForWidth(accidentalsFrame->sizePolicy().hasHeightForWidth());
        accidentalsFrame->setSizePolicy(sizePolicy);
        accidentalsFrame->setFrameShape(QFrame::StyledPanel);
        accidentalsFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(accidentalsFrame);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName("clearButton");

        hboxLayout->addWidget(clearButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName("addButton");

        hboxLayout->addWidget(addButton);


        verticalLayout->addLayout(hboxLayout);

        splitter->addWidget(groupBox);

        verticalLayout_1->addWidget(splitter);


        retranslateUi(KeyEdit);

        QMetaObject::connectSlotsByName(KeyEdit);
    } // setupUi

    void retranslateUi(QWidget *KeyEdit)
    {
        KeyEdit->setWindowTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("KeyEdit", "Create key signature", nullptr));
        clearButton->setText(QCoreApplication::translate("KeyEdit", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        addButton->setToolTip(QCoreApplication::translate("KeyEdit", "Add time signature to master palette", nullptr));
#endif // QT_CONFIG(tooltip)
        addButton->setText(QCoreApplication::translate("KeyEdit", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyEdit: public Ui_KeyEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYEDIT_H
