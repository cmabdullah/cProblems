#include<stdio.h>
/************


****
***
**
*

**/
int main(){
    int i , j, n, k;

    scanf("%d",&n);

    for (i = 0; i <n ; i++){
        for (j = n-1 ; j>=i ; j--){
            printf("* ");
        }
        printf("\n");
    }
}
