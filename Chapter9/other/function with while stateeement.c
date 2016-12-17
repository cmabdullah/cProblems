#include<stdio.h>
int get_data(int x, int y)///how to work it!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
{
    int aaa;
    while (y != 0 )

    {
        aaa = x % y;
        x = y ;
        y = aaa;
    }
    return x;
}
int main()
{
    int aaa;
    aaa = get_data(200 , 50);
    printf("The aaa of 200 and 35 is  %d\n\n",aaa );
}
