#include<stdio.h>
///80 87 90 55 66 77 44 33 23 67 88 78 99 90 58 48 87 88 90 100
int main(){
    int i , j , k , sum , count, a[100];
    count = 0;
    for (i=0; i<20;i++){
        scanf("%d",&a[i]);
    }
    for (i=0; i<20;i++){
     //   printf("%d",a[i]);
        if (a[i]<80)
            count++;
    }
    printf("%d",count);
}
