#include<stdio.h>
void prnt_msg()
{
    printf("sum of all numbers from 1 to your given numbers:\n") ;
}

void added_all(long int val)
{
    int n;
    long int sum;
    sum = 0;
    for(n = 0 ; n<=val ; n++)
        sum = sum+n;
    printf("\nSum of all numbers from 1 to %ld is %ld.\n", val , sum) ;
}
int main()
{
    prnt_msg();
    added_all(500) ;
    return 0;
}
