#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int a,b,n,i,s;
	cin>>a>>b;
	n=0;
	s=0;
	for(i=a;i<=b;i++)
	{
		s=s+i;
		cout<<setw(5)<<i;
		n++;
		if(n%5==0)
		{
			cout<<endl;
		}
	}
	if(n%5!=0)
		cout<<endl;
	cout<<"Sum = "<<s<<endl;
} 
