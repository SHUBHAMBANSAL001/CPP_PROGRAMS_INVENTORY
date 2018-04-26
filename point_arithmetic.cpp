//Program to print the elements of the array with the help of a pointer
#include<iostream>
using namespace std;
int main()
{
	int i,array[10],*ptr;
	for(i=0;i<10;i++)//populating the array
	{
		array[i]=i;
	}
	ptr=array;//attaching the first location of array with the pointer
	for(i=0;i<10;i++)
	{
	cout<<*ptr<<endl;
	ptr++;
    }
    return 0;
}
