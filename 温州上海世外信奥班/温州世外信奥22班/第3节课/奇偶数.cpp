//题目：奇偶数
//输入一个整数，判断奇偶性，如果是偶数输出“偶数”，否则输出“奇数”。
#include<iostream>
using namespace std;
main()
{
  int n;
  cout<<"输入一个整数：";
  cin>>n;
  if(n%2==0)
    cout<<"偶数";
  else
    cout<<"奇数";
}
