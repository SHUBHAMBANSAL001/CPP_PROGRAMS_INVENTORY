#include<iostream>
using namespace std;
int main()
{
	cout <<"enter any number";
	int num;
	cin>>num;
	int sum = 0;
	for(int i=1;i<=num;i++)
	sum+=i;
	cout<<"The sum of the natural numbers till the given number is"<<sum;
	return 0;
}
