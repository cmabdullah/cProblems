#include<stdio.h>
float ratio(int x ,int y , int z ) ;
int diff(int x, int y) ;
int main(){
    int a , b,  c;;
    scanf("%d%d%d", &a,&b,&c);
    printf("%f \n", ratio(a,b,c));
}
float ratio(int x, int y, int z){
    int b;
    b= x/(y-z);
    if (diff(y,z))
        return(b);
    else
        return(0,0);
}
int diff(int j, int k){
    if (j != k)
        return (1);
    else
        return(0);
}

