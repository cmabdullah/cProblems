#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char string1[222] = "Abdullah_Khan" ;
    char string2[222] ;
    fp = fopen("test.txt", "r");
        ///fgets
        fgets(string2,4, fp);
        printf("%s", string2);
        fclose(fp);
}


