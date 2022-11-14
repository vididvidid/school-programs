/*
Author:Yash kumar kasaudhan
Purpose: write a c program to find factorial of a number.
Date: 7 nov 2022
*/

#include <stdio.h>
int main() {
//variable 
    int a,count=1;
//input 
    printf("\nEnter the no. \n");
    scanf("%d",&a);
//function 
    for (int n=1; n<=a; n++) {
        count *= n;
    }
//output 
    if (a == 0){
        printf("\nTHe factorial of %d is 0",a);
    }else{
        printf("the factorial of %d is %d ",a, count);
    }
    return 0;
}