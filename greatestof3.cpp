//Aim: Program to print the greatest of the three number
#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"Enter the three numbers one by one of which you want the greatest"<<endl;
	cin>>a>>b>>c;//cascading executed 
	if (a>b)
	{//In this loop means that a is greater than b now lets check if it is greater than c or not 
		if (a>c)
		cout<<"First one is the greatest"<<endl;
		else 
		cout<<"Third no entered is the greatest"<<endl;
	}
	else
	{// in this loop means that b is greater than a now lets check if its greater than c or not
		if (b>c)
		cout<<"Second number entered is the greatest"<<endl;
		else 
		cout<<"Third number entered is the greatest"<<endl;
	}
   return 0;
}
