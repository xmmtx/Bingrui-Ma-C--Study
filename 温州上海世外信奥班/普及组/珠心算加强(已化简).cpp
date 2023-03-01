#include<iostream>
using namespace std;
int vis[10005];
int main()
{
	int n,a[3005];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		vis[a[i]]++;
	}
	int ans=0;
	for(int y=1;y<=n;y++)
	for(int z=1;z<=n;z++)
	{
		int x=a[y]+a[z];
		if(vis[x]!=0 && y!=z)
			ans++;
	}
	cout<<ans/2;
	return 0;
}
