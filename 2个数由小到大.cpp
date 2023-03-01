#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cin>>a>>b;
	if(a>b)
	{
		c=a;
		a=b;
		b=c;
		cout<<"a="<<a<<",b="<<b<<endl;
	}
}
