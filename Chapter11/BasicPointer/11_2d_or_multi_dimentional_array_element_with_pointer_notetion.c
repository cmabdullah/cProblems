#include<stdio.h>
///print an array using pointer
int main(){
    int i, ar[5][5];
    ar[2][1] = 22;

        printf("%d\n", ar[2][1]);
        printf("%d\n", *(ar[2]+1));///pointer notation
        printf("%d\n",  *(*(ar+2)+1));
}
