/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <date_time_edit.h>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *back;
    QPushButton *thingslevel;
    QPushButton *add;
    QTextEdit *textEdit;
    QTextEdit *remarks;
    QLineEdit *name;
    DateTimeEdit *startDT;
    DateTimeEdit *endDT;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(353, 679);
        back = new QPushButton(Dialog);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(8, 10, 81, 31));
        thingslevel = new QPushButton(Dialog);
        thingslevel->setObjectName(QString::fromUtf8("thingslevel"));
        thingslevel->setGeometry(QRect(8, 290, 341, 41));
        add = new QPushButton(Dialog);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(258, 10, 91, 31));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(98, 10, 151, 31));
        remarks = new QTextEdit(Dialog);
        remarks->setObjectName(QString::fromUtf8("remarks"));
        remarks->setGeometry(QRect(8, 350, 341, 241));
        name = new QLineEdit(Dialog);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(10, 50, 341, 71));
        startDT = new DateTimeEdit(Dialog);
        startDT->setObjectName(QString::fromUtf8("startDT"));
        startDT->setGeometry(QRect(10, 150, 341, 41));
        startDT->setEditable(true);
        endDT = new DateTimeEdit(Dialog);
        endDT->setObjectName(QString::fromUtf8("endDT"));
        endDT->setGeometry(QRect(10, 220, 341, 41));
        endDT->setEditable(true);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        back->setText(QCoreApplication::translate("Dialog", "\345\210\240\351\231\244", nullptr));
        thingslevel->setText(QCoreApplication::translate("Dialog", "\344\272\213\344\273\266\345\275\222\347\261\273", nullptr));
        add->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">\346\226\260\345\273\272\344\272\213\351\241\271</span></p></body></html>", nullptr));
        remarks->setPlaceholderText(QCoreApplication::translate("Dialog", "\345\244\207\346\263\250\357\274\232", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("Dialog", "\344\272\213\344\273\266\345\220\215\347\247\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
