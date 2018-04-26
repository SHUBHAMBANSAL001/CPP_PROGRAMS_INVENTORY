//program to sort an array in the ascending array
#include<iostream>
using namespace std;
int main()
{
	int i,j,size,array[10],temp;
    cout<<"Enter how many elements you want to store in the array (at max 10)";
    cin>>size;
    if(size>10)
    size=10;
    cout<<"Now start entering the elements of the array one by one ";
    for(i=0;i<size;i++)
    {
    	cin>>array[i];
	}
	cout<<"The entered array is "<<endl;
	for(i=0;i<size;i++)
    {
    	cout<<array[i]<<endl;
	}
	cout<<"Now we will do the sorting \n \n "<<endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i;j++)
		{
	        if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
		    }
			else continue;
			 
		}
	}
    cout<<"The sorted array is "<<endl;
    for(i=0;i<size;i++)
    {
    	cout<<array[i]<<endl;
	}
	return 0;
}
