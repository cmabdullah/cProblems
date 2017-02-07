#include<stdio.h>
/*************

****
***
**
*

*/
int main(){
    int a, b ,d,n;
    //d = 1;
    scanf("%d", &n);
    for (a = n; a>0 ; a--){
        for (b =a ; b>0 ; b--){
            printf(" *");
        }
        printf("\n");
    }

}
