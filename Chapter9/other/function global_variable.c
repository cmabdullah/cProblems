#include<stdio.h>
int num1 = 15 , num2 = 20 ,  num3 = 25, num4 =30 , num5 =35 , num6 = 40, num7 = 45;
void function_1()
{
    printf("\n\nin function_1\n");
    printf("num1 =%d\n", num1);
    printf("num2 =%d\n", num2);
    printf("num3 =%d\n", num3);
    printf("num4 =%d\n", num4);
    printf("num5 =%d\n", num5);
    printf("num6 =%d\n", num6);
    printf("num7 =%d\n\n", num7);
}
int main()
{
    printf("in main function\n");
    printf("num1 =%d\n", num1);
    printf("num2 =%d\n", num2);
    printf("num3 =%d\n", num3);
    printf("num4 =%d\n", num4);
    printf("num5 =%d\n", num5);
    printf("num6 =%d\n", num6);
    printf("num7 =%d\n", num7);
    function_1();
    return 0;
}
