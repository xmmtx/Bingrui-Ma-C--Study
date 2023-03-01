#include<iostream>
using namespace std;
int n,a[10005],tmp[10005];
void sort(int l,int r)
{
  if(l>=r) return ;
  int mid=(l+r)/2;
  sort(l,mid);
  sort(mid+1,r);
  int i=l,j=mid+1,k=1;
  while(i<=mid && j<=r)
  {
    if(a[i]<a[j])
    {
      tmp[k]=a[i];
      k++;
      i++;
    }
    else
    {
      tmp[k]=a[j];
      k++;
      j++;
    }
  }
  while(i<=mid)
  {
    tmp[k]=a[i];
    k++;
    i++;
  }
  while(j<=r)
  {
    tmp[k]=a[j];
    k++;
    j++;
  }
  for(int i=l;i<=r;i++)
  {
    a[i]=tmp[i-l+1];
  }
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
  }
  sort(1,n);
  for(int i=1;i<=n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
