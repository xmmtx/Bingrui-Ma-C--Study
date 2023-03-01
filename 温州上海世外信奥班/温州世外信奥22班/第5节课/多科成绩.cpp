//题目：多科成绩 
//编写程序，第一行输入n表示班级人数，然后每一行表示某一个同学的三科成绩，一共n个同学。统计输出每个同学的总分、平均分（共n行）。
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
