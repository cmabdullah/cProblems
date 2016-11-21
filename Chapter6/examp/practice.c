#include<stdio.h>
int main(){
    int n ,f , i , s , x,y;
    s = 0;

for (i= 1900 ; i<=2000 ;i++){
    if (i%4 == 0 && i%100 != 0 || i%400==0){
        printf("%d ",i);
    }
}


}
