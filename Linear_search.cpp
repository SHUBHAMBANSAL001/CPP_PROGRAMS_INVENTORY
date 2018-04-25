//program for linear searching in the arrays 
#include<iostream>
using namespace std;
int main()
{
	int i,array[10],size,key,flag=0;
	cout<<"Enter how many elements you want to enter in the array"<<endl;
	cin>>size;
	if(size>10)
	size=10;
	cout<<"Now start entering the elements in the array"<<endl;
	for(i=0;i<size;i++)
	cin>>array[i];
	cout<<"The entered array is"<<endl;
	for(i=0;i<size;i++)
	cout<<array[i]<<endl;
	cout<<"Enter the number to be searched for"<<endl;
	cin>>key;
	for(i=0;i<size;i++)
	{
		if(array[i]==key)
		{
		cout<<"Element found!!! at "<<i<<" index or "<<i+1<<" location "<<endl;
        flag=1;
		}
	}
    if(flag==0)
    cout<<"The entered element is not in the array,sorry";
    return 0;
}
