#include<iostream>
using namespace std;
int main()
{
	int a,b,c,a1,b1,a2,b2,min;
	cin>>a>>b>>c;
	a1=a;
	b1=b;
	for(int i1=1;i1<65535;i1++)
	{
		a=a1;
		b=b1;
		a/=i1;
		b/=i1;
		if(a<=c && b<=c && a%b!=0)
		{
			a2=a;
			b2=b;
			i1++;
			a=a1;
			b=b1;
			a/=i1;
			b/=i1;
			if(a<a2 && b<b2)
			{
				cout<<a<<" "<<b;
				return 0;
			}
			else
			{
				cout<<a2<<" "<<b2;
				return 0;
			}
		}
	}
}
