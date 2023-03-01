#include<iostream>
using namespace std;
main()
{
	long f1,f2,f3;
	int i;
	f1=1;
	f2=1;
	cout<<f1<<" "<<f2<<" ";
	for(i=1;i<=20;i++)
	{
		f3=f2+f1;
		f1=f2;
		f2=f3;
		cout<<f3<<" ";
	}
} 
