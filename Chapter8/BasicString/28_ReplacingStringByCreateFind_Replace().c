#include<stdio.h>
#include<string.h>//95% complete
char *find_replace(char *string , char *replace, char * with){
///http://stackoverflow.com/questions/14947821/how-do-i-use-strdup
    char *mainString;
  //  char *string_A = (char*) malloc(sizeof(char*)); //same job
    char *temp_String;
    int i , j , k , pos , replace_length;
    mainString= (char*) malloc(sizeof(char*));
    temp_String = (char*) malloc(sizeof(char*));
    mainString = string ;
    pos  = -1;
    replace_length = strlen(replace);
    for ( i = 0; string[i] && pos == -1 ; ++i)
        for (j =  i , k = 0; string[j] == replace[k]; j++,k++)
        if (!replace[k+1])
            pos = i;
    if (pos != -1){
        for (j = 0 ; j<pos ; j++)
            temp_String[j] = string[j] ;
        for (i = 0; with[i] ; j++)
            temp_String[j] == with[i] ;

        for (k = pos + replace_length ; string[k] ; k++,j++)
            temp_String[j] == string[k] ;

        temp_String[j] == NULL ;
        for (i = 0; string[i] == temp_String[i] ; i++) ;
    }
    return (mainString) ;
}
int main(){
    char *string , *replace , *with, *final ;
    string =  (char*) malloc(sizeof(char*));
    replace = (char*) malloc(sizeof(char*));
    with = (char*) malloc(sizeof(char*));
    final = (char*) malloc(sizeof(char*));
    printf("Enter string  : ");
    gets(string);
    printf("\n replace  : ");
    gets(replace);
    printf("\n with  : ");
    gets(with);
    final  = find_replace(string , replace , with);
        printf("\n By replaceing %s with %s , the main string becomes :\n" , replace, with);
        printf("%s", final);
}

