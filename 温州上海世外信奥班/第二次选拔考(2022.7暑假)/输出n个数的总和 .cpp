//��Ŀ�����n�������ܺ� 
//��һ������һ����ʾn����
//�ڶ�������n�����
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int sum=0;
	for(int i=1;i<=n;i++)
		sum=sum+a[i];
		cout<<sum;
	return 0;
}
