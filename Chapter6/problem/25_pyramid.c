#include<stdio.h>
int main(){
    int i , j, n, k;

    scanf("%d",&n);

    for (i = 0; i <n ; i++){
            for(k=n-1 ; k>i; k--){
                printf(" ");
            }
        for (j = 0; j<=i ; j++){
            printf("* ");
        }
        printf("\n");
    }
}
/******
    *
   * *
  * * *
 * * * *
* * * * *


*/
