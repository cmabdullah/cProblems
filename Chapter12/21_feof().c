#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("error_check.txt", "r");
    getc(fp);
    if (feof(fp))
        printf("End of file");
    fclose(fp);
}

