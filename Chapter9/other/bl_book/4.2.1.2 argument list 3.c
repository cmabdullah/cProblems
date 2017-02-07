#include<stdio.h>
void sum_of_all(int abu)
{
    int n , sum;
    sum = 0;
    for(n = 0 ; n <=abu ; n++)
        sum = sum+n;
    printf("sum of %d is :%d",abu ,sum);
}
void main()
{
    int x;
    scanf("%d",&x);
    sum_of_all(x);
}
