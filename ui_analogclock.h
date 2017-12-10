/********************************************************************************
** Form generated from reading UI file 'analogclock.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOGCLOCK_H
#define UI_ANALOGCLOCK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnalogClock
{
public:

    void setupUi(QWidget *AnalogClock)
    {
        if (AnalogClock->objectName().isEmpty())
            AnalogClock->setObjectName(QString::fromUtf8("AnalogClock"));
        AnalogClock->resize(480, 320);
        AnalogClock->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(AnalogClock);

        QMetaObject::connectSlotsByName(AnalogClock);
    } // setupUi

    void retranslateUi(QWidget *AnalogClock)
    {
        AnalogClock->setWindowTitle(QApplication::translate("AnalogClock", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AnalogClock: public Ui_AnalogClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOGCLOCK_H
