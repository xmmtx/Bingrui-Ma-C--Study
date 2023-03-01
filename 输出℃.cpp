#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float c,f;
    cin>>f;
    c=5*(f-32)/9; 
    cout<<fixed<<setprecision(2);
    cout<<c;
} 
