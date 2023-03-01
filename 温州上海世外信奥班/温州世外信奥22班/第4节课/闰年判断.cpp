//题目：闰年判断 
//编写程序，输入年份，判断是不是闰年，如果是输出true，否则输出false。
#include<iostream>
using namespace std;
main()
{
  int n;
  cin>>n;
  if(n%4==0 && n%100!=0)
  {
    cout<<"true";
  }
  else
    if(n%400==0)
    {
      cout<<"true";
    }
  else
  {
    cout<<"false";
  }
}
