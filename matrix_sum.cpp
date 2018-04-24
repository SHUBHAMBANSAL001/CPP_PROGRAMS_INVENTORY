//program to input and display the sum of two matrices
#include<iostream>
using namespace std;
int main()
{
	int i,j,first[10][10],second[10][10],a,b,c,d;
    cout<<"Enter the number of rows and columns for both the matrices"<<endl;
    cin>>a>>b;
    cout<<"Now start entering the elements in first matrix row wise"<<endl;
    for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
	    {
		cin>>first[i][j];
	    }
    }   
    cout<<"Now start entering the elements in second matrix row wise"<<endl;
    for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
	    {
		cin>>second[i][j];
	    }
    }   
    cout<<"The sum of the entered matrices is a matrix as shown below"<<endl;
    for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
	    {
		cout<<first[i][j]+second[i][j]<<" ";
	    }
    cout<<endl;
	}   
    return 0;
}
