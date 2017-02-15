#include <stdio.h>
#include <string.h>
/*****
Description

The C library function void *memset(void *str, int c, size_t n) copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.
Declaration

Following is the declaration for memset() function.

void *memset(void *str, int c, size_t n)

Parameters

    str -- This is a pointer to the block of memory to fill.

    c -- This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.

    n -- This is the number of bytes to be set to the value.

***/
int main ()
{
   char str[50];

   strcpy(str,"This is string.h library function");
   //puts(str);
   printf("%s\n",str );

   memset(str,'$',7);
   puts(str);
   
   return(0);
}