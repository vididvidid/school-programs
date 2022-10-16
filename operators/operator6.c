//wapc to multiply no. by 16 without using multiplication or addition operator
#include <stdio.h>
int main() {
int a,b,n=4;

//take input from user

printf("\nEnter the number to be multiplied:\n");
scanf("%d",&a);

//logic
b = a<<n;

//output 
printf("\n %d multiplied by 16 is %d\n",a,b);

return 0;
}
