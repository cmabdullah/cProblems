#include<stdio.h>
int main(){
    int i = 10 ;
    int *ptr0 = &i;

    int **ptr1 = &ptr0;
    int ***ptr2 = &ptr1;
    ptr0= &i;
    ptr1= &i;
    ptr2= &i;

    printf("column 1 address of ptr : \ncolumn 2 address of variable that pointed by ptr :  \ncolumn 3 value of pointed variable :\n\n");

    printf("%x\t%x\t%x\t\n", &ptr2, ptr2 , *ptr2);
    printf("%x\t%x\t%x\t\n", &ptr1, ptr1 , *ptr1);
    printf("%x\t%x\t%x\t\n", &ptr0, ptr0 , *ptr0);

}
