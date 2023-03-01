#include<iostream>
//基本库 
#include<vector>
//不知道什么库 
#include<queue>
//又一个不知道什么库 
using namespace std;
//头文件 
const int N=105;
//int g[N][N];//g[i][j]=1; i到j有边
int n,m;
//n表示点数，m表示边数
bool vis[N];
//标记当前的点有没有走过
vector<int> g[N];
//广度优先搜索，广搜，宽搜，bfs
void dfs(int sx)
//sx表示起点
{
	queue<int> q;
	q.push(sx);
	vis[sx]=true;
	while(!q.empty())
	{
		int x=q.front();
		cout<<char(x+64);
		q.pop();
		for(int i=0;i<g[x].size();i++)//浙江工业大学（老师的大学） 
		{
			int y=g[x][i];
			if(vis[y]==true) continue;
			vis[y]=true;
			q.push(y); 
		}
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
