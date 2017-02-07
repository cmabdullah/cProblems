//Write a program that will read a positive integer and determine and print its binary equivalent.
// Date : 11/11/2016
#include<stdio.h>
void main(){
    int num,dig,bin[10],i,temp,count;
    count=0;
    printf("Enter any Number:\n");
    scanf("%d",&num);
    temp=num;

            while(temp!=0){
            dig=temp%2;
            temp=temp/2;
            bin[count]=dig;
            count++;
            }
        printf("Binary Number of Integer Number %d is ",num);
        for(i=(count-1);i>=0;i--)
        printf("%d",bin[i]);
}
