//题目：奇妙的数字 
#include<iostream>
#include<cstring>
using namespace std;
int to[10];
int main()
{
	int i=1;
	while(i++)
	{
		int flag=0,s=0;
		int b=i*i;
		int c=i*i*i;
		memset(to, 0, sizeof(to)); 
		while(b!=0)
		{
			to[b%10]++;
			b=b/10;
			s++;
		}
		while(c!=0)
		{
			to[c%10]++;
			c=c/10;
			s++;
		}
		if(s!=10)
		continue;

		for(int k=0;k<=9;k++)
		{
			if(to[k]>1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		break;
	}
	cout<<i;
	return 0;
}
