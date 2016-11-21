#include<stdio.h>
int main(){
     long int  i , n ,power;
     float j;
     printf("n    2 to n     2 to -n\n");

     for (n = 0 ; n<=20 ; ++n){

         i = n*2;

         j = 1/(float)i;


            printf("%3ld    %3ld    %.6f\n", n , i , j);

     }

}
