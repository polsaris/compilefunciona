/********************************************************************************
** Form generated from reading UI file 'opiwatch.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPIWATCH_H
#define UI_OPIWATCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpiWatch
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *OpiWatch)
    {
        if (OpiWatch->objectName().isEmpty())
            OpiWatch->setObjectName(QString::fromUtf8("OpiWatch"));
        OpiWatch->resize(320, 240);
        OpiWatch->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(OpiWatch);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 190, 99, 27));

        retranslateUi(OpiWatch);

        QMetaObject::connectSlotsByName(OpiWatch);
    } // setupUi

    void retranslateUi(QWidget *OpiWatch)
    {
        OpiWatch->setWindowTitle(QApplication::translate("OpiWatch", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("OpiWatch", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OpiWatch: public Ui_OpiWatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPIWATCH_H
