//题目：成绩评分 
//编写程序，用数组接收5个成绩，计算去掉一个最高分和一个最低分之后的平均分。
#include<iostream>我去康康代码
using namespace std;
main()
{
  int a[5];
  for(int i=0;i<5;i++)
    cin>>a[i];
  int sum=0;
  for(int i=0;i<5;i++)
  {
    sum+=a[i];
  }
  int max=0;
  for(int i=0;i<5;i++)
  {
    if(a[i]>max)
      max=a[i];
  }
  int min=100000;
  for(int i=0;i<5;i++)
  {
    if(a[i]<min)
      min=a[i];
  }
  cout<<max<<endl;
  cout<<min<<endl;
  cout<<(sum-max-min)/3.00;
}
