//program to find the transpose of a matrix
#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,mat[5][5];
	cout<<"Enter the number of rows and columns"<<endl;
	cin>>a>>b;
	if(a>5)
	a=5;
	if(b>5)
	b=5;
	cout<<"Now start entering the elements of the matrix row wise"<<endl;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>mat[i][j];
		}
	}
    cout<<"The matrix which is entered is shown below "<<endl;
    for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<mat[i][j]<<" ";
		}
	cout<<endl;
	}
    cout<<"Now the transpose of the matrix is "<<endl;
	for(j=0;j<b;j++)
	{
		for(i=0;i<a;i++)
		{
			cout<<mat[i][j]<<" ";
		}
	cout<<endl;
	}
  return 0;
}
