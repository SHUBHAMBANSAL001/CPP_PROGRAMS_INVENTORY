//program to add two arrays and display their result
#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],i,size;
	cout<<"Enter how many elements you want to store in both the arrays(at max 10)"<<endl;
	cin>>size;
	if(size<0||size>10)
	size=10;
	cout<<"Now start entering the elements of first array"<<endl;
	for(i=0;i<size;i++)
	cin>>a[i];
	cout<<"Now please enter the elements of the second array"<<endl;
	for(i=0;i<size;i++)
	cin>>b[i];
	cout<<"The sum of every element of the first array with the corresponding element in the second array is"<<endl;
	for(i=0;i<size;i++)
	cout<<b[i]+a[i]<<endl;
    return 0;	
}
