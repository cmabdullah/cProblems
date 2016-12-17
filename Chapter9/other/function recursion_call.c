#include<stdio.h>
void RecusiveCall(int);
int main()
{
    RecusiveCall(2);
    return 0;
}
void RecusiveCall(int x)
{
    if (x == 0)
        return 0;
    printf("%d\n\n\n", x);
    RecusiveCall(x-1);
    printf("Call End\n\n");
}
