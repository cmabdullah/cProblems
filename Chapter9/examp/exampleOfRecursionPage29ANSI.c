#include<stdio.h>
int fact(int i);
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",fact(x) );
}
int fact(int x){
    int f;
    if (x == 1)
        return (1);
    else
    f = x*fact(x-1);
        return(f);
}
