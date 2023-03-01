/*题目：分硬币 
小明有n个硬币，第i个硬币的值是a。
小明想把所有的硬币分配到他的口袋里，但是他不能把两个价值相同的硬币放在同一个口袋里。
例如，如果小明有6枚硬币，用数组a=[1,2,4,3,3,2]表示，他可以将这些硬币分放在两个口袋:[1,2,3]，[2,3,4]。
小明希望使用最少的口袋数量分发所有硬币。请你帮助他做这件事。
*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n+1];
  for(int i=1;i<=n;i++)
    cin>>a[i];
  int kdgs,b[n+1],c[n+1];
  for(int i=1;i<=n;i++)
    b[i]=a[i];
  kdgs=0;
  for(int i=1;i<=n;i++)
  {
    for(int u=1;i<=n;i++)
    {
      if(b[i]=!a[u])
        c[i]=b[i];
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(c[i]=!0)
      kdgs++;
  }
  if(n==1)
  {
    cout<<"1";
    return 0;
  }
  cout<<(n*n-kdgs)/n-n/2;
  return 0;
}
