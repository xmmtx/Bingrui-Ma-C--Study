#include<iostream>
using namespace std;
main()
{
	int a;
	cin>>a;
	if(a%5==0)
	{
		if(a%7==0) 
	        cout<<a<<"�ܱ�5�������ܱ�7����"<<endl;
	    else
		    cout<<a<<"�ܱ�5���������ܱ�7����"<<endl; 
	}
	else
	{
		if(a%7==0)
			cout<<a<<"���ܱ�5�������ܱ�7����"<<endl;
		else
			cout<<a<<"���ܱ�5���������ܱ�7����"<<endl;
	}
}
