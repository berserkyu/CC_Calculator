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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
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
    QPushButton *pushButton_P2;
    QPushButton *pushButton_P1;
    QPushButton *pushButton_DEL;
    QPushButton *pushButton_JIA;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_SEVEN;
    QPushButton *pushButton_EIGHT;
    QPushButton *pushButton_NINE;
    QPushButton *pushButton_JIAN;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_FOUR;
    QPushButton *pushButton_FIVE;
    QPushButton *pushButton_SIX;
    QPushButton *pushButton_CHENG;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_ONE;
    QPushButton *pushButton_TWO;
    QPushButton *pushButton_THREE;
    QPushButton *pushButton_CHU;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_DOT;
    QPushButton *pushButton_ZERO;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_DENGYU;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(343, 322);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(260, 315));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 344, 330));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
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
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
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

        pushButton_JIA = new QPushButton(layoutWidget);
        pushButton_JIA->setObjectName(QStringLiteral("pushButton_JIA"));
        pushButton_JIA->setMinimumSize(QSize(60, 40));
        pushButton_JIA->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout->addWidget(pushButton_JIA);


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

        pushButton_JIAN = new QPushButton(layoutWidget);
        pushButton_JIAN->setObjectName(QStringLiteral("pushButton_JIAN"));
        pushButton_JIAN->setMinimumSize(QSize(60, 40));
        pushButton_JIAN->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_2->addWidget(pushButton_JIAN);


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

        pushButton_CHENG = new QPushButton(layoutWidget);
        pushButton_CHENG->setObjectName(QStringLiteral("pushButton_CHENG"));
        pushButton_CHENG->setMinimumSize(QSize(60, 40));
        pushButton_CHENG->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_3->addWidget(pushButton_CHENG);


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

        pushButton_CHU = new QPushButton(layoutWidget);
        pushButton_CHU->setObjectName(QStringLiteral("pushButton_CHU"));
        pushButton_CHU->setMinimumSize(QSize(60, 40));
        pushButton_CHU->setStyleSheet(QLatin1String("background-color: rgb(220, 220, 220);\n"
" \n"
"color: rgb(11, 88, 255);"));

        horizontalLayout_4->addWidget(pushButton_CHU);


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
        pushButton_DENGYU->setStyleSheet(QStringLiteral("background-color:  rgb(11, 88, 255)"));

        horizontalLayout_5->addWidget(pushButton_DENGYU);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton_P2->setText(QApplication::translate("Widget", "(", Q_NULLPTR));
        pushButton_P1->setText(QApplication::translate("Widget", ")", Q_NULLPTR));
        pushButton_DEL->setText(QApplication::translate("Widget", "<-", Q_NULLPTR));
        pushButton_JIA->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        pushButton_SEVEN->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        pushButton_EIGHT->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        pushButton_NINE->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        pushButton_JIAN->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        pushButton_FOUR->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        pushButton_FIVE->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        pushButton_SIX->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        pushButton_CHENG->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        pushButton_ONE->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        pushButton_TWO->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        pushButton_THREE->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        pushButton_CHU->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        pushButton_DOT->setText(QApplication::translate("Widget", ".", Q_NULLPTR));
        pushButton_ZERO->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        pushButton_AC->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        pushButton_DENGYU->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
