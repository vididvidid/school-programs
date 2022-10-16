//wacp to interchange two values by using asignment operator
#include <stdio.h>
int main() {
int a, b;

// taking values from the user 

printf("\nEnter the value of a\n");
scanf("%d",&a);
printf("\nEnter the value of b\n");
scanf("%d",&b);
printf("\n a= %d and b=%d\n",a,b);
//logic 

a += b; //if a=10,b=5 than a = 15
b = a-b;// now b = 15-5 = 10 
a -= b;// now a = 15-10=5

//output 

printf("\nAfter swaping\n a = %d and b=%d\n",a,b);

return 0;
}
