#include<stdio.h>

///compiler control directive
/******************
#if
#ifdef
#ifndef
#elif
#else
#endif
*****************/

int main(){
    #ifdef __STDC__
    printf("ANSI mode");

    #else
    printf("ANSI mode");

    #endif // __STDC__


}
