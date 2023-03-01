#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int a[6][6];
	int i,j,m,n;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			a[i][j]=i+j;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<setw(4)<<a[i][j];
		cout<<endl;
	}
 } 
