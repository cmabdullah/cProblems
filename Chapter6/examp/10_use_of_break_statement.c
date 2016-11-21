#include<stdio.h>
int main(){
    int i , j , s , n;
    s = 0 ;

    printf("Enter the range");

    scanf("%d",&n) ;

    for (i = 0 ; i< n ; i++){

            scanf("%d",&j);
        if (i<0)
                break;
                   s = s+j ;
    }
    printf("%d", s);

}
