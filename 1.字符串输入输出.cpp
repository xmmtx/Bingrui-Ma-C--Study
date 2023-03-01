#include<iostream>
#include<cstdio>
using namespace std;
#include<string.h>
#include<iomanip>
main()
{
	char c1[80];
	char c2[100];
	int a;
	gets(c1);
	puts(c1);
	cout<<"请cin输入一个字符串（当输入字符串时碰到第一个空格，就认为输入字符串结束了）："<<endl;
	cin>>c2;
	cout<<c2<<endl;
}
