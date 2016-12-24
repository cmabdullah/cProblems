#include<stdio.h>
main(){
    int x, y ;
    double power(int , int);
    printf("enter x ,  y:");
    scanf("%d%d", &x, &y) ;
    printf("%d to power %d is %f", x,y, power(x,y));
}

double power(int x, int y){
    double p;
    p = 1.0;
    if (y  >= 0)
        while (y--)
        p *= x;
    else
        while(y++)
        p /= x;
    return (p);


}
