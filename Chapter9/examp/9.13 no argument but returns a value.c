#include<stdio.h>
int get_number(void);
main(){
    int m = get_number();
    printf("%d\n", m);
   // printf("%d", get_number()); //same job
}
int get_number(void){
    int n;
    scanf("%d", &n);
    return (n);
}

