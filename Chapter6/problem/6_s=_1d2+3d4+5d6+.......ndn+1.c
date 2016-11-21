///s = 1/2 + 3/4+ 5/6 +.......n/n+1
#include<stdio.h>
int main(){
    float i, s, n;
    s = 0;
    i = 1;
    scanf("%f",&n);
    while(i<=n){
        s = s+(i/(i+1));
        i+= 2;
        printf("%f ",s);
    }
    printf("\n%f",s);


}
