/***
Design a function locate () that takes two character arrays s1 and s2 and one integer value m as parameters
and inserts  the strings s2 into s1 immediately after the index m.Write a program to test the function  using a
real-life situation.(Hints :s2 may be a missing word  in s1 that represents a line of text).
***/
 #include<stdio.h>
#include<string.h>
void lokate(void);
void main(){
          lokate();
}
void lokate(void){
           char s1[40],s2[10],s3[30];
           int m,l1,l2,i,j,k;
           printf("Input string s1:");
           gets(s1);
           printf("Input string s2:");
           gets(s2);
           l1=strlen(s1);
           l2=strlen(s2);
           printf("Input position where s2 is missed from s1:");
           scanf("%d",&m);

           i=0;j=m;
           for(m=j-1;m<l1;m++){
                   s3[i++]=s1[m];
           }
           //for s3
           for(k=0;k<l2;k++){
            s1[j++]=s2[k];
           }
           //j--;
            for(k=0;k<i;k++){
                    s1[j++]=s3[k];
            }
            s1[j]='\0';
            puts(s1);
}


