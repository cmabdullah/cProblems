#include<stdio.h>
int main(){
    int i,s,n;
    scanf("%d",&n);
    i = 1;
    s = 0;
    if (i<n){
        printf("1+");
    }
    while(i<n){
        s = s+i;
        i++;
        printf("%d",i);
        if (i<n)
         printf("+");
    }
    printf("\n%d",s);
}
