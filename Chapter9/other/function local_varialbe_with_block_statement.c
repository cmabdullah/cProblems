#include<stdio.h>
int main()
{
    int abu;//????????????????????????????????????????????????????????????????????????????//
    abu = 20;
    printf("Outside the block abu : %d\n\n" , abu);
    if (abu <= 20)
    {
        int abu = 35;
        printf("Inside the block abu : %d\n\n", abu);
    }
    printf("At the end abu : %d\n\n" , abu);
    return 0;
}
