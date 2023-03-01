#include<iostream>
using namespace std;
main()
{
	long long sum,n;
	int i;
	sum=0;
	n=1;
	cout<<"第1个棋盘有："<<n<<"粒米"<<endl;
	for(i=2;i<=64;i++)
	{
		n=n*2;
		sum=sum+n;
		cout<<"第"<<i<<"个棋盘有："<<n<<endl;
	}
	cout<<"总数："<<sum<<endl;
}
