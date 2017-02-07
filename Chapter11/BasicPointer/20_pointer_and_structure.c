#include<stdio.h>
  struct inventory{
                    char name[20];
                    int  amount;
                    float price;
                    } product[2], *ptr;

    main(){
    struct inventory product[2], *ptr ;
    printf("Input\n");
    for (ptr = product; ptr<product+2; ptr++){
            scanf("%s%d%f",ptr->name,&ptr->amount,&ptr->price);
        }
            printf("output\n");
            ptr = product;

            while(ptr<product+2){
                printf("%-20s %5d, %10.22f\n", ptr->name, ptr->amount,ptr->price);
                ptr++;
            }
    }
//    ptr ->name
//    ptr ->amount
//    ptr ->price///valid
//    same as (*ptr).price ///also valid pranthesic use must due to control precedence order ....
