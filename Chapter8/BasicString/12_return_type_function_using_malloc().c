#include<stdio.h>
char *func1(void);
int main(){
    char* y;
    y = func1();
    printf("returned string is : %s", y);
    free (y) ;
}
char *func1(void){
    char* x;
    x = malloc(20 * sizeof(char));
    strcpy(x, "function 1");
    return x;
}
