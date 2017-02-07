#include<stdio.h>
struct dd{
    int k;
};
struct student{
   int id;
   int age;
   struct dd dm1;
} *term , cm;
int main(){
    term = &cm;
    cm.dm1.k = 20;///general variable
   term->id = 100;///pointer to -> operator///->operator  use  recommended
   (*term).age= 30;///pointer to .operator
   printf("%d\n", term->id);
   printf("%d\n", (*term).id);
   printf("%d\n", cm.dm1.k);
}

