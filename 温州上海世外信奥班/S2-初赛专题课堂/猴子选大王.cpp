//题目：猴子选大王
#include<iostream>
using namespace std;
struct list
{
	int l,x,r;
}
li[105];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		li[i].l=i-1;
		li[i].x=i;
		li[i].r=i+1;
	}
	li[n].r=1;
	li[1].l=n;
	int x=1,cnt=0;
	while(li[x].r!=x)
	{
		cnt++;
		if(cnt==m)
		{
			cnt=0;
			li[li[x].l].r=li[x].r;
			li[li[x].r].l=li[x].l;
			cout<<x<<" ";
		}
		x=li[x].r;
	}
	cout<<endl<<x;
	return 0;
}
