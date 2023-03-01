//题目： 等差数列求和
//编写程序，求0 4 8 12 16 20 ... 100的和。
#include<iostream>
using namespace std;
main()
{
  int i,sum;
  i=0;
  sum=0;
  while(i<=100)
  {
    sum+=i;
    i+=4;
  }
  cout<<sum;
}
