#include<iostream>
using namespace std;
main()
{
	int a,b,c,zd,zx;
	cin>>a>>b>>c;
	if(a>b) 
		zd=a;
	else
		zd=b;
	if(zd<c)	
		zd=c;
	if(a>b) 
		zx=b;
	else
		zx=a;
	if(zx>c)	
		zx=c;
	cout<<zd<<" "<<zx<<endl;
}
