#include<iostream>
using namespace std;
main()
{
	int n,m,k;
	cin>>n;
	k=0;
	while(n!=0)
	{
		m=n%10;
		n=n/10;
		if(m==4)
		{
			k++;
		}
	}
	cout<<k<<endl;
}
