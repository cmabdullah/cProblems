#include<stdio.h>
int main(){
    int a, b ,n;
    scanf("%d",&n);
    ///outer loop for row & inner loop for column.....
    for (a = 0;a<n ;a++){
        for (b= 0; b<n; b++){///b<a
            printf("%d ",b);
        }
        printf("\n");
    }



}

