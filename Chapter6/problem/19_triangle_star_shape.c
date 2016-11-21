#include<stdio.h>
/*************
*
**
***
****

*/
int main(){
    int a, b ,d,n;

    scanf("%d", &n);
    for (a = 0; a<=n ; a++){
        for (b =0 ; b< a ; b++){
            printf("* ");
        }
        printf("\n");
    }

}
