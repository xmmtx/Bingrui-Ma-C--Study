#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float f1;
	cout<<"请输入一个实数："<<endl; 
	cin>>f1;
	cout<<fixed<<setprecision(6);
	cout<<"你输入的是"<<f1<<"。"<<endl;
} 
