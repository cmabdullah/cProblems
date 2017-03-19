# Overview
Like most imperative languages C has facilities for structured programming and allows lexical variable 'scope' and 'recursion', In C, all executable code is contained within subroutines, which are called 'functions',Pass-by-reference is simulated in C by explicitly passing pointer values.Strings are not a separate data type, but are conventionally implemented as null-terminated arrays of characters.This is a simple repository that discussed over those topics.

## Features 

* Chapter02 =>constants variables data types.
* Chapter03 =>operator and expression.
* Chapter04 =>managing input and output operations.
* Chapter05 =>decision making and branching.
* Chapter06 =>decision making and looping.
* Chapter07 =>arrays.
* Chapter08 =>character arrays and strings.
* Chapter09 =>user defined functions.
* Chapter10 =>structures and unions.
* Chapter11 =>pointers.
* Chapter12 =>file management in C.
* Chapter13 =>dynamic memory allocation and linked list.
* Chapter14 =>the preprocessor in C.

### How to use

The major topics such as arrays,character arrays,strings,functions,pionters,linked lists,dynamic memory allocations has discussed above those chapters(Chapter08,Chapter09,Chapter10,Chapter11,Chapter13,Chapter14).Those folder has given AtAGlance.c file that contains some importent statements that should know each programmer.By the way AtAGlance.c file is not executable, .c is for make sure to code highlight.


###EOF cHeck
```cpp
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *user , *instructor;
    int x , y;
    user = fopen("output.txt" , "r");
    instructor = fopen("uoutput.txt" , "r");
        while(fscanf(user, "%d" , &x) != EOF){
        fscanf(instructor, "%d" , &y);
        if (x != y){
            printf("Wrong\n");
        }
    }
    printf("accept");
    fclose(user);
    fclose(instructor);
}
