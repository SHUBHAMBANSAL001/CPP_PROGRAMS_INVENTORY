//program to find the average of elements of the array
#include<iostream>
using namespace std;
int main()
{
	int array[10],i,size,sum=0,avg;
	cout<<"Enter how many elements you want to store in the array(at max 10)"<<endl;
	cin>>size;
	cout<<"Now start entering the elements in the array"<<endl;
	for(i=0;i<size;i++)
	cin>>array[i];
	for(i=0;i<size;i++)
	{
	 sum +=array[i];	
	}
	avg=(sum/size);
    cout<<"The integral value of the average of the elements entered in the array is "<<avg<<endl;
	return 0;
}
