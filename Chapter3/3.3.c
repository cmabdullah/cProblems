#include<stdio.h>
int main(){
    int y, z;
    scanf("%d",&y);
    if (y>100){
        z = y%100;
        printf("%d",z);
    }
}
