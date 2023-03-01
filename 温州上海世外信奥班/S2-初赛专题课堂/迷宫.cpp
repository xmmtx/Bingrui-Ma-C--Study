#include<iostream>
using namespace std;
int n,m,k;
int sx,sy,fx,fy,ans=0;
bool vis[105][105],vis2[105][105];
int cx[]={-1,0,1,0};
int cy[]={0,1,0,-1};
void search(int x,int y)
{
	if(x==fx&&y==fy)
	{
		ans++;
		return ;
	}
	for(int i=0;i<4;i++)
	{
		int dx=cx[i]+x;
		int dy=cy[i]+y;
		if(dx<1||dx>n||dy<1||dy>m) continue;
		if(vis[dx][dy]==true||vis2[dx][dy]==true) continue;
		vis2[dx][dy]=true;
		search(dx,dy);
		vis2[dx][dy]=false; 
	}
}
int main()
{
	cin>>n>>m>>k;
	cin>>sx>>sy>>fx>>fy;
	for(int i=1;i<=k;i++)
	{
		int x,y;
		cin>>x>>y;
		vis[x][y]=true;
	}
	vis2[sx][sy]=true;
	search(sx,sy);
	cout<<ans;
	return 0;
}
