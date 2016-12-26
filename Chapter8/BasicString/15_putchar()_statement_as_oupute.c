#include<stdio.h>
///not working
//#include<dos.h>//not working delay function also putchar.....
int main(){
    char var1[14] = "hello_world" ;
    int i;
    for (i = 0; i != '\n'  ;i++){
        putchar(var1[i]);
    //    delay(100);
    }


    return 0;
}

