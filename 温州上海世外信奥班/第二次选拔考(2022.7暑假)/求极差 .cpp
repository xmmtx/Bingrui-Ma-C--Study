/*
题目：求极差 
所谓极差就是指，序列中的最大值减去最小值。
现在我们提供一个序列，求出序列的极差。
输入格式： 
第一行输入一个n，表示序列长度。
第二行输入n个数。
输出格式： 
输出一个整数。
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
