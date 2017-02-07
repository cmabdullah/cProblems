#include<stdio.h>
struct student{
   char *name;
   int *id;///structure member as pointer...........
} ;
int main(){
    struct student cm ;
    int i= 90;
    cm.id = &i;
    strcpy(cm.name, "abd");
    printf("%d\n",*cm.id);
    printf("%s\n",cm.name);
}
