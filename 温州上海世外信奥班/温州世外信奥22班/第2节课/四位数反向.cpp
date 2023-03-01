//题目：四位数反向 
//小明学会了输入两位数并反向输出，他觉得自己可以尝试更多位的数，就从四位数先开始吧。
#include<iostream>
using namespace std;
main()
{
	int n,q,b,s,g;
	cin>>n;
	g=n%10;
	n/=10;
	s=n%10;
	n/=10;
	b=n%10;
	n/=10;
	q=n%10;
	n=g*1000+s*100+b*10+q;
	cout<<n;
}
