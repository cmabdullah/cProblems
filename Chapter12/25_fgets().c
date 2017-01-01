#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char string1[222] = "Abdullah_Khan" ;
    char string2[222] ;
    fp = fopen("test1.txt", "r");
    ///fgets
    fgets( string1, 3,fp);
    printf("%s", string1);
    fclose(fp);
}


