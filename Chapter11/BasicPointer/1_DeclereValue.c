#include<stdio.h>
//some declaration of pointer
int main(){
    float a , b,   *q ;

    int x= 20;
    int *p = &x;/// valid declaration ......

    b = 20;

    q = &b;//pass address

    printf("%x\n",&b);//print address
    printf("%x\n",&q);//print address
    printf("%x\n",q);//print address

    printf("%f\n", *q);//print value
    printf("%d\n", *p);//print value


}
