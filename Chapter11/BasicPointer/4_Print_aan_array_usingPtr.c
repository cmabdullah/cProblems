#include<stdio.h>
int main(){
    int i , *p , odd[5] = {1,3,5,7,9} ;
    p =odd ;
    for (i = 0; i<5 ; i++){
        printf("%d ",*p);
        p++;
    }


}
