#include<iostream>
using namespace std;
main()
{
	int line,kg,i,j,e;
	int n,m;
	char ch;
	cin>>n>>ch;
	if(n%2==0)
	{
		cout<<"ERRRoR"<<endl; 
	}
	else
	{
		line=n/2+1;
		kg=n/2;
		m=1;
		for(i=1;i<=line;i++)
		{
			for(j=1;j<=kg;j++)
				cout<<" ";
			for(e=1;e<=m;e++)
				cout<<ch;
			cout<<endl;
			kg=kg-1;
			m=m+2;
		}
	}
}
