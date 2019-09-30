//Aim: Program to build a 4 function Calculator
#include<iostream>
using namespace std;
void sum(int a, int b)
{
	int res = a+b;
	cout<<"The sum of the functions is "<<res<<endl;
}
void diff(int a,int b)
{
	int res;
	if(a>b||a==b)
	res=a-b;
	else 
	res=b-a;
	cout<<"The difference of the entered number is "<<res<<endl;
}
void div(int a,int b)
{
	int res;
	res=a/b;
	cout<<"The result of division is "<<res<<endl;
}
void mul(int a,int b)
{
	int res;
	res = a*b;
    cout<<"The multiplication of the entered numbers is"<<res<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers \n";
	cin>>a>>b;
	int choice=0;
    while(choice!=5)
	{
	cout<<"Choose one of the operations \n1.Sum \n2.Diff\n3.Divide\n4.Multiply\n5.Quit\n";
	cin>>choice; 
    switch(choice)
	{
		case 1: sum(a,b);
		        break;
		case 2: diff(a,b);
		        break;
	    case 3: div(a,b);
	            break;
	    case 4: mul(a,b);
	            break;
	    case 5: break;
		default: cout<<"Wrong choice entered. Please enter the choice again\n";	
	}
    }   
return 0;
}
