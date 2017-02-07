#include<stdio.h>
#include<string.h>
int main(){
    char string_A[] = "Hello abdullah";
    char string_B[] = "hi Bangladesh";
    strcpy(string_A+6, string_B+3);
    printf("%s",string_A);
}


