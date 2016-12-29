#include<stdio.h>
int main(){
    int x = 20, y =  30, z;

    func1(x,y);
   // z = func1(x,y);
   // printf("%d ",z);

}
int func1(int i , int j){
    int k;
    k = i+j;
    printf("%d ", i+j);
    return (k);

}
