//Aim: To print the sum of the all elements in the array
#include<stdio.h>
int main()
{    
int i,size; 
printf("Enter the size of array");
scanf("%d",&size);
float array[size],sum =0;
printf("Enter the integer elements of the array");
for(i=0;i<size;i++)
{
 scanf("%f",&array[i]);
}
for(i=0;i<size;i++)
{
 sum+=array[i];
}
printf("the sum of the elements of the array is %.3f ", sum);
return 0;
}                                  

	
