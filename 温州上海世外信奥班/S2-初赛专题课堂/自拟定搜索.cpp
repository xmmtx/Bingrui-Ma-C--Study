#include<iostream>
using namespace std;
int a[1005],n,m;
void search(int t)
{
	if(t>m)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		a[t]=i;
		search(t+1);
	}
}
int main()
{
	cin>>n>>m;
	search(1);
	return 0;
}
