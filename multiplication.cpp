#include<iostream>
using namespace std;
int main()
{
 int i,j,num;
 cout <<"Enter the number for which you want to generate the multiplication table ";
 cin>>num;
 cout<<"The multiplication table is"<<endl;
 for(j=1;j<11;j++)
 {
 cout<<num<<"*"<<j<<"="<<num*j<<endl;
 }
 return 0;
}
