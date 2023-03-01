#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int i,j,n;
	n=7;
	for(j=1;j<=9;j++)
	{
		for(i=1;i<=j;i++)
		{
			cout<<setw(2)<<i;
		}
		cout<<endl; 
	}
}
