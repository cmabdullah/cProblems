#include<stdio.h>
//not working
int main(){
    int x , y , i , n ;
    y = 1;
    scanf("%d%d",&x,&n);
    while(1<=n){
        y = x*n;
        printf("%d",y);
        i++;
    }
    printf("%d",y);

}


