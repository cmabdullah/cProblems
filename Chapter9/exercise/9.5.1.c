//up comming
/***
Write a funtion to evaluate the polynomial ,using an array variable.Test it using a main program.
The Fibpnacci numbers are defined recursively as follows:
      F1=1
      F2=1
      Fn=Fn-1+Fn-2,n>2
***/


//Fibonacci Series using Recursion
#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

int main ()
{
  int n = 9;
  printf("%d", fib(n));
  getchar();
  return 0;
}
