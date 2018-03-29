//program to print the size of the chosen data type
#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"Enter the option of which you want the size of"<<endl;
	cout<<"1. Char "<<endl;
	cout<<"2. Int "<<endl;
	cout<<"3. float "<<endl;
	cout<<"4. Double "<<endl;
	cout<<"5. quit"<<endl;
	jump : cin>>choice;
	 switch(choice)
	  {
	 case 1 : cout<<"The size of char data type is "<< sizeof(char);	
	          break;
	 case 2 : cout<<"The size of int data type is "<< sizeof(int);
	          break;   
	 case 3 : cout<<"The size of float data type is "<< sizeof(float);
	          break; 
	 case 4 : cout<<"The size of double data type is "<< sizeof(double);
              break;	 
	 case 5 : break; 
	 default : cout<<"Wrong choice entered , program terminated !! please enter the valid choice";
	          goto jump; 
	  } 
	
	return 0;
}
