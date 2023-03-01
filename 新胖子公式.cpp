#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    float a,b,c,d;
    cin>>a>>b;
    c=b*b;
    d=a/c;
    cout<<fixed<<setprecision(1);
    cout<<d<<endl;
    if(d>25)
    	cout<<"PANG"<<endl;
    else
    	cout<<"Hai Xing"<<endl;
} 
