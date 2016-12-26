#include<stdio.h>
int func1(char* x);
int main(){
    char x[40] ;
    char* y;
    y = func1(x);
    printf("returned string is : %s", y);
}

int func1(char* x){
     strcpy(x , "this is func1");
    return x;
}
///note due to use same variable in both function this program is working fine
/// if you use auto variable it may show some garbage value @abdulllah/// use malloc()
