#include<stdio.h>
void ShoVal(int) ;
int main()
{
    int i;
    i = 10 ;
    ShoVal(i);
    i = 20 ;
    ShoVal(i);
}
void ShoVal(int x)
{
    printf("%d " , x);
}
