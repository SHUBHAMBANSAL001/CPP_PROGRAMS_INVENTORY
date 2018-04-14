//program to display the number of prime numbers in the given interval
#include<iostream>
using namespace std;
int main()
{
	int a,b,i,count=0;
	cout <<"Enter the lower limit of the interval"<<endl;
	cin>>a;
	cout<<"enter the upper limit of the interval";
	cin>>b;
	for(i=a;i<=b;i++)
	{
		for(int j=1;j<=i;j++)
		{
		if(i%j==0)
		count++;
		}
	if(count ==2)
	cout<<i<<endl;
	count =0;
	}
	return 0;
}
