#include<stdio.h>
//try to understand carefully
//page no 181
int main(){
    float p, cost, p1, cost1;
    for (p = 0; p <=10 ; p = p+.1){
        cost = 40 - 8*p + p*p;
        if (p == 0){
            cost1 = cost ;
            continue;

        }
        if (cost >= cost1)
            break;
        cost1 = cost;

        p1 = p;
    }
    p = (p  + p1)/ 2.00;
    cost = 40 - 8*p + p*p ;
    printf("\n minimum cost : %.3f at p = %.1f\n", cost , p);


}
