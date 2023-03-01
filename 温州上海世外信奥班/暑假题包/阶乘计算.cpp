#include<iostream>
#include<cstring>
using namespace std;

const int MAX=4000;
int main() 
{
	int n,a[MAX],i,j,s,r=0;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	a[0]=1;
	for(i=2;i<=n;i++)
	{		
		for(j=0;j<MAX;j++)
		{			
			s=a[j]*i+r;
			r=s/10;			
			a[j]=s%10;
		}
	}	
	for(i=MAX-1;i>=0;i--)
	{		
	    if(a[i])
		break;
	}
	for(j=min(i, 999);j>=0;j--)	
		printf("%d",a[j]);
	return 0;
}
