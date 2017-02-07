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
