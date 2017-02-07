#include<stdio.h>
int main(){
    int id,i, j, k, s,m, total, n;
    s = 0;
    printf("Enter the student no:");
    scanf("%d",&s);
    printf("\nEnter the subject no:");
    scanf("%d",&m);
    for (i=0; i<s; i++){
            printf("\nenter student id :");
            scanf("%d",&id);
            printf("\n\ni is %d\n\t\t", i);
            printf("\nEnter subject marks of %d subject", m);
    for(k=0;k<m; k++){
        scanf("%d",&n);
        total = total+ n;
    }
    printf("\nTotal marks is :%d ",total);
    }
}
