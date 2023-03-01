//题目：从小到大 
//输入两个整数，按照从小到大的顺序输出，两数用空格隔开。
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cin>>a>>b;
	if(a<=b)
		cout<<a<<" "<<b;
	else
		cout<<b<<" "<<a;
}
