#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e;
	a=78%10;
	cout<<"78%10的结果是："<<a<<endl;
	d=7854;
	b=d/10%10;
	c=d/100%10;
	e=d/1000%10;
	cout<<d<<"十位数是："<<b<<"，百位数是："<<c<<"千位数是"<<e<<endl;
} 
