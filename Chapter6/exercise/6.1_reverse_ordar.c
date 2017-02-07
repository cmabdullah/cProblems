/********
7651
1567
*/
#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    while(n!=0){
        printf("%d",n%10);
        n = n/10;
    }
}

