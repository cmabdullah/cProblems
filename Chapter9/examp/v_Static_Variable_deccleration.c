#include<stdio.h>
int func();
int main(){
    func();
}
int func(){
    static int x;///never die
    x = 20;
    printf("%d", x) ;
}
