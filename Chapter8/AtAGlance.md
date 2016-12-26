7,10,15=uc,17=uc,18,
	char x = 'hi' ;///char it must print only one digit//print only last degit
	char ab[] = "Abdullah" ;//string variable as array
    	char* y = "hi" ;///string variable as pointer
/*******
no extra location,4 
first allowcate address by using "malloc(10 * sizeof(char)) ;"
#include<stdio.h>
int main(){
    char* x;
    strcpy(x, "abdullah") ;
    printf("%s", x) ;

}
****/
for 7
do
while loop 8


///array decleration char*(star) must be placed 9
#include<stdio.h>
int main(){
    char* linux_destro[5] = {"mint", "fedora", "readhat", "Ubuntu", "debian"};
    int i;
    for ( i =0 ;i<5; i++){
        printf("%s\n", linux_destro[i]);
    }
}



//return type function 11
#include<stdio.h>
int func1(char* x);
int main(){
    char x[40] ;
    char* y;
    y = func1(x);
    printf("returned string is : %s", y);
}

int func1(char* x){
     strcpy(x , "this is func1");
    return x;
}
///note due to use same variable in both function this program is working fine
/// if you use auto variable it may show some garbage value @abdulllah/// use malloc()




    printf("Hello world \n");
    printf("Hel\"lo wo\"rld \n");
    printf("Hel\\lo world \n");


//printf statement as output 14
#include<stdio.h>
int main(){
    char var1[] = "%s\n" ;
    char string_arr[] = "hello world" ;
    printf(var1, string_arr);
    printf("%s\n", string_arr);/// popular
    printf(string_arr);

}


//puts() function 14
#include<stdio.h>
int main(){
    char var1[] = "hello world" ;
    char *var2  = "hello world" ;
    puts(var1);
    puts(var2);
    puts("Abdullah");
}


//gets() function  16
#include<stdio.h>
/// most popular
int main(){
    char name[20];
    int age;
    gets(name);/// you can take any string like "C M Abdullah Khan" , when hit enter string will end.
    scanf("%d", &age);
    printf("My name is :%s\n",name);
    printf("age :%d", age);
}

//scanf() function 16
#include<stdio.h>
int main(){
    char name[20];
    int age;
    scanf("%s", name);
    scanf("%d", &age);///caution not possible to use space when input a string , you can use gets library to fix this problem.
    printf("My name is :%s\n",name);
    printf("age :%d", age);
}

//getchar() function 17
#include<stdio.h>
int main(){
    int i;
    char c, string[50] ;
    i = 0;
    printf("Input a String :");
    while((c = getchar()) != '\n'){
        string[i] = c;
        i++;
    }
    string[i] = '\0' ;
    printf("%s", string);
}

strcpy() function 19
#include<stdio.h>
#include<string.h>
int main(){
    char name1[20] = "Abdullah_Khan";///pass one string data to another string
    char name2[20];
    strcpy(name2,name1);
    printf("%s", name2);
}


//strlen() function 20
//calculate length
#include<stdio.h>
#include<string.h>
int main(){
    char string_A[] = "Hello bangladesh";
    int length;
    length = strlen(string_A);
    printf("%s\n", string_A);
    printf("The length of string is :%d", length);
}

strcat() function 21
//one string copy another string 
#include<stdio.h>
#include<string.h>
int main(){
    char string_A[] = "Hello bangladesh ";
    strcat(string_A, "How are you?");
    printf("%s", string_A);
}


//strcpy() function 22
//string concatanation
#include<stdio.h>
#include<string.h>
int main(){
    char string_A[] = "Hello abdullah";
    char string_B[] = "hi Bangladesh";
    strcpy(string_A+6, string_B+3);
    printf("%s",string_A);
}

//strcmp() function 23
//compare two string
#include<stdio.h>
#include<string.h>
int main(){
    char string_A[20];
    char string_B[20];
    int x;
    printf("Enter first string  : ");
    scanf("%s", string_A);
    printf("Enter second string : ");
    scanf("%s", string_B);
    x = strcmp(string_A,string_B);
    if (0 != x)
        printf("two string is not equal");
    else
        printf("two string is equal");
}

//strupr() convert uppercase 24
#include<stdio.h>
#include<string.h>
int main(){
    char string_A[20];
    printf("Enter first string  : ");
    scanf("%s", string_A);
    strupr(string_A);
    printf("Upper case of string :");
    printf("%s", string_A);
}


//strlwr() function 25
//convert lower case
#include<stdio.h>
#include<string.h>
int main(){
    char string_A[20];
    printf("Enter first string  : ");
    scanf("%s", string_A);
    strlwr(string_A);
    printf("Upper case of string :");
   /// printf("%s", string_A);
    puts(string_A);///same as printf()
}

//strrev() function 26
//reverse string
#include<stdio.h>
#include<string.h>
int main(){
    char string_A[20];
    printf("Enter first string  : ");
    scanf("%s", string_A);
    strrev(string_A);
    printf("Reverse string      : ");
   /// printf("%s", string_A);
    puts(string_A);///same as printf()
}


// strdup() function 27
//string duplication
#include<stdio.h>
#include<string.h>
///see program 4
///http://stackoverflow.com/questions/14947821/how-do-i-use-strdup
int main(){
    char *string_A;
  //  char *string_A = (char*) malloc(sizeof(char*)); //same job
    char *string_B;
    string_A= (char*) malloc(sizeof(char*));
   // string_B= (char*) malloc(sizeof(char*));
    printf("Enter string  : ");
    scanf("%s", string_A);
     //   printf("%s" , string_A);
    if ((string_B = strdup(string_A)))
        printf("Duplicate string is : %s" , string_B);
    else
        printf("sorry!!!");
}
