#include <iostream>
#include<stack>
#include<stack>
using namespace std;
float operation(float op1, float op2, char oper)
{
  if(oper=='+')
    return op1+op2;
  else if(oper=='-')
    return op1-op2;
  else if(oper=='*')
    return op1*op2;
  else if(oper=='/')
    return op1/op2;
  else
return 0;
}

float postfix(string exp)
{
    stack<float>stk;
    for(int i=0;i<exp.length();i++)
    if(isdigit(exp[i]))
        stk.push(exp[i]-'0');
    else
    {
        float op1=stk.top();
        stk.pop();
        float op2=stk.top();
        stk.pop();
        float result=operation(op1,op2,exp[i]);
        stk.push(result);
    }
    return stk.top();
}


int main()
{

  string exp=("382/+5-");
  cout<<postfix(exp)<<endl;
    return 0;
}
