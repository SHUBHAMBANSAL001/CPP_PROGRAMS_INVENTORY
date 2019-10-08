//Aim: Program to find sum of natural numbers till the given number
#include<iostream>
using namespace std;
void sum(int);
int main()
{
	int n;
	cout<<"Enter the number for which you want the sum from 1 "<<endl;
	cin>>n;
	sum(n);
	return 0;
}
void sum(int a)
{
    int sum=0;
	for(int i=1;i<=a;i++)
	sum+=i;
	cout<<"The sum of the natural numbers upto the given number is"<<endl;
	cout<<sum;
}
