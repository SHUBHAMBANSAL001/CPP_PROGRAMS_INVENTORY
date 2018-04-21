//program to reverse the array
#include<iostream>
using namespace std;
int main()
{
	int array[10],i,j,size,temp;
	cout<<"Enter how many elements you want to store in the array(at max 10)"<<endl;
	cin>>size;
	if(size>10)
	size=10;
	if(size>0)
	{
	cout<<"Now start entering the elements of the array"<<endl;
	for(i=0;i<size;i++)
    cin>>array[i];
    for(i=0,j=size-1;i<=size/2,j>=size/2;i++,j--)
     {   
	    temp=array[i];
        array[i]=array[j];
        array[j]=temp;
     }
	cout<<"The reversed array is"<<endl;
	for(i=0;i<size;i++)
	  cout<<array[i]<<endl;	
	}
    if(size<0)
    cout<<"Wrong size entered , program terminated"<<endl;
	return 0;
}
