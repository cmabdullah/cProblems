#include<stdio.h>
struct student{
   char *name;
   int id;
};
//struct student funcparametere(void);

struct student funcparametere(void){
       struct student var;
       var.name = "Abdullah" ;
       return var ;
}

int main(){
    struct student cmm, *ptr;
    cmm = funcparametere();

    printf("%s\n",cmm.name);

}
