#include<stdio.h>

int main()
{
    int y,r;
    float x;

    printf("Enter the value of x :");
    scanf("%f",&x);
    y=(int)x;
    printf("integer no is :%d\n\a",y);
    r=y%10;
    if(y>10)
    printf("right most digite of int :%d\n\a",r);

    return 0;

}
