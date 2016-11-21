///find out numbers that lie between 100 and 200 and devisible by 9 8 7
#include<stdio.h>
int main(){
    int i;
    for (i = 100; i<200;i++){
        if (i%9 ==0 && i%8==0)
            printf("%d ",i);
    }

}
