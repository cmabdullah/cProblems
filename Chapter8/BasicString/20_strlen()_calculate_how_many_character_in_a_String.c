#include<stdio.h>
#include<string.h>
int main(){
    char string_A[] = "Hello bangladesh";
    int length;
    length = strlen(string_A);
    printf("%s\n", string_A);
    printf("The length of string is :%d", length);
}
///same job just use only for loop
/***
#include<stdio.h>
int main(){
    char stringA[100] , stringB[100] ;
    int i;
    printf("Enter a string :\n");
    scanf("%s", stringA);
    for (i = 0; stringA[i] != '\0' ; i++){
        stringB[i] = stringA[i] ;
        }
    stringB[i] ='\0' ;
  //  printf("%s\n", stringB) ;
    puts(stringB);
    printf("Number of char is %d", i);
}
***/
