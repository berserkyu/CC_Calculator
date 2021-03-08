/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_PI;
    QPushButton *pushButton_E;
    QPushButton *pushButton_P2;
    QPushButton *pushButton_P1;
    QPushButton *pushButton_DEL;
    QPushButton *pushButton_log10;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_SEVEN;
    QPushButton *pushButton_EIGHT;
    QPushButton *pushButton_NINE;
    QPushButton *pushButton_Sqrt;
    QPushButton *pushButton_index;
    QPushButton *pushButton_naturalLog;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_FOUR;
    QPushButton *pushButton_FIVE;
    QPushButton *pushButton_SIX;
    QPushButton *pushButton_JIA;
    QPushButton *pushButton_JIAN;
    QPushButton *pushButton_sine;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_ONE;
    QPushButton *pushButton_TWO;
    QPushButton *pushButton_THREE;
    QPushButton *pushButton_CHENG;
    QPushButton *pushButton_CHU;
    QPushButton *pushButton_cosine;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_DOT;
    QPushButton *pushButton_ZERO;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_DENGYU;
    QPushButton *pushButton_ANS;
    QPushButton *pushButton_tangent;
    QTextBrowser *textBrowser;
    QLabel *Title;
    QSpinBox *precision;
    QLabel *Title_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(668, 432);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(260, 315));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 401, 365));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(260, 81));
        lineEdit->setReadOnly(false);

        verticalLayout_2->addWidget(lineEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_PI = new QPushButton(layoutWidget);
        pushButton_PI->setObjectName(QStringLiteral("pushButton_PI"));
        pushButton_PI->setMinimumSize(QSize(60, 40));
        QPalette palette;
        QBrush brush(QColor(225, 225, 225, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_PI->setPalette(palette);
        pushButton_PI->setStyleSheet(QStringLiteral("background-color:  rgb(225, 225, 225)"));

        horizontalLayout->addWidget(pushButton_PI);

        pushButton_E = new QPushButton(layoutWidget);
        pushButton_E->setObjectName(QStringLiteral("pushButton_E"));
        pushButton_E->setMinimumSize(QSize(60, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_E->setPalette(palette1);
        pushButton_E->setStyleSheet(QStringLiteral("background-color:  rgb(225, 225, 225)"));

        horizontalLayout->addWidget(pushButton_E);

        pushButton_P2 = new QPushButton(layoutWidget);
        pushButton_P2->setObjectName(QStringLiteral("pushButton_P2"));
        pushButton_P2->setMinimumSize(QSize(60, 40));
        pushButton_P2->setAutoFillBackground(false);
        pushButton_P2->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout->addWidget(pushButton_P2);

        pushButton_P1 = new QPushButton(layoutWidget);
        pushButton_P1->setObjectName(QStringLiteral("pushButton_P1"));
        pushButton_P1->setMinimumSize(QSize(60, 40));
        pushButton_P1->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout->addWidget(pushButton_P1);

        pushButton_DEL = new QPushButton(layoutWidget);
        pushButton_DEL->setObjectName(QStringLiteral("pushButton_DEL"));
        pushButton_DEL->setMinimumSize(QSize(60, 40));
        pushButton_DEL->setMaximumSize(QSize(180, 120));
        pushButton_DEL->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout->addWidget(pushButton_DEL);

        pushButton_log10 = new QPushButton(layoutWidget);
        pushButton_log10->setObjectName(QStringLiteral("pushButton_log10"));
        pushButton_log10->setMinimumSize(QSize(60, 40));
        pushButton_log10->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout->addWidget(pushButton_log10);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_SEVEN = new QPushButton(layoutWidget);
        pushButton_SEVEN->setObjectName(QStringLiteral("pushButton_SEVEN"));
        pushButton_SEVEN->setMinimumSize(QSize(60, 40));
        pushButton_SEVEN->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(pushButton_SEVEN);

        pushButton_EIGHT = new QPushButton(layoutWidget);
        pushButton_EIGHT->setObjectName(QStringLiteral("pushButton_EIGHT"));
        pushButton_EIGHT->setMinimumSize(QSize(60, 40));
        pushButton_EIGHT->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(pushButton_EIGHT);

        pushButton_NINE = new QPushButton(layoutWidget);
        pushButton_NINE->setObjectName(QStringLiteral("pushButton_NINE"));
        pushButton_NINE->setMinimumSize(QSize(60, 40));
        pushButton_NINE->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(pushButton_NINE);

        pushButton_Sqrt = new QPushButton(layoutWidget);
        pushButton_Sqrt->setObjectName(QStringLiteral("pushButton_Sqrt"));
        pushButton_Sqrt->setMinimumSize(QSize(60, 40));
        pushButton_Sqrt->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_2->addWidget(pushButton_Sqrt);

        pushButton_index = new QPushButton(layoutWidget);
        pushButton_index->setObjectName(QStringLiteral("pushButton_index"));
        pushButton_index->setMinimumSize(QSize(60, 40));
        pushButton_index->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_2->addWidget(pushButton_index);

        pushButton_naturalLog = new QPushButton(layoutWidget);
        pushButton_naturalLog->setObjectName(QStringLiteral("pushButton_naturalLog"));
        pushButton_naturalLog->setMinimumSize(QSize(60, 40));
        pushButton_naturalLog->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_2->addWidget(pushButton_naturalLog);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_FOUR = new QPushButton(layoutWidget);
        pushButton_FOUR->setObjectName(QStringLiteral("pushButton_FOUR"));
        pushButton_FOUR->setMinimumSize(QSize(60, 40));
        pushButton_FOUR->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(pushButton_FOUR);

        pushButton_FIVE = new QPushButton(layoutWidget);
        pushButton_FIVE->setObjectName(QStringLiteral("pushButton_FIVE"));
        pushButton_FIVE->setMinimumSize(QSize(60, 40));
        pushButton_FIVE->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(pushButton_FIVE);

        pushButton_SIX = new QPushButton(layoutWidget);
        pushButton_SIX->setObjectName(QStringLiteral("pushButton_SIX"));
        pushButton_SIX->setMinimumSize(QSize(60, 40));
        pushButton_SIX->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(pushButton_SIX);

        pushButton_JIA = new QPushButton(layoutWidget);
        pushButton_JIA->setObjectName(QStringLiteral("pushButton_JIA"));
        pushButton_JIA->setMinimumSize(QSize(60, 40));
        pushButton_JIA->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_3->addWidget(pushButton_JIA);

        pushButton_JIAN = new QPushButton(layoutWidget);
        pushButton_JIAN->setObjectName(QStringLiteral("pushButton_JIAN"));
        pushButton_JIAN->setMinimumSize(QSize(60, 40));
        pushButton_JIAN->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_3->addWidget(pushButton_JIAN);

        pushButton_sine = new QPushButton(layoutWidget);
        pushButton_sine->setObjectName(QStringLiteral("pushButton_sine"));
        pushButton_sine->setMinimumSize(QSize(60, 40));
        pushButton_sine->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_3->addWidget(pushButton_sine);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_ONE = new QPushButton(layoutWidget);
        pushButton_ONE->setObjectName(QStringLiteral("pushButton_ONE"));
        pushButton_ONE->setMinimumSize(QSize(60, 40));
        pushButton_ONE->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(pushButton_ONE);

        pushButton_TWO = new QPushButton(layoutWidget);
        pushButton_TWO->setObjectName(QStringLiteral("pushButton_TWO"));
        pushButton_TWO->setMinimumSize(QSize(60, 40));
        pushButton_TWO->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(pushButton_TWO);

        pushButton_THREE = new QPushButton(layoutWidget);
        pushButton_THREE->setObjectName(QStringLiteral("pushButton_THREE"));
        pushButton_THREE->setMinimumSize(QSize(60, 40));
        pushButton_THREE->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(pushButton_THREE);

        pushButton_CHENG = new QPushButton(layoutWidget);
        pushButton_CHENG->setObjectName(QStringLiteral("pushButton_CHENG"));
        pushButton_CHENG->setMinimumSize(QSize(60, 40));
        pushButton_CHENG->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_4->addWidget(pushButton_CHENG);

        pushButton_CHU = new QPushButton(layoutWidget);
        pushButton_CHU->setObjectName(QStringLiteral("pushButton_CHU"));
        pushButton_CHU->setMinimumSize(QSize(60, 40));
        pushButton_CHU->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_4->addWidget(pushButton_CHU);

        pushButton_cosine = new QPushButton(layoutWidget);
        pushButton_cosine->setObjectName(QStringLiteral("pushButton_cosine"));
        pushButton_cosine->setMinimumSize(QSize(60, 40));
        pushButton_cosine->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_4->addWidget(pushButton_cosine);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_DOT = new QPushButton(layoutWidget);
        pushButton_DOT->setObjectName(QStringLiteral("pushButton_DOT"));
        pushButton_DOT->setMinimumSize(QSize(60, 40));
        pushButton_DOT->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(pushButton_DOT);

        pushButton_ZERO = new QPushButton(layoutWidget);
        pushButton_ZERO->setObjectName(QStringLiteral("pushButton_ZERO"));
        pushButton_ZERO->setMinimumSize(QSize(60, 40));
        pushButton_ZERO->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(pushButton_ZERO);

        pushButton_AC = new QPushButton(layoutWidget);
        pushButton_AC->setObjectName(QStringLiteral("pushButton_AC"));
        pushButton_AC->setMinimumSize(QSize(60, 40));
        pushButton_AC->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(pushButton_AC);

        pushButton_DENGYU = new QPushButton(layoutWidget);
        pushButton_DENGYU->setObjectName(QStringLiteral("pushButton_DENGYU"));
        pushButton_DENGYU->setMinimumSize(QSize(60, 40));
        pushButton_DENGYU->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255)"));

        horizontalLayout_5->addWidget(pushButton_DENGYU);

        pushButton_ANS = new QPushButton(layoutWidget);
        pushButton_ANS->setObjectName(QStringLiteral("pushButton_ANS"));
        pushButton_ANS->setMinimumSize(QSize(60, 40));
        pushButton_ANS->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_5->addWidget(pushButton_ANS);

        pushButton_tangent = new QPushButton(layoutWidget);
        pushButton_tangent->setObjectName(QStringLiteral("pushButton_tangent"));
        pushButton_tangent->setMinimumSize(QSize(60, 40));
        pushButton_tangent->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_5->addWidget(pushButton_tangent);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(420, 60, 240, 311));
        textBrowser->setLayoutDirection(Qt::RightToLeft);
        textBrowser->setAutoFillBackground(false);
        textBrowser->setStyleSheet(QStringLiteral(""));
        Title = new QLabel(Widget);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(10, 10, 171, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        Title->setFont(font);
        precision = new QSpinBox(Widget);
        precision->setObjectName(QStringLiteral("precision"));
        precision->setGeometry(QRect(620, 400, 42, 22));
        precision->setMaximum(6);
        Title_2 = new QLabel(Widget);
        Title_2->setObjectName(QStringLiteral("Title_2"));
        Title_2->setGeometry(QRect(500, 390, 111, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(9);
        Title_2->setFont(font1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton_PI->setText(QApplication::translate("Widget", "\360\235\233\221", Q_NULLPTR));
        pushButton_E->setText(QApplication::translate("Widget", "e", Q_NULLPTR));
        pushButton_P2->setText(QApplication::translate("Widget", "(", Q_NULLPTR));
        pushButton_P1->setText(QApplication::translate("Widget", ")", Q_NULLPTR));
        pushButton_DEL->setText(QApplication::translate("Widget", "<-", Q_NULLPTR));
        pushButton_log10->setText(QApplication::translate("Widget", "log", Q_NULLPTR));
        pushButton_SEVEN->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        pushButton_EIGHT->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        pushButton_NINE->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        pushButton_Sqrt->setText(QApplication::translate("Widget", "\342\210\232", Q_NULLPTR));
        pushButton_index->setText(QApplication::translate("Widget", "^", Q_NULLPTR));
        pushButton_naturalLog->setText(QApplication::translate("Widget", "ln", Q_NULLPTR));
        pushButton_FOUR->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        pushButton_FIVE->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        pushButton_SIX->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        pushButton_JIA->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        pushButton_JIAN->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        pushButton_sine->setText(QApplication::translate("Widget", "sin", Q_NULLPTR));
        pushButton_ONE->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        pushButton_TWO->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        pushButton_THREE->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        pushButton_CHENG->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        pushButton_CHU->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        pushButton_cosine->setText(QApplication::translate("Widget", "cos", Q_NULLPTR));
        pushButton_DOT->setText(QApplication::translate("Widget", ".", Q_NULLPTR));
        pushButton_ZERO->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        pushButton_AC->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        pushButton_DENGYU->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        pushButton_ANS->setText(QApplication::translate("Widget", "ans", Q_NULLPTR));
        pushButton_tangent->setText(QApplication::translate("Widget", "tan", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">\346\263\250\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">1.</span><span style=\" font-size:9pt;\">\345\217\214\347\233\256\346\223\215\344\275\234\347\254\246\344\270\215\345\205\201\350\256\270\350\277\236\347\273\255\344\275\277\347\224\250\357\274\214\344\276\213 a/-b\345\260\206\344\274\232\346\212\245\351\224\231\357\274\214\350\257\267\350\276\223\345"
                        "\205\245\344\270\272 a/(-b)\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">2.</span><span style=\" font-size:9pt;\">\344\270\211\350\247\222\345\207\275\346\225\260\350\276\223\345\205\245\345\215\225\344\275\215\347\232\206\344\270\272rads\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">3.</span><span style=\" font-size:9pt;\">\350\257\267\345\260\275\351\207\217\344\275\277\347\224\250\346\213\254\345\217\267\345\260\206\346\225\260\345\200\274/\345\255\220\350\241\250\350\276\276\345\274\217\351\232\224\345\274\200\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">4</sp"
                        "an><span style=\" font-size:9pt;\">.\347\250\213\345\272\217\344\270\215\346\216\245\345\217\227+\345\217\267\344\270\272\345\215\225\347\233\256\350\277\220\347\256\227\347\254\246\357\274\214\346\225\260\345\200\274\351\273\230\350\256\244\344\270\272\346\255\243\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">5.</span><span style=\" font-size:9pt;\">-a^b\344\274\232\350\242\253\347\250\213\345\272\217\350\247\243\351\207\212\344\270\272(-b)^a , \350\213\245\350\277\231\344\270\215\346\230\257\346\202\250\346\203\263\350\246\201\347\232\204\346\225\210\346\236\234\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\345\260\261\350\276\223\345\205\245 -(a^b)\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", Q_NULLPTR));
        Title->setText(QApplication::translate("Widget", "\347\256\200\346\230\223\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        Title_2->setText(QApplication::translate("Widget", "\346\265\256\347\202\271\346\225\260\347\262\276\345\272\246\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
