#include<stdio.h>
//1, 1, 2, 3, 5, 8
int main(){
    int i, n , x , y , fib;
    //x = 1;
    //y = 1;
    scanf("%d",&n);
    if (n>1){
        printf("1 1 ");
    }
    for (x=1, y=1, i = 1; i<= n-2 ; i++){//additional feature..................
            fib = x+y ;

            printf("%d ", fib);
    x = y;
    y = fib;
    }
}
