//��Ŀ��������� 
//��д������������������������ٶȣ�100�׵�������������ԽС�����ٶ�Խ�죬�뽫����������С�����˳�������
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
