#include<stdio.h>
int main(){
    int temp ,i , j , a[5] = {20,80,70,10,500};
    for(i = 0; i<5 ; i++){
        for (j = 0; j<5 ; j++){
            if (a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp ;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i= 0;i<5; i++){
        printf("%d ",a[i]);
    }
}

