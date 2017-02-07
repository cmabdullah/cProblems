#include<stdio.h>
int main(){
    char c;
  //  char c = 65;
    printf("\n");
    for (c = 65; c<= 122; c++){
        if (c > 90 && c < 97)///65to90//97 to 122
            continue ;
        printf("|%4d - %c ", c,c);
    }
//    printf("\n") ;
}
