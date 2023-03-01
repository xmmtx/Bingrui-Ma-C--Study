//题目：输出n个数的总和 
//第一行输入一个表示n个数
//第二行输入n个输出
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
