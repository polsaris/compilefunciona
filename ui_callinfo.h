/********************************************************************************
** Form generated from reading UI file 'callinfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLINFO_H
#define UI_CALLINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CallInfo
{
public:
    QLabel *lIncomingCall;
    QLabel *lRecievedTime;
    QLabel *label_2;
    QLabel *lPhoneNumber;
    QLabel *label;

    void setupUi(QWidget *CallInfo)
    {
        if (CallInfo->objectName().isEmpty())
            CallInfo->setObjectName(QString::fromUtf8("CallInfo"));
        CallInfo->resize(320, 240);
        lIncomingCall = new QLabel(CallInfo);
        lIncomingCall->setObjectName(QString::fromUtf8("lIncomingCall"));
        lIncomingCall->setGeometry(QRect(80, 80, 171, 19));
        QFont font;
        font.setFamily(QString::fromUtf8("Droid Sans [unknown]"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lIncomingCall->setFont(font);
        lRecievedTime = new QLabel(CallInfo);
        lRecievedTime->setObjectName(QString::fromUtf8("lRecievedTime"));
        lRecievedTime->setGeometry(QRect(50, 110, 251, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lRecievedTime->sizePolicy().hasHeightForWidth());
        lRecievedTime->setSizePolicy(sizePolicy);
        lRecievedTime->setMinimumSize(QSize(100, 30));
        lRecievedTime->setFont(font);
        lRecievedTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(CallInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 80, 101, 19));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        lPhoneNumber = new QLabel(CallInfo);
        lPhoneNumber->setObjectName(QString::fromUtf8("lPhoneNumber"));
        lPhoneNumber->setGeometry(QRect(140, 40, 151, 19));
        sizePolicy.setHeightForWidth(lPhoneNumber->sizePolicy().hasHeightForWidth());
        lPhoneNumber->setSizePolicy(sizePolicy);
        lPhoneNumber->setFont(font);
        label = new QLabel(CallInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 71, 19));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        retranslateUi(CallInfo);

        QMetaObject::connectSlotsByName(CallInfo);
    } // setupUi

    void retranslateUi(QWidget *CallInfo)
    {
        CallInfo->setWindowTitle(QApplication::translate("CallInfo", "Form", 0, QApplication::UnicodeUTF8));
        lIncomingCall->setText(QApplication::translate("CallInfo", "INCOMING CALL", 0, QApplication::UnicodeUTF8));
        lRecievedTime->setText(QString());
        label_2->setText(QApplication::translate("CallInfo", "Received", 0, QApplication::UnicodeUTF8));
        lPhoneNumber->setText(QString());
        label->setText(QApplication::translate("CallInfo", "From : ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CallInfo: public Ui_CallInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLINFO_H
