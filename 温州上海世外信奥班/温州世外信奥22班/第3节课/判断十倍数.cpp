//题目：判断十倍数
//编写程序，输入一个正整数，判断是不是10的倍数，是就输出提示。
#include<iostream>
using namespace std;
main()
{
  int n;
  cout<<"输入一个正整数：";
  cin>>n;
  if(n%10==0)
    cout<<"是十的倍数";
}
