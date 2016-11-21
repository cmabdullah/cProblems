//Write a program to evaluate the following investment equation
//                                     V=P(1+r)n
//And print the tables which would give the values of various combination of the following values of P, r and n.
//             P: 1000, 2000, 3000, ……………….10000
//             r:  0.10, 0.11, 0,12,…………………..0.20
//             n: 1,2,3…………….10
// Date : 10-11-16
//https://assignment2do.wordpress.com/2012/10/28/e-balagurusamy-solution-programming-in-ansi-c-chapter-6/
#include<stdio.h>
void main(){
    int P,n;
    float V,r, x,y,temp;
    printf("Enter Principal Amount:\n");
    scanf("%d",&P);
    printf("For P: %d\n",P);
        for(r=0.1;r<=0.2;r+=0.01){
            printf("  For Rate %.2f\n",r);
            printf("n      V");
            for(n=1;n<=3;n++){
                printf(" Power \t%d    ",n);
                temp=pow((1+r),n);
                V=P*temp;
                printf("Value is \t%.2f",V);
                }
            }
        printf("\nr = %f; n = %d; V = %f\n",r,n,V);
}






