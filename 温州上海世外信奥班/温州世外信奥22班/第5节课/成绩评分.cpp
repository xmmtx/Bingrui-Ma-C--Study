//��Ŀ���ɼ����� 
//��д�������������5���ɼ�������ȥ��һ����߷ֺ�һ����ͷ�֮���ƽ���֡�
#include<iostream>��ȥ��������
using namespace std;
main()
{
  int a[5];
  for(int i=0;i<5;i++)
    cin>>a[i];
  int sum=0;
  for(int i=0;i<5;i++)
  {
    sum+=a[i];
  }
  int max=0;
  for(int i=0;i<5;i++)
  {
    if(a[i]>max)
      max=a[i];
  }
  int min=100000;
  for(int i=0;i<5;i++)
  {
    if(a[i]<min)
      min=a[i];
  }
  cout<<max<<endl;
  cout<<min<<endl;
  cout<<(sum-max-min)/3.00;
}
