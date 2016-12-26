#include<stdio.h>
int main(){
    char* x = "Abdullah";
    char y;
    for ( y = *x ; (y = *x)!= '\0' ; *x++){
        putch(y) ;
    }
}
