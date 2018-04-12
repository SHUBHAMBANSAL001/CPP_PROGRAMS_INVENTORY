//program to print the factorial of a number
#include<iostream>
using namespace std;
int main()
{
	int fact=1,i,num;
	cout<<"Enter the number of which factorial you want to calculate"<<endl;
	cin>>num;
	if(num<0)
	cout<<"Factorial of negative number does not exist";
	else
	{
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
    
	cout<<"The factorial of the entered number is "<<fact;
	}   
return 0;
}
