#include<stdio.h>
///solved same problem repeated......
/****/
int main(){
    int a, b, n;
    scanf("%d", &n);///
    for (a = 0; a< n; a++){
        for (b = 0; b<a ;b++){///b<n
            printf("*");
        }
        printf("\n");
    }
}


