#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;

    char string1[222] = "Abdullah_Khan" ;
    char string2[222] ;
    fp = fopen("test.txt", "r");

    ///getc()
    string2[0] = getc(fp);
    putchar(string2[0]);
    fclose(fp);


}


