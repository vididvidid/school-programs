//wapc to find the size of all data types
#include <stdio.h>
int main() {
printf("%ld byte size of int \n",sizeof(int));
printf("%ld byte size of long int\n",sizeof(long int));
printf("%ld byte size o long long int\n",sizeof(long long int));
printf("%ld byte size of short int\n",sizeof(short int));
printf("%ld byte size of unsigned int\n",sizeof(unsigned int));
printf("%ld byte size of double\n",sizeof(double));
//printf("%ld size of double double:\n",sizeof(double double));
printf("%ld byte size of char\n",sizeof(char));
return 0;
}
