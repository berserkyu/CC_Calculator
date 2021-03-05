#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStack>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void getChar();//将QString转换为QByteArray
    void getSuffix();//获取后缀表达式
    void m_init();//初始化

private slots:
    void on_pushButton_ZERO_clicked();

    void on_pushButton_ONE_clicked();

    void on_pushButton_TWO_clicked();

    void on_pushButton_THREE_clicked();

    void on_pushButton_FOUR_clicked();

    void on_pushButton_FIVE_clicked();

    void on_pushButton_SIX_clicked();

    void on_pushButton_SEVEN_clicked();

    void on_pushButton_EIGHT_clicked();

    void on_pushButton_NINE_clicked();

    void on_pushButton_DOT_clicked();

    void on_pushButton_DENGYU_clicked();

    void on_pushButton_JIA_clicked();

    void on_pushButton_JIAN_clicked();

    void on_pushButton_CHENG_clicked();

    void on_pushButton_CHU_clicked();

    void on_pushButton_P1_clicked();

    void on_pushButton_P2_clicked();

    void on_pushButton_AC_clicked();

    void on_pushButton_DEL_clicked();

private:
    Ui::Widget *ui;
    QString in;//输入的表达式
    QByteArray ba;//输入表达式转换为字节数组
    QStack<char> s1;//中缀表达式转换为后缀表达式时用到的叠层
    QVector<QString> out;//后缀表达式

};

#endif // WIDGET_H
