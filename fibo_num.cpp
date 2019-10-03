//Aim: Program to generate fibonacci series upto a certain number
#include<iostream>
using namespace std;
int main()
{
	int i,a=0,b=1,sum=0,n;
	cout<<"Enter the number upto which you want to display the series ";
	cin>>n;
	cout<<a<<endl<<b<<endl;
	while(1)
	{
		sum =a+b;
		if(sum>n)
		break;
		cout<<sum<<endl;
		if(a<b)
		a=sum;
		else
		b=sum;
	}
	return 0;
}
