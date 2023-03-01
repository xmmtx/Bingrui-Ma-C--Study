#include<iostream>
using namespace std;
main()
{
  int gj,mj,xj,n,m,gs=0;
  cin>>n>>m;
  for(gj=0;gj<=n;gj++)
  {
    for(mj=0;mj<=n;mj++)
    {
      for(xj=0;xj<=n;xj++)
      {
        if(gj+mj+xj==m && gj*5+mj*3+xj/3.0==n)
        {
          gs++;
        }
      }
    }
  }
  cout<<gs;
}
