// Program to print the pattern 
#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1;
	int sp;
	for(i=5;i>0;i--)
 { 
	for(sp=i-1;sp>0;sp--)
	{
		cout<<" ";
	}
    for(j=k;j>0;j--)
	{
		cout<<"#";
	}
	cout<<endl;    
	k=k+2;
 }
	return 0;
}
