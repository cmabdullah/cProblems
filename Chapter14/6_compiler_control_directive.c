#include<stdio.h>

///compiler control directive
/******************
#if
#ifdef       => #if defined
#ifndef      => #if !defined
#elif
#else
#endif
*****************/

int main(){
    #ifdef __STDC__
    printf("ANSI mode");
    #else
    printf("not ANSI mode");
    #endif // __STDC__
}
