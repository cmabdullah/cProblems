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
    ///fprintf
//    fprintf(fp, "%s", string1);
//    fclose(fp);
//
//    ///fscanf
//    fp = fopen("test.txt", "r");
//    fscanf(fp,"%s",string2);
//    printf("%s",string2);
//    fclose(fp);

//    ///putc()
//    putc(string1[2], fp);
//    fclose(fp);

    ///getc()
//    string2[0] = getc(fp);
//    putchar(string2[0]);
//    fclose(fp);

        ///fputs
//            fputs(string1, fp);
//        fclose(fp);



        ///fgets
//            fgets(string2,4, fp);
//            printf("%s", string2);
//        fclose(fp);


        ///fwrite
//        fwrite(&str, sizeof(str), 1, fp);
//        fclose(fp);
/////fread
//        fread(&sto, sizeof(sto), 1, fp);
//        printf("%s",sto.age);
//        fclose(fp);
}

