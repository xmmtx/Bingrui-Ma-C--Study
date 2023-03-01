//题目：判断素数 
//编写程序，输入一个正整数，判断是不是素数。
#include<iostream>
using namespace std;
bool IsPrime(int n)
{
  if(n<=1)
  {
    cout<<"是合数";
    return false;
  }
  for(int i=2;i<n;i++)
  {
    if((n%i)==0)
    {
      cout<<"是合数";
      return false;
    }
  }
  cout<<"是素数";
  return true;
}
int main()
{
  int a;
  cout<<"输入正整数(>1)：";
  cin>>a;
  IsPrime(a);
  return 0;
}
