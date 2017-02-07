#include<stdio.h>
int main(){
    int *i,y= 100, x, *p , a[5]= {1,3,5,7,9};
    char* j ;
    p = a;
//    for (i = 0; i<5;i++){
//    printf("%d ", *p);
//    p++;
//    }

        i = &a[2];

        printf("memory address of a[2] :%x\n", i);
    printf("------------------------------------\n") ;
    x = *p++;
    printf("\n p= %x \t%d\n",p, x);

    x = *++p;
    printf("\n p= %x \t%d\n",p, x);
    printf("------------------------------------\n") ;

    j = (char*)&y ;
    printf("Memory address of y is :%x\n",&y);
    printf("assigne this address in pointer variable j\n\n\n");
    printf("Memory address of j is : %x ||  \tData : %x\n", j, *j);
    ++j;
    printf("Memory address of j is : %x ||  \tData : %x\n", j, *j);
    ++j;
    printf("Memory address of j is : %x ||  \tData : %x\n", j, *j);
    ++j;
    printf("Memory address of j is : %x ||  \tData : %x\n", j, *j);
    ++j;
    printf("Memory address of j is : %x ||  \tData : %x\n", j, *j);
    ++j;
    printf("Memory address of j is : %x ||  \tData : %x\n", j, *j);
    ++j;
    printf("Memory address of j is : %x ||  \tData : %x\n", j, *j);

}
