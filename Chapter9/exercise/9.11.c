/********
Question: Write a function that can be called to find the largest element of an m by n matrix.
*****/

//confused
/***
#include<stdio.h>
void max_ele(int r,int c,int dinar[][11]);
void main(){
   int sazon[11][11]={0},k;
   int r,c,i,j;
   printf("Enter nomber of rows and columns(Maximun number can be 11):");
   scanf("%d%d",&r,&c);
   printf("Enter the elements of the matrix in rowwise:\n");
   for(i=0;i<r;i++){
     for(j=0;j<c;j++){
          scanf("%d",&k);
          sazon[i][j]=k;
     }
     }
  max_ele(r,c,sazon);
}
void max_ele(int r,int c,int sazon[][11])
{
   int max,i,j;
   max=sazon[0][0];
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       if(max<sazon[i][j]){
           max=sazon[i][j];
       }
    }
    }

   printf("\nThe maximum elements is:%d",max);
}


***/

#include<stdio.h>
#include<conio.h>

main()
{
   int m, n, c, d, matrix[10][10], maximum;

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d",&m,&n);
   printf("Enter the elements of matrix\n");

   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         scanf("%d",&matrix[c][d]);
      }
   }

   maximum = matrix[0][0];

   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         if ( matrix[c][d] > maximum )
            maximum = matrix[c][d];
      }
   }

   printf("Maximum element in matrix is %d\n", maximum);

   getch();
   return 0;
}
