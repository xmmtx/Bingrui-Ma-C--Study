#include<iostream>
using namespace std;
main()
{
	int i,n,a;
	cin>>n;
	i=1;
	a=1;
	while(i<=n)
	{
		
		
		a=i*a;
		i=i+1;
	}
	cout<<a;
} 
