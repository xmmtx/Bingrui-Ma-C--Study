//��Ŀ����������2
//��дһ�������������������ʾ�������������ҳ���С������
#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e,min;
		cin>>a>>b>>c>>d>>e;
	if(a>b)
		min=b;
	else
		min=a;
	if(min>c)
 		min=c;
	if(min>d)
		min=d;
	if(min>e)
		min=e;
	cout<<min;
}
