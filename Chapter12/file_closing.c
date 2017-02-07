#include<stdio.h>
int main(){
    FILE  *a , *b;

    a = fopen("text1.txt", "w");
    b = fopen("text2.txt", "w");
    fclose(a);
    fclose(b);

}
