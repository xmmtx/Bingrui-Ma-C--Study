#include<iostream>
using namespace std;
main()
{
	int gj,mj,xj;
	for(gj=0;gj<=20;gj++)
	{
		for(mj=0;mj<=33;mj++)
		{
			xj=100-gj-mj;
			if(gj*5+mj*3+xj/3.0==100)
			{
				cout<<"������"<<gj<<"ֻ��ĸ����"<<mj<<"ֻ��С����"<<xj<<"ֻ��" <<endl;
			}
		}
	}
}
