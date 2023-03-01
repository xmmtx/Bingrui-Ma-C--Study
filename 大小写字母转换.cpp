#include<iostream>
using namespace std;
main()
{
	char c;
	cin>>c;
	if(c>='A' && c<='Z')
	{
		c=c+32;
	}
	else
	{
		c=c-32;
	}
	cout<<c<<endl;
}
