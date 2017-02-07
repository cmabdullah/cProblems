#include<stdio.h>
int main(){
    int x , y , *z;
    x = 100;
    y = 200;
    z = &x;
    printf("x= :%d \t y= :%d \tz= :%x\n", x, y, z);
    y = *z;
    *z = 20;
    printf("x= :%d\t \t y= :%d \tz= :%x\n", x, y, z);
}
