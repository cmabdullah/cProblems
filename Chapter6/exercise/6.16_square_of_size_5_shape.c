/*********
a)
Step 1: For i=1 to 5 repeat Step 2 to Step 4
Step 2: For j=1 to 5 repeat Step 3
Step 3: Dispay S
Step 4: go to newline
b)
Step 1: For i=1 to 5 repeat Step 2
Step 2: Dispay S
Step 3: For j=1 to 3 repeat Step 4
Step 4: Dispay S   S
Step 5: For i=1 to 5 repeat Step 2
Step 6: Dispay S
Program:–

*****
//a) Write a program to print a square of size 5 by using the character S as shown below
//a)     S S S S S
//        S S S S S
//        S S S S S
//        S S S S S
//        S S S S S
#include<stdio.h>
#include<math.h>
void main(){
int j,i;
    for (i=1;i<=5;i++){
        for(j=1;j<=5;j++)
        printf("S");
        printf("\n");
        }
}
***********/
//b) Write a program to print a square of size 5 by using the character S as shown below
//S S S S S
//S       S
//S       S
//S       S
//S S S S S
#include<stdio.h>
void main(){
int j,i,k;
    for (i=1;i<=5;i++)
    printf("S");
            for(j=2;j<=4;j++){
            printf("\nS   S");
            }
        printf("\n");
        for (i=1;i<=5;i++)
        printf("S");
}
