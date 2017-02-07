#include<stdio.h>
/// this program compiled on trbo C
/// for code blocks https://gcc.gnu.org/onlinedocs/gcc/Pragmas.html
void start();
void end();
#pragma startup start
#pragma exit end
void start(){
    printf("Program starts \n");
}
void end(){
    printf("Program ends\n");
}

int main(){
    printf("Main function starts");
}

