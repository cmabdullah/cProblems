#include<stdio.h>
// not working...
int main(){
    int  i, n , f= 1;

    for (i = 5 ; i<=500 ;i++){
        for (n = 1 ; n <= i; n++){
            f  = f*n;
        }
        printf("%d" , f);

    }


}



