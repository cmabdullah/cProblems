#include<stdio.h>
int main(){
    char var1[] = "%s\n" ;
    char string_arr[] = "hello world" ;
    printf(var1, string_arr);
    printf("%s\n", string_arr);/// popular
    printf(string_arr);

}
