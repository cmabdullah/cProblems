///constant directive
#include<stdio.h>
#define pi 3.1416
#undef pi
#define pi 4.34 /// redefine with new value
int main(){
    float x;
    x = pi;
    printf("%f",  x);
}

