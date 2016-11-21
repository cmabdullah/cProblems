//#include<stdio.h>
//int main(){
//    int row , column, x;
//
//    row = 1;
//
//
//    printf("            Multiplication table            \n");
//
//    do{
//            column = 1;
//
//        do
//    {
//        x = row * column;
//        printf("%4d", x);
//        column = column+1;
//    }
//    while(column<10);
//    printf("\n");
//    row = row + 1;
//    }
//    while(row <= 12);
//    printf("______________________________________________\n");
//
//
//
//}

#include<stdio.h>
int main(){
    int row , column ,i , j, k ;
    printf("               Multiplication table           \n");
    for (row = 1 ; row <= 12 ; row++){//row outer loop
        for (column = 1 ; column <= 10 ; column++){//column outer loop
            k = row * column;
            printf("%5d", k);
        }
        printf("\n");
    }
}
