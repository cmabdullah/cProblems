#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char string1[222] = "Abdullah_Khan" ;
    char string2[222] ;
    fp = fopen("test.txt", "w");
        ///fputs
            fputs(string1, fp);
        fclose(fp);
}

