#include<stdio.h>
//understand carefully
int func1(char* x);
int main(){
    char* yy = "hello world" ;
    int length;
    length = func1(yy);
    printf("String length is : %d", length);
}
int func1(char* x){
    int n;
    n = 0;
    while(n++, *x++ != '\0');
    return n-1;
}
