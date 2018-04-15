//program to print the farenhiet in celcius temperature
#include<iostream>
using namespace std;
int main()
{
	float f,c;
	cout<<"Enter the temperature in fahrenheit";
    cin>>f;
    c= 0.555*(f-32.00);
    cout<<"The value of entered temperature in celsius is"<<c;
    return 0;
}
