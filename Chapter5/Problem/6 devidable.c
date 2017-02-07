#include<stdio.h>
int main(){
    int x, y ,z;
    int a;
    scanf("%d", &a);
    if (a> 100 && a < 200 && a%7== 0){
        printf("Divisible %d", a);
    }
    else{
        printf("Not divisible %d",a);
    }

}
