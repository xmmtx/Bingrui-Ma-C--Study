//题目：田忌赛马 
//编写程序，输入三个数，代表马的速度（100米的秒数），数字越小代表速度越快，请将三个数按从小到大的顺序输出。
#include<iostream>
using namespace std;
main()
{
  int a,b,c,s;
  cin>>a>>b>>c;
  if(a>b)
  {
    s=a;
    a=b;
    b=s;
  }
  if(b>c)
  {
    s=b;
    b=c;
    c=s;
  }
  if(a>b)
  {
    s=a;
    a=b;
    b=s;
  }
  cout<<a<<" "<<b<<" "<<c;
}
