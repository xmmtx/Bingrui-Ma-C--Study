//��Ŀ���ж����� 
//��д��������һ�����������ж��ǲ���������
#include<iostream>
using namespace std;
bool IsPrime(int n)
{
  if(n<=1)
  {
    cout<<"�Ǻ���";
    return false;
  }
  for(int i=2;i<n;i++)
  {
    if((n%i)==0)
    {
      cout<<"�Ǻ���";
      return false;
    }
  }
  cout<<"������";
  return true;
}
int main()
{
  int a;
  cout<<"����������(>1)��";
  cin>>a;
  IsPrime(a);
  return 0;
}
