//��Ŀ����Ƴɼ� 
//��д���򣬵�һ������n��ʾ�༶������Ȼ��ÿһ�б�ʾĳһ��ͬѧ�����Ƴɼ���һ��n��ͬѧ��ͳ�����ÿ��ͬѧ���ܷ֡�ƽ���֣���n�У���
#include<iostream>
using namespace std;
main()
{
  int a[1000][5];
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=3;j++)
      cin>>a[i][j];
  }
  for(int i=1;i<=n;i++)
  {
    int sum=0;
    for(int j=1;j<=3;j++)
    {
      sum+=a[i][j];
    }
    cout<<sum<<" "<<sum/3.00<<endl;
  }
}
