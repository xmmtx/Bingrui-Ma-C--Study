#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int i,j,n,m;
	cin>>n>>m;  //N=5   M=2
	for(i=1;i<=n;i++)//
	{
		for(j=1;j<=n-i+1;j++)  //
		{
			cout<<m<<" ";
			m++;
		}
		cout<<endl;
	}
	
} 
