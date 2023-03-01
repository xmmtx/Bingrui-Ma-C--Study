#include <iostream>
 
using namespace std;
 
float max(float a[],int n);//???
float min(float b[],int n);//???
 
int main()
{
	float arr[5] ={8,3,1,4,5};
	max(arr,5);
	min(arr,5);
} 
float max(float a[],int n)
{
	float max = a[0];
 	for(int i=1;i<n;i++)
 	{
 		if(a[i] > max)
 		max = a[i];
	}
	cout<<"max:"<<max<<endl; 
}
float min(float b[],int n)
{
	float min = b[0];
 	for(int i=1;i<n;i++)
 	{
 		if(b[i] < min)
 		min = b[i];
	}
	cout<<"min:"<<min<<endl; 
}

