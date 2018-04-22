//program for pattern type 4
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout <<"The given pattern is "<<endl;
	for(i=1;i<5;i++)
	{
		for(j=0;j<i;j++)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
