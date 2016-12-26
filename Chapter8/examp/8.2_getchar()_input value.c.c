#include<stdio.h>
int main(){
    int i;
    char c, string[50] ;
    i = 0;
    printf("Input a String :");
    do {
        c = getchar() ;
        string[i] = c;
        i++;
    }
    while(c != '\n');{
            i = i-1;
    string[i] = '\0' ;
    printf("%s", string);
    }
}

