//#include<stdio.h>
//#include<math.h>
//void main(){
//int j,i;
//    for (i=1;i<=2;i++){
//        for(j=1;j<=5;j++)
//        printf("S ");
//        printf("\n");
//        }
//        printf("* * O * *\n");
//
//        for (i=1;i<=2;i++){
//        for(j=1;j<=5;j++)
//        printf("S ");
//        printf("\n");
//        }
//}
#include<stdio.h>
void main(){
int n,i,j,mid;
  printf("\n\n");
  scanf("%d",&n);
  mid=(int)(n/2);
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i==mid&&j==mid)
         printf("0 ");
     else
        printf("s ");
        }
     printf("\n\n");
     }

}
