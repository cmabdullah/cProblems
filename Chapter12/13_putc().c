#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char string1[222] = "Abdullah_Khan" ;
    char string2[222] ;
    fp = fopen("test.txt", "w");
    ///putc()
    putc(string1[2], fp);
    fclose(fp);

}


