/***********
e= 1+ 1/1! +1 /2! + 1/3+……………. 1/n!
Algorithm:
Step 1: Read n.
Step 2: Store 1 to e1 & e2.
Step 3: For i=1 to n repeat Step 4 to Step 6
Step 4: Compute e1=e1+(1/i!)
Step 5: Check (e1-e2)<0.00001 then break otherwise go to Step 5
Step 6: Compute e2=e1.
Step 7: Display e1.
Program:
*********/
// Write a program to compute the value of Euler’s number that is used as the base of natural logarithms.
//Use the following formula.
//                         e= 1+ 1/1! +1 /2! + 1/3+……………. 1/n!
//11/11/2016
#include<stdio.h

//under construction
void main(){
    float i,n;
    float e1,e2, f ;
    e2=1; e1=1;
    printf("Enter No.");
    scanf("%f",&n);
        for(i=1;i<=n;i++){
                f = f*i;
            e1=e1+((float)1/f);
            if((e1-e2)<0.00001)
            break;
            e2=e1;
        }
    printf("The value of e is  :  %f ",e1);
}
