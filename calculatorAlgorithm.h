#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <map>
using namespace std;

std::string evalBracket(std::string&s,int &i,int n){
    //返回的字符串

    std::string t = "";
    //stk代表当前还需要对应多少个右括号
    int stk = 1;
    i++;
    //stk为0代表已经处理了整个括号里的字符串
    while (i < n && stk>0) {
        //若遇到左括号 代表其是当前括号范围里的另一个括号 增加stk
        if (s[i] == '(') {
            stk++;
        }
        //遇到右括号 其必定对应先前的某个左括号 减少stk
        else if (s[i] == ')') {
            //若stk为1：还有一个右括号需要对应，就是当前遇到的右括号 --- 括号处理完毕
            if (stk == 1) {
                i++;
                break;
            }
            stk--;
        }
        //最外层左右括号中的所有字符都是返回值
        t += s[i];
        i++;
    }
    return t;
}

int precedence(char op) {
	if (op == '+' || op == '-')
		return 1;
    else if (op == '*' || op == '/')
		return 2;
    else if(op=='^')
        return 3;
    else
	return 0;
}

double applyOp(double a, double b, char op) {
	switch (op) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
    case '^':
        return std::pow(a,b);
    default:
        return 0;
	}
}

double processTemp(char op,double temp){
    switch (op){
    case 'Q':
        return std::sqrt(temp);
    case 'S':
        return std::sin(temp);
    case 'C':
        return std::cos(temp);
    case 'T':
       return std::tan(temp);
    case 'l':
        return std::log10(temp);
    case 'L':
        return std::log(temp);
    default:
        return 0;
    }
}

double evaluate(string tokens) {
    bool valueTaken = false;
    int n = tokens.size();
    //扫描指针
    int i=0;
    //当前所扫描数值
    double curVal = 0;
    //存储操作数
    stack <double> values;
    //存储操作符
    stack <double> ops;
    //使用布尔值来判断当前读取数值是否为负
    bool neg=false;
    while (i<n) {
        //使用switch来判断单目运算符
        //此处删除了空白字符的判断 因为由前端界面生成的字符串可以保证不含空白字符
        switch (tokens[i]){
            case '(':{
                std::string t = evalBracket(tokens,i,n);
                double temp = evaluate(t);
                if(isdigit(tokens[i])) ops.push('*');
                values.push(neg?-temp:temp);
                neg = false;
            break;
            }
        case 'Q':case 'S':case 'C':case 'T':case 'l':case 'L':{
               char op = tokens[i];
               i++;
               std::string t = evalBracket(tokens,i,n);
               double temp = evaluate(t);
               temp = processTemp(op,temp);
               values.push(neg?-temp:temp);
               neg = false;
        }
            default:
                break;
        }

        //由于switch不接受布尔值 数值扫描放到此处处理
        //布尔值 用以判断是否
        valueTaken = false;
        curVal=0;
        while(i<n && isdigit(tokens[i])){
            valueTaken = true;
            curVal = curVal*10 + (tokens[i]-'0');
            i++;
        }
        //扫描完整数部分，判断是否为浮点数
        if(tokens[i]=='.'){
            i++;
            //扫描浮点数
            //deno是为了将数字放到正确的小数位上的分母
            double deno = 10.0;
            while(i<n && isdigit(tokens[i])){
                curVal = curVal + (tokens[i]-'0')/deno;
                //逐渐往小数后方移动
                deno *= 10;
                i++;
            }
        }

        //此时扫描数值完毕 将数值入栈
        if(valueTaken){
             values.push(neg?-curVal:curVal);
             curVal=0;
             neg = false;
             if(tokens[i]=='('){
                 ops.push('*');
                 continue;
             }
        }
        curVal=0;
        neg = false;
        //接下来处理双目操作符
        if(!precedence(tokens[i])) continue;
        if (i < n && tokens[i] != ' ') {
              //-号代表接下来处理的数值是负的
              if (tokens[i] == '-') {
                  neg = true;
                  if(!i){
                      i++;
                      continue;
                  }
              }
              //如果当前操作符栈为空 或是当前操作符的优先级大于等于栈顶的操作符
              if (ops.empty() || precedence(ops.top()) <= precedence(tokens[i])) {
                  //直接入栈，因为用neg代表接下来的值是否为负，故需将减法符号转换为 +加法符号
                  ops.push(tokens[i] == '-' ? '+' : tokens[i]);
              }
              //若栈不为空 且当前操作符的优先级严格小于栈顶元素优先级
              else {
                  //则以操作符栈顶的操作符来处理操作数栈顶的两个数值
                  while(!ops.empty() && precedence(ops.top())>precedence(tokens[i])){
                      char op = ops.top();
                      ops.pop();
                      //若此处操作数栈没有两个元素，则必定是输入字符串有误，报错
                      double b = values.top();
                      values.pop();
                      double a = values.top();
                      values.pop();
                      //opreate 根据操作符对两个操作数进行计算
                      double t =applyOp(a, b,op);
                      //将得出的结果推入操作数栈
                      values.push(t);
                      //将刚才的当前操作符入栈

                  }
                   ops.push(tokens[i] == '-' ? '+' : tokens[i]);
              }
              i++;
        }
	}
	while (!ops.empty()) {
        double val2 = values.top();
		values.pop();
        double val1 = values.top();
		values.pop();
		char op = ops.top();
		ops.pop();
		values.push(applyOp(val1, val2, op));
	}
    return (values.empty()?0:values.top());
}

bool validExpression(std::string expr){
    int cnt =0;
    for(char c:expr){
        if(c=='(') cnt++;
        else if(c==')'){
            if(cnt<1) return false;
            cnt--;
        }
    }
    for(int i=0;i<expr.size()-1;i++){
        if(precedence(expr[i])&&precedence(expr[i+1])) return false;
        else if(expr[i]=='(') cnt++;
        else if(expr[i]==')'){
            if(cnt<1) return false;
            cnt--;
        }
    }
    return true;
}
