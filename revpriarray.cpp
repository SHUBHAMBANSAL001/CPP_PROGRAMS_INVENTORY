//program to reverse print the array elements 
#include<iostream>
using namespace std;
int main()
{
	int array[10],i,size;
	cout<<"Enter how many elements you want to store in the array(at max 10)"<<endl;
	cin>>size;
	if(size>10)
	size=10;
	if(size>0)
	{
	cout<<"Now start entering the elements of the array"<<endl;
	for(i=0;i<size;i++)
    cin>>array[i];
    cout<<"The elements of the array in reversed order"<<endl;
    for(i=size-1;i>=0;i--)
    cout<<array[i]<<endl;
    }
    if(size<0)
    cout<<"Wrong size entered , program terminated"<<endl;
	return 0;
}
