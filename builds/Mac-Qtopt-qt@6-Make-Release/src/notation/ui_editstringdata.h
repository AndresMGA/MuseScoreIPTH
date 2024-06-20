/********************************************************************************
** Form generated from reading UI file 'editstringdata.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTRINGDATA_H
#define UI_EDITSTRINGDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditStringDataBase
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *stringList;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *newString;
    QPushButton *editString;
    QPushButton *deleteString;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *numOfFrets;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditStringDataBase)
    {
        if (EditStringDataBase->objectName().isEmpty())
            EditStringDataBase->setObjectName(QString::fromUtf8("EditStringDataBase"));
        horizontalLayout = new QHBoxLayout(EditStringDataBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(EditStringDataBase);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        stringList = new QTableWidget(EditStringDataBase);
        if (stringList->columnCount() < 2)
            stringList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QString::fromUtf8("Always open"));
        stringList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QString::fromUtf8("Pitch"));
        stringList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        stringList->setObjectName(QString::fromUtf8("stringList"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stringList->sizePolicy().hasHeightForWidth());
        stringList->setSizePolicy(sizePolicy);
        stringList->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_2->addWidget(stringList);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        newString = new QPushButton(EditStringDataBase);
        newString->setObjectName(QString::fromUtf8("newString"));

        verticalLayout_3->addWidget(newString);

        editString = new QPushButton(EditStringDataBase);
        editString->setObjectName(QString::fromUtf8("editString"));

        verticalLayout_3->addWidget(editString);

        deleteString = new QPushButton(EditStringDataBase);
        deleteString->setObjectName(QString::fromUtf8("deleteString"));

        verticalLayout_3->addWidget(deleteString);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(EditStringDataBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        numOfFrets = new QSpinBox(EditStringDataBase);
        numOfFrets->setObjectName(QString::fromUtf8("numOfFrets"));
        numOfFrets->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numOfFrets->setMinimum(0);
        numOfFrets->setValue(0);

        horizontalLayout_3->addWidget(numOfFrets);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(EditStringDataBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(numOfFrets);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(stringList, newString);
        QWidget::setTabOrder(newString, editString);
        QWidget::setTabOrder(editString, deleteString);
        QWidget::setTabOrder(deleteString, numOfFrets);

        retranslateUi(EditStringDataBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditStringDataBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditStringDataBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditStringDataBase);
    } // setupUi

    void retranslateUi(QDialog *EditStringDataBase)
    {
        EditStringDataBase->setWindowTitle(QCoreApplication::translate("EditStringDataBase", "String data", nullptr));
        label->setText(QCoreApplication::translate("EditStringDataBase", "Default strings tuning:", nullptr));
        newString->setText(QCoreApplication::translate("EditStringDataBase", "New string\342\200\246", nullptr));
        editString->setText(QCoreApplication::translate("EditStringDataBase", "Edit string\342\200\246", nullptr));
        deleteString->setText(QCoreApplication::translate("EditStringDataBase", "Delete string", nullptr));
        label_2->setText(QCoreApplication::translate("EditStringDataBase", "Number of frets:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStringDataBase: public Ui_EditStringDataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTRINGDATA_H
