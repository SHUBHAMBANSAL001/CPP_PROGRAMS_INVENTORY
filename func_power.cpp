//program to calculate power using recursion
#include<iostream>
using namespace std;
int poweR(int ,int);
int main()
{
	int base,power;
	cout<<"Enter the base number "<<endl;
	cin>>base;
	cout<<"Enter the power it has to be raised to (negative not accepted)"<<endl;
	cin>>power;
	int result;
	result = poweR(base,power);
	if(power<0)
	cout<<"The result for negative power is  "<<result;
	else
	cout<<base<<" Raised to the power "<<power<<" is "<<result;
	return 0;
}
int poweR(int base,int power)
{
    if(power<0)
    return 0;
	if(power>0)
	return base*poweR(base,power-1);
	else
	return 1;
}
