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



/**********
#include<stdio.h>
int main(){
    int ar[] = {2,4,5,10, 20, 30} ;
    int  start, end , mid , key;

    start = 0;
    end = 5;

    scanf("%d",&key);
    while(start<=end){
        mid = (start+end)/2 ;

        if(key == ar[mid]){
                break;

        }
        if(key < ar[mid]){
            end  = mid-1;
        }
        else{
            start = mid+1;
        }

    }
    printf("%d %d", mid, ar[mid]);

}
***/
//
//#include<stdio.h>
//int main(){
//    int ar[] = {10,20,30,40};
//    int i , n  , k;
//    scanf("%d",&n);
//
//    for (i = 0; i<4 ; i++){
//        if (ar[i]==n)
//            printf("%d", i);
//    }
//
//
//}




#include<stdio.h>
int main(){
    int i=0 , j=0 , k=0 , l , a[5]={0,25,37 , 96 , 100}, b[5]  = {1 ,3 , 5 , 40 , 57}, res[10];

    while(i <= 4  &&  j<=4){
            if(a[i]<b[i]){
                res[k]= a[i];
            i++;
            k++;
            }
            else{
                res[k] = b[j];
            j++;
            k++;
}
    }

    while(i<5){
        res[k] = a[i];
        i++;
        k++;
    }

    while(j<5){
        res[k] = b[j];
        i++;
        k++;
    }


    for (k = 0; k<=9 ; k++){
        printf("%d ",res[k]);
    }

}

































