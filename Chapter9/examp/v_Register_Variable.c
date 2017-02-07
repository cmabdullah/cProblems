#include<stdio.h>
int func();
int main(){
    func();
}
int func(){
   register  int x;///never die
    x = 20;
    printf("%d", x) ;
}

