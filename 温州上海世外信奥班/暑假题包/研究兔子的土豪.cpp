/*
题目：研究兔子的土豪
某天，HWD老师开始研究兔子，因为他是个土豪，所以他居然一下子买了一个可以容纳10^18代兔子的巨大笼子（好像比我们伟大的地球母亲大一点点？），
并开始研究它们，之后，他了解了兔子的繁衍规律：即fibonacci数列。
兔子繁殖了n代后，HWD老师很开心。
但是，HWD老师有密集恐惧症，所以，他只能去卖了兔子，他找到了一个好的雇主，但是这个雇主有强迫症，他只每次收购1007只兔子，HWD老师为了避免自己的密集恐惧症，要尽量多的卖了兔子。
但是即便是密集恐惧症，也打击不了HWD老师研究兔子的决心，他数着数着自己剩下的兔子……
输入格式
HWD老师让兔子繁衍了几代（一个整数，没有其他字符）。
输出格式
HWD老师剩余（残余？）的兔子（一个整数，忽略行尾回车及空格）。
*/
#include<iostream>
using namespace std;
int main()
{
  long long n,a[1000];
  cin>>n;
  n=n%108;
  a[1]=a[2]=1;
  for(int i=3;i<=n;i++)
  {
    a[i]=(a[i-1]%1007+a[i-2]%1007)%1007;
  }
  cout<<a[n];
  return 0;
} 
/*以下为自己的原代码
#include<iostream>
using namespace std;
int main()
{
  int n,sc,qx,hx;//n表示输入，sc表示输出，qx表示前项，hx表示后项。 
  cin>>n;
  n%=108;
  qx=1;
  hx=1;
  for(int i=0;i<n;i++)
  {
    if(i==0 or i==1)
    {
      sc=1;
    }
    else
    {
      sc=qx+hx;
      qx=hx;
      hx=sc;
      sc%=1007;
      qx%=1007;
      hx%=1007;
    }
  }
  cout<<sc;
  return 0;
}
*/
