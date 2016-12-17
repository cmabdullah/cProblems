#include<stdio.h>
#include<conio.h>
void sum_of_all_num(int abu)
{
        int i , sum=0;
        for(i=0 ; i<=abu ;i++)
            sum= sum+i;
        printf("sum of all number from %d to %d", abu , sum);
}
void main()
{
    sum_of_all_num(200);
    getch();
}


