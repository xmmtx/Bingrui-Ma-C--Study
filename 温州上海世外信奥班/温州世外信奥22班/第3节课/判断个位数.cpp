//题目：判断个位数
//输入一个正数，判断个位数是不是7，如果是7就输出“个位数是7”。
#include<iostream>
using namespace std;
main()
{
  int n;
  cout<<"输入一个整数：";
  cin>>n;
  if(n%10==7)
    cout<<"个位数是7";
}
