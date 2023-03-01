#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int a[10];
	int i,s;
	for(i=0;i<10;i++)
		cin>>a[i];
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			a[i]=a[i]/2;
		else
			a[i]=a[i]*2;
	}
	for(i=0;i<10;i++)
	{
		cout<<setw(4)<<a[i];
	}
}
