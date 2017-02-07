#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("error_check.txt", "w");
    getc(fp);
    if (ferror(fp))
        printf("Erroe found\n");

    clearerr(fp);

    if (ferror(fp))
        printf("Erroe found");
    fclose(fp);
}


