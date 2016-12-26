#include<stdio.h>
#include<string.h>
int main(){
    char name1[20] = "Abdullah_Khan";///pass one string data to another string
    char name2[20];
    strcpy(name2,name1);
    printf("%s", name2);
}

