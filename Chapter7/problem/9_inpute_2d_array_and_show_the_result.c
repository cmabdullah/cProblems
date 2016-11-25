/*************
20 30 40
50 60 19




**/
#include<stdio.h>
int main(){
    int a[3][2],i,j,k;

    for (i = 0;i<2; i++){
        for (j = 0; j<3 ; j++){
            scanf("%d",&a[i][j]);
        }
    }
for (i = 0;i<2; i++){
        for (j = 0; j<3 ; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
