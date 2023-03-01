//题目：3721数 
//编写程序，输出100以内所有的“3721数”。
//3721数：除以3余2，除以7余1的数，称为3721数。
#include<iostream>
using namespace std;
main()
{
  int a;
  for(a=1;a<=100;a++)
  {
    if(a%3==2 && a%7==1)
      cout<<a<<" ";
  }
}
