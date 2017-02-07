#include<stdio.h>
void local_1();
void local_2();
int main()
{
    int n;
    n = 5;
    local_1();
    local_2();
    printf("value of n in main function %d\n\n", n);
}
void local_1()
{
    int n = 1;
    printf("value of n i local_1 : %d\n\n", n);
}
void local_2()
{
    int n = 2;
    printf("value of n i local_2 : %d\n\n", n);
}
