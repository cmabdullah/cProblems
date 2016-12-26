#include<stdio.h>///page 252 ANSI
int main(){
    int  i,j,k ;
    char firstname[10] = {"C M"} ;
    char midname[10]  = {"Abdullah"} ;
    char lastname[10] = {"Khan"};
    char name[30] ;
    for (i = 0; firstname[i] != '\0'; i++)
        name[i] = firstname[i] ;

    name[i] = ' ' ;

    for (j = 0; midname[j] != '\0'; j++)
        name[i+j+1] = midname[j] ;

    name[i+j+1] = ' ' ;

    for (k = 0; lastname[k] != '\0'; k++)
        name[i+j+k+2] = lastname[k] ;
    name[i+j+k+2] = '\0'  ;
    printf("\n");
    printf("%s", name);

}
