#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	double s,t;
	double f1,f2,f3;
	int i,n;
	cin>>n;
	s=0;
	f1=2;
	f2=1;
	for(i=1;i<=n;i++)
	{
		t=f1*1.0/f2;
		s=s+t;
		f3=f1;
		f1=f1+f2;
		f2=f3;
	}
	cout<<fixed<<setprecision(4)<<s<<endl;
}
