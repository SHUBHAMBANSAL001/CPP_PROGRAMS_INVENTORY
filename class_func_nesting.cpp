//Aim: Program to illustrate the interncommunication of member functions in a class
/*Note: Don't confuse this with nesting of loops where one loop is defined inside other one, here we are talking about one function call inside other one because we can't define one function inside another function that is against cpp rules*/
#include<iostream>
using namespace std;
class large
{
	int a ,b;
	public:
		void input();
		void display();
		void largest();
};
void large::input()
{
	cout<<"Input two numbers "<<endl;
	cin>>a>>b;
}
void large::display()
{
	cout<<"The largest of the two numbers entered is \n";
	largest();
	
}
void large::largest()
{
	if(a>b)
	cout<<"first number that is "<<a<<endl;
	else if(a<b)
	cout<<"The second number that is "<<b<<endl;
	else 
	cout<<"The given numbers are equal \n";
	
}
int main()
{
	large l;
	l.input();
	l.display();
    return 0;
}
