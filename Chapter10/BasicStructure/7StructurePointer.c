#include<stdio.h>
struct student{
   char *name;
   int x;
}ccc = {"abdullah"} , *term , cm;
int main(){
    term = &cm;
    cm.x= 20;
//    strcpy(varname.name ,"cm" );
    printf("%s\n", ccc.name);
    printf("%d\n", cm.x);
}

