#include<stdio.h>
float change_data(int r , int n , int s)
{
    int result ;

    result = r + n + s ;
    return result ;
}
void main ()
{
    float result ;
    result = change_data(15,16,11);
    printf("\nResult is %f",result  ) ;
}
