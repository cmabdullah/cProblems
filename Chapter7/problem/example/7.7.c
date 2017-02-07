#include<stdio.h>
void main(){
    int a1[10][10],a2[10][10], c[10][10] , i , j , k , a , b;

    printf("enter the size of squire matrix\n");
    scanf("%d",&a);
    b = a;

    for (i = 0; i < a ; i++){
        for (j = 0; j<b ;j++){
            printf("\nenter the next element in the 1st matrix =");

            scanf("%d",&a1[i][j]);
        }
    }
    for (i = 0; i < a ; i++){
        for (j = 0; j<b ;j++){
            printf("\nenter the next element in the 2nd matrix =");

            scanf("%d",&a2[i][j]);
        }
    }

    printf("entered matrix are \n");

    for (i = 0; i < a ; i++){
            printf("\n");

        for (j = 0; j<b ;j++)
            printf("%d", a1[i][j]);
    }
    printf("\n");
//underconstruction.............
}
