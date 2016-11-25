#include<stdio.h>
int main(){
    int i , j , n[100][100] ,row,column;

    printf("Enter row value :");
    scanf("%d",&row);

    printf("Enter column value :");
    scanf("%d",&column);

    for (i = 0; i< row ;i++){
        for (j = 0; j<column; j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(i = 0; i <column ;  i++){
        for(j = 0; j<row ;j++){
            printf("%3d ",n[j][i]);
        }
        printf("\n");
    }
    return 0;
}
