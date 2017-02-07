#include<stdio.h>
int abs_val(int val)
{
    return(val*val);
    printf("hi I am here!!!!");///not execute.......
}
void main()
{
    int val ,get;
    printf("enter The value");
    scanf("%d", &val);
    get =  abs_val(val);
    printf("Absolute Value of %d is %d", val , get);

}

