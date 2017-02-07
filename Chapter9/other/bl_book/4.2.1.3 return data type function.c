#include<stdio.h>
void square_val(long int any_value)
{
    long int result ;

    result = any_value*any_value ;
    printf("\n\nThe square value of %ld is %ld\n\n",any_value, result);
}
void main (void)
{
    square_val(5) ;
}
