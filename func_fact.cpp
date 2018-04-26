//program to print the factorial of a number using functions
#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int n,fact;
	cout<<"Enter the number whose factorial you want to print "<<endl;
	cin>>n;
	fact=factorial(n);
	cout<<"The factorial of the entered number is "<<endl<<fact;
	return 0;
	
}
int factorial(int n)
{
	if(n>1)
	return n*factorial(n-1);
	else
	return 1;
}
