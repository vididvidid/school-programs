/*
Author : yash kumar kasaudhan 
Purpose : 
Date : 14 nov 2022
*/

#include <stdio.h> 
int main() {
//variable
int user_var;
char c='A';
//input 
printf("\nEnter the no.\n");
scanf("%d",&user_var);
//logic 
for (int i=1;i<=user_var;i++){
    for (int j=1;j<=user_var;j++){
     if(i==1||j==1||i==user_var||j==user_var){
        printf("*");
        
     }else{printf("%c",c++);}
     if (c>'Z') {c="A";}
    }
    printf("\n");
}


    return 0;
}