/***
Write a function that can be called to compute the product of two matrixes of size m by n and n by m.
The main function provides  the values for m and n and two matrices.@bdull@h
***/
#include <stdio.h>
void product(int first[10][10], int second[10][10] , int m,  int n );
int main()
{
   int x, y,  f[10][10], s[10][10];
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &x, &y);
   product(f, s , x,   y );
}
void product(int first[10][10], int second[10][10] , int m,  int n ){
    int c,d, sum[10][10] ;
       printf("Enter the elements of first matrix\n");
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
   printf("Enter the elements of second matrix\n");
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
            scanf("%d", &second[c][d]);
   printf("Sum of entered matrices:-\n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
}
