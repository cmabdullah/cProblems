#include<stdio.h>
int main(){
    char ch = 'A' ;
    int i, x = 200;
    float y = 1002.2;
    double z  = 20003.33;

    char *chPtr;
    void *ptr;

    chPtr = (char*)&ptr;

    for ( i = 0 ; i <18; i++)
        printf("Address = %x Data = %02x\n", chPtr++, (unsigned char)*chPtr);
    printf("At the beginning : ptr = %02x\n", &ptr);

    ptr = &ch;
    printf("\nAfter ptr = ch \n");
    printf("ptr = %02x   \t*ptr = %02x\n", ptr, *(char*)ptr);

    ptr = &x;
    printf("\nAfter ptr = x \n");
    printf("ptr = %02x   \t*ptr = %02x\n", ptr, *(int*)ptr);

    ptr = &y;
    printf("\nAfter ptr = y \n");
    printf("ptr = %02x   \t*ptr = %02x\n", ptr, *(char*)ptr);

    ptr = &z;
    printf("\nAfter ptr = z \n");
    printf("ptr = %02x   \t*ptr = %02x\n", ptr, *(char*)ptr);



}
