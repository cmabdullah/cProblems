#include<stdio.h>
struct student{
   char name[20];
   //int i ;
};
int main(){
    int i;
    struct student varname[4] = {
                                    {"Abdullah"},
                                    {"khan"} ,
                                    {"CM Abdullah"},
                                    {"rafi"}
                                };
   for (i = 0; i<4; i++){
    printf("%s\n", varname[i].name);
   }
}

