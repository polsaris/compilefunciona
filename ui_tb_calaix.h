/********************************************************************************
** Form generated from reading UI file 'tb_calaix.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TB_CALAIX_H
#define UI_TB_CALAIX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tb_calaix
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *tb_calaix)
    {
        if (tb_calaix->objectName().isEmpty())
            tb_calaix->setObjectName(QString::fromUtf8("tb_calaix"));
        tb_calaix->resize(480, 320);
        pushButton = new QPushButton(tb_calaix);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 250, 40, 30));

        retranslateUi(tb_calaix);

        QMetaObject::connectSlotsByName(tb_calaix);
    } // setupUi

    void retranslateUi(QWidget *tb_calaix)
    {
        tb_calaix->setWindowTitle(QApplication::translate("tb_calaix", "tb_calaix", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("tb_calaix", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tb_calaix: public Ui_tb_calaix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TB_CALAIX_H
