#include<stdio.h>
int main(){
  //  int i;
    char string[50] ;
   int i = 0 , vow = 0 , cons = 0;
    printf("Input a String :");
    gets(string);
    while(string[i] != '\0'){
        if (string[i] == 'a' ||  string[i] == 'A' ||   string[i] == 'e' ||  string[i] == 'E' ||  string[i] == 'i' ||  string[i] == 'I' ||  string[i] == 'o' ||   string[i] == 'O' ||  string[i] == 'u' ||  string[i] == 'U'  )
        vow++;
        else
            cons++;
        i++;
    }
    printf("vowel is : %d \n", vow);
    printf("cons is : %d ", cons);
}
