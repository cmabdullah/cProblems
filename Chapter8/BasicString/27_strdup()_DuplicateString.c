#include<stdio.h>
#include<string.h>
///see program 4
///http://stackoverflow.com/questions/14947821/how-do-i-use-strdup
int main(){
    char *string_A;
  //  char *string_A = (char*) malloc(sizeof(char*)); //same job
    char *string_B;
    string_A= (char*) malloc(sizeof(char*));
   // string_B= (char*) malloc(sizeof(char*));
    printf("Enter string  : ");
    scanf("%s", string_A);
     //   printf("%s" , string_A);
    if ((string_B = strdup(string_A)))
        printf("Duplicate string is : %s" , string_B);
    else
        printf("sorry!!!");
}

