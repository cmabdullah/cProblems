/*********

****
 ***
  **
   *



#include<stdio.h>
int main(){
    int a , b, i , j , k , n;
    scanf("%d",&n);
    for (a = 1; a<=n ; a++){
        for (b = 1 ; b<= n ; b++){
                if(b < a){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

***/


///same code using for loop

/******/


#include<stdio.h>
int main()
{
    int n , i, j, k;
    scanf("%d",&n);
    for(i=n; i>=1; --i)
    {
        for(k =0; k < n-i; ++k)
            printf("@&");

        for(j=i; j <= 2*i-1; ++j)
            printf("*XQG");
       // for(j=0; j < i-1; ++j)
        //    printf(" *");

        printf("\n");
    }
    return 0;
}



/**/
