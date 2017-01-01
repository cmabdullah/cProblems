#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char string1[222] = "Abdullah_Khan" ;
    char string2[222] ;
    fp = fopen("test.txt", "r");


    ///fscanf
    fp = fopen("test.txt", "r");
    fscanf(fp,"%s",string2);
    printf("%s",string2);
    fclose(fp);

}


