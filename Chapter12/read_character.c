#include<stdio.h>
int main(){
    FILE *newf;
    char *x;
    newf = fopen("abdullah.txt", "w");
   // newf = fopen("abdullah.txt", "r");
    printf("\na new file is created , its name abdullah.txt\n");
    fprintf(newf, "Hi abdullah!!!");
    fgets(x,1,newf);
  // fprintf(newf, "Hi abdullah!!!");
    //fscanf(newf,"%d",&x);
   // printf("%d", x);
}

