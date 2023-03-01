#include<iostream>
using namespace std;
int main()
{
  int a,b,n;
  cin>>a>>b;
  if(a>b)
    n=a;
  else
    n=b;
  for(int i=1;i<n;i++)
  {
    if(a%i==0 && b%i==0)
      cout<<i;
  }
  return 0;
}
