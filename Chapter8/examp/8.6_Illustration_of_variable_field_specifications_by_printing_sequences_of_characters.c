#include<stdio.h>
///understand carefully.............
int main(){
    int c , d;
    char string1[] = "Cprogramming" ;
    printf("\n\n") ;
    printf("_________________\n") ;
    for (c = 0 ; c<=11; c++){
        d = c+1;
        printf("|%-12.*s|\n", d, string1);
    }
  ///  printf("_________________\n") ;
    for (c = 11; c>=0 ; c--){
        d = c+1;
        printf("|%-12.*s|\n", d, string1) ;
    }
    printf("_________________\n") ;


}
