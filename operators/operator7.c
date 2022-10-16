//wapc to divide a number by 64 wihout using division operator
#include <stdio.h>
int main() {
int a, b, n=6;

//taking input from user
printf("\nEnter the number to be divided by 64\n");
scanf("%d",&a);

//logic
b = (a>>n);

//output 
printf(" \n %d divided by 64 is %d \n",a,b);

return 0;
}
