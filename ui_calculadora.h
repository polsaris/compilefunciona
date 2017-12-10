/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculadora
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *tanca_calculadora;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QWidget *calculadora)
    {
        if (calculadora->objectName().isEmpty())
            calculadora->setObjectName(QString::fromUtf8("calculadora"));
        calculadora->resize(480, 320);
        centralWidget = new QWidget(calculadora);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 480, 320));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 241, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel { qproperty-alignment: 'AlignVCenter | AlignRight'; border: 1px solid gray;}\n"
"background-color: white;"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 70, 64, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 70, 64, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 70, 64, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 70, 64, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 70, 64, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 110, 64, 40));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 110, 64, 40));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(190, 110, 64, 40));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(70, 110, 64, 40));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(250, 110, 64, 40));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }"));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 150, 64, 40));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(130, 150, 64, 40));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(190, 150, 64, 40));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(70, 150, 64, 40));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(10, 190, 64, 40));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(130, 190, 64, 40));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(190, 190, 64, 40));
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(70, 190, 64, 41));
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(250, 149, 64, 81));
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }"));
        tanca_calculadora = new QPushButton(centralWidget);
        tanca_calculadora->setObjectName(QString::fromUtf8("tanca_calculadora"));
        tanca_calculadora->setGeometry(QRect(10, 30, 61, 41));
        tanca_calculadora->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(255, 0,0); color: white; border: 1px solid gray; } QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);}"));
        mainToolBar = new QToolBar(calculadora);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 4, 13));
        statusBar = new QStatusBar(calculadora);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 22));

        retranslateUi(calculadora);

        QMetaObject::connectSlotsByName(calculadora);
    } // setupUi

    void retranslateUi(QWidget *calculadora)
    {
        calculadora->setWindowTitle(QApplication::translate("calculadora", "calculadora", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("calculadora", "0", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("calculadora", "7", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("calculadora", "8", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("calculadora", "9", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("calculadora", "+", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("calculadora", "x", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("calculadora", "6", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("calculadora", "4", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("calculadora", "-", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("calculadora", "5", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("calculadora", "/", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("calculadora", "1", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("calculadora", "3", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("calculadora", "^", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("calculadora", "2", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("calculadora", "0", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("calculadora", "C", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("calculadora", "%", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("calculadora", ".", 0, QApplication::UnicodeUTF8));
        pushButton_20->setText(QApplication::translate("calculadora", "=", 0, QApplication::UnicodeUTF8));
        tanca_calculadora->setText(QApplication::translate("calculadora", "X", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class calculadora: public Ui_calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
