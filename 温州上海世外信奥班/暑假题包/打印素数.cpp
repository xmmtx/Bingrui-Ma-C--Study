#include<iostream>
using namespace std;

int pd(int x)
{
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		 return 0;
	}
	return 1;
}
int main()
{
	int a[105];
	int n,m,cnt=0;
	cin>>n>>m;
	for(int i=2;i<=n;i++)
	{
		if(pd(i)==1)
		{
			a[cnt++]=i;
		}
	} 
	if(m*2>=cnt)
	{
		for(int i=0;i<cnt;i++)
		cout<<a[i]<<' ';
	}
	else if(cnt%2==1)
	{
		for(int i=cnt/2-m+1;i<cnt/2+m;i++)
		cout<<a[i]<<' ';
	}
	else if(cnt%2==0)
	{
		for(int i=cnt/2-m;i<cnt/2+m;i++)
		cout<<a[i]<<' ';
	}
	return 0;
}
