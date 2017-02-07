#include<stdio.h>
int main(){
    FILE *newf;
    int x;
   // newf = fopen("abdullah.txt", "w");
    newf = fopen("abdullah.txt", "r");
    //printf("\na new file is created , its name abdullah.txt\n");
   // fprintf(newf, "Hi abdullah!!!");
  // fprintf(newf, "Hi abdullah!!!");
    fscanf(newf,"%d",&x);
    printf("%d", x);
}
