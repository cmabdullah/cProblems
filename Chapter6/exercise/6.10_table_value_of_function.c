//Write a program to print a table of values of the function
//                         y = exp (-x)
//                  for varying from 0.0 to 10.0 in steps of 10.0.
// Date : 11/11/2016
#include<stdio.h>
#include<math.h>
void main(){
    float Ex,sum,i,j;
    printf("  X");
    for(j=0.1;j<=0.5;j+=0.1)
    printf("\t   %4.4f",j);
    printf("\n\n");
        for(i=1;i<=5;i++){
        printf(" %.1f",i);
            for(j=0.1;j<=0.5;j+=0.1){
            sum=i+j;
            Ex=exp(sum);
            printf("\t   %4.4f" ,Ex);
            }
        printf("\n");
        }
}
