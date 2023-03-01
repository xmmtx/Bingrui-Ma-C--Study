#include<iostream>
using namespace std;
int main()
{
	int a;
	char score;
	cin>>a;
	if(a>=90)
		score='A';
	else if(a>=80)
		score='B';
		else if(a>=70)
			score='C';
			else if(a>=60)
				score='D';
				else
					score='E';
	cout<<score;
	return 0;	
}
