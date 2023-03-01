//题目： 商场折扣 
//编写程序，用浮点数变量f表示75折，输入购物金额，计算应付金额。
#include<iostream>
using namespace std;
main()
{
  int n;
  float f,m;
  cin>>n;
  f=0.75;
  m=n*f;
  cout<<m;
}
