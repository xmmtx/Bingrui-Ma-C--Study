//题目：立方尾不变 
#include<iostream>
using namespace std;
int main()
{
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a=1ll*i*i*i;
		int b=i,t=1;
		while(b!=0)
		{
			b=b/10;
			t=t*10;
		}
		if(a%t==i)
		cnt++;
	}
	cout<<cnt;
}
