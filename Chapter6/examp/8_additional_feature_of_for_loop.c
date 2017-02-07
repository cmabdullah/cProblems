#include<stdio.h>
int main(){
    int i ,n , j , s , m , k;
    k =20;
    s = 0;
    for (j =19 ,  m = 2 , i = 5;     i<=10  && s <=30   ; i++, k = k-1){
            s = s+i;
        printf("%d ", i);
    }
     printf("\n%d %d %d", j , m , k);
     printf("\n%d",s);
}
