#include<iostream>
using namespace std;
int main()
{
	int n,gs;
	cin>>n; 
	int a[n];
	for(int i1=0;i1<n;i1++)
	{
		cin>>a[i1];
	}
	for(int i1=0;i1<n;i1++)
	{
		for(int i2=0;i2<n;i2++)
		{
			for(int i3=0;i3<n;i3++)
			{
				if(a[i1]==a[i2]+a[i3] && i2!=i3)
				{
					gs++;
				}
			}
		}
	}
	cout<<gs/2;
	return 0;
}
