///5 print 1/2 2/3 3/4............n/n+1
#include<stdio.h>
int main(){
    float s , n , z,i;
    s = 1;
    i = 0;
    scanf("%f",&n);
    while(i<=n){
           // z = i+1;
        s = s+(i/(i+1));// be careful
        printf("%f ",s);
        i++;
    }
    printf("\n%f",s);
}
