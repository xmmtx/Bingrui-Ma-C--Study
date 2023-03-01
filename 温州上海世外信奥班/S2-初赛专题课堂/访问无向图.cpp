#include<iostream>
#include<vector>
using namespace std;
const int N=105;
int n,m;
bool vis[N];
vector<int> g[N];
void dfs(int x)
{
	cout<<char(x+64);
	for(int i=0;i<g[x].size();i++)
	{
		int y=g[x][i];
		if(vis[y]==true) continue;
		vis[y]=true;
		dfs(y);
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	vis[1]=true;
	dfs(1);
	return 0;
}
