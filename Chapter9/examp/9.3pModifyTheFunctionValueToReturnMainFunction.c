#include<stdio.h>
void printline(char ch, int len);
//value (float , folat , float);

int main(){
//    int len;
//    scanf("%d",&len);
    printline('X', 20);
}

void printline(char ch, int len){
    int i;
    for (i = 0; i< 20; i++){
        printf("%c",ch);
    }
    printf("\n");

}
