//��Ŀ����λ������ 
//С��ѧ����������λ��������������������Լ����Գ��Ը���λ�������ʹ���λ���ȿ�ʼ�ɡ�
#include<iostream>
using namespace std;
main()
{
	int n,q,b,s,g;
	cin>>n;
	g=n%10;
	n/=10;
	s=n%10;
	n/=10;
	b=n%10;
	n/=10;
	q=n%10;
	n=g*1000+s*100+b*10+q;
	cout<<n;
}
