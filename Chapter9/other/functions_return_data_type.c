#include<stdio.h>
void call_function(long int any_value)
{
    long int result ;
    result =any_value*any_value ;
    printf("The square value is%d", result);
}
void main()
{
    call_function(6);///function declaration
}
