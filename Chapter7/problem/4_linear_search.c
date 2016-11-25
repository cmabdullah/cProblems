#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50}, n , i , count= 0;
    scanf("%d", &n);
    for(i = 0 ; i<5; i++){
        if (a[i]==n){
            printf("The value of index is : %d", i);
            count++;
            break;
        }
    }
    if (count<=0){
        printf("No");
    }
}
