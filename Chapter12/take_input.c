
#include<stdio.h>
int main(){
    FILE *newf;
    int x;
    newf = fopen("value.txt", "w");
    scanf("%d",&x);
    fprintf(newf, "%d", x);
    fclose(newf);

    newf = fopen("value.txt", "r");
    fscanf(newf,"%d",&x);
    printf("%d", x);
    fclose(newf);
}

///string print
/*******
#include<stdio.h>
int main(){
    FILE *newf;
    char x[20];
    newf = fopen("value.txt", "w");
    scanf("%s",&x);
    fprintf(newf, "%s", x);
    fclose(newf);

    newf = fopen("value.txt", "r");
    fscanf(newf,"%s",&x);
    printf("%s", x);
    fclose(newf);
}
**********/
