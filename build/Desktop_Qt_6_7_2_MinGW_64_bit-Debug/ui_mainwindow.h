/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *PassComp;
    QSlider *PassLengthSlider;
    QPushButton *CopyButton;
    QWidget *excludeChar;
    QLabel *label_11;
    QCheckBox *checkBox_29;
    QCheckBox *checkBox_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QCheckBox *checkBox_31;
    QCheckBox *checkBox_32;
    QLabel *label_35;
    QCheckBox *checkBox_33;
    QLabel *label_36;
    QCheckBox *checkBox_34;
    QLabel *label_37;
    QCheckBox *checkBox_35;
    QLabel *label_38;
    QLabel *label_39;
    QCheckBox *checkBox_36;
    QCheckBox *checkBox_37;
    QLabel *label_40;
    QLabel *label_41;
    QCheckBox *checkBox_38;
    QCheckBox *checkBox_39;
    QLabel *label_42;
    QLabel *label_43;
    QCheckBox *checkBox_40;
    QLabel *label_44;
    QCheckBox *checkBox_41;
    QCheckBox *checkBox_42;
    QLabel *label_45;
    QLabel *label_46;
    QCheckBox *checkBox_43;
    QLabel *label_47;
    QCheckBox *checkBox_44;
    QLabel *label_48;
    QCheckBox *checkBox_45;
    QLabel *label_49;
    QCheckBox *checkBox_46;
    QCheckBox *checkBox_47;
    QLabel *label_50;
    QCheckBox *checkBox_48;
    QLabel *label_51;
    QCheckBox *checkBox_49;
    QCheckBox *checkBox_50;
    QLabel *label_52;
    QLabel *label_53;
    QCheckBox *checkBox_51;
    QLabel *label_54;
    QCheckBox *checkBox_52;
    QLabel *label_55;
    QCheckBox *checkBox_53;
    QLabel *label_56;
    QCheckBox *checkBox_54;
    QLabel *label_57;
    QCheckBox *checkBox_55;
    QLabel *label_58;
    QCheckBox *checkBox_56;
    QLabel *PassLengthLabel;
    QLabel *PassCompLabel;
    QPushButton *GenPass;
    QSlider *PassCompSlider;
    QLineEdit *PassLength;
    QLineEdit *GenPassText;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(735, 331);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        PassComp = new QLineEdit(centralwidget);
        PassComp->setObjectName("PassComp");
        PassComp->setGeometry(QRect(229, 30, 171, 75));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic Medium")});
        font.setPointSize(20);
        font.setKerning(false);
        PassComp->setFont(font);
        PassComp->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PassComp->setReadOnly(true);
        PassLengthSlider = new QSlider(centralwidget);
        PassLengthSlider->setObjectName("PassLengthSlider");
        PassLengthSlider->setGeometry(QRect(20, 110, 161, 20));
        QFont font1;
        font1.setPointSize(1);
        PassLengthSlider->setFont(font1);
        PassLengthSlider->setMinimum(1);
        PassLengthSlider->setMaximum(64);
        PassLengthSlider->setOrientation(Qt::Orientation::Horizontal);
        CopyButton = new QPushButton(centralwidget);
        CopyButton->setObjectName("CopyButton");
        CopyButton->setGeometry(QRect(600, 220, 111, 101));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font2.setPointSize(16);
        CopyButton->setFont(font2);
        excludeChar = new QWidget(centralwidget);
        excludeChar->setObjectName("excludeChar");
        excludeChar->setGeometry(QRect(20, 130, 691, 81));
        QFont font3;
        font3.setPointSize(12);
        excludeChar->setFont(font3);
        label_11 = new QLabel(excludeChar);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(270, 0, 141, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Yu Gothic Medium")});
        font4.setPointSize(12);
        font4.setBold(true);
        label_11->setFont(font4);
        checkBox_29 = new QCheckBox(excludeChar);
        checkBox_29->setObjectName("checkBox_29");
        checkBox_29->setGeometry(QRect(10, 20, 16, 22));
        checkBox_29->setText(QString::fromUtf8("&"));
        checkBox_30 = new QCheckBox(excludeChar);
        checkBox_30->setObjectName("checkBox_30");
        checkBox_30->setGeometry(QRect(80, 20, 16, 22));
        checkBox_30->setText(QString::fromUtf8("&"));
        label_31 = new QLabel(excludeChar);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(30, 20, 16, 16));
        label_32 = new QLabel(excludeChar);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(100, 20, 16, 16));
        label_33 = new QLabel(excludeChar);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(170, 10, 16, 31));
        label_34 = new QLabel(excludeChar);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(240, 20, 16, 16));
        checkBox_31 = new QCheckBox(excludeChar);
        checkBox_31->setObjectName("checkBox_31");
        checkBox_31->setGeometry(QRect(150, 20, 16, 22));
        checkBox_31->setText(QString::fromUtf8("&"));
        checkBox_32 = new QCheckBox(excludeChar);
        checkBox_32->setObjectName("checkBox_32");
        checkBox_32->setGeometry(QRect(220, 20, 16, 22));
        checkBox_32->setText(QString::fromUtf8("&"));
        label_35 = new QLabel(excludeChar);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(310, 10, 16, 31));
        checkBox_33 = new QCheckBox(excludeChar);
        checkBox_33->setObjectName("checkBox_33");
        checkBox_33->setGeometry(QRect(290, 20, 16, 22));
        label_36 = new QLabel(excludeChar);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(380, 10, 16, 31));
        checkBox_34 = new QCheckBox(excludeChar);
        checkBox_34->setObjectName("checkBox_34");
        checkBox_34->setGeometry(QRect(360, 20, 16, 22));
        QFont font5;
        font5.setPointSize(20);
        checkBox_34->setFont(font5);
        label_37 = new QLabel(excludeChar);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(440, 10, 16, 31));
        checkBox_35 = new QCheckBox(excludeChar);
        checkBox_35->setObjectName("checkBox_35");
        checkBox_35->setGeometry(QRect(420, 20, 16, 22));
        checkBox_35->setText(QString::fromUtf8("&"));
        label_38 = new QLabel(excludeChar);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(510, 10, 16, 31));
        label_39 = new QLabel(excludeChar);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(570, 10, 16, 31));
        checkBox_36 = new QCheckBox(excludeChar);
        checkBox_36->setObjectName("checkBox_36");
        checkBox_36->setGeometry(QRect(490, 20, 16, 22));
        checkBox_36->setText(QString::fromUtf8("&"));
        checkBox_37 = new QCheckBox(excludeChar);
        checkBox_37->setObjectName("checkBox_37");
        checkBox_37->setGeometry(QRect(550, 20, 16, 22));
        checkBox_37->setText(QString::fromUtf8("&"));
        label_40 = new QLabel(excludeChar);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(30, 30, 16, 31));
        label_41 = new QLabel(excludeChar);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(100, 30, 16, 31));
        checkBox_38 = new QCheckBox(excludeChar);
        checkBox_38->setObjectName("checkBox_38");
        checkBox_38->setGeometry(QRect(610, 20, 16, 22));
        checkBox_38->setText(QString::fromUtf8("&"));
        checkBox_39 = new QCheckBox(excludeChar);
        checkBox_39->setObjectName("checkBox_39");
        checkBox_39->setGeometry(QRect(10, 40, 16, 22));
        checkBox_39->setText(QString::fromUtf8("&"));
        label_42 = new QLabel(excludeChar);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(170, 30, 16, 31));
        label_43 = new QLabel(excludeChar);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(240, 30, 16, 31));
        checkBox_40 = new QCheckBox(excludeChar);
        checkBox_40->setObjectName("checkBox_40");
        checkBox_40->setGeometry(QRect(80, 40, 16, 22));
        checkBox_40->setText(QString::fromUtf8("&"));
        label_44 = new QLabel(excludeChar);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(310, 30, 21, 51));
        checkBox_41 = new QCheckBox(excludeChar);
        checkBox_41->setObjectName("checkBox_41");
        checkBox_41->setGeometry(QRect(150, 40, 16, 22));
        checkBox_41->setText(QString::fromUtf8("&"));
        checkBox_42 = new QCheckBox(excludeChar);
        checkBox_42->setObjectName("checkBox_42");
        checkBox_42->setGeometry(QRect(220, 40, 16, 22));
        checkBox_42->setText(QString::fromUtf8("&"));
        label_45 = new QLabel(excludeChar);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(380, 30, 16, 31));
        label_46 = new QLabel(excludeChar);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(440, 30, 16, 31));
        checkBox_43 = new QCheckBox(excludeChar);
        checkBox_43->setObjectName("checkBox_43");
        checkBox_43->setGeometry(QRect(290, 40, 16, 22));
        checkBox_43->setText(QString::fromUtf8("&"));
        label_47 = new QLabel(excludeChar);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(510, 30, 21, 31));
        checkBox_44 = new QCheckBox(excludeChar);
        checkBox_44->setObjectName("checkBox_44");
        checkBox_44->setGeometry(QRect(360, 40, 16, 22));
        checkBox_44->setText(QString::fromUtf8("&"));
        label_48 = new QLabel(excludeChar);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(570, 40, 16, 21));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Yu Gothic Medium")});
        font6.setPointSize(12);
        font6.setBold(false);
        label_48->setFont(font6);
        checkBox_45 = new QCheckBox(excludeChar);
        checkBox_45->setObjectName("checkBox_45");
        checkBox_45->setGeometry(QRect(420, 40, 16, 22));
        checkBox_45->setText(QString::fromUtf8("&"));
        label_49 = new QLabel(excludeChar);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(630, 20, 16, 41));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Yu Gothic Medium")});
        font7.setPointSize(23);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setKerning(false);
        label_49->setFont(font7);
        checkBox_46 = new QCheckBox(excludeChar);
        checkBox_46->setObjectName("checkBox_46");
        checkBox_46->setGeometry(QRect(490, 40, 16, 22));
        checkBox_46->setText(QString::fromUtf8("&"));
        checkBox_47 = new QCheckBox(excludeChar);
        checkBox_47->setObjectName("checkBox_47");
        checkBox_47->setGeometry(QRect(550, 40, 16, 22));
        checkBox_47->setText(QString::fromUtf8("&"));
        label_50 = new QLabel(excludeChar);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(630, 40, 16, 21));
        label_50->setFont(font6);
        checkBox_48 = new QCheckBox(excludeChar);
        checkBox_48->setObjectName("checkBox_48");
        checkBox_48->setGeometry(QRect(610, 40, 16, 22));
        checkBox_48->setText(QString::fromUtf8("&"));
        label_51 = new QLabel(excludeChar);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(100, 50, 16, 31));
        checkBox_49 = new QCheckBox(excludeChar);
        checkBox_49->setObjectName("checkBox_49");
        checkBox_49->setGeometry(QRect(80, 60, 16, 22));
        checkBox_49->setText(QString::fromUtf8("&"));
        checkBox_50 = new QCheckBox(excludeChar);
        checkBox_50->setObjectName("checkBox_50");
        checkBox_50->setGeometry(QRect(150, 60, 16, 22));
        checkBox_50->setText(QString::fromUtf8("&"));
        label_52 = new QLabel(excludeChar);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(170, 50, 16, 31));
        label_53 = new QLabel(excludeChar);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(240, 50, 16, 31));
        checkBox_51 = new QCheckBox(excludeChar);
        checkBox_51->setObjectName("checkBox_51");
        checkBox_51->setGeometry(QRect(220, 60, 16, 22));
        checkBox_51->setText(QString::fromUtf8("&"));
        label_54 = new QLabel(excludeChar);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(310, 50, 16, 31));
        checkBox_52 = new QCheckBox(excludeChar);
        checkBox_52->setObjectName("checkBox_52");
        checkBox_52->setGeometry(QRect(290, 60, 16, 22));
        checkBox_52->setText(QString::fromUtf8("&"));
        label_55 = new QLabel(excludeChar);
        label_55->setObjectName("label_55");
        label_55->setGeometry(QRect(380, 50, 16, 31));
        checkBox_53 = new QCheckBox(excludeChar);
        checkBox_53->setObjectName("checkBox_53");
        checkBox_53->setGeometry(QRect(360, 60, 16, 22));
        checkBox_53->setText(QString::fromUtf8("&"));
        label_56 = new QLabel(excludeChar);
        label_56->setObjectName("label_56");
        label_56->setGeometry(QRect(440, 50, 16, 31));
        checkBox_54 = new QCheckBox(excludeChar);
        checkBox_54->setObjectName("checkBox_54");
        checkBox_54->setGeometry(QRect(420, 60, 16, 22));
        checkBox_54->setText(QString::fromUtf8("&"));
        label_57 = new QLabel(excludeChar);
        label_57->setObjectName("label_57");
        label_57->setGeometry(QRect(510, 50, 16, 31));
        checkBox_55 = new QCheckBox(excludeChar);
        checkBox_55->setObjectName("checkBox_55");
        checkBox_55->setGeometry(QRect(490, 60, 16, 22));
        checkBox_55->setText(QString::fromUtf8("&"));
        label_58 = new QLabel(excludeChar);
        label_58->setObjectName("label_58");
        label_58->setGeometry(QRect(570, 50, 16, 31));
        checkBox_56 = new QCheckBox(excludeChar);
        checkBox_56->setObjectName("checkBox_56");
        checkBox_56->setGeometry(QRect(550, 60, 16, 22));
        checkBox_56->setText(QString::fromUtf8("&"));
        PassLengthLabel = new QLabel(centralwidget);
        PassLengthLabel->setObjectName("PassLengthLabel");
        PassLengthLabel->setGeometry(QRect(0, 10, 201, 20));
        QFont font8;
        font8.setPointSize(5);
        PassLengthLabel->setFont(font8);
        PassLengthLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PassCompLabel = new QLabel(centralwidget);
        PassCompLabel->setObjectName("PassCompLabel");
        PassCompLabel->setGeometry(QRect(210, 10, 211, 20));
        PassCompLabel->setFont(font8);
        PassCompLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        GenPass = new QPushButton(centralwidget);
        GenPass->setObjectName("GenPass");
        GenPass->setGeometry(QRect(450, 30, 261, 75));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font9.setPointSize(20);
        GenPass->setFont(font9);
        PassCompSlider = new QSlider(centralwidget);
        PassCompSlider->setObjectName("PassCompSlider");
        PassCompSlider->setGeometry(QRect(230, 110, 171, 20));
        QFont font10;
        font10.setPointSize(18);
        PassCompSlider->setFont(font10);
        PassCompSlider->setMinimum(1);
        PassCompSlider->setMaximum(3);
        PassCompSlider->setSingleStep(1);
        PassCompSlider->setPageStep(10);
        PassCompSlider->setOrientation(Qt::Orientation::Horizontal);
        PassCompSlider->setInvertedAppearance(false);
        PassLength = new QLineEdit(centralwidget);
        PassLength->setObjectName("PassLength");
        PassLength->setGeometry(QRect(19, 30, 161, 75));
        PassLength->setFont(font);
        PassLength->setAlignment(Qt::AlignmentFlag::AlignCenter);
        PassLength->setReadOnly(true);
        GenPassText = new QLineEdit(centralwidget);
        GenPassText->setObjectName("GenPassText");
        GenPassText->setGeometry(QRect(20, 220, 571, 101));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font11.setPointSize(12);
        GenPassText->setFont(font11);
        GenPassText->setAlignment(Qt::AlignmentFlag::AlignCenter);
        GenPassText->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PassComp->setText(QString());
        CopyButton->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Exclude Symbols:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "&", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "@", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "{ }", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "[ ]", nullptr));
        checkBox_33->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        checkBox_34->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "( )", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "\\", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "|", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "\"\"", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", ";", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "<>", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "~", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "`", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "$", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "!", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "' '", nullptr));
        label_57->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        PassLengthLabel->setText(QCoreApplication::translate("MainWindow", "Password Length: (1-64)", nullptr));
        PassCompLabel->setText(QCoreApplication::translate("MainWindow", "Password Complexity: (1-3)", nullptr));
        GenPass->setText(QCoreApplication::translate("MainWindow", "Generate Password", nullptr));
        PassLength->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
