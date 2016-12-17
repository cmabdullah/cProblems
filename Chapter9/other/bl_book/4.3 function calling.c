#include<stdio.h>
void print_message()
{
    printf("\n This is print_massage() function") ;
}
int square_value(int value)
{
    print_message();
    return (value*value);
}
int main()
{
    int value ;
    value = square_value(5) ;
   //printf("\n Square value is %d", value);
    return 0;
}
