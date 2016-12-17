#include<stdio.h>
void printline(char c);
void value (float , float , int);
main(){
    float principle, inrate ;
    int period;

    printf("Enter the principle amount, interest :") ;
    scanf("%f",&principle);
    printf("Enter rate and period :");
    scanf("%f%d", &inrate, &period);
    printline('Z');
    value(principle , inrate ,  period);
    printline('C');
}


void printline(char ch){
    int i;
    for (i = 1; i<=52; i++){
        printf("%c",ch);
    }
    printf("\n");

}
void value(float p , float r , int  n){
    int year;
    float sum;
    sum  = p;
    year = 1;
    while (year <= n){
        sum = sum*(1+r);
        year++;
    }
    printf("%f\t%f\t%d\t%f\n", p , r , n , sum );
}

