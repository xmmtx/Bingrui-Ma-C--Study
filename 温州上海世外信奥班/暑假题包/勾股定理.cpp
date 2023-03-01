/*
题目：勾股定理
输入包含几个三角形的描述。每个描述由一条包含三个整数a、b和c的线组成，这三个整数给出了直角三角形各边的长度。
输入输出格式
输入格式：
输入n行，每行三个数 a,b,c a和b为2条直角边，c为斜边（未知用 -1 表示），以0 0 0为结束，没行输入对应一个输出。
输出格式：
每行输入对应一行输出，保留三位小数（如果不成立输出 Impossible.） 。
*/
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	
	int   sjgs=65535;//数据个数，int范围内
	int   q=0;
	float a[sjgs],b[sjgs],c[sjgs],jjwzs[sjgs],wzs[sjgs];//a的意思是a边；b的意思是b边；c的意思是斜边；jjwzs的意思是间接未知数；wzs是最终要输出的。 
	char  e[sjgs];
	for(int i=0;i<sjgs;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		q++;
		if(a[i]==0 && b[i]==0 && c[i]==0)
			break;
	}
	for(int i=0;i<q;i++)
	{
		if(a[i]==-1)
		{
			if(c[i]<=b[i])
			{
				wzs[i]=0;
			}
			else
			{
				e[i]='a';
				jjwzs[i]=c[i]*c[i]-b[i]*b[i];
				wzs[i]=sqrt(jjwzs[i]);
			}
		}
		else if(b[i]==-1)
		{
			if(c[i]<=a[i])
			{
				wzs[i]=0;
			}
			else
			{
				e[i]='b';
				jjwzs[i]=c[i]*c[i]-a[i]*a[i];
				wzs[i]=sqrt(jjwzs[i]);
			}
		}
		else
		{
			e[i]='c';
			jjwzs[i]=a[i]*a[i]+b[i]*b[i];
			wzs[i]=sqrt(jjwzs[i]);
		}
	}
	for(int i=0;i<q-1;i++)
	{
		cout<<fixed<<setprecision(3);
		cout<<"Triangle #"<<i+1<<endl;
		if(wzs[i]==0)
		{
			cout<<"Impossible."<<endl<<endl;
		}
		else
		{
			cout<<e[i]<<" = "<<wzs[i]<<endl<<endl;
		}
	}
	return 0;
}
