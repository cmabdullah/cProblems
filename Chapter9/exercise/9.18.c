/***
Write a function that takes an integer parameter m representing the month number of the year  and
returns the corresponding  name of the month .For instants ,if m=3, the month is March.Test your program.
***/
 #include<stdio.h>
#include<conio.h>
void month(int n,char a[]);
void main(){
     int k;
     char dinar[15]="";
     printf("Input month number:");
     scanf("%d",&k);
     month(k,dinar);
     printf("%s",dinar);
}
void month(int n,char a[]){
   switch(n)
    {
     case 1:strcpy(a,"January");
            break;
     case 2:strcpy(a,"Fabruary");
            break;
     case 3:strcpy(a,"March");
            break;
     case 4:strcpy(a,"April");
            break;
     case 5:strcpy(a,"May");
            break;
     case 6:strcpy(a,"June");
            break;
     case 7:strcpy(a,"July");
            break;
     case 8:strcpy(a,"August");
            break;
     case 9:strcpy(a,"September");
            break;
     case 10:strcpy(a,"October");
            break;
     case 11:strcpy(a,"November");
            break;
     case 12:strcpy(a,"December");
            break;
  }
}

