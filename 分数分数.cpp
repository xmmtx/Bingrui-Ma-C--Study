#include<iostream>
using namespace std;
int main()
{
	int n;
	char score;
	cout<<"ÇëÊäÈë·ÖÊý£º"<<endl;
	cin>>n;
	if(n>=90)
		score='A';
	else if(n>=70)
		score='B';
		else if(n>=60)
			score='C';
			else
				score='D';
	cout<<score;
	return 0;	
}
