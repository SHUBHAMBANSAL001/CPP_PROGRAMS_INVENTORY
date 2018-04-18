//program to calculate the area of the circle
#include<iostream>
using namespace std;
int main()
{

	float r, area=0;
	cout<<"Enter the radius of the circle for which you want to calculate the area"<<endl;
	cin>>r;
	area = 3.14*r*r;
	cout<<"The area of the circle for the entered radius is "<<area;
   return 0;	
}
