#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("error_check.txt", "r");
    if (!fp)
        perror("error ");
    fclose(fp);
}
/// perror() is use for chake error condition .....
