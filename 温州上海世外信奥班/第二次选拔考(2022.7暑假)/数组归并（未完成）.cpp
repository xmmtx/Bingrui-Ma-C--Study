/*
题目：数组归并
给定两个有序的（从小到大）数组，将其合并为一个大的有序的（从小到大）数组后输出。

输入格式：
第一行两个数n、m，表示两个小数组各自的大小
第二行n个数，表示其中一个数组的每一项
第三行m个数，表示另一个数组的每一项

输出格式：
输出一行n+m个数，表示合并后数组的每一项
*/
#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[n+1];
  for(int i=1;i<=n;i++)
    cin>>a[i];
  int b[m+1];
  for(int i=1;i<=n;i++)
    cin>>b[i];
  int c[n+m];
  for(int i=0;i<=n+m-1;i++)
  {
    c[i]=a[i+1];
    c[i+n]=b[i+1];
  }
  cout<<c[0];
  return 0;
}
