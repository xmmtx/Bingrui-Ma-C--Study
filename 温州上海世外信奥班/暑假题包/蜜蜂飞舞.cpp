#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n,sa=0,sb=0,sc=0,sd=0,se=0,sf=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a,b,c,d,e,f,t;
		cin>>a>>b>>c>>d>>e>>f>>t;
		sa=sa+t*a;
		sb=sb+t*b;
		sc=sc+t*c;
		sd=sd+t*d;
		se=se+t*e;
		sf=sf+t*f;
	}
	int x1,x2,y1,y2,z1,z2;
	cin>>x1>>y1>>z1>>x2>>y2>>z2;
    int x=sa+x1-sd-x2;
    int y=sb+y1-se-y2;
    int z=sc+z1-sf-z2;
    double s=sqrt(x*x+y*y+z*z);
    cout<<fixed<<setprecision(4)<<s;
	return 0;
}
