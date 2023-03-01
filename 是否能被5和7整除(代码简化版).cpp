#include<iostream>
using namespace std;
main()
{
	int a;
	cin>>a;
	if(a%5==0)
	{
		if(a%7==0) 
	        cout<<a<<"能被5整除，能被7整除"<<endl;
	    else
		    cout<<a<<"能被5整除，不能被7整除"<<endl; 
	}
	else
	{
		if(a%7==0)
			cout<<a<<"不能被5整除，能被7整除"<<endl;
		else
			cout<<a<<"不能被5整除，不能被7整除"<<endl;
	}
}
