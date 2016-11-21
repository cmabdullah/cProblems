#include<stdio.h>
///5! = 5*4*3*2*1
int main(){
    int f , n;
    scanf("%d", &n);
    f = 1;
    while(n>1){
        f = f*n;
        n--;
    }
    printf("%d",f);
}
