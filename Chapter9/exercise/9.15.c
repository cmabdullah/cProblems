/****
Develop your owx functions for performing following operations on strings:
    (a) copying one string to another
    (b) comparing two strings
    (c) adding a string to the end of another string
Write a driver program to test your functions. functions.
***/
//un complete
(A)
#include<stdio.h>
#include<string.h>
char  *strcpy(char *str1,char *str2);
void main(){
    char *str1;
    char *str2;
    strcpy(str1,str2);
    return(str1,str2);
}
char *strcpy(char*str1,char*str2){
    char str1[10];
    char str2[10]="Hi Jhon";
    puts(str1);
    puts(str2);
}
