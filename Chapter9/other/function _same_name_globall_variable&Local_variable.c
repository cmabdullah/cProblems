#include<stdio.h>
#include<conio.h>
int x = 10;
void X(void)
{
    printf("\n In X() , Outside the block statement : x = %d\n", x);
    {
        printf("\n In X() : x = %d\n", x);
    }
}
int main()
{
    X() ;
    printf("\n\n In main function : x = %d", x ) ;
    return 0 ;
}

///void X is an local variable ; printf("\n In X() , Outside the block statement :  x = %d \n")
