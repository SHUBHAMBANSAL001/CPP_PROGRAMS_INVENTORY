//Aim: PROGRAM TO DISPLAY FIBONACCI SEQUENCE
#include<iostream>
using namespace std;
int main()
{
	int i,n,a=0,b=1,sum;
	cout<<"Enter how many terms of fibonnaci series you want to be displayed "<<endl;
	cin>>n;
	cout<<"The sequence till the given range is "<<endl;
	cout<<a<<endl<<b<<endl;
	for(i=3;i<=n;i++)
	{
		sum =a+b;
		cout<<sum<<endl;
		if(a<b)
		a=sum;
		else
		b=sum;
	}
	cout<<"Program terminated";
	return 0;
}
