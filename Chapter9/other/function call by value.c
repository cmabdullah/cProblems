#include<stdio.h>
void call_by_value(int , int  , int);/** How work this statement??????????????? */
int main()
{
    int name1 , name2 , name3;
    name1 = 1;
    name2 = 2;
    name3 = 3;
    call_by_value(name1, name2 , name3);
    printf("After function calling : %d %d %d\n\n",  name1 ,name2 , name3);
    return 0;
}
void call_by_value(int x , int y , int z)
{
    printf("Original value are %d %d %d\n\n",x , y , z );
    x +=100;
    y +=101;
    z +=102;
    printf("After changing the values : %d %d %d\n\n", x , y , z);
}
