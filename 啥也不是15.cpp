#include<iostream>
#include<cstdio>
using namespace std;
#include<iomanip>
main()
{
	char c1[80];
	char ch;
	int i,n=0;
	fgets(c1,80,stdin);
	for(i=0;c1[i]!='\0';i++)
	{
		if(c1[i]>='0'&&c1[i]<='9')
			n++;
	}
	cout<<n<<endl;
}
