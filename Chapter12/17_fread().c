#include<stdio.h>
#include<stdlib.h>
struct mystructure{
    char name[30];
    char age[30];
    char status[30];
};
int main(){
    FILE *fp;
    struct mystructure str = {"abdullah", "21" , "student"};
    struct mystructure sto;
    char string1[222] = "Abdullah_Khan" ;
    char string2[222] ;
    fp = fopen("test.txt", "r");
        ///fread
        fread(&sto, sizeof(sto), 1, fp);
        printf("%s\t",sto.name);
        printf("%s\t",sto.age);
        printf("%s\t",sto.status);
        fclose(fp);
}


