#include<stdio.h>
int main (){
    int i;
    float x[10] , val, total = 0.0 ;
    for (i = 0 ; i < 10 ; i++){
        scanf("%f", &x[i]);
    }
    for (i=0 ;i <10; i++){
        total = total + x[i]*x[i] ;
    }
    printf("\n");
    for (i = 0 ; i <10 ; i++){
        printf("x[%d] = %f \n", i+1 , x[i]);
    }
    printf("%f",total);
}
