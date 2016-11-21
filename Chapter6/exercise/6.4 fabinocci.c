#include<stdio.h>
int main(){
    int n,  x, y ,i ,fiv;
    scanf("%d", &n);
    x = 1; y = 1; i = 1;
       if (n>1){
        printf("1 1 ");
    }
    do{
    fiv = x+y;
        printf("%d ", fiv);
        x = y; y = fiv;
        i++;
    }
    while(i<=n-2);
}

