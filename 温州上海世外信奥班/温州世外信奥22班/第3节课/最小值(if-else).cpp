//题目：最小值(if-else)
//编写程序，输入两个整数，用if-else输出小的数。
#include<iostream>
using namespace std;
main()
{
  int a,b;
  cout<<"输入两个整数：";
  cin>>a>>b;
  if(a<=b)
    cout<<"最小值："<<a;
  else
    cout<<"最小值："<<b;
}
