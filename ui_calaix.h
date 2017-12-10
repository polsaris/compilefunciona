/********************************************************************************
** Form generated from reading UI file 'calaix.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALAIX_H
#define UI_CALAIX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calaix
{
public:
    QPushButton *tanca;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *p_3;
    QToolButton *p_4;
    QPushButton *cronometre;
    QPushButton *calculadora;

    void setupUi(QWidget *calaix)
    {
        if (calaix->objectName().isEmpty())
            calaix->setObjectName(QString::fromUtf8("calaix"));
        calaix->resize(480, 320);
        tanca = new QPushButton(calaix);
        tanca->setObjectName(QString::fromUtf8("tanca"));
        tanca->setGeometry(QRect(150, 50, 171, 51));
        layoutWidget = new QWidget(calaix);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 110, 171, 151));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        p_3 = new QToolButton(layoutWidget);
        p_3->setObjectName(QString::fromUtf8("p_3"));

        horizontalLayout->addWidget(p_3);

        p_4 = new QToolButton(layoutWidget);
        p_4->setObjectName(QString::fromUtf8("p_4"));

        horizontalLayout->addWidget(p_4);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout);

        cronometre = new QPushButton(layoutWidget);
        cronometre->setObjectName(QString::fromUtf8("cronometre"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, cronometre);

        calculadora = new QPushButton(layoutWidget);
        calculadora->setObjectName(QString::fromUtf8("calculadora"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, calculadora);


        retranslateUi(calaix);

        QMetaObject::connectSlotsByName(calaix);
    } // setupUi

    void retranslateUi(QWidget *calaix)
    {
        calaix->setWindowTitle(QApplication::translate("calaix", "calaix", 0, QApplication::UnicodeUTF8));
        tanca->setText(QApplication::translate("calaix", "Tanca", 0, QApplication::UnicodeUTF8));
        p_3->setText(QApplication::translate("calaix", "p_3", 0, QApplication::UnicodeUTF8));
        p_4->setText(QApplication::translate("calaix", "p_4", 0, QApplication::UnicodeUTF8));
        cronometre->setText(QApplication::translate("calaix", "cron\303\262metre", 0, QApplication::UnicodeUTF8));
        calculadora->setText(QApplication::translate("calaix", "calaculadora", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class calaix: public Ui_calaix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALAIX_H
