/*****
Write a function prime that returns l if its argument is a prime number and returns zero otherwise .
***/
#include<stdio.h>
int prime(int);
int main(){
    int n,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    p=prime(n);
        if(p==1)
            printf("%d is prime\n",n);
        else
            printf("%d is not prime\n",n);
    return 0;
}
int prime(int n){
    int i;
        for(i=2;i<n;i++){
        if(n%i==0)
        return 0;
        }
    return 1;
}
