//题目：核桃的数量 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=a;;i=i+a)
	{
		if(i%b==0&&i%c==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
