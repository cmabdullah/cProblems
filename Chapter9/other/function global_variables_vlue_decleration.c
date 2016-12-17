#include<stdio.h>
int x;
void X(void)
{
    x = 10 ;
    printf("\n In X() : x = %d\n", x);
}
int main()
{
    printf("\n Before calling x() , x = %d\n" , ++x);
    X();
    printf("\n Before calling x() , x = %d\n" , x);
    return 0;
}
