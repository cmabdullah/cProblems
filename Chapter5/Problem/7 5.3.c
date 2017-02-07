#include<stdio.h>
int main(){
/***********
x1 = (md - bn) / (ad - cb)
x2 = (na - mc) / (ad - cb)

*/
    float m , n , a , b , c ,d , x1, x2;
    printf("Enter value of a b c d");
    scanf("%f%f%f%f",&a,&b,&c , &d);
    printf("Enter the value of m&n");
    scanf("%f%f",&m,&n);
    if ((a*d - c*b) > 0){
        x1 = (m*d - b*n) / (a*d - c*b) ;
        printf("%f", x1);
    }
    else{
        printf("Not possible");
    }
}
