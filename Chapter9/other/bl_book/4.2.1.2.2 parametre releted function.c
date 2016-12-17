#include<stdio.h>
#include<stdarg.h>
double diff_parameter(char *ch )///...............................
/***
Uncompleted................................................
......................................................
...................................................
..............................................
......................................
*/
{
    va_list marker;
    double result = 0 ;
    va_start(marker , ch) ;
    while (*ch)
    {
        if (*ch == '%')
        {
            switch (*(++ch))
            {
            case 'd':
                result += va_arg(marker , int);
                break;
            case 'f':
                result += va_arg(marker, double);
            }
        }
        ch++;
    }
    va_end(marker);
    return(result);
}
void main (void)
{
    double result ;
    result = diff_parameter("%f %f", 1.2, 2.2);
    printf("\nresult is %f.", result);
    result = diff_parameter("%f %d %f %d", 1.1,1,2.2,3) ;
    printf("\nresult is %f.", result);
}
