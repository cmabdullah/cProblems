#include<stdio.h>
struct student{
   char name[20];
};
int main(){
    int i;
    struct student varname[4] ;
            strcpy(varname[0].name ,"cm" );
            strcpy(varname[1].name ,"cd" );
            strcpy(varname[2].name ,"ce" );
            strcpy(varname[3].name ,"cf" );
   for (i = 0; i<4; i++){
    printf("%s\n", varname[i].name);
   }
}

