#include<stdio.h>
int main(){
    char name[20];
    int age;
    scanf("%s", name);
    scanf("%d", &age);///caution not possible to use space when input a string , you can use gets library to fix this problem.
    printf("My name is :%s\n",name);
    printf("age :%d", age);
}
