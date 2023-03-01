/*
题目：双倍 
给你一个数列，数列中的每个数都小于200 ，并且数列里面的数不会重复，找出这个数列中的一个数是另一个数的2倍，输出找到的个数。
输入输出格式
输入格式：
输入一个数列每行以 0 表示结束。
输入-1 表示总输入结束。
输出格式：
每行数列对应一行输出，输出个数。
*/
#include<iostream>
using namespace std;
int main()
{
	int sjgs=65535;//数据个数，int范围内
	int p=0,lw=1;//lw第几个零位，p输入的数的总个数 
	int a[sjgs],b[sjgs],c[sjgs];//a输入的数组，b记录零的位置 ，c把每个0的区间赋值给c 
	b[0]=0;
	for(int i=0;i<sjgs;i++)
	{
		cin>>a[i];
		p++;
		if(a[i]==0)
		{
			b[lw]=p;
			lw++;
		}
		else if(a[i]==-1)
		{
			break;
		}
	}
	for(int i=0;i<lw-1;i++)
	{
		for(int i1=0;i1<b[i+1]-b[i]-1;i1++)
		{
			c[i1]=a[i1+b[i]];
		}
		int d=0; 
		for(int i1=0;i1<b[i+1]-b[i]-1;i1++)
		{
			for(int i2=0;i2<b[i+1]-b[i]-1;i2++)
			{
				if(c[i1]==2*c[i2])
				{
					d++;
				}
			}
		}
		cout<<d<<endl;
	}
}
