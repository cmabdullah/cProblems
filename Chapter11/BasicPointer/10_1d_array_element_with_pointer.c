#include<stdio.h>
///print an array using pointer
int main(){
    int i, ar[5] = {10,22,30,40,50};
    int *x;
    x = &ar;
    for (i = 0; i<5 ; i++){
        printf("*(x+%d) = %d\n", i , *(x+i));
    }
}
