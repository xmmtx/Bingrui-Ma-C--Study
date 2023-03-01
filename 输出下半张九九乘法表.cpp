#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i<<"*"<<j<<"="<<setw(2)<<j*i<<" ";
		}
		cout<<endl;
	}
}
