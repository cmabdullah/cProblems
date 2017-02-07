#include<stdio.h>
int abs_val (int val)
{
    return (-val);
    return (val);
}
void main ()
{
    int val , get ;
    printf("\n Enter a vaue :") ;
    scanf("%d", &val) ;
    get = abs_val(val);
    printf("\nAbsolute value of %d is : %d", val , get);
}
