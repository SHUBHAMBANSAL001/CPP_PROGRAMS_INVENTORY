//program to swap two values with the help of function
#include<iostream>
using namespace std;
void swap(int *,int *);
int main()
{
  int a,b;
  cout<<"Enter two values "<<endl;
  cin>>a>>b;
  cout<<"Values before swapping a="<<a<<" b="<<b<<endl;
  swap(&a,&b);
  cout<<"Values after swapping are a="<<a<<" b="<<b<<endl;
  return 0;
}
void swap(int *p,int *q)
{
	int temp;
	temp =*p;
	*p=*q;
	*q=temp;
}
