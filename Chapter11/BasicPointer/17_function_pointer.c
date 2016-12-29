#include<stdio.h>
void func1(){
    printf("\nfunc1()");
}
int func2(){
    printf("\nfunc2()");
    return 20;
}
int func3(int x,int y){
    printf("\nfunc3()");
    return(x+y) ;
}
int main(){
    void (*pfn1)(void);
    int(*pfn2)(void);
    int(*pfn3)(int,int);
    int x;

    pfn1 = func1;
    pfn2 = func2;
    pfn3 = func3;

    (*pfn1)();
    (*pfn2)();
    x = (*pfn3)(100,100);
    printf("\n\n x = %d" ,x);
    return 0;
}
