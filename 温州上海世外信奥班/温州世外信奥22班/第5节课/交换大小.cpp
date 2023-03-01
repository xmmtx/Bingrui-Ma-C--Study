//题目：交换大小
//输入两个整数，按照从小到大的顺序输出，两数用空格隔开。
//要求：只能先输出a再输出b，可用交换变量的方法。
#include<iostream>
using namespace std;
main()
{
  int a,b,c;
  cout<<"输入两个整数：";
  cin>>a>>b;
  if(a>b)
  {
    c=a;
    a=b;
    b=c;
  }
  cout<<a<<" "<<b;
}
