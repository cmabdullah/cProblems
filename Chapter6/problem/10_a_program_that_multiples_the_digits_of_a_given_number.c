///a program that multiplies the digits of a given number
/*************
input 713
output 21
*/
#include<stdio.h>
int main(){
    int m,n;
    m = 1;
    scanf("%d",&n);
    while(n!=0){
        m = m * (n%10);///be careful about parenthesis .....
        n = n/10;
    }
    printf("%d",m);
}
///m! = m*(m-1)*m*(m-2)*m*(m-3)..............

//may be not not related with topic........
