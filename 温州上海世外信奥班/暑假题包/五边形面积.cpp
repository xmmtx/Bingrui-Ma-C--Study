/*
��Ŀ���������� 
��ɸ߷��۵�ԭ������࣬�������س��ü۸񡣼�Ȼ�ؼ۸ߣ����ص����������ϸ���㡣�ź����ǣ���Щ�ؿ����״�����򣬱�
������ͼ��1.jpg������ʾ������Ρ� һ����Ҫ��������Ϊ��������������㡣
��֪�����������ε������Ҫ�ú��׶����μ���2.jpg��
�����߳��������£�
AB = 52.1
BC = 57.2
CD = 43.5
DE = 51.9
EA = 33.4
EB = 68.2
EC = 71.9
������Щ����������εؿ��������������뵽С������λ
*/
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double ab,bc,cd,de,ea,eb,ec;
	ab=52.1;
	bc=57.2;
	cd=43.5;
	de=51.9;
	ea=33.4;
	eb=68.2;
	ec=71.9;
	double s1,s2,s3;
	s1=(ab+ea+eb)/2;
	s2=(eb+bc+ec)/2;
	s3=(ec+cd+de)/2;
	double a1,a2,a3;
	a1=sqrt(s1*(s1-ab)*(s1-ea)*(s1-eb));
	a2=sqrt(s2*(s2-eb)*(s2-bc)*(s2-ec));
	a3=sqrt(s3*(s3-ec)*(s3-cd)*(s3-de));
	cout<<fixed<<setprecision(2)<<a1+a2+a3;
	return 0;
}
