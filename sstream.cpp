//Program to extract a number from a string
#include<iostream>
#include<sstream>
using namespace std;
int main()
{ //Instead of typecasting every character into number we can use the sstream class
  string num;   
  cin>>num;
  stringstream sso;
  sso<<num;
  int inpnum;
  sso>>inpnum;
  cout<<"The number in the string is \n"<<inpnum;
return 0;
}

