#include <iostream>
using namespace std;

bool IsPrime(int n)
{
    if(n <= 1){
		cout<<"NO"<<endl; 
		return false;
	}
    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0){
            cout<<"NO"<<endl;
            return false;
        }
    }
    cout<<"YES"<<endl;
    return true;
}

int main() {
    int a;
    cin>>a;
    IsPrime(a);
    return 0;
}
