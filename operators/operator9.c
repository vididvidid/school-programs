//wapc to multiply a number ny 65 without using multiplication operator
#include <stdio.h>
int main() {
int a, b,n=6;

//taking input from user
printf("\nEnter the value to be multiplied by 65\n");
scanf("%d",&a);

//logic
b = (a<<n) + a;

//output 
printf("\n%d multiplied by 65 is %d\n",a,b);

return 0;
}
