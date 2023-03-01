//冒泡排序：复杂度O(n^2),稳定排序
//选择排序：复杂度O(n^2),不稳定排序
//插入排序：复杂度O(n^2),稳定排序
//--------三大基本排序
#include<iostream>
using namespace std;
//全局变量
int main(){
  int n,a[10005];
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  
  for(int i=2;i<=n;i++){
    int j=i;
    while(a[j-1]>a[j] && j>=1){
      swap(a[j-1],a[j]); //交换函数
      j--;
    }
  }
  
  for(int i=1;i<=n;i++)
    cout<<a[i]<<' ';
  return 0;
}
