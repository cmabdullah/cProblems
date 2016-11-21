#include<stdio.h>
int main(){
    int count , negative;
    double number, squroot;
//try to understand carefully!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    printf("Enter 9999 to stop\n") ;
    count = 0;
    negative = 0;
    while(count<=100){
        printf("Enter the number :");
        scanf("%lf", &number);
        if (number == 9999)
            break ;
        if(number<0){
            printf("Number is negative\n");
            negative++;
            continue;
        }
        squroot = sqrt(number);
        printf("Number     =    %lf\n  Squre root = %lf\n\n", number, squroot) ;
        count++;
    }
    printf("Number of items done = %d\n", count);
    printf("\nNegative items = %d\n", negative) ;
    printf("END OF DATA");
}
