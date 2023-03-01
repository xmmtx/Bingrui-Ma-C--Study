#include<iostream>
using namespace std;
#include<iomanip>
main()
{
	int a[10][10];
	int m,n;
	int i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	cout<<"输入的数字是："<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
	cout<<endl;
	} 
}
