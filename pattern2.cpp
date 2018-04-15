//pattern 2
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"How many rows you want to print"<<endl;
	int n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		cout<<i;
		cout<<endl;	
	}
    return 0;
}
