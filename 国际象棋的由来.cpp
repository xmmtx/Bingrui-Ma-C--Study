#include<iostream>
using namespace std;
main()
{
	long long sum,n;
	int i;
	sum=0;
	n=1;
	cout<<"��1�������У�"<<n<<"����"<<endl;
	for(i=2;i<=64;i++)
	{
		n=n*2;
		sum=sum+n;
		cout<<"��"<<i<<"�������У�"<<n<<endl;
	}
	cout<<"������"<<sum<<endl;
}
