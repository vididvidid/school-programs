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
    for (int j=i;j<user_var;j++){
        printf(" ");

        }
    for(int j=1;j<=i;j++){
        if (j==i || j==1){printf("* ");
        }else {printf("  ");}
        
    }
    printf("\n");
}

for (int i=1;i<=user_var;i++){
    for (int j=1;j<=i;j++){
        printf(" ");

        }
    for(int j=i;j<=user_var;j++){
        if (j==i ||j==user_var){
            printf("* ");
        }else {printf("  ");}
    }
    printf("\n");
}


    return 0;
}