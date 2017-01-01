#include<stdio.h>
int main(){
    FILE *newf;
    newf = fopen("abdullah.text", "r");

    if (newf == NULL)
    printf("dose not exist\n");
    else
        printf("file is successfully opened\n");
}

