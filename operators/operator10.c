//wapc to find out whether inputted number is even or dd without using aithmetic operator
#include <stdio.h>
int main() {
int a, b,n=1;

//take input from user
printf("\nEnter the value to check even or odd\n");
scanf("%d",&a);

//logic 
b = ((a|n)==(a))&&printf("odd");
b = ((a|n)!=(a))&&printf("even");

printf("%c",b);
return 0;
}
