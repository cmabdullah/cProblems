#include<stdio.h>
int main(){
    int x , y, i , j , a[4] ,n ;

    printf("caution!!! 1<x<14 \n");

    scanf("%d",&n);

    i = 0;

    while(n!=0){
        a[i] = n%2;
        n/=2;// n= n/2;
        i++;
    }

    for(i= i-1 ; i>=0 ; i--){
        printf("%d", a[i]);
    }

}
