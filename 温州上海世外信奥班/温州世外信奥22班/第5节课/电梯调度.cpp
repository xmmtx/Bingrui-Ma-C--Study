//��Ŀ�����ݵ��� 
//�������¥�����ͬʱ���µ��ݰ�ť�����ݻ�ѡ����������¥�㡣
//��д��������3��������һ������ʾ���ݵ�ǰ�㣬����������ʾͬʱ���µ�¥�㣬Ҫ���յ���ѡ����Ⱥ�˳�����¥�㣬�ÿո������
#include<iostream>
using namespace std;
main()
{
  int a,b,c,d,e;
  cin>>a>>b>>c;
  if(b>a)
    d=b-a;
  else
    d=a-b;
  if(c>a)
    e=c-a;
  else
    e=a-c;
  if(d>e)
    cout<<c<<" "<<b;
  else
    cout<<b<<" "<<c;
}
