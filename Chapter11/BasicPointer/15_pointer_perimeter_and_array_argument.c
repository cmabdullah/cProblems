#include<stdio.h>
int main(){
    int x, y, z[3] = {2,4,6};
    func1(z);
}
int func1(int *z){
    int i;
    for (i = 0; i<3; i++){
        printf("z[%d] = %d \n",i, *(z+i));
    }
}

