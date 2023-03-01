#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<49;i++)
	{
		for(int j=i+1;j<49;j++)
		{
       int s=1225;
       s=s-i-(i+1)-j-(j+1)+i*(i+1)+j*(j+1);
       if(s==2015&&i!=10)
         cout<<i;
		}
	}
	return 0;
 } 
