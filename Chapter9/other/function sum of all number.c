#include<stdio.h>
void print_massage(void)
{
    printf("this is print_massage() function");
}
int added_all_val(long int value)
{
    int n;
    long int sum;
    sum = 0;
    for (n = 0 ; n <= value ; n++)
        sum += n ;
    printf("sum of all numbers from 1 to %ld is %ld", value , sum);
}
int main()
{
    int value;

    print_massage();
    added_all_val(500);
    return 0;
}

