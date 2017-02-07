/**
Write a function exchange to interchange the values of two variables ,
say x and y. Illustrate the use of this function, in a calling function .
Assume that x and y are defined as global variables.
**/
#include<stdio.h>
void exchange(int i,int j);
void main  (void){
    int x=2,y=3;
    printf("Before exchange i=%d j=%d\n", x,y);
    exchange(x,y);
    printf("\n\n%d %d",x,y);
}
void  exchange(int i,int j){
    int  temp;
    temp=i;
    i=j; j=temp;
    printf("After exchange i=%d,j=%d \n",i,j);
}

