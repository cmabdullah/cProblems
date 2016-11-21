///s = 1+x+x^2+x^3+.....x^n
#include<stdio.h>
int main(){
    float i,s,n , x, z;
    scanf("%f%f",&x,&n);
    s = 0;

    for (i = 0;i<=n; i++){
            z =pow (x,i);
        s = s+ z;
        printf("%f ",z);
    }
    printf("\n%f",s);


}
