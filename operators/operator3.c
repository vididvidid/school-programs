//wapc to interchange two values by using bitwise operator
#include <stdio.h>
int main() {
int a, b ;

// taking input from user
printf("\nEnter the value for a:\n");
scanf("%d",&a);
printf("\nEnter the value for b:\n");
scanf("%d",&b);
printf("\nThe value of a = %d and b = %d\n",a,b);

//logic
/*
BOTH ODD 
let a = 5 (0101) and b = 9 (1001)
now , a = a^b = 5^9 = (0101)^(1001) = (1100) = 12
b = a^b = 12^9 = (1100)^(1001) = (0101) = 5
a = a^b = 12^5 = (1100)^(0101) = (1001) =9
BOTH EVEN
let a = 4 (0100) and b = 6 (0110)
now, a = a^b = 4^6 = (0100)^(0110) = (0010) = 2
b = a^b = 2^6 = (0010)^(0110) = (0100) = 4
a = a^b = 2^4 = (0010)^(0100) = (0110) = 6
ONE ODD AND ONE EVEN
let a = 4 (0100) and b = 9 (1001)
now, a = a^b = (0100)^(1001) = (1101) = 13
b = a^b = 13^9 = (1101)^(1001) = (0100) = 4
a = a^b = 13^4 = (1101)^(0100) = (1001) = 9
*/

a = a^b;
b = a^b;
a = a^b;

//output
printf("\nAfter the interchange the value of\n a =%d and b = %d\n",a,b);


return 0;
}
