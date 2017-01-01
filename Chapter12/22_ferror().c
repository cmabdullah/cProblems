#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("error_check.txt", "w");
    getc(fp);
    if (ferror(fp))
        printf("Error found\n");
    if (ferror(fp))
        printf("Error found");
    fclose(fp);
}
///ferror is use for error check...........

