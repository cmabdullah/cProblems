#include<stdio.h>
int main(){
    int x ,y ,z , temp;

    scanf("%d%d%d",&x,&y,&z);
    printf("Before exchange :\t x = :%d, y = :%d, z = %d\n",x,y,z);

    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("After exchange :\t x = :%d, y = :%d, z = %d",x,y,z);

}
