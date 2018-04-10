//program to print the upper or lower case alphabetical series depending upon user's choice
#include<iostream>
using namespace std;
int main()
{
	char i;
	cout<<"Enter U for upper case series of alphabets or L for lower case series";
	cin>>i;
	if(i=='u'||i=='U')
	{
	for(i='A';i<='Z';i++)
	cout<<i<<" ";
	}
	else if(i=='l'||i=='L')
	{
	 for(i='a';i<='z';i++)
	 cout<<i<<" ";
	}else
	cout<<"Wrong choice entered! program terminated";
	return 0;
}
