//program to print the factors of the given number
#include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"Enter the number whose factors you want to be shown "<<endl;
	cin>>num;
	cout<<"The factors of the entered number are "<<endl;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		cout<<i<<endl;
	}
    return 0;
}
