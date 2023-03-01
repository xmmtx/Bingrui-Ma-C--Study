#include<iostream>
using namespace std;
int main()
{
	int n,m,ans=0;
	cin>>n>>m;
	for(int x=0;x<=m;x++)
	for(int y=0;y<=m;y++)
	{
		int z=m-x-y;
		if(x*5+y*3+z/3==n && z%3==0 && z>=0)
		ans++;
	}
	cout<<ans;
	return 0;
}
