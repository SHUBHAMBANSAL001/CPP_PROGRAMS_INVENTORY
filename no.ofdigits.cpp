//program to count the number of digits in the integer
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number of which you want to calculate the digits "<<endl;
	cin>>num;
	int count =0;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
    cout<<"The number of digits in the entered number is "<<count;
    return 0;
}
