//题目：电梯调度 
//如果两个楼层的人同时按下电梯按钮，电梯会选择离它近的楼层。
//编写程序，输入3个数，第一个数表示电梯当前层，后两个数表示同时按下的楼层，要求按照电梯选择的先后顺序输出楼层，用空格隔开。
#include<iostream>
using namespace std;
main()
{
  int a,b,c,d,e;
  cin>>a>>b>>c;
  if(b>a)
    d=b-a;
  else
    d=a-b;
  if(c>a)
    e=c-a;
  else
    e=a-c;
  if(d>e)
    cout<<c<<" "<<b;
  else
    cout<<b<<" "<<c;
}
