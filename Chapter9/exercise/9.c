/******
Write a function that will scan a character string passed as an argument and
convert all lowercase characters into their uppercase equivalents.
**********/
#include<stdio.h>
#include<ctype.h>
char lower_to_upper(char c1);
main(){
    char lower, upper;
    printf("enter a lowercase letter");
    scanf("%c",&lower);
    upper=lower_to_upper(lower);
    printf("uppercase  equivalent  is %c \n ",upper);
}
char lower_to_upper(char c1){
    char c2;
    c2=(c1>='a'&&c1<='z')?('A'+c1-'a'):c2;
return(c2);
}
