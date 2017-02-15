#include<stdio.h>
#include <string.h>
#include <stdlib.h>

	int main(){
		char** passwords;
int i;
// allocate memory for passwords
passwords = malloc(102 * sizeof(char*));
for (i = 0; i < 1; i++) {
	passwords[i] = malloc(51 * sizeof(char));
        memset(	passwords[i], 0, 51);
    }
//scanf part
	for (i = 0;i<1;i++){
	  scanf("%s",passwords[i]);
	}
char* pass1=passwords[0];
printf("%s\n", pass1);
}
