#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char string1[222] = "Abdullah_Khan" ;
    char string2[222] ;
    fp = fopen("test1.txt", "w");
    fputs( string1,fp);
    fflush(fp);
    fclose(fp);
}

