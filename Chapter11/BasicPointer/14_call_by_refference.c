#include<stdio.h>
int main(){
    int x = 20, y =  30, z;
    func1(&x,&y);
    printf("\n\nMemory address of x : %x\n", &x);
    printf("Memory address of x : %x\n\n", &y);
    printf("main function value of x = %d , y = %d\n", x,y);
}
int func1(int *i , int *j){

    printf("\n\nMemory address of i : %x\n", i);
    printf("Memory address of j : %x\n\n", j);


    printf("original value of \tx = %d , y = %d\n", *i,*j);
    *i = 100;
    printf("changed value of  \tx = %d , y = %d\n", *i,*j);
    return (0);

}

