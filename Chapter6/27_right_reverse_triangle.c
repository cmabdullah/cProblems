#include<stdio.h>
/************

****
 ***
  **
   *
**/

#include<stdio.h>
int main(){
    int a , b, i , j , k , n;
    scanf("%d",&n);
    for (a = 1; a<=n ; a++){
        for (b = 1 ; b<= n ; b++){
                if(b < a){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

///under construction
