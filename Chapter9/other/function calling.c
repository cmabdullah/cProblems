#include<stdio.h>
void print_massage(void)
{
    printf("this is print_massage() function");
}
int square_val(int value)
{
    print_massage();
    return(value*value);
}
int main()
{
    int value;
    value = square_val(5);
    printf("The result is %d\n\n", value);
    return 0;
}

