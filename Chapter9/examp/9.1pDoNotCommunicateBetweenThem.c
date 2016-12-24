#include<stdio.h>
void printline(void);
void value(void);
int main(){
    printline();
    value();
    printline();
}
void printline(void){
    int i;
    for (i = 1 ; i <= 35 ; i++){
        printf("%c", '-');
    }
    printf("\n");
}
void value(){
    int year , period;
    float inrate ,sum , principal;

    printf("Principal amount?");
    scanf("%f",&principal);
    printf("Intrest rate?    ");
    scanf("%f",&inrate);
    printf("period?          ");
    scanf("%d", &period);
    sum = principal;
    year = 1;
    while (year<= period){
        sum  = sum * (1+inrate);
        year++ ;
    }
    printf("\n %8.2f %5.2f %5d %12.2f \n", principal , inrate , period , sum);
}
