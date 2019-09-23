//Aim : Program to input an array and to find its largest element
#include<iostream>
using namespace std;
int main()
{
	int array[10],i,size,max=0;
	cout<<"Enter how manhy elements you want to store in the array(at max 10)"<<endl;
	cin>>size;
	if(size<0 || size >10)
	size=10;
	cout<<"Now start entering the elements of the array"<<endl;
	for(i=0;i<size;i++)
	cin>>array[i];
	cout<<"Just to recheck the stored elements in the array are"<<endl;
    for(i=0;i<size;i++)
	cout<<array[i]<<"|";
	cout<<endl;
	for(i=0;i<size;i++)
	{
		if(array[i]>max)
		max=array[i];
	}
	cout<<"The highest element in the entered array is "<<max<<endl;
	return 0;
}
