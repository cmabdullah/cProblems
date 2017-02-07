/****
******************
******************
******************
****
****
****
******************
******************
******************
              ****
              ****
              ****
******************
******************
******************
Algorithm:–
Step 1: Store 1 to i, j & k
Step 2: Display S using for & if
Program:–

**********/
// Write a program using for and if statement to display the S.
//15/03/2010
#include<stdio.h>
void main(){
    int i,j,k;
    j=1;
//first
    for(i=1;i<=3;i++)
        for(j=1;j<=18;j++){
        printf("*");
        if(j==18)
        printf("\n");
        }
//second
    for(i=1;i<=3;i++)
        for(j=1;j<=4;j++){
        printf("*");
        if(j==4)
        printf("\n");
        }
//3rd
    for(i=1;i<=3;i++)
        for(j=1;j<=18;j++){
        printf("*");
        if(j==18)
        printf("\n");
        }
//4th
    for(i=1;i<=3;i++){
        for(k=1;k<=14;k++)
        printf(" ");
            for(j=15;j<=18;j++){
            printf("*");
            if(j==18)
            printf("\n");
            }
        }
        for(i=1;i<=3;i++)
            for(j=1;j<=18;j++){
            printf("*");
            if(j==18)
            printf("\n");
            }

            printf("@bdull@h");
}
