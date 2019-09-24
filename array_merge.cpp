//Aim : Program to merge two arrays 
#include<iostream>
using namespace std;
int main()
{
	int size1,size2,a[20],b[10],i,j;
	cout<<"Enter how many elements you want to enter in the first array(at max 10)"<<endl;
	cin>>size1;
	if(size1>10)
	size1=10;
    cout<<"Enter how many elements you want to enter in the second array(at max 10)"<<endl;
	cin>>size2;
	if(size2>10)
	size2=10;
	cout<<"Now start entering the first array"<<endl;
	for(i=0;i<size1;i++)
	cin>>a[i];
	cout<<"Now start entering the second array"<<endl;
	for(j=0;j<size2;j++)
	cin>>b[j];
	int n;
	n=size1+size2;
	cout<<"Now merging the two arrays into first array"<<endl;
	for(i=size1,j=0;i<n,j<size2;i++,j++) //2 loops running(Have a look over it)
	{
		a[i]=b[j];
	}
	cout<<"The array after merging is"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	return 0;
}
