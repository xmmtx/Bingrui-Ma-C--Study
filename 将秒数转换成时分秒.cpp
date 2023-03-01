#include<iostream>
using namespace std;
main()
{
	int a,b,c,d;
	cin>>a;
	b=a/3600;
	c=a/60-b*60;
	d=a-b*3600-c*60;
	cout<<b<<":"<<c<<":"<<d;
} 
