/********************************************************************************
** Form generated from reading UI file 'stafftextpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFTEXTPROPERTIESDIALOG_H
#define UI_STAFFTEXTPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaffTextPropertiesDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabSwingSettings;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *setSwingBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_15;
    QLabel *SwingLabel;
    QRadioButton *swingOff;
    QRadioButton *swingEighth;
    QRadioButton *swingSixteenth;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
    QSpinBox *swingBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StaffTextPropertiesDialog)
    {
        if (StaffTextPropertiesDialog->objectName().isEmpty())
            StaffTextPropertiesDialog->setObjectName("StaffTextPropertiesDialog");
        StaffTextPropertiesDialog->resize(954, 588);
        StaffTextPropertiesDialog->setWindowTitle(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(StaffTextPropertiesDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tabWidget = new QTabWidget(StaffTextPropertiesDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabSwingSettings = new QWidget();
        tabSwingSettings->setObjectName("tabSwingSettings");
        verticalLayout_4 = new QVBoxLayout(tabSwingSettings);
        verticalLayout_4->setObjectName("verticalLayout_4");
        setSwingBox = new QGroupBox(tabSwingSettings);
        setSwingBox->setObjectName("setSwingBox");
        setSwingBox->setCheckable(true);
        setSwingBox->setChecked(false);
        horizontalLayoutWidget = new QWidget(setSwingBox);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 601, 31));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        SwingLabel = new QLabel(horizontalLayoutWidget);
        SwingLabel->setObjectName("SwingLabel");

        horizontalLayout_15->addWidget(SwingLabel);

        swingOff = new QRadioButton(horizontalLayoutWidget);
        swingOff->setObjectName("swingOff");
        swingOff->setEnabled(true);
        swingOff->setChecked(false);

        horizontalLayout_15->addWidget(swingOff);

        swingEighth = new QRadioButton(horizontalLayoutWidget);
        swingEighth->setObjectName("swingEighth");
        swingEighth->setEnabled(true);
        swingEighth->setChecked(true);

        horizontalLayout_15->addWidget(swingEighth);

        swingSixteenth = new QRadioButton(horizontalLayoutWidget);
        swingSixteenth->setObjectName("swingSixteenth");
        swingSixteenth->setEnabled(true);

        horizontalLayout_15->addWidget(swingSixteenth);

        horizontalLayoutWidget_2 = new QWidget(setSwingBox);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 50, 601, 41));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_2);
        label_12->setObjectName("label_12");

        horizontalLayout_16->addWidget(label_12);

        swingBox = new QSpinBox(horizontalLayoutWidget_2);
        swingBox->setObjectName("swingBox");
        swingBox->setEnabled(true);
        swingBox->setMinimum(25);
        swingBox->setValue(60);

        horizontalLayout_16->addWidget(swingBox);


        verticalLayout_4->addWidget(setSwingBox);

        tabWidget->addTab(tabSwingSettings, QString());

        verticalLayout_3->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(StaffTextPropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        SwingLabel->setBuddy(swingOff);
        label_12->setBuddy(swingBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, setSwingBox);
        QWidget::setTabOrder(setSwingBox, swingOff);
        QWidget::setTabOrder(swingOff, swingEighth);
        QWidget::setTabOrder(swingEighth, swingSixteenth);
        QWidget::setTabOrder(swingSixteenth, swingBox);

        retranslateUi(StaffTextPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StaffTextPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StaffTextPropertiesDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StaffTextPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *StaffTextPropertiesDialog)
    {
        setSwingBox->setTitle(QCoreApplication::translate("StaffTextPropertiesDialog", "Swing settings", nullptr));
        SwingLabel->setText(QCoreApplication::translate("StaffTextPropertiesDialog", "Swing:", nullptr));
        swingOff->setText(QCoreApplication::translate("StaffTextPropertiesDialog", "Off", nullptr));
        swingEighth->setText(QCoreApplication::translate("StaffTextPropertiesDialog", "Eighth note", nullptr));
        swingSixteenth->setText(QCoreApplication::translate("StaffTextPropertiesDialog", "Sixteenth note", nullptr));
        label_12->setText(QCoreApplication::translate("StaffTextPropertiesDialog", "Select swing ratio:", nullptr));
        swingBox->setSuffix(QCoreApplication::translate("StaffTextPropertiesDialog", "%", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSwingSettings), QCoreApplication::translate("StaffTextPropertiesDialog", "Swing settings", nullptr));
        (void)StaffTextPropertiesDialog;
    } // retranslateUi

};

namespace Ui {
    class StaffTextPropertiesDialog: public Ui_StaffTextPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFTEXTPROPERTIESDIALOG_H
