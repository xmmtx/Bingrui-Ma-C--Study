#include<iostream>
using namespace std;
main()
{
	int i,n,a,js,os;
	cin>>n;
	os=0;
	js=0;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(a%2==0)
			os++;
        else
            js++;
    }
	cout<<js<<" "<<os<<endl;
} 
