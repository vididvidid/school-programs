//wapc to interchange two values by using arithmetic operator.
#include <stdio.h>
int main() {
int a , b ;

//taking input from the user 
printf("\nEnter the value of a:\n");
scanf("%d",&a);
printf("\nEnter the value of b:\n");
scanf("%d",&b);
printf("\nThe value of a is %d, and b is %d\n",a,b);

//logic

a = a*b; // let a= 10 and b = 5, a = 10*5 50
b = a/b; // b = 50/5 = 10
a = a/b; // a = 50/10 = 5

//output 
printf("\nafter interchange the value is\n a is %d and b is %d", a,b);

return 0; 
}
