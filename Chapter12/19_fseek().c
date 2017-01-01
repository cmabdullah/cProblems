#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;

    char string2[222] ;
    fp = fopen("test.txt", "w");
    fprintf(fp, "Abcdefg");
    fclose(fp);
    ///fseek
    fp = fopen("test.txt", "r");
    fseek(fp,2,0);
    ///  2= 2 block after 0     ,0 = start position
    fscanf(fp,"%s", string2);
    puts(string2);
    fclose(fp);

}


