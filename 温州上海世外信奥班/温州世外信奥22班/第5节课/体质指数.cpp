/*
题目：体质指数
体质指数（BMI）是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准，根据公式：
体质指数（BMI） = 体重（kg） / 身高（m）的平方
计算，然后按照以下表格衡量胖瘦程度：
BMI	胖瘦程度
<18.5	偏瘦
<24	    正常
<28    	偏胖
<40 	肥胖
>=40    重度肥胖 
编写程序，根据体重、身高，判断其胖瘦程度。
*/
#include<iostream>
using namespace std;
main()
{
  float h,w,bmi;
  cout<<"输入身高与体重：";
  cin>>h>>w;
  bmi=w/(h*h);
  if(bmi<18.5)
    cout<<"偏瘦";
  else if(bmi<24)
    cout<<"正常";
  else if(bmi<28)
    cout<<"偏胖";
  else if(bmi<40)
    cout<<"肥胖";
  else
    cout<<"重度肥胖";
}
