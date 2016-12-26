#include<stdio.h>
int main(){
    char* x;
    x = malloc(10 * sizeof(char)) ;
    strcpy(x, "abdullah") ;
    printf("%s", x) ;
    free (x) ;
}

