//simple program with the use of classes
#include<iostream>
using namespace std;
class item
{
    private : 
 	        int a;
	        float b;
	public : 
         void getdata(int,float);
         void putdata()
         {
         	cout<<"The data entered is"<<a<<endl<<b;
         	
		 }
};
void item::getdata(int x,float y)
{
	a=x;
	b=y;
}
int main()
{
	item x;//object declaration
	cout<<"object x created"<<endl;
	int a;
	float b;
	cout<<"Enter two numbers one integer and one float type"<<endl;
	cin>>a>>b;
	x.getdata(a,b);
 	x.putdata();
    return 0;
}
