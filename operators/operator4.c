//wapc to find teh lowest marks of three students using conditional operator.
#include <stdio.h>
int main() {
int a, b, c,d;

//take input from the user
printf("\nEnter the marks of first student:\n");
scanf("%d",&a);
printf("\nEnter the marks of second student:\n");
scanf("%d",&b);
printf("\nEnter the marks of third student:\n");
scanf("%d",&c);

//logic
/*(condition of a)?(if true a is low):(if false (condition of b)?(if true b is low):(if false c is low))*/

//with logic operator and conditional operator
//d = ((a<b)&&(a<c))?printf("a is lowest"):((b<a)&&(b<c))?printf("b is lowest"):printf("c is the lowest");

//without logical operator 
d = (a<b)?(a<c)?printf("a is lowest"):printf("c is lowest"):(b<c)?printf("b is lowest"):printf("c is lowest");


//output

printf("%c",d);

return 0;
}
