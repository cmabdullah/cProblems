#include<stdio.h>
int main(){
    float  b,   *q ;

    b = 20;


    q = &b;//pass address

    printf("%u\n",&b);//print address
    printf("%u\n",&q);//print address

    printf("%f", *q);//print value


}
