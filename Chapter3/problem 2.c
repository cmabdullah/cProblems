#include<stdio.h>
void main(){
int i,n;
    for (i<=1; i<=100; i++){
            scanf("%d", &n);
        if (n%2 == 0){
            printf("even");
        }
        else{
            printf("Odd");
        }
    }
}
