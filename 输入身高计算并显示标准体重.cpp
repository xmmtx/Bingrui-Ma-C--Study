#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    float a,b;
    cin>>a;
    cout<<fixed<<setprecision(1);
    b=(a-100)*0.9;
    cout<<endl<<"请输入您的身高(cm)：您的标准体重是"<<b<<"公斤。"<<endl;
} 
