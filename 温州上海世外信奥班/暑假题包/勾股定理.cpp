/*
��Ŀ�����ɶ���
����������������ε�������ÿ��������һ��������������a��b��c������ɣ�����������������ֱ�������θ��ߵĳ��ȡ�
���������ʽ
�����ʽ��
����n�У�ÿ�������� a,b,c a��bΪ2��ֱ�Ǳߣ�cΪб�ߣ�δ֪�� -1 ��ʾ������0 0 0Ϊ������û�������Ӧһ�������
�����ʽ��
ÿ�������Ӧһ�������������λС���������������� Impossible.�� ��
*/
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	
	int   sjgs=65535;//���ݸ�����int��Χ��
	int   q=0;
	float a[sjgs],b[sjgs],c[sjgs],jjwzs[sjgs],wzs[sjgs];//a����˼��a�ߣ�b����˼��b�ߣ�c����˼��б�ߣ�jjwzs����˼�Ǽ��δ֪����wzs������Ҫ����ġ� 
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
