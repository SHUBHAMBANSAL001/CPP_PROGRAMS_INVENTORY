// program to swap the two entered numbers without the use of functiosn
#include<iostream>
using namespace std;
int main()
{
int a,b,temp;
cout<<"Enter the two numbers"<<endl;
cin>>a>>b;
cout<<"Values of a and b before swapping is " <<a<<" and "<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<"Values after swapping of a and b is "<<a<<" and "<<b<<endl;
return 0;
}
