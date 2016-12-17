#include <stdio.h>
#include<conio.h>
void square_value(long int any_value)
{
    long int result;
    result = any_value*any_value ;
    printf("%d %d", any_value , result);

}
void main ()
{
    square_value(5) ;/// calling square value with 5......
getch();
}

