//Aim: Program to check if the given number is pallindrome or not
#include<iostream>
using namespace std;
int main()
{
	int orignum,remainder,N;
	int revnum =0;
	cout<<"Enter the number for which you want to check the pallindrome";
	cin>>orignum;
	N=orignum;
	while(orignum!=0)
	{
		remainder=orignum%10;
		revnum=revnum*10+remainder;
		orignum/=10;
	}
if(N==revnum)
cout<<"The given number is a pallindrome";
else
cout<<"The given number is not a pallindrome";
return 0;
}
