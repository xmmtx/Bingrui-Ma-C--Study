//��Ŀ������齱
//��д����ʹ��if-else if�ṹ�����빺����жϻ��ʲô���
#include<iostream>
using namespace std;
main()
{
  int n;
  cout<<"���빺���";
  cin>>n;
  if(n%88==0)
    cout<<"һ�Ƚ�";
  else if(n%8==0)
    cout<<"���Ƚ�";
  else if(n%10==8)
    cout<<"���Ƚ�";
  else
    cout<<"û�н�";
}
