//��Ŀ�������ж� 
//��д����������ݣ��ж��ǲ������꣬��������true���������false��
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
