/********************************************************************************
** Form generated from reading UI file 'hotkeys.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTKEYS_H
#define UI_HOTKEYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HotKeys
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *HotKeys)
    {
        if (HotKeys->objectName().isEmpty())
            HotKeys->setObjectName(QString::fromUtf8("HotKeys"));
        HotKeys->resize(282, 236);
        pushButton = new QPushButton(HotKeys);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 200, 91, 20));
        lineEdit = new QLineEdit(HotKeys);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 60, 51, 20));
        lineEdit_2 = new QLineEdit(HotKeys);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 90, 51, 20));
        lineEdit_3 = new QLineEdit(HotKeys);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(170, 120, 51, 20));
        lineEdit_4 = new QLineEdit(HotKeys);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(170, 150, 51, 20));
        label = new QLabel(HotKeys);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 60, 51, 16));
        label_2 = new QLabel(HotKeys);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 90, 51, 16));
        label_3 = new QLabel(HotKeys);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 120, 51, 16));
        label_4 = new QLabel(HotKeys);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 150, 51, 16));
        pushButton_2 = new QPushButton(HotKeys);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 200, 91, 20));
        label_5 = new QLabel(HotKeys);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 60, 91, 20));
        label_6 = new QLabel(HotKeys);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 90, 91, 20));
        label_7 = new QLabel(HotKeys);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 120, 91, 20));
        label_8 = new QLabel(HotKeys);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 150, 91, 20));
        label_9 = new QLabel(HotKeys);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(80, 30, 121, 16));

        retranslateUi(HotKeys);

        QMetaObject::connectSlotsByName(HotKeys);
    } // setupUi

    void retranslateUi(QDialog *HotKeys)
    {
        HotKeys->setWindowTitle(QCoreApplication::translate("HotKeys", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HotKeys", "CTRL +", nullptr));
        label_2->setText(QCoreApplication::translate("HotKeys", "CTRL +", nullptr));
        label_3->setText(QCoreApplication::translate("HotKeys", "CTRL +", nullptr));
        label_4->setText(QCoreApplication::translate("HotKeys", "CTRL +", nullptr));
        pushButton  ->    setText(QCoreApplication::translate("HotKeys","Save", nullptr));
        pushButton_2->    setText(QCoreApplication::translate("HotKeys","Exit", nullptr));
        label_5->setText(QCoreApplication::translate("HotKeys","Open file", nullptr));
        label_6->setText(QCoreApplication::translate("HotKeys","Save file", nullptr));
        label_7->setText(QCoreApplication::translate("HotKeys","New file", nullptr));
        label_8->setText(QCoreApplication::translate("HotKeys","Exit", nullptr));
        label_9->setText(QCoreApplication::translate("HotKeys","Enter only one symbol in ENG", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotKeys: public Ui_HotKeys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTKEYS_H
