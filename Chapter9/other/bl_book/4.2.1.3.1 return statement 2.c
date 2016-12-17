#include<stdio.h>
int ret_befo(int val)
{
    printf("\nStatement in ret_befo() function before return.");
    return (val*val);
    printf("\nStatement in ret_befo() function after return.");
}
void main ()
{
    int val, get ;
    printf("\n Enter a value :");
    scanf("%d", &val);
    get = ret_befo(val);
    printf("\n\nSquare of %d is :%d\n\n", val , get) ;
}
