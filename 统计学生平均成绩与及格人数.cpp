#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int n,jgrs,i,a,b,c;
	float pjf;
	cin>>n;
	pjf=0;
	jgrs=0;
	b=0;
	if(n==0)
	{
		pjf=0.0;
		jgrs=0;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			cin>>a;
			b=a+b;
			if(a>=60)
				jgrs++;
    	}
    	pjf=b*1.0/n;
	}
	cout<<fixed<<setprecision(1);
	cout<<"average = "<<pjf<<endl;
	cout<<"count = "<<jgrs<<endl;
} 
