#include<iostream>
using namespace std;
main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=9;i>=0;i--)
	{
		cout<<a[i]<<",";
	}
}
