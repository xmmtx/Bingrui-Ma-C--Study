#include<iostream>
using namespace std;
int main()
{
	int a,b,c,min;
	cout<<"a b c=";
	cin>>a;
	cin>>b;
	cin>>c;
	if(a<b && a<c)
	{
		min=a;
	}
	if(b<a && b<c)
	{
		min=b;
	}
	if(c<a && c<b)
	{
		min=c;
	}
	cout<<"最小的数是："<<min<<endl;
	return 0;
}
