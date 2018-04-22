//program to find the sum of natural numbers using recursion
#include<iostream>
using namespace std;
int sum(int);
int main()
{
	int n;
	cout<<"Enter till which number you want to calculate the sum of natural numbers "<<endl;
	cin>>n;
	cout<<"The value is "<<sum(n);
	return 0;
}
int sum(int a)
{
	if(a!=0)
	return a + sum(a-1);
	else
	return 0;
}
