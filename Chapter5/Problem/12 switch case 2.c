#include<stdio.h>
int main(){
    int a , b ;
    char ops;
    scanf("%d%d",&a,&b);
    ///scanf("%c",&ops);
    ops = getche() ;
    switch (ops){
        case '+' : {
        printf("\n%d %d = %d", a, b, a+b);
        }
    }
}
