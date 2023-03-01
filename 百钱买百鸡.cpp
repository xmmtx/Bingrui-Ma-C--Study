#include<iostream>
using namespace std;
main()
{
	int gj,mj,xj;
	for(gj=0;gj<=100;gj++)
	{
		for(mj=0;mj<=100;mj++)
		{
			for(xj=0;xj<=100;xj++)
			{
				if(gj+mj+xj==100 && gj*5+mj*3+xj/3.0==100)
				{
					cout<<"公鸡："<<gj<<"只，母鸡："<<mj<<"只，小鸡："<<xj<<"只。" <<endl;
				}
			}
		}
	}
}
