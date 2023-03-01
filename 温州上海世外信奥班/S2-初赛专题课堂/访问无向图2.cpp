#include<iostream>
//������ 
#include<vector>
//��֪��ʲô�� 
#include<queue>
//��һ����֪��ʲô�� 
using namespace std;
//ͷ�ļ� 
const int N=105;
//int g[N][N];//g[i][j]=1; i��j�б�
int n,m;
//n��ʾ������m��ʾ����
bool vis[N];
//��ǵ�ǰ�ĵ���û���߹�
vector<int> g[N];
//����������������ѣ����ѣ�bfs
void dfs(int sx)
//sx��ʾ���
{
	queue<int> q;
	q.push(sx);
	vis[sx]=true;
	while(!q.empty())
	{
		int x=q.front();
		cout<<char(x+64);
		q.pop();
		for(int i=0;i<g[x].size();i++)//�㽭��ҵ��ѧ����ʦ�Ĵ�ѧ�� 
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
