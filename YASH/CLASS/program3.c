/*
Author : yash kumar kasaudhan 
Purpose : write a c program to check given number is armstrong or not.
Date : 7 nov 2022
*/

#include <stdio.h> 
int main() {
//variable
int a,count=0,temp,temp1,r,s=1,calc=0,d=0;

//input
printf("\nEnter the no. \n");
scanf("%d",&a);
temp =a;
temp1 =a;
//function
//calculate the digit
for (int i=a; i>0;i=i/10){
    count++;
    
}
printf("\n the no. of digit in %d is %d\n",temp1,count);
//calculate the value by cubing and sum
for (int c=a; c>0; c=c/10)
{
    r = c%10;
    printf("\nThe value of r is %d",r);
    //cube the number
    while ( d< count){
    s *= r;
    printf("\nThe cube of no %d is %d\n",r,s);
    d++;
    }
    
    //add the cubed number 
    calc +=s;
    printf("\nThe value fo calc is %d\n",calc);
}
//output
    printf("\nThe armstrong no. of %d is %d",temp1,calc);
    return 0;
}