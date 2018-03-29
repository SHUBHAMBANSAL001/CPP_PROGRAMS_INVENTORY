//program to find the quotient and remainder
#include<iostream>
using namespace std;
int main()
{
	int dvsor,dvdend,rem,quo;
	cout<<"Enter the dividend and divisor";
	cin>>dvdend>>dvsor;
	rem=dvdend%dvsor;
	quo=dvdend/dvsor;
	cout<<"The Quotient and the remainder for the entered values is"<<quo<<" and "<<rem;
	return 0;
}
