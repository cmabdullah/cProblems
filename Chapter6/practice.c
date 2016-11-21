/**********

#include<stdio.h>
int main(){
    int a , b , i , j , n;
    scanf("%d",&n);

    for(a = 0; a<n ; a++){

       for (b = 0; b<= a ; b++){

        printf("%d ", b);
       }
       /// printf("%d",a);
       printf("\n");
    }
}
*************/

/*************
#include<stdio.h>
int main(){
    int a , b , i , j , n , k;
    scanf("%d",&n);
    for(a = 0; a<n ; a++){
            for(k = n-1 ; k > a ; k--){
                printf(" ");
            }
        for (b = 0; b<= a ; b++){
            printf("* ");
        }
        printf("\n");
    }
}
****/
/***********
#include<stdio.h>
int main(){
    int a , b , i , k , j , n;
    scanf("%d",&n);
    for (a = 0 ; a<n ; a++){
            for (k = n-1 ; k >= a ; k--){
                printf("*");
            }
        for (b = 0 ; b<=a ; b++){
            printf("X");
        }
        printf("\n");
    }
}
***********/
/*********************
#include<stdio.h>
int main(){
    int a , b, i , j , k , n;
    scanf("%d",&n);
    for (a = 0; a<n ; a++){
        for (b = 0 ; b< n ; b++){
                if(b < a){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}
/****

****
 ***
  **
   *


****/

/*********

#include<stdio.h>
int main()
{
    int n , i, j, k;
    scanf("%d",&n);
    for(i=n; i>=1; --i)
    {
        for(k =0; k < n-i; ++k)
            printf("  ");

        for(j=i; j <= 2*i-1; ++j)
            printf("* ");
       // for(j=0; j < i-1; ++j)
        //    printf(" *");

        printf("\n");
    }
    return 0;
}

*********/
/*******
#include<stdio.h>
int main(){
    int a , b , i , j , k , n ;
    scanf("%d",&n);
    for (a = 0 ; a < n ; a++){
        for (b = 0 ; b <= a ; b++){
            printf("*");
        }
        printf("\n");
    }
}
********/
/*******

#include<stdio.h>
int main(){
    int a , b , n , k;
    scanf("%d",&n);
    for (a = 0 ; a<n ;a++){
        for (k = n-1 ; k>= a ; k--){
            printf("*");
        }
        printf("\n");
    }

   }

************/

/**********
#include<stdio.h>
int main(){
    int a, b, i , j, k , n;
    scanf("%d",&n);

    for (a = 0; a<n ; a++){
            for (k = n-1; k>=a ; k--){
                printf(" ");
            }
        for (b= 0 ; b<= a ; b++){
            printf("*");
        }
        printf("\n");
    }


}
***********/

/**********
#include<stdio.h>
int main(){
    int a , b, i , j ,k ,n;
    scanf("%d",&n);

    for (a = 0; a<n ; a++){
        for (b= 0; b<n ; b++){
            if(b < a){
                printf(" ");
            } else {
                printf("*");
            }


        }
        printf("\n");
    }
}
************/

#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for (i = n; i>0;--i){
        for(k = 0; k < n-i ; ++k)
            printf("  ");
        for (j = i; j <=2*i-1 ;++j)
            printf("*   ");
        printf("\n");
    }
}
