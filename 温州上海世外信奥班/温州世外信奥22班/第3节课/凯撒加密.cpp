//题目：凯撒加密
//编写程序，用c1, c2, c3存储输入的三位字符（大写），输出加密后的三位字符，加密方法是使用ASCII码加上3，然后再输出解密后的原三位字符。
#include<iostream>
using namespace std;
main()
{
  char c1,c2,c3;
  cin>>c1>>c2>>c3;
  c1+=3;
  c2+=3;
  c3+=3;
  cout<<c1<<c2<<c3<<endl;
  c1-=3;
  c2-=3;
  c3-=3;
  cout<<c1<<c2<<c3;
}
