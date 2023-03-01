#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int a[5]={6,8,4,9,3}; 
	int i,s;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
			a[i]=a[i]/2;
		else
			a[i]=a[i]*2;
	}
	for(i=0;i<5;i++)
		cout<<setw(3)<<a[i];
	cout<<endl;
}
