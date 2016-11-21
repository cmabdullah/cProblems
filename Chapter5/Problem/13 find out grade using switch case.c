/*********/
#include<stdio.h>
int main(){
     int x;
     printf("Enter the marks");
     scanf("%d",&x);
     switch(x/10){
         case 10:
         printf("Grad A Mark :%d",x);
         break;

         case 9:
         printf("Grad A Mark :%d",x);
       ///  printf("Two");
         break;
         case 8: {
         printf("Grad B Mark :%d",x);
      /***   printf("Three"); ********/
         break;
         }
         case 7: {
         printf("Grad C Mark :%d",x);
         break;
         }
         case 6: {
         printf("Grad D Mark :%d",x);
         break;
         }
     }

}
