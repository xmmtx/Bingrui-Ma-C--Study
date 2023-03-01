#include<iostream>
using namespace std;
main()
{
	int s,gw,sw,bw,qw,ww;
    cin>>s;
    gw=s/1%10;
	sw=s/10%10;
	bw=s/100%10;
    qw=s/1000%10;
    ww=s/10000%10;
	cout<<gw<<sw<<bw<<qw<<ww;
} 
