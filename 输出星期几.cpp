#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"星期一"<<endl;
			break;
		case 2:
			cout<<"星期二"<<endl;
			break;
		case 3:
			cout<<"星期三"<<endl;
			break;
		case 4:
			cout<<"星期四"<<endl;
			break;
		case 5:
			cout<<"星期五"<<endl;
			break;
		case 6:
			cout<<"星期六"<<endl;
			break;
		case 7:
			cout<<"星期天"<<endl;
			break;
		default:
			cout<<"输入不在1~7之间，输入Error！！！"<<endl;
			break;
	} 
	cout<<"结束了！";
	return 0;
} 
