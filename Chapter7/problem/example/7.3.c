#include<stdio.h>
#include<string.h>
//review algorithm carefully
void main(){
    char a[16];
    int i,j,k,l;
    printf("Enter a binary number");
    gets(a);
    l = strlen(a);
    for (k = 0; a[k]!= '\0'; k++){
        if (a[k]!='0' && a[k]!='1'){
            printf("Incorrect binary number format");
            exit(0);
        }
    }
    for (i= l-1 ; a[i]!='1';i--)
        ;
    for (j = i-1; j>=0 ; j--){
        if (a[j]=='1')
            a[j]= '0';
        else
            a[j] = '1';
    }
    printf("2nd complement is %s",a);
}
