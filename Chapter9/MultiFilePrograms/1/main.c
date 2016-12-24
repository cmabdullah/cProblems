/* main.c */
/*
  Program to print factorials of all integers
  between 0 and 20
*/

#include <stdio.h>

/* Prototype for fucntion factorial() */
void factorial();

/* Global variable declarations */
int j;
double fact;

int main()
{
  /* Print factorials of all integers between 0 and 20 */
  for (j = 0; j <= 20; ++j)
    {
      factorial();
      printf("j = %3d    factorial(j) = %12.3e\n", j, fact);
    }
  return 1;
}

