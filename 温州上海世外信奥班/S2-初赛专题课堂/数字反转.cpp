#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  if(n==0)
  {
    cout<<0;
    return 0;
  }
  if(n<0)
  {
    cout<<"-";
    n-=2*n; 
  }
  while(n!=0)
  {
    m=n%10;
    n=n/10;
    if(m!=0)
      cout<<m;
  }
  return 0;
}
