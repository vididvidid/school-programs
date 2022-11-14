/* 
Author : yash kumar kasaudhan 
purpose : write a c program to check given number is perfect or not.
Date : 7 nov 2022
*/

#include <stdio.h>
int main() {
//variables
int a,n=1,c=0;
printf("\nEnter the no. \n");
scanf("%d",&a);

//function 
while (n<a){
    if(a%n==0){
        c +=n;
        n++;
    }else {
        n++;
    }

}
if (c == n) {
    printf("\n The given no. is perfect no. \n");
}else {
    printf("\n THe given no. is not a perfect no. ");
}
return 0;
}