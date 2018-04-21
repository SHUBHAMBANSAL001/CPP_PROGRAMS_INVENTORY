//program to initialise an array from the user and then print it 
#include<iostream>
using namespace std;
int main()
{
	int array[25],i,size;
	cout<<"Enter how many element you want to store in the array(at max 25)"<<endl;
	cin>>size;
	if (size<0 || size >25)
	size =25;
	cout<<"Now start entering the elements"<<endl;
	for(i=0;i<size;i++)
    cin>>array[i];
    cout<<"The stored elements in the array are"<<endl;
    for(i=0;i<size;i++)
    cout<<array[i]<<endl;
    return 0;
}
