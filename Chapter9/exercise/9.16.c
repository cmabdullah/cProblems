/***
Write a program that invokes a function called find() to perform the following tasker.
    (a)  Receives a character array and a single character.
    (b)  Returns 1 if the specified character is found in the array ,0 otherwise.
***/
//uc
#include <stdio.h>
#include<string.h>
int main(){
    char name[10]={'L','e','s','s','o','n','s','\0'};
    char x;
    int m;
scanf("%c",&x);
       find(name, x);
 //  printf("%c",find(x));
}
 void   find(char  num[10], char k){
        int i;
      //  printf("%c", k);
    for (i = 0; i<10 ; i++){
            if (num[i] == k)
    printf("\n\n%c ", num[i]);
  }
}
