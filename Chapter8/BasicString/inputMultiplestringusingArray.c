
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char a[1000],b[1000];
    int n,k[1000] , i;

            scanf("%s%d",a,&k[0]);
          //  scanf("%s%d",b,&k[1]);

            for(i = 0;i<2;i++){
                    scanf("%s%d",a[i],&k[0]);
            }

            printf("%s\n",a[1] );
          //  puts(a);
            puts(b);

    return 0;
}