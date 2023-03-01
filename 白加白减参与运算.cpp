#include<iostream>
using namespace std;
int main()
{
	int m,n;
	int a1,a2,i,j;
	m=10;
	n=20;
	m++;
	n--;
	cout<<"m="<<m<<",n="<<n<<endl;
	a1=100;
	a2=50;
	i=a1++;
	cout<<"i="<<i<<",a1"<<a1<<endl;
	j=++a2; 
	cout<<"j="<<j<<",a2="<<a2<<endl;
}
