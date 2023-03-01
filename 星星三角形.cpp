#include<iostream>
using namespace std;
main()
{
	int i,j,n,m;
	char g;
	cin>>g;
    n=3;
	m=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=n;j++)
			cout<<" ";
		for(j=1;j<=m;j++)
			cout<<g;
		n--;
		m=m+2;
		cout<<endl;
	}
	n=1;
	m=5;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
			cout<<" ";
		for(j=1;j<=m;j++)
			cout<<g;
		n++;
		m=m-2;
		cout<<endl;
	}
}
