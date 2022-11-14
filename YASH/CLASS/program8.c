/*
Author : yash kumar kasaudhan 
Purpose : 
Date : 14 nov 2022
*/

#include <stdio.h> 
int main() {
//variable
int user_var;
//input 
printf("\nEnter the no.\n");
scanf("%d",&user_var);
//logic 
for (int i=1;i<=user_var;i++){
    for (int j=i;j<=user_var;j++){
        printf("   ");

        }
    for(int j=1;j<=i;j++){
        printf(" * ");
    }
    printf("\n");
}


    return 0;
}