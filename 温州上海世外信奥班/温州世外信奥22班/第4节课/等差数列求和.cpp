//��Ŀ�� �Ȳ��������
//��д������0 4 8 12 16 20 ... 100�ĺ͡�
#include<iostream>
using namespace std;
main()
{
  int i,sum;
  i=0;
  sum=0;
  while(i<=100)
  {
    sum+=i;
    i+=4;
  }
  cout<<sum;
}
