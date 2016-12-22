
/********
 Develop a top doun modular program to implement a calculator .
 The program should request the user to input two numbers and display one of the following as per the desire of the user:
    (a ) sum of the numbers
    (b)  Difference  of the numbers
    (c) Product of the numbers
    (d) Division of the numbers
Provide separate functions for performing various tasks such as reading ,
cakculating and displaying. Calculating module should call second   level moduls to perform
the individual mathematical operations.   The main function should have only function calls.
***/
// (a)
/****
#include<stdio.h>
void sum (int i,int j) ;
void main(){
sum(5,6);
}
void sum(int i, int j){
int total;
total=i+j;
printf("%d",total);
}
**/
//(b)
/***
#include<stdio.h>
void diff (int i,int j) ;
void main()
{
diff(5,6);
}
void diff(int i, int j){
int total;
total=i-j;
printf("%d",total);
}
***/
//(c)
/***
#include<stdio.h>
void prod (int i,int j) ;
void main(){
product(5,6);
}
void product(int i, int j){
int total;
total=i*j;
printf("%d",total);
}
****/
//(d)
#include<stdio.h>
void div (int i,int j) ;
void main(){
div(10,6);
}
void div(int i, int j){// data type convert first@abdullah
float total;
total=(float)i/(float)j;
printf("%f",total);
}
