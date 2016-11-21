/********
Algorithm:–
Step 1: For x=0 to 180 repeat Step 2 to Step 3
Step 2: Compute y = sin(x)
Step 3: Display x, y.
program:–
*******/
//Write a program to graph the function
//                         y = sin(x)
//       in the interval 0 to 180 degrees in steps of 15 degrees.
// Date : 11/11/2016
#include<stdio.h>
#include<math.h>
//under construction.......
void main(){
float y;
int x,i;
    printf("X      Sin(X)\n");
        for(i=0;i<=180;i+=15){
        y=sin(i);
        printf("%d\t     %f\t\n",i,y);
        }
}
