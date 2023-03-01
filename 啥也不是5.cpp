#include<iostream>
using namespace std;
main()
{
	int a,b,c,f;
    cin>>a;
	b=a/10%10;
	c=a/100%10;
    f=a/1%10;
	cout<<c<<","<<b<<","<<f;
} 
