#include<stdio.h>
    int main(){
    extern int x;
    printf("%d\n", x);
    func();
}
void func(){
    extern int x;
    printf("%d\n", x);
}
int x = 20;
