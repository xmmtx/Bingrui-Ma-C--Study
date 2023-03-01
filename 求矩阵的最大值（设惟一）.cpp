#include<iostream>
using namespace std;
main()
{
	int a[6][6];
	int k1,k2;
	int m,n,i,j;
	int max;
	
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	max=a[0][0];
	k1=0;
	k2=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				k1=i;
				k2=j;
			}				
		}
	}
	cout<<max<<endl;
	cout<<k1<<" "<<k2;
}
