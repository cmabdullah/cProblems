#include<stdio.h>
int main(){
    int m, n ,p ,c , t , m_p;
    scanf("%d%d%d", &m,&p,&n);
    t = m+p+c;
    if (t >= 200 && m>= 60 &&  p>= 50 && c >= 40){
        printf(" Eligible");
    }
    else if(m_p>=150 && m>=60 && p>=50) {
        printf("Eligible");
    }
    else{
        printf("Not eligible");
    }
}
