#include<stdio.h>
#include<math.h>
int main(){

    float result , n ;
    int i = 0;
    s:
    scanf("%f", &n);
    result = sqrt(n);
    printf("%f", result);
    i++;
    if (i<5){
        goto s;
    }


}
