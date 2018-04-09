//program to swap two numbers without the use of third variable 
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	int temp;
	temp =a;
	a=b;
	b=temp;
	cout<<"The values after swapping are "<<a<<" and "<<b;
	return 0;

}
