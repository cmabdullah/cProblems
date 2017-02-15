#include <stdio.h>
//refff http://stackoverflow.com/questions/22906049/how-to-input-multiple-strings-followed-by-newline
int main()
{
   int n,i;
   char** str;

   scanf("%d", &n);
   str = (char**)malloc(sizeof(char*)*n);

   for(i=0; i<n; i++)
   {
      str[i] = (char*)malloc(100); // assuming the strings will not be more than 100 chars long.
      scanf("%s", &str[i]);
   }

   for(i=0; i<n; i++)
      free(str[i]);
   free(str);
}