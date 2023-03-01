#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cin>>n; 
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=j;i++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
