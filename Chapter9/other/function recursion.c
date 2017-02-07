#include<stdio.h>
long int find_factorial(long int n)
{
    if (n<=1)
        return 1;
    else
        return (n*find_factorial(n-1));
    /**
    return(5*find_factorial(5-1))
    return(5*4*find_factorial(4-1))
    return(5*4*3*find_factorial(3-1))
    return(5*4*3*2*find_factorial(2-1))
    return(5*4*3*2*1)
    */
}
int main()
{
    long int x;
    x = find_factorial(5);
    printf("factorial is : %ld \n\n" , x);
    return 0;
}
