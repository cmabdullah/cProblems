/**************
Write a function that will generate and print the first n Fibanacci numbers . Test the function for N=5,10,and15.
http://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
***/
#include<stdio.h>
int fib(int  n);
int main(){
    int n;
    printf("enter a number") ;
    scanf("%d", &n);
        printf("%d", fib(n));
    return 0;
}
int fib(int  n){
    /**Declare an array to store Fibonacci numbers. */
    int f[n+1];
    int i;
    /** 0th and 1st number of the series are 0 and 1*/
    f[0]=0;
    f[1]=1;
        for(i=2;i<=n;i++){
                /** Add the previous 2 numbers in the series
             and store it */
        f[i] = f[i-2] + f[i-1];
        }
    return f[n];
}

/**********
                         fib(5)
                     /             \
               fib(4)                fib(3)
             /      \                /     \
         fib(3)      fib(2)         fib(2)    fib(1)
        /     \        /    \       /    \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /    \
fib(1) fib(0)

**/


