#include<stdio.h>
struct student{
   char *name;
   int id;
};
void funcparametere(struct student nn);
int main(){
    struct student cm ;
    cm.id = 10;
    strcpy(cm.name, "abd");
    printf("%d\n",cm.id);
    printf("%s\n",cm.name);
    funcparametere(cm);
}
void funcparametere(struct student nn){
    printf("\n\n%d\n", nn.id);
}
