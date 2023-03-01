//题目：孔融让梨2
//编写一程序，输入五个整数，表示五个梨的重量，找出最小的数。
#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e,min;
		cin>>a>>b>>c>>d>>e;
	if(a>b)
		min=b;
	else
		min=a;
	if(min>c)
 		min=c;
	if(min>d)
		min=d;
	if(min>e)
		min=e;
	cout<<min;
}
