#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <iostream>
#include "calculatorAlgorithm.h"

std::string toProcess = "",storedAns="";

void Widget::checkIfGettingNewInput(){
    if(gettingNewInput){
        ui->lineEdit->clear();
        toProcess = "";
        Widget::m_init();
    }
    gettingNewInput = false;
}


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setReadOnly(true);//只读模式
    ui->lineEdit->move(QPoint(0,0));//设置lineEdit位置
    ui->lineEdit->setAlignment(Qt::AlignRight);//从右侧显示
    setWindowTitle(QString("Calculator"));//设置标题
}

Widget::~Widget()
{
    delete ui;
}

void Widget::getChar()
{
    ba=in.toLatin1();
}



void Widget::getSuffix()
{
  for(int i=0;i<ba.size();i++)
  {
      if((ba[i]>='0' && ba[i]<='9')||ba[i]=='.')//1,数字直接输出
      {
         QString str;
         QByteArray m;
         for(;(ba[i]>='0' && ba[i]<='9')||ba[i]=='.';i++)
         {
             //把一个数字存储到字节数组m中
             char x=ba[i];
             m.append(x);
         }
         //把字节数组m转换为QString，并把字符串输出
         str=QString(m);
         out.append(str);
         i--;
      }else if(s1.isEmpty())//2,遇见非数字时, 如果叠层为空，则直接把该字符放入叠层
      {
          s1.push(ba[i]);
      }else if(ba[i]=='+' || ba[i]=='-')
          //2.1,如果是+或- 那么遍历叠层在叠层顶 输出优先级>=加减的 即输出曾顶的+-*/,
          //当遇到其他字符时（如左括号）或叠层空时break
      {
          while(!s1.empty()){
              if(s1.top()=='+' || s1.top()=='-'||s1.top()=='*' || s1.top()=='/'){
                  //把字符转换为字符串输出
                  QString str=QString(s1.pop());
                  out.append(str);
               }else break;
          }
          s1.push(ba[i]);
      }else if(ba[i]=='*' || ba[i]=='/')
          //2.2,如果是*或/ 那么遍历叠层在叠层顶 输出优先级>=乘除的 即输出层顶的*/,
          //当遇到其他字符时（如左括号，减号，除号）或叠层空时break
      {
          while(!s1.empty()){
              if(s1.top()=='*' || s1.top()=='/'){
                  //把字符转换为字符串输出
                  QString str=QString(s1.pop());
                  out.append(str);
               }else break;
          }
          s1.push(ba[i]);
      }else if(ba[i]==')')
          //2.3,如果该字符是右括号时，一直输出层顶元素，直到遇见左括号为止break:
      {
          while(!s1.empty()){
              if(s1.top()=='('){
                  s1.pop();
                  break;
              }
              //把字符转换为字符串输出
              QString str=QString(s1.pop());
              out.append(str);
          }
      }else if(ba[i]=='(')
          //2.4,如果该字符是左括号时，直接放入叠层
      {
          s1.push(ba[i]);
      }
  }
  //字符串循环结束后 再输出叠层中剩余的数据
  while(!s1.empty()){
      //把字符转换为字符串输出
      QString str=QString(s1.pop());
      out.append(str);
  }
  //输出后缀表达式
  qDebug()<<out;
}

void Widget::m_init()
{
    ba.clear();
    out.clear();
}


void Widget::on_pushButton_DENGYU_clicked()
{
    in=ui->lineEdit->text();//获取表达式
        if(!validExpression(toProcess)){
            QMessageBox::warning(this,"ERROR","Invalid Expression");
        }else{
            double ans = evaluate(toProcess);
            std::cout<<"ans : "<<ans<<"\n";
            std::string expr = std::to_string(ans);
            storedAns = expr;
            ui->lineEdit->setText(QString::fromStdString(expr));
            gettingNewInput = true;
        }
}

void Widget::on_pushButton_ZERO_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(0));
    toProcess += '0';
}

void Widget::on_pushButton_ONE_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(1));
    toProcess += '1';
}

void Widget::on_pushButton_TWO_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(2));
    toProcess += '2';
}

void Widget::on_pushButton_THREE_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(3));
    toProcess += '3';
}

void Widget::on_pushButton_FOUR_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(4));
    toProcess += '4';
}

void Widget::on_pushButton_FIVE_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(5));
    toProcess += '5';
}

void Widget::on_pushButton_SIX_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(6));
    toProcess += '6';
}

void Widget::on_pushButton_SEVEN_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(7));
    toProcess += '7';
}

void Widget::on_pushButton_EIGHT_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(8));
    toProcess += '8';
}

void Widget::on_pushButton_NINE_clicked()
{
    gettingNewInput = false;
    checkIfGettingNewInput();
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(9));
    toProcess += '9';
}

void Widget::on_pushButton_JIA_clicked()
{
    gettingNewInput = false;
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("+"));
    toProcess += '+';
}

void Widget::on_pushButton_JIAN_clicked()
{
    gettingNewInput = false;
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("-"));
    toProcess += '-';
}

void Widget::on_pushButton_CHENG_clicked()
{
    gettingNewInput = false;
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("*"));
    toProcess += '*';
}

void Widget::on_pushButton_CHU_clicked()
{
    gettingNewInput = false;
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("/"));
    toProcess += '/';
}

void Widget::on_pushButton_DOT_clicked()
{
    gettingNewInput = false;
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("."));
    toProcess += '.';
}

void Widget::on_pushButton_P2_clicked()
{
    gettingNewInput = false;
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("("));
    toProcess += '(';
}

void Widget::on_pushButton_P1_clicked()
{
    gettingNewInput = false;
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(")"));
    toProcess += ')';
}

void Widget::on_pushButton_AC_clicked()
{
    //清空所有内容，并初始化
    ui->lineEdit->clear();
    m_init();
    toProcess = "";
    gettingNewInput = true;
}

void Widget::on_pushButton_DEL_clicked()
{
    //退格删除一个字符
    ui->lineEdit->backspace();
    toProcess = toProcess.substr(0,toProcess.size()-1);
}

void Widget::on_pushButton_Sqrt_clicked()
{
    checkIfGettingNewInput();
    gettingNewInput = false;
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("√("));
    toProcess += "Q(";
}

void Widget::on_pushButton_index_clicked()
{
    gettingNewInput = false;
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("^"));
    toProcess += '^';
}

void Widget::on_pushButton_sine_clicked()
{
    checkIfGettingNewInput();
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("sin("));
    toProcess += "S(";
}

void Widget::on_pushButton_cosine_clicked()
{
    checkIfGettingNewInput();
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("cos("));
    toProcess += "C(";
}

void Widget::on_pushButton_tangent_clicked()
{
    checkIfGettingNewInput();
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("tan("));
    toProcess += "T(";
}

void Widget::on_pushButton_PI_clicked()
{
    checkIfGettingNewInput();
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("𝛑"));
    toProcess += "3.14159";
}

void Widget::on_pushButton_E_clicked()
{
    checkIfGettingNewInput();
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("e"));
    toProcess += "2.718281";
}

void Widget::on_pushButton_naturalLog_clicked()
{
    checkIfGettingNewInput();
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("ln("));
    toProcess += "L(";
}

void Widget::on_pushButton_log10_clicked()
{
    checkIfGettingNewInput();
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("log("));
    toProcess += "l(";
}

void Widget::on_pushButton_ANS_clicked()
{
    checkIfGettingNewInput();
    QString str = ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("ans"));
    toProcess += storedAns;
}
