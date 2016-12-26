#include<stdio.h>
#include<string.h>
int main(){
    char string_A[20];
    char string_B[20];
    int x;
    printf("Enter first string  : ");
    scanf("%s", string_A);
    printf("Enter second string : ");
    scanf("%s", string_B);
    x = strcmp(string_A,string_B);
    if (0 != x)
        printf("two string is not equal");
    else
        printf("two string is equal");
}



