#include<stdio.h>
int main(){

//Type casting
   float b = 100.0022;
   char   *A;


   A = (char*)&b;///valid
        printf("%c", A);

  // A = &(char)b;/// invalid ,
}
