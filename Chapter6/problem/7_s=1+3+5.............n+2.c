///s = 1+3+5.............n+2
#include<stdio.h>
int main(){
    int i, x , n , s;
    s = 0;
    scanf("%d",&n);
    for (i = 1;i<=n ; i+=2){
        s = s+i;
        printf("%d ",i);
    }
    printf("\n%d",s);
}
