//Aim: Program to dynamically allocate memory
#include<iostream>
using namespace std;
int main()
{
	int num,*pointer,i;
	cout<<"Enter how many elements you want to store in the array";
	cin>>num;
	pointer =  new int[num];//The crucial statement
	cout<<"Input "<<num<<" numbers now \n";
	for(i=0;i<num;i++)
	{
		cin>>pointer[i];
	}
    cout<<"The elements entered and stored in the array are \n";
    for(i=0;i<num;i++)
    cout<<pointer[i]<<endl;
   delete[] pointer; //Free the memory when you no longer use it.
   return 0;
  
}
