//program to check if the given number is postive or negative
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number";
	cin>>n;
	if(n>0)
	cout<<"The entered number is postive";
	else if(n<0)
	cout<<"The entered number is negative";
	else 
	cout<<"The entered number is zero which is neither negative nor postive in nature";
	return 0;
}
