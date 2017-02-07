#include<stdio.h>
float change_data(int r , int n , int  s)
{
    int result;
    result=r+n+s;
    printf("The result is %d\n", result);
    return result;
}
void main (void)
{
    float result;
    result=change_data(15 , 20 , 35);
    printf("The result is %d", result);///this term is not working!!!!!!!!!!!!!!!!!!
}
