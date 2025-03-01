/*
题目：猜年龄
美国数学家维纳(N.Wiener)智力早熟，11岁就上了大学。他曾在1935~1936年应邀来中国清华大学讲学。
一次，他参加某个重要会议，年轻的脸孔引人注目。于是有人询问他的年龄，他回答说：
“我年龄的立方是个4位数。我年龄的4次方是个6位数。这10个数字正好包含了从0到9这10个数字，每个都恰好出现1次。”
请你推算一下，他当时到底有多年轻。
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,scf,cf,sc;//a和b用于计算，cf表示不馗吹氖值母鍪� 
	int cf3[4],cf4[6],tg[10]; //cf3是三次方的意思，cf4是四次方的意思，tg记录通过的数字。 
	cf=0;
//	for(int i1=0;bcf==10;i1++)
	for(int i1=0;i1<65535;i1++)
	{
		cf=0;
		a=i1*i1*i1;
		b=a;
		for(int i2=0;i2<4;i2++)//求a的每一位数 
		{
			cf3[i2]=a%10;
			a/=10;
		}
		for(int i2=0;i2<4;i2++)
		{
			tg[i2]=cf3[i2]; 
		}
		b*=i1;
		for(int i2=0;i2<6;i2++)//求b的每一位数 
		{
			cf4[i2]=b%10;
			b/=10;
		}
		for(int i2=0;i2<6;i2++)
		{
			tg[i2+4]=cf4[i2]; 
		}
		for(int i2=0;i2<10;i2++)
		{
			for(int i3=0;i3<10;i3++)
			{
				if(tg[i2]==tg[i3])
				{
					cf++;
				}
			}
		} 
		sc=i1;
		if(cf==10)
		{
			cout<<sc;
			return 0;
		}
	}
}
