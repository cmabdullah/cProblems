#include<stdio.h>
int abs_val(int val)
{
    return(-val);
    return(val);
}
void main()
{
    int val ,get;
    printf("enter The value");
    scanf("%d", &val);
    get =  abs_val(val);
    printf("Absolute Value of %d is%d", val , get);

}
