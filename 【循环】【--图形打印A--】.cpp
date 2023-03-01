#include<iostream>
using namespace std;
main()
{
	int n,m;
	int i,j;
	cin>>m>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<m;
		}
		cout<<endl;
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			cout<<m;
		}
		cout<<endl;
	}
}
