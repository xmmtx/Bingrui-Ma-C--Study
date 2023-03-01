//题目：购物抽奖
//编写程序，使用if-else if结构，输入购物金额，判断获得什么奖项。
#include<iostream>
using namespace std;
main()
{
  int n;
  cout<<"输入购物金额：";
  cin>>n;
  if(n%88==0)
    cout<<"一等奖";
  else if(n%8==0)
    cout<<"二等奖";
  else if(n%10==8)
    cout<<"三等奖";
  else
    cout<<"没有奖";
}
