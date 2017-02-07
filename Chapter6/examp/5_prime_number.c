#include<stdio.h>
//not working
int main(){
    int i, n;
    scanf("%d",&n);
    for (i=2 ; i<= n-1 ; i++){
        if (n%i == 0){
            printf("Not prime");
          //  break
        }
        printf("%d\n",i);
    }
    if (n == i){
            printf("\n\nPrime");
    }
}
