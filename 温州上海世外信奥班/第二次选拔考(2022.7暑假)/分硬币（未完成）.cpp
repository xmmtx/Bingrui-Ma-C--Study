/*��Ŀ����Ӳ�� 
С����n��Ӳ�ң���i��Ӳ�ҵ�ֵ��a��
С��������е�Ӳ�ҷ��䵽���Ŀڴ�����������ܰ�������ֵ��ͬ��Ӳ�ҷ���ͬһ���ڴ��
���磬���С����6öӲ�ң�������a=[1,2,4,3,3,2]��ʾ�������Խ���ЩӲ�ҷַ��������ڴ�:[1,2,3]��[2,3,4]��
С��ϣ��ʹ�����ٵĿڴ������ַ�����Ӳ�ҡ����������������¡�
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
