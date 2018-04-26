//program to generate n random numbers
#include<iostream>
#include<cstdlib>
using namespace std;
//int rand();
int main()
{
	int n,num,max,i;
	cout<<"Enter how many random numbers do you want to be displayed \n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		num=rand();
		cout<<num<<endl;
	}
   return 0;
}
