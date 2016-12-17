#include<stdio.h>

void square_num(void)
{
    int i , num;
    printf("\n\nNumber Square\n");

    for(num = 1 ; num <=10 ; num++)
        printf("%3d\t %3d\n", num , num*num);
}
void cube_num(void)
{
    int i , num;

    printf("\n\nNummber Cubic\n");
    for(num = 1 ; num <=10 ; num++)
    printf("%3d\t %4d\n", num , num*num*num);

}
void main()
{
    printf("Pres any key to see the square number from 1 to 10");
    square_num() ;
    printf("Pres any key to see the cubic number from 1 to 10");
    cube_num();
}
