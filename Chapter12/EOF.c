#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    while (scanf("%d",&x)!= EOF){
        printf("%d\n", x);
    }

}
