/*
题目：运动会
编写程序，接收n+1行的输入:
第一行表示参赛天数n
其后n行，每一行表示某天获得的金牌、银牌、铜牌数目，以空格隔开
输出：1行，包括4个整数，表示金牌、银牌、铜牌的总数，以及总奖牌数。 
*/
#include<iostream>
using namespace std;
main()
{
  int n,x,y,z,s1,s2,s3;
  cin>>n;
  s1=0;
  s2=0;
  s3=0;
  for(int i=1;i<=n;i++)
  {
    cin>>x>>y>>z;
    s1+=x;
    s2+=y;
    s3+=z;
  }
  cout<<s1<<" "<<s2<<" "<<s3<<" "<<(s1+s2+s3);
}
