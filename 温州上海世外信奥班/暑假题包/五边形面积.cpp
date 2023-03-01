/*
题目：五边形面积 
造成高房价的原因有许多，比如土地出让价格。既然地价高，土地的面积必须仔细计算。遗憾的是，有些地块的形状不规则，比
如是如图【1.jpg】中所示的五边形。 一般需要把它划分为多个三角形来计算。
已知三边求三角形的面积需要用海伦定理，参见【2.jpg】
各条边长数据如下：
AB = 52.1
BC = 57.2
CD = 43.5
DE = 51.9
EA = 33.4
EB = 68.2
EC = 71.9
根据这些数据求五边形地块的面积。四舍五入到小数后两位
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
