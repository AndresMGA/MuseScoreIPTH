/********************************************************************************
** Form generated from reading UI file 'font_style_select.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONT_STYLE_SELECT_H
#define UI_FONT_STYLE_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FontStyleSelect
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *bold;
    QPushButton *italic;
    QPushButton *underline;
    QPushButton *strike;

    void setupUi(QWidget *FontStyleSelect)
    {
        if (FontStyleSelect->objectName().isEmpty())
            FontStyleSelect->setObjectName(QString::fromUtf8("FontStyleSelect"));
        FontStyleSelect->resize(88, 32);
        horizontalLayout = new QHBoxLayout(FontStyleSelect);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        bold = new QPushButton(FontStyleSelect);
        bold->setObjectName(QString::fromUtf8("bold"));
        bold->setMinimumSize(QSize(28, 28));
        bold->setMaximumSize(QSize(28, 28));
        bold->setCheckable(true);
        bold->setFlat(true);

        horizontalLayout_2->addWidget(bold);

        italic = new QPushButton(FontStyleSelect);
        italic->setObjectName(QString::fromUtf8("italic"));
        italic->setMinimumSize(QSize(28, 28));
        italic->setMaximumSize(QSize(28, 28));
        italic->setCheckable(true);
        italic->setFlat(true);

        horizontalLayout_2->addWidget(italic);

        underline = new QPushButton(FontStyleSelect);
        underline->setObjectName(QString::fromUtf8("underline"));
        underline->setMinimumSize(QSize(28, 28));
        underline->setMaximumSize(QSize(28, 28));
        underline->setCheckable(true);
        underline->setFlat(true);

        horizontalLayout_2->addWidget(underline);

        strike = new QPushButton(FontStyleSelect);
        strike->setObjectName(QString::fromUtf8("strike"));
        strike->setMinimumSize(QSize(28, 28));
        strike->setMaximumSize(QSize(28, 28));
        strike->setCheckable(true);
        strike->setFlat(true);

        horizontalLayout_2->addWidget(strike);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(FontStyleSelect);

        QMetaObject::connectSlotsByName(FontStyleSelect);
    } // setupUi

    void retranslateUi(QWidget *FontStyleSelect)
    {
#if QT_CONFIG(accessibility)
        bold->setAccessibleName(QCoreApplication::translate("FontStyleSelect", "Bold", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        italic->setAccessibleName(QCoreApplication::translate("FontStyleSelect", "Italic", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        underline->setAccessibleName(QCoreApplication::translate("FontStyleSelect", "Underline", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        strike->setAccessibleName(QCoreApplication::translate("FontStyleSelect", "Strike", nullptr));
#endif // QT_CONFIG(accessibility)
        (void)FontStyleSelect;
    } // retranslateUi

};

namespace Ui {
    class FontStyleSelect: public Ui_FontStyleSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONT_STYLE_SELECT_H
