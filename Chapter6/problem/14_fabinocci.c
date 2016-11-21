#include<stdio.h>
int main(){
    int n,  x, y ,i ,fiv;
    scanf("%d", &n);

    x = 1; y = 1;
    if (n>1){
        printf("1 1 ");

    }
    for (i = 1 ; i<=n-2 ; i++){
        fiv = x+y;
        printf("%d ", fiv);
        x = y; y = fiv;
    }

}
