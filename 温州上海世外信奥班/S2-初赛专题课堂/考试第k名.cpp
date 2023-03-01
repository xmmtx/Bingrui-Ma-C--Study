#include<iostream>
#include<algorithm>
using namespace std;
struct stu
{
	string name;
	double cj;
};
bool cmp(stu a,stu b)
{
	if(a.cj>b.cj) return true;
	else return false;
}
int main()
{
	stu a[10005]; 
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i].name>>a[i].cj;
	sort(a+1,a+n+1,cmp);
	cout<<a[k].name<<' '<<a[k].cj;
	return 0;
}
