#include<stdio.h>
int main(){
    float  b,   *q ;
    b = 20;
    q = &b;//pass address
    printf("%x\n",&b);//print address of b
    printf("%x\n",&q);//print address of q
    printf("%x\n",q);//print address of b
    printf("%f\n", *q);//print value of b
    printf("Address of q : %x address of b : %x value : %x",&q , q , *q);
}
