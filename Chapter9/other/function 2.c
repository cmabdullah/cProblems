#include<stdio.h>///parameter or argument list....
void sum_of_all()
{
    int i;
    int sum=0;
    for (i=0; i<=20;i++)
        sum = sum+i;
        printf("The sum is :%d", sum);
}
void main()
{
   sum_of_all(); /// not void first///
}
