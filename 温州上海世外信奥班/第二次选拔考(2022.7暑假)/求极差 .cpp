/*
��Ŀ���󼫲� 
��ν�������ָ�������е����ֵ��ȥ��Сֵ��
���������ṩһ�����У�������еļ��
�����ʽ�� 
��һ������һ��n����ʾ���г��ȡ�
�ڶ�������n������
�����ʽ�� 
���һ��������
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int max,min;
	max=a[1];
	min=a[1];
	for(int i=1;i<=n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
    	{
			min=a[i];
    	}
	}
	cout<<max-min;
	return 0;
}
