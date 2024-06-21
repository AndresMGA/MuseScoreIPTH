/********************************************************************************
** Form generated from reading UI file 'align_select.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGN_SELECT_H
#define UI_ALIGN_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlignSelect
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *alignLeft;
    QPushButton *alignHCenter;
    QPushButton *alignRight;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *alignTop;
    QPushButton *alignVCenter;
    QPushButton *alignBottom;
    QPushButton *alignBaseline;

    void setupUi(QWidget *AlignSelect)
    {
        if (AlignSelect->objectName().isEmpty())
            AlignSelect->setObjectName(QString::fromUtf8("AlignSelect"));
        AlignSelect->resize(200, 32);
        horizontalLayout = new QHBoxLayout(AlignSelect);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        alignLeft = new QPushButton(AlignSelect);
        alignLeft->setObjectName(QString::fromUtf8("alignLeft"));
        alignLeft->setMinimumSize(QSize(28, 28));
        alignLeft->setMaximumSize(QSize(28, 28));
        alignLeft->setCheckable(true);
        alignLeft->setFlat(true);

        horizontalLayout_4->addWidget(alignLeft);

        alignHCenter = new QPushButton(AlignSelect);
        alignHCenter->setObjectName(QString::fromUtf8("alignHCenter"));
        alignHCenter->setMinimumSize(QSize(28, 28));
        alignHCenter->setMaximumSize(QSize(28, 28));
        alignHCenter->setCheckable(true);
        alignHCenter->setFlat(true);

        horizontalLayout_4->addWidget(alignHCenter);

        alignRight = new QPushButton(AlignSelect);
        alignRight->setObjectName(QString::fromUtf8("alignRight"));
        alignRight->setMinimumSize(QSize(28, 28));
        alignRight->setMaximumSize(QSize(28, 28));
        alignRight->setCheckable(true);
        alignRight->setFlat(true);

        horizontalLayout_4->addWidget(alignRight);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        alignTop = new QPushButton(AlignSelect);
        alignTop->setObjectName(QString::fromUtf8("alignTop"));
        alignTop->setMinimumSize(QSize(28, 28));
        alignTop->setMaximumSize(QSize(28, 28));
        alignTop->setCheckable(true);
        alignTop->setFlat(true);

        horizontalLayout_4->addWidget(alignTop);

        alignVCenter = new QPushButton(AlignSelect);
        alignVCenter->setObjectName(QString::fromUtf8("alignVCenter"));
        alignVCenter->setMinimumSize(QSize(28, 28));
        alignVCenter->setMaximumSize(QSize(28, 28));
        alignVCenter->setCheckable(true);
        alignVCenter->setFlat(true);

        horizontalLayout_4->addWidget(alignVCenter);

        alignBottom = new QPushButton(AlignSelect);
        alignBottom->setObjectName(QString::fromUtf8("alignBottom"));
        alignBottom->setMinimumSize(QSize(28, 28));
        alignBottom->setMaximumSize(QSize(28, 28));
        alignBottom->setCheckable(true);
        alignBottom->setFlat(true);

        horizontalLayout_4->addWidget(alignBottom);

        alignBaseline = new QPushButton(AlignSelect);
        alignBaseline->setObjectName(QString::fromUtf8("alignBaseline"));
        alignBaseline->setMinimumSize(QSize(28, 28));
        alignBaseline->setMaximumSize(QSize(28, 28));
        alignBaseline->setCheckable(true);
        alignBaseline->setFlat(true);

        horizontalLayout_4->addWidget(alignBaseline);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(AlignSelect);

        QMetaObject::connectSlotsByName(AlignSelect);
    } // setupUi

    void retranslateUi(QWidget *AlignSelect)
    {
#if QT_CONFIG(tooltip)
        alignLeft->setToolTip(QCoreApplication::translate("AlignSelect", "Align left edge of text to reference point", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        alignHCenter->setToolTip(QCoreApplication::translate("AlignSelect", "Center text on reference point", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        alignRight->setToolTip(QCoreApplication::translate("AlignSelect", "Align right edge of text to reference point", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        alignTop->setToolTip(QCoreApplication::translate("AlignSelect", "Align top edge of text to reference point", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        alignVCenter->setToolTip(QCoreApplication::translate("AlignSelect", "Center text vertical to reference point", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        alignBottom->setToolTip(QCoreApplication::translate("AlignSelect", "Align bottom edge of text to reference point", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        alignBaseline->setToolTip(QCoreApplication::translate("AlignSelect", "Align baseline of text to reference point", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)AlignSelect;
    } // retranslateUi

};

namespace Ui {
    class AlignSelect: public Ui_AlignSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGN_SELECT_H
