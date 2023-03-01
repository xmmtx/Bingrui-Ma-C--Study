#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int a[10];
	int i,t,j,n;
	cin>>n;
	for
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	cout<<"ÅÅÐòºóµÄÄÚÈÝ£º"<<endl;
	for(j=0;j<n;j++)
	{
		cout<<setw(4)<<a[j];
	}
}
