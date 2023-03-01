#include<iostream>
using namespace std;
int main()
{
  int n,a[10005];
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  for(int i=n;i>=2;i--)
  {
    for(int j=1;j<=i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        swap(a[j],a[j+1]);
      }
    }
  }
  for(int i=1;i<=n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
