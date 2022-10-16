//wapc to multiply a number by 15 without using multiplication or addition operator
#include <stdio.h>
int main() {
int a , b, n=4;

//taking input from user 
printf("\nEnter the value to be multiplied by 15\n");
scanf("%d",&a);

//logic
/* n*16-n = n*15*/
b = (a<<n)- a;

//output
printf("\n%d multiplied by 15 is %d\n",a,b);

return 0;
}
