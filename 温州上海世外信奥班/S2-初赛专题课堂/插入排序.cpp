//ð�����򣺸��Ӷ�O(n^2),�ȶ�����
//ѡ�����򣺸��Ӷ�O(n^2),���ȶ�����
//�������򣺸��Ӷ�O(n^2),�ȶ�����
//--------�����������
#include<iostream>
using namespace std;
//ȫ�ֱ���
int main(){
  int n,a[10005];
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  
  for(int i=2;i<=n;i++){
    int j=i;
    while(a[j-1]>a[j] && j>=1){
      swap(a[j-1],a[j]); //��������
      j--;
    }
  }
  
  for(int i=1;i<=n;i++)
    cout<<a[i]<<' ';
  return 0;
}
