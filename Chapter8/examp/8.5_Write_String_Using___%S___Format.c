#include<stdio.h>
int main(){
    char string[50] = "Abdullah Khan";
    printf("______________\n");
    printf("%14s\n", string);
    printf("%4s\n", string);
    printf("%.4s\n", string);
    printf("%14.4s\n", string);
    printf("%-14.4s\n", string);
    printf("%14.0s\n", string);///print nothing....
    printf("%s\n", string);
    printf("\n_____________ \n");

}

