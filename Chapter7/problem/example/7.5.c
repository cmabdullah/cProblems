#include<stdio.h>
#define rows 5
#define column 5

int main(){
    int i,j, k, r , c, produc[rows][column] ;
    printf("   multiplication table\n\n\n\n");

   printf("    ");

    for (j = 1 ; j<=column; j++){
        printf("%4d",j);
    }
    printf("\n");
    printf("_________________________\n");

    for (i = 0 ; i< rows;i++){
        r = i+1;
        printf("%2d |", r);
        for (j=1; j<=column;j++){
            c =j;
            produc[i][j] = r*c;
            printf("%4d", produc[i][j]);
        }
        printf("\n");
    }


}
