#include<stdio.h>
void println(); //function prototype.........-_-
int main(){
    println();

    printf("Hay now working with function\n");

    println();

}

void println(){
    int i;
    for (i = 1; i<10; i++){
        printf("____");
    }
    printf("\n");

}
