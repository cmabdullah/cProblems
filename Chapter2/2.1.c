#include<stdio.h>
int main()
{
    float x,n,i,sum;
    sum = 1;
    printf("Enter the value of n:");
    scanf("%f",&n);
    for (i = 1; i<=n ; i++){
            x= (1/i);
            sum = sum + (1/i);
            printf("\t%f\n",x);
    }
    printf("\nSum of 1/n is :%f",sum);
}
