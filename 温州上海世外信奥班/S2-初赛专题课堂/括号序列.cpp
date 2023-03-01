#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		stack<char> stk;
		bool flag=true;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]=='(')
			{
				stk.push('(');
			}
			else
			{
				if(stk.size()==0)
				{
					flag=false;
					break;
				}
			stk.pop();
			}
		}
		if(flag==false) cout<<"No"<<endl;
    	else if(stk.size()==0) cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
	}
	return 0;
}
