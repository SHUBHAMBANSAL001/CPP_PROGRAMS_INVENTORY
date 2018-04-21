//program to load an array and then display the same
#include<iostream>
using namespace std;
int main()
{
	int array[25],i;
	cout<<"Loading the array"<<endl;
	for(i=0;i<10;i++)
	array[i]=i;
	cout<<"The numbers stored in the array are "<<endl;
	for(i=0;i<10;i++)
    cout<<array[i]<<endl;
    return 0;
}
