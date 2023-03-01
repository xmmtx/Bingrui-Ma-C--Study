#include<iostream>
using namespace std;
main()
{
	int n,m;
	cin>>n;
	while(n!=0)
	{
		m=n%10;
		n=n/10;
		cout<<m;
	}
}
