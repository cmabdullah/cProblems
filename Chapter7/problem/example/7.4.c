#include<stdio.h>
//under construction...............
int main(){
    int val[4][3];
    int girl_total[4], item_total[3];
    int i , j , grand_total;

    printf("Enter values\n");
    for (i = 0; i<4 ;i++){
        girl_total[i] = 0;
        for (j = 0 ; j< 3 ; j++){
            scanf("%d",&val[i][j]);

            girl_total[i] = girl_total[i]+ val[i][j] ;
        }
    }
    for (j = 0 ; j<3 ; j++){
        item_total[i] = 0;
        for (i=0;i<4 ;i++){
            item_total[j]=item_total[j]+val[i][j];
        }
    }

    grand_total = 0;
    for(i = 0; i<4; i++){
        grand_total = grand_total + girl_total[i];
    }
    printf("girls total\n");
    for(i = 0 ; i< 4 ; i++){
        printf("Salesgirl[%d] = %d\n",i+1, girl_total[i]);
    }
    printf("Item totals\n\n");

    for (j = 0; j < 3; j++){
        printf("ITEM [%d] = %d\n", j+1, item_total[j]);
    }
    printf("\n Grand total = %d", grand_total);
}
