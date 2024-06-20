/********************************************************************************
** Form generated from reading UI file 'masterpalette.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERPALETTE_H
#define UI_MASTERPALETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasterPalette
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QStackedWidget *stack;

    void setupUi(QWidget *MasterPalette)
    {
        if (MasterPalette->objectName().isEmpty())
            MasterPalette->setObjectName("MasterPalette");
        MasterPalette->resize(878, 407);
        verticalLayout = new QVBoxLayout(MasterPalette);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(MasterPalette);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        treeWidget = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setRootIsDecorated(false);
        treeWidget->setAllColumnsShowFocus(true);
        splitter->addWidget(treeWidget);
        treeWidget->header()->setVisible(false);
        stack = new QStackedWidget(splitter);
        stack->setObjectName("stack");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stack->sizePolicy().hasHeightForWidth());
        stack->setSizePolicy(sizePolicy1);
        splitter->addWidget(stack);

        verticalLayout->addWidget(splitter);


        retranslateUi(MasterPalette);

        QMetaObject::connectSlotsByName(MasterPalette);
    } // setupUi

    void retranslateUi(QWidget *MasterPalette)
    {
        MasterPalette->setWindowTitle(QCoreApplication::translate("MasterPalette", "Master palette", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasterPalette: public Ui_MasterPalette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERPALETTE_H
