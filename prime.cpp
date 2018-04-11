//program to check if a number is prime number or not
#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"Enter a number to check if its prime or not";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	cout<<"The entered number is prime number";
	else
	cout<<"The entered number is not a prime number";
    return 0;
}
