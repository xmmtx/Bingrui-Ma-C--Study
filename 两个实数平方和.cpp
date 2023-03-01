#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    float a,b1,b2,c1,c2;
	cin>>b1;
	b2=b1*b1;
    cin>>c1;
    c2=c1*c1;
    a=b2+c2;
	cout<<fixed<<setprecision(6);
	cout<<a<<endl;
} 
