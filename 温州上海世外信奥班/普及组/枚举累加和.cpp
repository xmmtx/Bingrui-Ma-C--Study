#include<iostream>
using namespace std;
int main()
{
  int n,m,b=0,c=0;
  cin>>n>>m;
  int a[n];
  for(int i1=0;i1<n;i1++)
    cin>>a[i1];
  for(int i1=0;i1<n;i1++)
  {
    b+=a[i1];
    c++;
    if(b>=m)
    {
      cout<<c;
      return 0;
    }
  }
  cout<<"-1";
  return 0;
}
