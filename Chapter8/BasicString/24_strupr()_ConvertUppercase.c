#include<stdio.h>
#include<string.h>
int main(){
    char string_A[20];
    printf("Enter first string  : ");
    scanf("%s", string_A);
    strupr(string_A);
    printf("Upper case of string :");
    printf("%s", string_A);
}


