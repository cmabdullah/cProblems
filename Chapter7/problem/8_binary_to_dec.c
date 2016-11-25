#include <stdio.h>
void main(){
    int  num, binary, decimal, base, rem;
    decimal = 0;
    base = 1;

    printf("Caution !!! 1<x<5\n");

        printf("Enter a binary number \n");
        scanf("%d", &num);
        binary = num;
        while (num > 0){
            rem = num % 10;
            decimal = decimal + rem * base;
            num = num / 10 ;
            base = base * 2;
        }
        printf("Its decimal equivalent is = %d \n", decimal);
    }
