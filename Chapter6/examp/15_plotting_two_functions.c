#include<stdio.h>
//ultimately solved..........
int main(){
    int i;
    float a, x, y1, y2;
    a = .4;
    printf("                   Y---------------------->                  \n");
    printf("0     -------------------------------------------------------------------------------------------\n");
    for (x = 0; x<5; x = x+.25){
        //beginning of for loop//
        //.................evaluation of function...............//
        y1 =(int)(50*exp(-1*x)+.5);
        y2 = (int)(50*exp(-a*x*x/2)+.5) ;

        //...............plotting when y1 = y2.............//

        if (y1 == y2){
            if (x == 2.5)
                printf("X   |");
            else
                printf("    |");
            for (i = 1 ; i<=y1-1 ; ++i )
                printf(" ");
            printf("#\n");
            continue;
        }
        //..................plotting when y1 > y2...........

        if (y1>y2){
            if(x == 2.5)
                printf("X   |") ;
            else
                printf("    |");

            for (i = 1; i <=y2-1 ; ++i)
                printf(" ");
            printf("0\n");
            continue;
        }

        //...................plotting when y2 >y1................

        if ( x== 2.5)
            printf("X   |");
        else
            printf("    |");
        for ( i = 1 ; i <= (y1 -1) ;++i)
            printf("  ") ;
        printf("0");
        for (i = 1 ; i <= (y2-y1-1) ; ++i)
            printf("_") ;
        printf("*\n");



    }// end of for loop......

    printf("    |n");

}
