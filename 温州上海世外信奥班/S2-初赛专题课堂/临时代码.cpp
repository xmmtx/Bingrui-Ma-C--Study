#include <iostream>
#include <cstdio>
#include <queue>
using namespace std ;
struct Node
{
	int x,y,step ;
	Node (int a=0,int b=0,int c=0) //第8行
	{
		x=a;y=b;step=c;
	}
}; 
bool VIS[60][60];
queue <Node> q;
int dx[12]={1,1,2,2,2,2,-1,-1,-2,-2,-2,-2},dy[12]={-2,2,-2,-1,1,2,-2,2,-1,1,-2,2},nx,ny;
int bfs(int x,int y)
{
	q.push(Node(x,y,0));
	VIS[x][y]=true;
	while(!q.empty())
	{
		Node cur=q.front();
		q.pop ();
		for (int k=0;k<12;k++) 
		{
			int ex=cur.x+dx[k],ey=cur.y+dy[k];
			if(ex>=1&&ey>=1&&ex<=50&&ey<=50&&!VIS[ex][ey]) 
			{
				q.push(Node(ex,ey,cur.step+1));
				VIS[ex][ey]=true; // 第30行
			}
			if(ex==nx&&ey==ny)return cur.step+1;
		} 
	}
}
int main()
{
	cin>>nx>>ny;
	cout<<bfs(1,1)<<endl;
	return 0;
}
