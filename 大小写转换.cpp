#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	char ch1,ch2;
	char ch3;
	int c1,c2,b;
	ch1=66;
	ch2='a'-32;
	cin>>ch3;
	if(ch3>='A' && ch3<='Z')
	{
		ch3=ch3+32;
		b=ch3;
		cout<<ch3<<","<<b<<endl;
	}
	else
	{
		cout<<"Input Data error!"<<endl;
	}
}
