//program to print the reverse of a number 
#include<iostream>
using namespace std;
int main()
{ 
cout<<"Enter a number"<<endl;
int num;
cin>>num;
int rev=0,remainder;
while(num!=0)
{
	remainder=num%10;
	rev = rev*10 + remainder;
	num=num/10;
}
cout<<"The reversed number is "<<rev;
return 0;
}
