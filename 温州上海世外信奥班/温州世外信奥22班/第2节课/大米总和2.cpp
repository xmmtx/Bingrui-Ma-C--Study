//题目：大米总和2 
//编写程序，计算第6个格子后，总共要放多少粒大米。
#include<iostream>
using namespace std;
main()
{
  int a,b,n,sum;
  n=1;
  sum=n;
  a=6-1;
  for(b=1;b<=a;b++)
  {
	n*=2;
	sum+=n;
  }
  cout<<sum;
}
