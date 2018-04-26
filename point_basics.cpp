//program to learn the basics of pointer
#include<iostream>
using namespace std;
int main()
{
	int i,*j;
	i=1;
	j=&i;
	cout<<i<<endl;
	cout<<*j<<endl;
	(*j)++;
	cout<<i<<endl;
	cout<<*j;
	return 0;
}
