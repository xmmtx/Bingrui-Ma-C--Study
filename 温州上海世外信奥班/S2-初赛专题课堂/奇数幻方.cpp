#include<iostream>
#include<iomanip>//保留小数点后两位
using namespace std;
const int N=105;
int a[N][N];
int main()
{
  int n,m,x,y,num;//x是横轴，y是纵轴
  cin>>n;
  y=n/2+1;
  x=1;
  num=n*n;
  for(int i=1;i<=num;i++)
  {
    int dx=x-1;
    if(dx==0) dx=n;
    int dy=y%n+1;
    if(a[dx][dy]!=0)
    {
      dx=x%n+1;
      dy=y;
    }
    a[x][y]=i;
    cout<<x<<" "<<y<<endl;
    x=dx;
    y=dy;
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cout<<setw(2)<<a[i][j]<<' ';
    }
    cout<<endl;
  }
  return 0;
}
