#include<stdio.h>
int main(){
    int i , *ptr;

    ptr = func1();

    for (i = 0; i<5; i++){
        printf("VALUE is [%d]  = %d \n", i, ptr[i]);
    }
}
int func1(){
    //int k[5] = {2,4,7,8,9};
     static int k[5] = {2,4,7,8,9};
    return k;
}
