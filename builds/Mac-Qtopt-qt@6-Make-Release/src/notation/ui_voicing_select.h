/********************************************************************************
** Form generated from reading UI file 'voicing_select.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOICING_SELECT_H
#define UI_VOICING_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoicingSelect
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QComboBox *interpretBox;
    QComboBox *voicingBox;
    QComboBox *durationBox;

    void setupUi(QWidget *VoicingSelect)
    {
        if (VoicingSelect->objectName().isEmpty())
            VoicingSelect->setObjectName(QString::fromUtf8("VoicingSelect"));
        VoicingSelect->resize(221, 72);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VoicingSelect->sizePolicy().hasHeightForWidth());
        VoicingSelect->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(VoicingSelect);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(VoicingSelect);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_2 = new QLabel(VoicingSelect);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(VoicingSelect);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        interpretBox = new QComboBox(VoicingSelect);
        interpretBox->addItem(QString());
        interpretBox->addItem(QString());
        interpretBox->setObjectName(QString::fromUtf8("interpretBox"));

        gridLayout->addWidget(interpretBox, 0, 1, 1, 1);

        voicingBox = new QComboBox(VoicingSelect);
        voicingBox->addItem(QString());
        voicingBox->addItem(QString());
        voicingBox->addItem(QString());
        voicingBox->addItem(QString());
        voicingBox->addItem(QString());
        voicingBox->addItem(QString());
        voicingBox->addItem(QString());
        voicingBox->setObjectName(QString::fromUtf8("voicingBox"));

        gridLayout->addWidget(voicingBox, 2, 1, 1, 1);

        durationBox = new QComboBox(VoicingSelect);
        durationBox->addItem(QString());
        durationBox->addItem(QString());
        durationBox->addItem(QString());
        durationBox->setObjectName(QString::fromUtf8("durationBox"));

        gridLayout->addWidget(durationBox, 4, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(durationBox);
        label_2->setBuddy(interpretBox);
        label->setBuddy(voicingBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(VoicingSelect);

        interpretBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(VoicingSelect);
    } // setupUi

    void retranslateUi(QWidget *VoicingSelect)
    {
        label_3->setText(QCoreApplication::translate("VoicingSelect", "Duration:", nullptr));
        label_2->setText(QCoreApplication::translate("VoicingSelect", "Interpretation:", nullptr));
        label->setText(QCoreApplication::translate("VoicingSelect", "Voicing:", nullptr));
        interpretBox->setItemText(0, QCoreApplication::translate("VoicingSelect", "Jazz", nullptr));
        interpretBox->setItemText(1, QCoreApplication::translate("VoicingSelect", "Literal", nullptr));

        voicingBox->setItemText(0, QCoreApplication::translate("VoicingSelect", "Auto", nullptr));
        voicingBox->setItemText(1, QCoreApplication::translate("VoicingSelect", "Root only", nullptr));
        voicingBox->setItemText(2, QCoreApplication::translate("VoicingSelect", "Close", nullptr));
        voicingBox->setItemText(3, QCoreApplication::translate("VoicingSelect", "Drop two", nullptr));
        voicingBox->setItemText(4, QCoreApplication::translate("VoicingSelect", "Six note", nullptr));
        voicingBox->setItemText(5, QCoreApplication::translate("VoicingSelect", "Four note", nullptr));
        voicingBox->setItemText(6, QCoreApplication::translate("VoicingSelect", "Three note", nullptr));

        durationBox->setItemText(0, QCoreApplication::translate("VoicingSelect", "Until next chord symbol", nullptr));
        durationBox->setItemText(1, QCoreApplication::translate("VoicingSelect", "Until measure end", nullptr));
        durationBox->setItemText(2, QCoreApplication::translate("VoicingSelect", "Chord/rest duration", nullptr));

        (void)VoicingSelect;
    } // retranslateUi

};

namespace Ui {
    class VoicingSelect: public Ui_VoicingSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOICING_SELECT_H
