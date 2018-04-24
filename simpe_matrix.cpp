//program to input and display a matrix
#include<iostream>
using namespace std;
int main()
{
	int i,j,mat[10][10],a,b;
    cout<<"Enter the number of rows and columns of matrix";
    cin>>a>>b;
    cout<<"Now start entering the elements in matrix row wise";
    for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
	    {
		cin>>mat[i][j];
	    }
    }   
    cout<<"The entered array is"<<endl;
    for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
	    {
		cout<<mat[i][j]<<" ";
	    }
    cout<<endl;
	}   
    return 0;
}
