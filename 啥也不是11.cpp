#include<iostream>
using namespace std;
main()
{
	int n,i,m;
	cin>>n;
	m=n;
	i=0;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	cout<<m<<"����"<<i<<"λ��"<<endl; 
}
