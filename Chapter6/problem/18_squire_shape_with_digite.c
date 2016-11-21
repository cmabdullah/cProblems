#include<stdio.h>
int main(){
    int a,b,n , d;
    d = 1;
    scanf("%d", &n);
    for (a = 0 ; a < n ; a++){
        for(b = 0; b<n; b++){
            printf("%4d",d++);
        }
        printf("\n");
    }
}

