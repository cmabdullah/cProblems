/*******
Write a function that will round a floating point number to an indicated decimal place .
For example the number 17.457 would yeild the value 17.46 when it is rounded off to two decimal places .
**********/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ab(void);
void main(){
 ab();
}
void ab(void){
char d[100];
 float f;
 int l,i;
  gets(d);
  l=strlen(d);
 for(i=0;i<l;i++){
          if(d[i]=='.'){
            if(d[i+2]>=5){
             d[i+2]++;
         d[i+3]='\0';
         break;
          }
       }
    }
f=atof(d);
printf("%.2f",f);
}
