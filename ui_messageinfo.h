/********************************************************************************
** Form generated from reading UI file 'messageinfo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEINFO_H
#define UI_MESSAGEINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageInfo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *SMSLayout;
    QLabel *lRecievedTime;
    QLabel *label;
    QLabel *lPhoneNumber;
    QLabel *label_2;
    QTextEdit *message;

    void setupUi(QWidget *MessageInfo)
    {
        if (MessageInfo->objectName().isEmpty())
            MessageInfo->setObjectName(QString::fromUtf8("MessageInfo"));
        MessageInfo->resize(320, 240);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MessageInfo->sizePolicy().hasHeightForWidth());
        MessageInfo->setSizePolicy(sizePolicy);
        MessageInfo->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(MessageInfo);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 10, 301, 224));
        SMSLayout = new QGridLayout(gridLayoutWidget);
        SMSLayout->setObjectName(QString::fromUtf8("SMSLayout"));
        SMSLayout->setSizeConstraint(QLayout::SetFixedSize);
        SMSLayout->setVerticalSpacing(6);
        SMSLayout->setContentsMargins(6, 6, 6, 6);
        lRecievedTime = new QLabel(gridLayoutWidget);
        lRecievedTime->setObjectName(QString::fromUtf8("lRecievedTime"));
        sizePolicy.setHeightForWidth(lRecievedTime->sizePolicy().hasHeightForWidth());
        lRecievedTime->setSizePolicy(sizePolicy);
        lRecievedTime->setMinimumSize(QSize(100, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Droid Sans [unknown]"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lRecievedTime->setFont(font);
        lRecievedTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        SMSLayout->addWidget(lRecievedTime, 1, 2, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        SMSLayout->addWidget(label, 0, 1, 1, 1);

        lPhoneNumber = new QLabel(gridLayoutWidget);
        lPhoneNumber->setObjectName(QString::fromUtf8("lPhoneNumber"));
        sizePolicy.setHeightForWidth(lPhoneNumber->sizePolicy().hasHeightForWidth());
        lPhoneNumber->setSizePolicy(sizePolicy);
        lPhoneNumber->setFont(font);

        SMSLayout->addWidget(lPhoneNumber, 0, 2, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        SMSLayout->addWidget(label_2, 1, 1, 1, 1);

        message = new QTextEdit(gridLayoutWidget);
        message->setObjectName(QString::fromUtf8("message"));
        sizePolicy.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy);
        message->setMinimumSize(QSize(289, 148));
        message->setMaximumSize(QSize(289, 148));
        message->setFont(font);
        message->setReadOnly(true);

        SMSLayout->addWidget(message, 2, 1, 1, 3);


        retranslateUi(MessageInfo);

        QMetaObject::connectSlotsByName(MessageInfo);
    } // setupUi

    void retranslateUi(QWidget *MessageInfo)
    {
        MessageInfo->setWindowTitle(QApplication::translate("MessageInfo", "Form", 0, QApplication::UnicodeUTF8));
        lRecievedTime->setText(QString());
        label->setText(QApplication::translate("MessageInfo", "From       : ", 0, QApplication::UnicodeUTF8));
        lPhoneNumber->setText(QString());
        label_2->setText(QApplication::translate("MessageInfo", "Received : ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MessageInfo: public Ui_MessageInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEINFO_H
