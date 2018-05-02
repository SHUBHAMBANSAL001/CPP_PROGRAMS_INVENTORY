//program to illustrate the nesting of member functions in a class
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
