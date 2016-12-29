#include<stdio.h>
///print an array using pointer
int main(){
    int i,j , ar[3][4] = {1,2,3, 9,8,7, 3,4,5,5,6,7};
    int *ptr;

    ptr = ar;

        printf("%x = %x\n",ptr, ar);
        for (i = 0; i<3 ; i++){
            for (j =0 ; j<4; j++ ){
                printf("&ar[%d][%d] = %x\t   ptr = %x  ", i,j,&ar[i][j] ,  ptr+i*4+j  );
                printf(" ar[%d][%d] = %d\t  *ptr = %d\n", i,j, ar[i][j] ,*(ptr+i*4+j) );

            }
        }

}

