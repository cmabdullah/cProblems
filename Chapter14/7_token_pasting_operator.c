#include<stdio.h>
#define type i##nt
#define sum(xy) printf(#xy " = %d\n",xy)
/// ##  means marge two token
//http://www.cprogramming.com/reference/preprocessor/token-pasting-operator.html
int main(){
    int b = 19;
    type a; /// same as int a; since i##nt pastes together to "int"
    a = 20;
    printf("%d\n",a);
    sum(a+b);
}
